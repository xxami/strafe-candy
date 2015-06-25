
#ifndef _candy_machine_h
#define _candy_machine_h

#include <stdbool.h>
#include <xcb/xcb.h>
#include <xcb/xcb_event.h>

/**
 * anticaaps
 */
#define null NULL

#if defined(WIN32) || defined(_WIN32)
#define windows
#elif defined(__unix__) || defined(__linux__)
#define unix
#else
#error "unsupported platform"
#endif

/**
 * global
 */

#ifdef unix
xcb_connection_t *xcon;
xcb_window_t root;
#endif
/**
 * methods
 */
bool sc_setup();

#ifdef unix
void sc_hook_key(xcb_keycode_t key);
void sc_hook_button(xcb_button_t button);

void sc_unhook_key(xcb_keycode_t key);
void sc_unhook_button(xcb_button_t button);
#endif

void sc_exit();

#endif // _candy_machine_h
