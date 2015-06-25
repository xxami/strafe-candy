
#include <stdio.h>
#include <candy_machine.h>

/**
 * setup prereqs for for global keyboard/mouse hooking
 */
bool sc_setup() {
	#ifdef unix
	xcon = xcb_connect(null, null);
	if (xcb_connection_has_error(xcon)) {
		return false;
	}
	xcb_screen_t *screen = xcb_setup_roots_iterator(xcb_get_setup(xcon)).data;
	if (screen == null) {
		return false;
	}
	root = screen->root;

	return true;
	#endif
}

#ifdef unix

/**
 * start listening for events on this key
 */
void sc_hook_key(xcb_keycode_t key) {
	//xcb_grab_key_checked(xcon, true, root, )
}

/**
 * start listening for events on this button
 */
void sc_hook_button(xcb_button_t button) {

}

/**
 * stop listening for events on this key
 */
void sc_unhook_key(xcb_keycode_t key) {

}

/**
 * stop listening for events on this button
 */
void sc_unhook_button(xcb_button_t button) {

}

#endif

/**
 * unhook all keyboard/mouse hooks and shutdown
 */
void sc_exit() {
	#ifdef unix
	#endif
}
