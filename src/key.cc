#include "key.h"

using namespace v8;
using namespace node;


void sdl::key::Init(Handle<Object> exports) {
	HandleScope scope;

	Handle<Object> KEY = Object::New();
	exports->Set(String::NewSymbol("KEY"), KEY);
	// Keys are set in the order that they are listed on this page:
	//  http://wiki.libsdl.org/SDLKeycodeLookup
	KEY->Set(String::NewSymbol("BACKSPACE"), Number::New(SDLK_BACKSPACE));
	KEY->Set(String::NewSymbol("TAB"), Number::New(SDLK_BACKSPACE));
	KEY->Set(String::NewSymbol("RETURN"), Number::New(SDLK_RETURN));
	KEY->Set(String::NewSymbol("ESCAPE"), Number::New(SDLK_ESCAPE));
	KEY->Set(String::NewSymbol("SPACE"), Number::New(SDLK_SPACE));
	KEY->Set(String::NewSymbol("EXCLAIM"), Number::New(SDLK_EXCLAIM));
	KEY->Set(String::NewSymbol("QUOTEDBL"), Number::New(SDLK_QUOTEDBL));
	KEY->Set(String::NewSymbol("HASH"), Number::New(SDLK_HASH));
	KEY->Set(String::NewSymbol("DOLLAR"), Number::New(SDLK_DOLLAR));
	KEY->Set(String::NewSymbol("PERCENT"), Number::New(SDLK_PERCENT));
	KEY->Set(String::NewSymbol("APERSAND"), Number::New(SDLK_AMPERSAND));
	KEY->Set(String::NewSymbol("QUOTE"), Number::New(SDLK_QUOTE));
	KEY->Set(String::NewSymbol("LEFTPAREN"), Number::New(SDLK_LEFTPAREN));
	KEY->Set(String::NewSymbol("RIGHTPAREN"), Number::New(SDLK_RIGHTPAREN));
	KEY->Set(String::NewSymbol("ASTERISK"), Number::New(SDLK_ASTERISK));
	KEY->Set(String::NewSymbol("PLUS"), Number::New(SDLK_PLUS));
	KEY->Set(String::NewSymbol("COMMA"), Number::New(SDLK_COMMA));
	KEY->Set(String::NewSymbol("MINUS"), Number::New(SDLK_MINUS));
	KEY->Set(String::NewSymbol("PERIOD"), Number::New(SDLK_PERIOD));
	KEY->Set(String::NewSymbol("SLASH"), Number::New(SDLK_SLASH));
	// Number keys. Numbers are written out due to being unable to write:
	//   foo.0 = "bar";
	// (even if you can do: foo[0] = "bar", it just isn't as friendly)
	KEY->Set(String::NewSymbol("ZERO"), Number::New(SDLK_0));
	KEY->Set(String::NewSymbol("ONE"), Number::New(SDLK_1));
	KEY->Set(String::NewSymbol("TWO"), Number::New(SDLK_2));
	KEY->Set(String::NewSymbol("THREE"), Number::New(SDLK_3));
	KEY->Set(String::NewSymbol("FOUR"), Number::New(SDLK_4));
	KEY->Set(String::NewSymbol("FIVE"), Number::New(SDLK_5));
	KEY->Set(String::NewSymbol("SIX"), Number::New(SDLK_6));
	KEY->Set(String::NewSymbol("SEVEN"), Number::New(SDLK_7));
	KEY->Set(String::NewSymbol("EIGHT"), Number::New(SDLK_8));
	KEY->Set(String::NewSymbol("NINE"), Number::New(SDLK_9));
	KEY->Set(String::NewSymbol("COLON"), Number::New(SDLK_COLON));
	KEY->Set(String::NewSymbol("SEMICOLON"), Number::New(SDLK_SEMICOLON));
	KEY->Set(String::NewSymbol("LESS"), Number::New(SDLK_LESS));
	KEY->Set(String::NewSymbol("EQUALS"), Number::New(SDLK_EQUALS));
	KEY->Set(String::NewSymbol("GREATER"), Number::New(SDLK_GREATER));
	KEY->Set(String::NewSymbol("QUESTION"), Number::New(SDLK_QUESTION));
	KEY->Set(String::NewSymbol("AT"), Number::New(SDLK_AT));
	KEY->Set(String::NewSymbol("LEFTBRACKET"), Number::New(SDLK_LEFTBRACKET));
	KEY->Set(String::NewSymbol("BACKSLASH"), Number::New(SDLK_BACKSLASH));
	KEY->Set(String::NewSymbol("RIGHTBRACKET"), Number::New(SDLK_RIGHTBRACKET));
	KEY->Set(String::NewSymbol("CARET"), Number::New(SDLK_CARET));
	KEY->Set(String::NewSymbol("UNDERSCORE"), Number::New(SDLK_UNDERSCORE));
	KEY->Set(String::NewSymbol("BACKQUOTE"), Number::New(SDLK_BACKQUOTE));
	KEY->Set(String::NewSymbol("A"), Number::New(SDLK_a));
	KEY->Set(String::NewSymbol("B"), Number::New(SDLK_b));
	KEY->Set(String::NewSymbol("C"), Number::New(SDLK_c));
	KEY->Set(String::NewSymbol("D"), Number::New(SDLK_d));
	KEY->Set(String::NewSymbol("E"), Number::New(SDLK_e));
	KEY->Set(String::NewSymbol("F"), Number::New(SDLK_f));
	KEY->Set(String::NewSymbol("G"), Number::New(SDLK_g));
	KEY->Set(String::NewSymbol("H"), Number::New(SDLK_h));
	KEY->Set(String::NewSymbol("I"), Number::New(SDLK_i));
	KEY->Set(String::NewSymbol("J"), Number::New(SDLK_j));
	KEY->Set(String::NewSymbol("K"), Number::New(SDLK_k));
	KEY->Set(String::NewSymbol("L"), Number::New(SDLK_l));
	KEY->Set(String::NewSymbol("M"), Number::New(SDLK_m));
	KEY->Set(String::NewSymbol("N"), Number::New(SDLK_n));
	KEY->Set(String::NewSymbol("O"), Number::New(SDLK_o));
	KEY->Set(String::NewSymbol("P"), Number::New(SDLK_p));
	KEY->Set(String::NewSymbol("Q"), Number::New(SDLK_q));
	KEY->Set(String::NewSymbol("R"), Number::New(SDLK_r));
	KEY->Set(String::NewSymbol("S"), Number::New(SDLK_s));
	KEY->Set(String::NewSymbol("T"), Number::New(SDLK_t));
	KEY->Set(String::NewSymbol("U"), Number::New(SDLK_u));
	KEY->Set(String::NewSymbol("V"), Number::New(SDLK_v));
	KEY->Set(String::NewSymbol("W"), Number::New(SDLK_w));
	KEY->Set(String::NewSymbol("X"), Number::New(SDLK_x));
	KEY->Set(String::NewSymbol("Y"), Number::New(SDLK_y));
	KEY->Set(String::NewSymbol("Z"), Number::New(SDLK_z));
	KEY->Set(String::NewSymbol("DELETE"), Number::New(SDLK_DELETE));
	KEY->Set(String::NewSymbol("CAPSLOCK"), Number::New(SDLK_CAPSLOCK));
	KEY->Set(String::NewSymbol("F1"), Number::New(SDLK_F1));
	KEY->Set(String::NewSymbol("F2"), Number::New(SDLK_F2));
	KEY->Set(String::NewSymbol("F3"), Number::New(SDLK_F3));
	KEY->Set(String::NewSymbol("F4"), Number::New(SDLK_F4));
	KEY->Set(String::NewSymbol("F5"), Number::New(SDLK_F5));
	KEY->Set(String::NewSymbol("F6"), Number::New(SDLK_F6));
	KEY->Set(String::NewSymbol("F7"), Number::New(SDLK_F7));
	KEY->Set(String::NewSymbol("F8"), Number::New(SDLK_F8));
	KEY->Set(String::NewSymbol("F9"), Number::New(SDLK_F9));
	KEY->Set(String::NewSymbol("F10"), Number::New(SDLK_F10));
	KEY->Set(String::NewSymbol("F11"), Number::New(SDLK_F11));
	KEY->Set(String::NewSymbol("F12"), Number::New(SDLK_F12));
	KEY->Set(String::NewSymbol("PRINTSCREEN"), Number::New(SDLK_PRINTSCREEN));
	KEY->Set(String::NewSymbol("SCROLLLOCK"), Number::New(SDLK_SCROLLLOCK));
	KEY->Set(String::NewSymbol("PAUSE"), Number::New(SDLK_PAUSE));
	KEY->Set(String::NewSymbol("INSERT"), Number::New(SDLK_INSERT));
	KEY->Set(String::NewSymbol("HOME"), Number::New(SDLK_HOME));
	KEY->Set(String::NewSymbol("PAGEUP"), Number::New(SDLK_PAGEUP));
	KEY->Set(String::NewSymbol("END"), Number::New(SDLK_END));
	KEY->Set(String::NewSymbol("PAGEDOWN"), Number::New(SDLK_PAGEDOWN));
	KEY->Set(String::NewSymbol("RIGHT"), Number::New(SDLK_RIGHT));
	KEY->Set(String::NewSymbol("LEFT"), Number::New(SDLK_LEFT));
	KEY->Set(String::NewSymbol("DOWN"), Number::New(SDLK_DOWN));
	KEY->Set(String::NewSymbol("UP"), Number::New(SDLK_UP));
	KEY->Set(String::NewSymbol("HOME"), Number::New(SDLK_HOME));
	KEY->Set(String::NewSymbol("NUMLOCKCLEAR"), Number::New(SDLK_NUMLOCKCLEAR));
	KEY->Set(String::NewSymbol("KP_DIVIDE"), Number::New(SDLK_KP_DIVIDE));
	KEY->Set(String::NewSymbol("KP_MULTIPLY"), Number::New(SDLK_KP_MULTIPLY));
	KEY->Set(String::NewSymbol("KP_MINUS"), Number::New(SDLK_KP_MINUS));
	KEY->Set(String::NewSymbol("KP_PLUS"), Number::New(SDLK_KP_PLUS));
	KEY->Set(String::NewSymbol("KP_ENTER"), Number::New(SDLK_KP_ENTER));
	KEY->Set(String::NewSymbol("KP_ONE"), Number::New(SDLK_KP_1));
	KEY->Set(String::NewSymbol("KP_TWO"), Number::New(SDLK_KP_2));
	KEY->Set(String::NewSymbol("KP_THREE"), Number::New(SDLK_KP_3));
	KEY->Set(String::NewSymbol("KP_FOUR"), Number::New(SDLK_KP_4));
	KEY->Set(String::NewSymbol("KP_FIVE"), Number::New(SDLK_KP_5));
	KEY->Set(String::NewSymbol("KP_SIX"), Number::New(SDLK_KP_6));
	KEY->Set(String::NewSymbol("KP_SEVEN"), Number::New(SDLK_KP_7));
	KEY->Set(String::NewSymbol("KP_EIGHT"), Number::New(SDLK_KP_8));
	KEY->Set(String::NewSymbol("KP_NINE"), Number::New(SDLK_KP_9));
	KEY->Set(String::NewSymbol("KP_ZERO"), Number::New(SDLK_KP_0));
	KEY->Set(String::NewSymbol("KP_PERIOD"), Number::New(SDLK_KP_PERIOD));
	KEY->Set(String::NewSymbol("APPLICATION"), Number::New(SDLK_APPLICATION));
	KEY->Set(String::NewSymbol("POWER"), Number::New(SDLK_POWER));
	KEY->Set(String::NewSymbol("KP_EQUALS"), Number::New(SDLK_KP_EQUALS));
	KEY->Set(String::NewSymbol("F13"), Number::New(SDLK_F13));
	KEY->Set(String::NewSymbol("F14"), Number::New(SDLK_F14));
	KEY->Set(String::NewSymbol("F15"), Number::New(SDLK_F15));
	KEY->Set(String::NewSymbol("F16"), Number::New(SDLK_F16));
	KEY->Set(String::NewSymbol("F17"), Number::New(SDLK_F17));
	KEY->Set(String::NewSymbol("F18"), Number::New(SDLK_F18));
	KEY->Set(String::NewSymbol("F19"), Number::New(SDLK_F19));
	KEY->Set(String::NewSymbol("F20"), Number::New(SDLK_F20));
	KEY->Set(String::NewSymbol("F21"), Number::New(SDLK_F21));
	KEY->Set(String::NewSymbol("F22"), Number::New(SDLK_F22));
	KEY->Set(String::NewSymbol("F23"), Number::New(SDLK_F23));
	KEY->Set(String::NewSymbol("F24"), Number::New(SDLK_F24));
	KEY->Set(String::NewSymbol("EXECUTE"), Number::New(SDLK_EXECUTE));
	KEY->Set(String::NewSymbol("HELP"), Number::New(SDLK_HELP));
	KEY->Set(String::NewSymbol("MENU"), Number::New(SDLK_MENU));
	KEY->Set(String::NewSymbol("SELECT"), Number::New(SDLK_SELECT));
	KEY->Set(String::NewSymbol("STOP"), Number::New(SDLK_STOP));
	KEY->Set(String::NewSymbol("AGAIN"), Number::New(SDLK_AGAIN));
	KEY->Set(String::NewSymbol("UNDO"), Number::New(SDLK_UNDO));
	KEY->Set(String::NewSymbol("CUT"), Number::New(SDLK_CUT));
	KEY->Set(String::NewSymbol("COPY"), Number::New(SDLK_COPY));
	KEY->Set(String::NewSymbol("PASTE"), Number::New(SDLK_PASTE));
	KEY->Set(String::NewSymbol("FIND"), Number::New(SDLK_FIND));
	KEY->Set(String::NewSymbol("MUTE"), Number::New(SDLK_MUTE));
	KEY->Set(String::NewSymbol("VOLUMEUP"), Number::New(SDLK_VOLUMEUP));
	KEY->Set(String::NewSymbol("VOLUMEDOWN"), Number::New(SDLK_VOLUMEDOWN));
	KEY->Set(String::NewSymbol("KP_COMMA"), Number::New(SDLK_KP_COMMA));
	KEY->Set(String::NewSymbol("KP_EQUALSAS400"), Number::New(SDLK_KP_EQUALSAS400));
	KEY->Set(String::NewSymbol("ALTERASE"), Number::New(SDLK_ALTERASE));
	KEY->Set(String::NewSymbol("SYSREQ"), Number::New(SDLK_SYSREQ));
	KEY->Set(String::NewSymbol("CANCEL"), Number::New(SDLK_CANCEL));
	KEY->Set(String::NewSymbol("CLEAR"), Number::New(SDLK_CLEAR));
	KEY->Set(String::NewSymbol("PRIOR"), Number::New(SDLK_PRIOR));
	KEY->Set(String::NewSymbol("RETURN2"), Number::New(SDLK_RETURN2));
	KEY->Set(String::NewSymbol("SEPARATOR"), Number::New(SDLK_SEPARATOR));
	KEY->Set(String::NewSymbol("OUT"), Number::New(SDLK_OUT));
	KEY->Set(String::NewSymbol("OPER"), Number::New(SDLK_OPER));
	KEY->Set(String::NewSymbol("CLEARAGAIN"), Number::New(SDLK_CLEARAGAIN));
	KEY->Set(String::NewSymbol("CRSEL"), Number::New(SDLK_CRSEL));
	KEY->Set(String::NewSymbol("EXSEL"), Number::New(SDLK_EXSEL));
	KEY->Set(String::NewSymbol("KP_ZEROZERO"), Number::New(SDLK_KP_00));
	KEY->Set(String::NewSymbol("KP_ZEROZEROZERO"), Number::New(SDLK_KP_000));
	KEY->Set(String::NewSymbol("THOUSANDSSEPARATOR"), Number::New(SDLK_THOUSANDSSEPARATOR));
	KEY->Set(String::NewSymbol("DECIMALSEPARATOR"), Number::New(SDLK_DECIMALSEPARATOR));
	KEY->Set(String::NewSymbol("CURRENCYUNIT"), Number::New(SDLK_CURRENCYUNIT));
	KEY->Set(String::NewSymbol("CURRENCYSUBUNIT"), Number::New(SDLK_CURRENCYSUBUNIT));
	KEY->Set(String::NewSymbol("KP_LEFTPAREN"), Number::New(SDLK_KP_LEFTPAREN));
	KEY->Set(String::NewSymbol("KP_RIGHTPAREN"), Number::New(SDLK_KP_RIGHTPAREN));
	KEY->Set(String::NewSymbol("KP_LEFTBRACE"), Number::New(SDLK_KP_LEFTBRACE));
	KEY->Set(String::NewSymbol("KP_RIGHTBRACE"), Number::New(SDLK_KP_RIGHTBRACE));
	KEY->Set(String::NewSymbol("KP_TAB"), Number::New(SDLK_KP_TAB));
	KEY->Set(String::NewSymbol("KP_BACKSPACE"), Number::New(SDLK_KP_BACKSPACE));
	KEY->Set(String::NewSymbol("KP_A"), Number::New(SDLK_KP_A));
	KEY->Set(String::NewSymbol("KP_B"), Number::New(SDLK_KP_B));
	KEY->Set(String::NewSymbol("KP_C"), Number::New(SDLK_KP_C));
	KEY->Set(String::NewSymbol("KP_D"), Number::New(SDLK_KP_D));
	KEY->Set(String::NewSymbol("KP_E"), Number::New(SDLK_KP_E));
	KEY->Set(String::NewSymbol("KP_F"), Number::New(SDLK_KP_F));
	KEY->Set(String::NewSymbol("KP_XOR"), Number::New(SDLK_KP_XOR));
	KEY->Set(String::NewSymbol("KP_POWER"), Number::New(SDLK_KP_POWER));
	KEY->Set(String::NewSymbol("KP_PERCENT"), Number::New(SDLK_KP_PERCENT));
	KEY->Set(String::NewSymbol("KP_LESS"), Number::New(SDLK_KP_LESS));
	KEY->Set(String::NewSymbol("KP_GREATER"), Number::New(SDLK_KP_GREATER));
	KEY->Set(String::NewSymbol("KP_AMPERSAND"), Number::New(SDLK_KP_AMPERSAND));
	KEY->Set(String::NewSymbol("KP_DBLAMPERSAND"), Number::New(SDLK_KP_DBLAMPERSAND));
	KEY->Set(String::NewSymbol("KP_VERTICALBAR"), Number::New(SDLK_KP_VERTICALBAR));
	KEY->Set(String::NewSymbol("KP_DBLVERTICALBAR"), Number::New(SDLK_KP_DBLVERTICALBAR));
	KEY->Set(String::NewSymbol("KP_COLON"), Number::New(SDLK_KP_COLON));
	KEY->Set(String::NewSymbol("KP_HASH"), Number::New(SDLK_KP_HASH));
	KEY->Set(String::NewSymbol("KP_SPACE"), Number::New(SDLK_KP_SPACE));
	KEY->Set(String::NewSymbol("KP_AT"), Number::New(SDLK_KP_AT));
	KEY->Set(String::NewSymbol("KP_EXCLAM"), Number::New(SDLK_KP_EXCLAM));
	KEY->Set(String::NewSymbol("KP_MEMSTORE"), Number::New(SDLK_KP_MEMSTORE));
	KEY->Set(String::NewSymbol("KP_MEMRECALL"), Number::New(SDLK_KP_MEMRECALL));
	KEY->Set(String::NewSymbol("KP_MEMCLEAR"), Number::New(SDLK_KP_MEMCLEAR));
	KEY->Set(String::NewSymbol("KP_MEMADD"), Number::New(SDLK_KP_MEMADD));
	KEY->Set(String::NewSymbol("KP_MEMSUBTRACT"), Number::New(SDLK_KP_MEMSUBTRACT));
	KEY->Set(String::NewSymbol("KP_MEMMULTIPLY"), Number::New(SDLK_KP_MEMMULTIPLY));
	KEY->Set(String::NewSymbol("KP_MEMDIVIDE"), Number::New(SDLK_KP_MEMDIVIDE));
	KEY->Set(String::NewSymbol("KP_PLUSMINUS"), Number::New(SDLK_KP_PLUSMINUS));
	KEY->Set(String::NewSymbol("KP_CLEAR"), Number::New(SDLK_KP_CLEAR));
	KEY->Set(String::NewSymbol("KP_CLEARENTRY"), Number::New(SDLK_KP_CLEARENTRY));
	KEY->Set(String::NewSymbol("KP_BINARY"), Number::New(SDLK_KP_BINARY));
	KEY->Set(String::NewSymbol("KP_OCTAL"), Number::New(SDLK_KP_OCTAL));
	KEY->Set(String::NewSymbol("KP_DECIMAL"), Number::New(SDLK_KP_DECIMAL));
	KEY->Set(String::NewSymbol("KP_HEXADECIMAL"), Number::New(SDLK_KP_HEXADECIMAL));
	KEY->Set(String::NewSymbol("LCTRL"), Number::New(SDLK_LCTRL));
	KEY->Set(String::NewSymbol("LSHIFT"), Number::New(SDLK_LSHIFT));
	KEY->Set(String::NewSymbol("LALT"), Number::New(SDLK_LALT));
	KEY->Set(String::NewSymbol("LGUI"), Number::New(SDLK_LGUI));
	KEY->Set(String::NewSymbol("RCTRL"), Number::New(SDLK_RCTRL));
	KEY->Set(String::NewSymbol("RSHIFT"), Number::New(SDLK_RSHIFT));
	KEY->Set(String::NewSymbol("RALT"), Number::New(SDLK_RALT));
	KEY->Set(String::NewSymbol("RGUI"), Number::New(SDLK_RGUI));
	KEY->Set(String::NewSymbol("MODE"), Number::New(SDLK_MODE));
	KEY->Set(String::NewSymbol("AUDIONEXT"), Number::New(SDLK_AUDIONEXT));
	KEY->Set(String::NewSymbol("AUDIOPREV"), Number::New(SDLK_AUDIOPREV));
	KEY->Set(String::NewSymbol("AUDIOSTOP"), Number::New(SDLK_AUDIOSTOP));
	KEY->Set(String::NewSymbol("AUDIOPLAY"), Number::New(SDLK_AUDIOPLAY));
	KEY->Set(String::NewSymbol("AUDIOMUTE"), Number::New(SDLK_AUDIOMUTE));
	KEY->Set(String::NewSymbol("MEDIASELECT"), Number::New(SDLK_MEDIASELECT));
	KEY->Set(String::NewSymbol("WWW"), Number::New(SDLK_WWW));
	KEY->Set(String::NewSymbol("MAIL"), Number::New(SDLK_MAIL));
	KEY->Set(String::NewSymbol("CALCULATOR"), Number::New(SDLK_CALCULATOR));
	KEY->Set(String::NewSymbol("COMPUTER"), Number::New(SDLK_COMPUTER));
	KEY->Set(String::NewSymbol("AC_SEARCH"), Number::New(SDLK_AC_SEARCH));
	KEY->Set(String::NewSymbol("AC_HOME"), Number::New(SDLK_AC_HOME));
	KEY->Set(String::NewSymbol("AC_BACK"), Number::New(SDLK_AC_BACK));
	KEY->Set(String::NewSymbol("AC_FORWARD"), Number::New(SDLK_AC_FORWARD));
	KEY->Set(String::NewSymbol("AC_STOP"), Number::New(SDLK_AC_STOP));
	KEY->Set(String::NewSymbol("AC_REFRESH"), Number::New(SDLK_AC_REFRESH));
	KEY->Set(String::NewSymbol("AC_BOOKMARKS"), Number::New(SDLK_AC_BOOKMARKS));
	KEY->Set(String::NewSymbol("BRIGHTNESSDOWN"), Number::New(SDLK_BRIGHTNESSDOWN));
	KEY->Set(String::NewSymbol("BRIGHTNESSUP"), Number::New(SDLK_BRIGHTNESSUP));
	KEY->Set(String::NewSymbol("DISPLAYSWITCH"), Number::New(SDLK_DISPLAYSWITCH));
	KEY->Set(String::NewSymbol("KBDILLUMTOGGLE"), Number::New(SDLK_KBDILLUMTOGGLE));
	KEY->Set(String::NewSymbol("KBDILLUMDOWN"), Number::New(SDLK_KBDILLUMDOWN));
	KEY->Set(String::NewSymbol("KBDILLUMUP"), Number::New(SDLK_KBDILLUMUP));
	KEY->Set(String::NewSymbol("EJECT"), Number::New(SDLK_EJECT));
	KEY->Set(String::NewSymbol("SLEEP"), Number::New(SDLK_SLEEP));
}