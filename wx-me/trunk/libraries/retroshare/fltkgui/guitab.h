// generated by Fast Light User Interface Designer (fluid) version 1.0107

#ifndef guitab_h
#define guitab_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Tabs.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
extern void file_import(Fl_Button*, void*);
#include "Fl_Tree_Browser.h"
#include "Fl_Funky_Browser.h"
extern void cert_neighbour_list_select(Fl_Funky_Browser*, void*);
extern void cert_move_to_friends(Fl_Button*, void*);
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
extern void neigh_auth_callback(Fl_Input*, void*);
#include <FL/Fl_Browser.H>
extern void cert_neigh_signers_select(Fl_Browser*, void*);
#include <FL/Fl_Output.H>
extern void cert_remove_cert(Fl_Button*, void*);
extern void cert_show_config(Fl_Button*, void*);
extern void cert_list_select(Fl_Funky_Browser*, void*);
extern void file_export(Fl_Button*, void*);
#include <FL/Fl_File_Browser.H>
extern void file_result_select(Fl_File_Browser*, void*);
extern void file_download(Fl_Button*, void*);
extern void file_recommend(Fl_Button*, void*);
extern void file_channel_broadcast(Fl_Button*, void*);
extern void do_new_search(Fl_Input*, void*);
extern void search_remove(Fl_Button*, void*);
extern void search_recommend(Fl_Button*, void*);
extern void search_result_select(Fl_Funky_Browser*, void*);
extern void do_search_button(Fl_Button*, void*);
extern void search_download(Fl_Button*, void*);
extern void search_channel_broadcast(Fl_Button*, void*);
extern void transfer_select(Fl_Funky_Browser*, void*);
extern void file_transfer_cancel(Fl_Button*, void*);
extern void file_transfer_clear(Fl_Button*, void*);
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Counter.H>
extern void file_transfer_total_rate(Fl_Counter*, void*);
extern void file_transfer_indiv_rate(Fl_Counter*, void*);
extern void msg_select(Fl_Funky_Browser*, void*);
extern void msg_dialog_show(Fl_Button*, void*);
extern void msg_dialog_reply(Fl_Button*, void*);
extern void msg_get_recommendation(Fl_Button*, void*);
extern void msg_remove(Fl_Button*, void*);
extern void channel_list_select(Fl_Funky_Browser*, void*);
extern void channel_file_list_select(Fl_Funky_Browser*, void*);
extern void channel_show_callback(Fl_Button*, void*);
extern void channel_delete_callback(Fl_Button*, void*);
extern void channel_create(Fl_Button*, void*);
#include <FL/Fl_Check_Button.H>
extern void config_add_dir(Fl_Button*, void*);
extern void config_remove_dir(Fl_Button*, void*);
extern void config_save_dir_change(Fl_Button*, void*);
#include <FL/Fl_Value_Input.H>
extern void config_server_update(Fl_Check_Button*, void*);
extern void config_server_change(Fl_Button*, void*);
extern void cert_save_config(Fl_Button*, void*);
#include <FL/Fl_Help_View.H>
#include <FL/Fl_Value_Output.H>
extern void gui_quit(Fl_Button*, void*);
extern void chat_open_callback(Fl_Button*, void*);
#include <FL/Fl_Check_Browser.H>
extern void msg_toggle_select(Fl_Button*, void*);
#include <FL/Fl_Text_Editor.H>
extern void msg_send(Fl_Button*, void*);
extern void msg_dialog_hide(Fl_Button*, void*);
extern void cert_save_n_connect(Fl_Button*, void*);
extern void cert_save_servaddr(Fl_Button*, void*);
extern void cert_connect_change(Fl_Check_Button*, void*);
extern void cert_allow_change(Fl_Check_Button*, void*);
extern void cert_listen_change(Fl_Check_Button*, void*);
extern void cert_local_change(Fl_Check_Button*, void*);
extern void cert_auto_change(Fl_Check_Button*, void*);
extern void cert_sign(Fl_Button*, void*);
extern void cert_trust_person_change(Fl_Check_Button*, void*);
extern void cert_auth_callback(Fl_Input*, void*);
extern void cert_hide_config(Fl_Button*, void*);
#include <Fl/Fl_File_Chooser.H>
extern void file_chooser_select(Fl_File_Chooser*, void*);
extern void load_passwd_callback(Fl_Input*, void*);
extern void load_existing(Fl_Button*, void*);
extern void gen_trusted_tick_callback(Fl_Check_Button*, void*);
extern void gen_load_trusted(Fl_Button*, void*);
extern void generate_certificate(Fl_Button*, void*);
extern void chatterbox_message(Fl_Input*, void*);
#include <FL/Fl_Return_Button.H>
extern void alert_okay_msg(Fl_Return_Button*, void*);
extern void alert_cancel_msg(Fl_Button*, void*);
extern void chan_createmsg_list_select(Fl_Funky_Browser*, void*);
extern void chan_createmsg_sendmsg_callback(Fl_Button*, void*);
extern void chan_createmsg_postpone_callback(Fl_Button*, void*);
extern void chan_createmsg_cancel_callback(Fl_Button*, void*);
extern void chan_createmsg_remove_callback(Fl_Button*, void*);
extern void chan_createmsg_newname_callback(Fl_Input*, void*);
#include <FL/Fl_Round_Button.H>
extern void chan_createmsg_newname_button_callback(Fl_Round_Button*, void*);
extern void chan_createmsg_title_button_callback(Fl_Round_Button*, void*);
extern void chan_msgdetails_list_select(Fl_Funky_Browser*, void*);
extern void chan_msgdetails_download_callback(Fl_Button*, void*);
extern void chan_msgdetails_subscribe_callback(Fl_Button*, void*);
extern void chan_msgdetails_close_callback(Fl_Button*, void*);

class UserInterface {
public:
  Fl_Double_Window* make_windows();
  Fl_Double_Window *main_win;
  Fl_Tabs *gui_tabs;
  Fl_Group *neighbours_tab;
  Fl_Funky_Browser *cert_neighbour_list;
  Fl_Button *neigh_add_button;
  Fl_Input *neigh_authcode;
  Fl_Browser *neigh_signers;
  Fl_Output *neigh_name;
  Fl_Output *neigh_org;
  Fl_Output *neigh_loc;
  Fl_Output *neigh_country;
  Fl_Output *neigh_trust;
  Fl_Box *neigh_auth_notice;
  Fl_Group *connect_tab;
  Fl_Funky_Browser *cert_list;
  Fl_Widget *file_results;
  Fl_Button *file_download_button;
  Fl_Button *file_recommend_button;
  Fl_Button *file_channel_button;
  Fl_Input *new_search;
  Fl_Button *recommend_button;
  Fl_Funky_Browser *srch_results;
  Fl_Button *search_button;
  Fl_Button *download_button;
  Fl_Button *search_channel_button;
  Fl_Funky_Browser *transfer_downloads;
  Fl_Button *transfer_cancel;
  Fl_Button *transfer_clear;
  Fl_Text_Display *transfer_overview;
  Fl_Counter *rate_total;
  Fl_Counter *rate_indiv;
  Fl_Funky_Browser *msg_list;
  Fl_Text_Display *msg_details;
  Fl_Group *channels;
  Fl_Funky_Browser *channel_list;
  Fl_Funky_Browser *channel_file_list;
  Fl_Output *channel_selected_name;
  Fl_Button *channel_show_button;
  Fl_Button *channel_delete_button;
  Fl_Button *channel_create_button;
  Fl_Check_Button *config_local_disc;
  Fl_Check_Button *config_remote_disc;
  Fl_Browser *config_search_dir;
  Fl_Output *config_save_dir;
  Fl_Input *config_local_addr;
  Fl_Value_Input *config_local_port;
  Fl_Input *config_server_addr;
  Fl_Value_Input *config_server_port;
  Fl_Check_Button *config_firewall;
  Fl_Check_Button *config_forward;
  Fl_Button *config_server_button;
  Fl_Group *about_help_tab;
  Fl_Help_View *help_view;
  Fl_Value_Output *onlinecounter;
  Fl_Button *chat_button;
  Fl_Double_Window *msg_dialog;
  Fl_Check_Browser *msg_online;
  Fl_Button *msg_button_select;
  Fl_Text_Editor *msg_text;
  Fl_Output *msg_recommend;
  Fl_Double_Window *cert_config;
  Fl_Input *cert_server;
  Fl_Value_Input *cert_port;
  Fl_Check_Button *cert_connect;
  Fl_Check_Button *cert_allow;
  Fl_Check_Button *cert_listen;
  Fl_Check_Button *cert_local;
  Fl_Check_Button *cert_auto;
  Fl_Output *cert_status;
  Fl_Text_Display *cert_details;
  Fl_Button *cert_sign_button;
  Fl_Check_Button *cert_trust_person;
  Fl_Input *cert_authcode;
  Fl_Output *cert_trust;
  Fl_File_Chooser *file_chooser;
  Fl_Double_Window *welcome_window;
  Fl_Output *load_name;
  Fl_Input *load_passwd;
  Fl_Button *load_button;
  Fl_Input *gen_name;
  Fl_Input *gen_org;
  Fl_Input *gen_loc;
  Fl_Input *gen_country;
  Fl_Input *gen_passwd;
  Fl_Input *gen_passwd2;
  Fl_Check_Button *gen_trusted_tick_box;
  Fl_Output *gen_trusted_peer;
  Fl_Button *gen_trusted_select_button;
  Fl_Button *gen_button;
  Fl_Double_Window *chatter_window;
  Fl_Text_Display *chatter_box;
  Fl_Input *chatter_input;
  Fl_Double_Window *alert_window;
  Fl_Return_Button *alert_okay;
  Fl_Text_Display *alert_box;
  Fl_Button *alert_cancel;
  Fl_Double_Window *channel_create_window;
  Fl_Funky_Browser *chan_createmsg_filelist;
  Fl_Button *chan_createmsg_sendmsg_button;
  Fl_Button *chan_createmsg_postpone_button;
  Fl_Button *chan_createmsg_cancel_button;
  Fl_Text_Editor *chan_createmsg_msg;
  Fl_Button *chan_createmsg_remove_button;
  Fl_Input *chan_createmsg_newname;
  Fl_Output *chan_createmsg_title;
  Fl_Round_Button *chan_createmsg_newname_button;
  Fl_Round_Button *chan_createmsg_title_button;
  Fl_Double_Window *channel_details_window;
  Fl_Funky_Browser *chan_msgdetails_filelist;
  Fl_Button *chan_msgdetails_download_button;
  Fl_Button *chan_msgdetails_subscribe_button;
  Fl_Output *chan_msgdetails_title;
  Fl_Text_Display *chan_msgdetails_msg;
  Fl_Output *chan_msgdetails_date;
  Fl_Button *chan_msgdetails_close_button;
};
#endif