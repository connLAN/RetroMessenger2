/* Generated automatically by mkerrors */
/* Do not edit!  See mkerrors for copyright notice. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdio.h>
#include <assert.h>
#include <errno.h>

#undef _ASSUAN_IN_LIBASSUAN /* undef to get all error codes. */
#include "assuan.h"

/* If true the modern gpg-error style error codes are used in the
   API. */
static unsigned int err_source;

/* Enable gpg-error style error codes.  ERRSOURCE is one of gpg-error
   sources.  Note, that this function is not thread-safe and should be
   used right at startup. Switching back to the old style mode is not
   supported. */
void
assuan_set_assuan_err_source (int errsource)
{
  errsource &= 0xff;
  err_source = errsource? errsource : 31 /*GPG_ERR_SOURCE_ANY*/;
}


/* Helper to map old style Assuan error codes to gpg-error codes.
   This is used internally to keep an compatible ABI. */
assuan_error_t
_assuan_error (int oldcode)
{
  unsigned int n;

  if (!err_source)
    {
      if (oldcode == -1)
        return -1;
      else
        return (oldcode & 0x00ffffff); /* Make sure that the gpg-error
                                          source part is cleared. */
    }

  switch (oldcode)
    {
    case ASSUAN_General_Error:           n = 257; break;
    case ASSUAN_Accept_Failed:           n = 258; break;
    case ASSUAN_Connect_Failed:          n = 259; break;
    case ASSUAN_Invalid_Response:        n = 260; break;
    case ASSUAN_Invalid_Value:           n = 261; break;
    case ASSUAN_Line_Not_Terminated:     n = 262; break;
    case ASSUAN_Line_Too_Long:           n = 263; break;
    case ASSUAN_Nested_Commands:         n = 264; break;
    case ASSUAN_No_Data_Callback:        n = 265; break;
    case ASSUAN_No_Inquire_Callback:     n = 266; break;
    case ASSUAN_Not_A_Server:            n = 267; break;
    case ASSUAN_Not_Implemented:         n =  69; break;
    case ASSUAN_Parameter_Conflict:      n = 280; break;
    case ASSUAN_Problem_Starting_Server: n = 269; break;
    case ASSUAN_Server_Fault:            n =  80; break;
    case ASSUAN_Syntax_Error:            n = 276; break;
    case ASSUAN_Too_Much_Data:           n = 273; break;
    case ASSUAN_Unexpected_Command:      n = 274; break;
    case ASSUAN_Unknown_Command:         n = 275; break;
    case ASSUAN_Canceled:                n = 277; break;
    case ASSUAN_No_Secret_Key:           n =  17; break;
    case ASSUAN_Not_Confirmed:           n = 114; break;

    case ASSUAN_Read_Error:
      switch (errno)
        {
        case 0: n = 16381; /*GPG_ERR_MISSING_ERRNO*/  break;
        case EAGAIN:
          if (errno > 0 && errno < 4096)
            {
              n = (EAGAIN | (1 << 15)); 
              break;
            }
        default: n = 270;  /*GPG_ERR_ASS_READ_ERROR*/ break;
        }
      break;

    case ASSUAN_Write_Error:
      switch (errno)
        {
        case 0: n = 16381; /*GPG_ERR_MISSING_ERRNO*/  break;
        case EAGAIN:
          if (errno > 0 && errno < 4096)
            {
              n = (EAGAIN | (1 << 15)); 
              break;
            }
        default: n = 271;  /*GPG_ERR_ASS_WRITE_ERROR*/ break;
        }
      break;
      
    case ASSUAN_Out_Of_Core:
      switch (errno)
        {
        case 0:  /* Should not happen but a user might have provided
                    an incomplete implemented malloc function.  Give
                    him a chance to correct this fault but make sure
                    an error is indeed returned. */
          n = 16381; /*GPG_ERR_MISSING_ERRNO*/
          break;
        case ENOMEM:
          if (errno > 0 && errno < 4096)
            {
              n = (ENOMEM | (1 << 15));
              break;
            }
        default:  
          n = 16382; /*GPG_ERR_UNKNOWN_ERRNO*/
          break;
        }
      break;

    case -1: n = 16383 /*GPG_ERR_EOF*/; break;

    default:
      n = 257; 
      break;
    }

  return ((err_source << 24) | (n & 0x00ffffff));

}


/**
 * assuan_strerror:
 * @err:  Error code 
 * 
 * This function returns a textual representaion of the given
 * errorcode. If this is an unknown value, a string with the value
 * is returned (Beware: it is hold in a static buffer).
 * 
 * Return value: String with the error description.
 **/
const char *
assuan_strerror (assuan_error_t err)
{
  const char *s;
  static char buf[50];

  switch (err)
    {
    case ASSUAN_No_Error: s="no error"; break;
    case ASSUAN_General_Error: s="general error"; break;
    case ASSUAN_Out_Of_Core: s="out of core"; break;
    case ASSUAN_Invalid_Value: s="invalid value"; break;
    case ASSUAN_Timeout: s="timeout"; break;
    case ASSUAN_Read_Error: s="read error"; break;
    case ASSUAN_Write_Error: s="write error"; break;
    case ASSUAN_Problem_Starting_Server: s="problem starting server"; break;
    case ASSUAN_Not_A_Server: s="not a server"; break;
    case ASSUAN_Not_A_Client: s="not a client"; break;
    case ASSUAN_Nested_Commands: s="nested commands"; break;
    case ASSUAN_Invalid_Response: s="invalid response"; break;
    case ASSUAN_No_Data_Callback: s="no data callback"; break;
    case ASSUAN_No_Inquire_Callback: s="no inquire callback"; break;
    case ASSUAN_Connect_Failed: s="connect failed"; break;
    case ASSUAN_Accept_Failed: s="accept failed"; break;
    case ASSUAN_Not_Implemented: s="not implemented"; break;
    case ASSUAN_Server_Fault: s="server fault"; break;
    case ASSUAN_Invalid_Command: s="invalid command"; break;
    case ASSUAN_Unknown_Command: s="unknown command"; break;
    case ASSUAN_Syntax_Error: s="syntax error"; break;
    case ASSUAN_Parameter_Error: s="parameter error"; break;
    case ASSUAN_Parameter_Conflict: s="parameter conflict"; break;
    case ASSUAN_Line_Too_Long: s="line too long"; break;
    case ASSUAN_Line_Not_Terminated: s="line not terminated"; break;
    case ASSUAN_No_Input: s="no input"; break;
    case ASSUAN_No_Output: s="no output"; break;
    case ASSUAN_Canceled: s="canceled"; break;
    case ASSUAN_Unsupported_Algorithm: s="unsupported algorithm"; break;
    case ASSUAN_Server_Resource_Problem: s="server resource problem"; break;
    case ASSUAN_Server_IO_Error: s="server io error"; break;
    case ASSUAN_Server_Bug: s="server bug"; break;
    case ASSUAN_No_Data_Available: s="no data available"; break;
    case ASSUAN_Invalid_Data: s="invalid data"; break;
    case ASSUAN_Unexpected_Command: s="unexpected command"; break;
    case ASSUAN_Too_Much_Data: s="too much data"; break;
    case ASSUAN_Inquire_Unknown: s="inquire unknown"; break;
    case ASSUAN_Inquire_Error: s="inquire error"; break;
    case ASSUAN_Invalid_Option: s="invalid option"; break;
    case ASSUAN_Invalid_Index: s="invalid index"; break;
    case ASSUAN_Unexpected_Status: s="unexpected status"; break;
    case ASSUAN_Unexpected_Data: s="unexpected data"; break;
    case ASSUAN_Invalid_Status: s="invalid status"; break;
    case ASSUAN_Locale_Problem: s="locale problem"; break;
    case ASSUAN_Not_Confirmed: s="not confirmed"; break;
    case ASSUAN_Bad_Certificate: s="bad certificate"; break;
    case ASSUAN_Bad_Certificate_Chain: s="bad certificate chain"; break;
    case ASSUAN_Missing_Certificate: s="missing certificate"; break;
    case ASSUAN_Bad_Signature: s="bad signature"; break;
    case ASSUAN_No_Agent: s="no agent"; break;
    case ASSUAN_Agent_Error: s="agent error"; break;
    case ASSUAN_No_Public_Key: s="no public key"; break;
    case ASSUAN_No_Secret_Key: s="no secret key"; break;
    case ASSUAN_Invalid_Name: s="invalid name"; break;
    case ASSUAN_Cert_Revoked: s="cert revoked"; break;
    case ASSUAN_No_CRL_For_Cert: s="no crl for cert"; break;
    case ASSUAN_CRL_Too_Old: s="crl too old"; break;
    case ASSUAN_Not_Trusted: s="not trusted"; break;
    case ASSUAN_Card_Error: s="card error"; break;
    case ASSUAN_Invalid_Card: s="invalid card"; break;
    case ASSUAN_No_PKCS15_App: s="no pkcs15 app"; break;
    case ASSUAN_Card_Not_Present: s="card not present"; break;
    case ASSUAN_Invalid_Id: s="invalid id"; break;
    case ASSUAN_USER_ERROR_FIRST: s="user error first"; break;
    case ASSUAN_USER_ERROR_LAST: s="user error last"; break;
  case -1: s = "EOF (-1)"; break;
    default: 
      {
        unsigned int source, code, n;

        source = ((err >> 24) & 0xff);
        code = (err & 0x00ffffff);
        if (source) 
          {
            /* Assume this is an libgpg-error and try to map the codes
               back. */
            switch (code)
              {
              case 257: n = ASSUAN_General_Error          ; break;
              case 258: n = ASSUAN_Accept_Failed          ; break;
              case 259: n = ASSUAN_Connect_Failed         ; break;
              case 260: n = ASSUAN_Invalid_Response       ; break;
              case 261: n = ASSUAN_Invalid_Value          ; break;
              case 262: n = ASSUAN_Line_Not_Terminated    ; break;
              case 263: n = ASSUAN_Line_Too_Long          ; break;
              case 264: n = ASSUAN_Nested_Commands        ; break;
              case 265: n = ASSUAN_No_Data_Callback       ; break;
              case 266: n = ASSUAN_No_Inquire_Callback    ; break;
              case 267: n = ASSUAN_Not_A_Server           ; break;
              case  69: n = ASSUAN_Not_Implemented        ; break;
              case 280: n = ASSUAN_Parameter_Conflict     ; break;
              case 269: n = ASSUAN_Problem_Starting_Server; break;
              case 270: n = ASSUAN_Read_Error             ; break;
              case 271: n = ASSUAN_Write_Error            ; break;
              case  80: n = ASSUAN_Server_Fault           ; break;
              case 276: n = ASSUAN_Syntax_Error           ; break;
              case 273: n = ASSUAN_Too_Much_Data          ; break;
              case 274: n = ASSUAN_Unexpected_Command     ; break;
              case 275: n = ASSUAN_Unknown_Command        ; break;
              case 277: n = ASSUAN_Canceled               ; break;
              case 114: n = ASSUAN_Not_Confirmed          ; break;
              case ((1<<15)|86): n = ASSUAN_Out_Of_Core   ; break;
              default:  n = 0; break;
              }
            if (n)
              s = assuan_strerror (n);
            else
              {
                sprintf (buf, "ec=%u.%u", source, code ); 
                s=buf;
              }
          }
        else
          {
            sprintf (buf, "ec=%d", err ); 
            s=buf;
          }
      }
      break;
    }

  return s;
}

