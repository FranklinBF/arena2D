#ifndef GAMEPAD_BUTTON_CODES_H
#define GAMEPAD_BUTTON_CODES_H

// extending the SDL_Keycode from SDLK_DELETE(127) onwards
enum GamePadButtonCode{
	GAMEPAD_BUTTON_0=128,
	GAMEPAD_BUTTON_1=129,
	GAMEPAD_BUTTON_2=130,
	GAMEPAD_BUTTON_3=131,
	GAMEPAD_BUTTON_4=132,
	GAMEPAD_BUTTON_5=133,
	GAMEPAD_BUTTON_6=134,
	GAMEPAD_BUTTON_7=135,
	GAMEPAD_BUTTON_8=136,
	GAMEPAD_BUTTON_9=137,
	GAMEPAD_BUTTON_10=138,
	GAMEPAD_BUTTON_11=139,
	GAMEPAD_BUTTON_12=140,
	GAMEPAD_BUTTON_13=141,
	GAMEPAD_AXIS_0_NEGATIVE=142,
	GAMEPAD_AXIS_0_POSITIVE=143,
	GAMEPAD_AXIS_1_NEGATIVE=144,
	GAMEPAD_AXIS_1_POSITIVE=145,
	GAMEPAD_AXIS_2_NEGATIVE=146,
	GAMEPAD_AXIS_2_POSITIVE=147,
	GAMEPAD_AXIS_3_NEGATIVE=148,
	GAMEPAD_AXIS_3_POSITIVE=149,
	GAMEPAD_AXIS_4_NEGATIVE=150,
	GAMEPAD_AXIS_4_POSITIVE=151,
	GAMEPAD_AXIS_5_NEGATIVE=152,
	GAMEPAD_AXIS_5_POSITIVE=153,
	GAMEPAD_HAT_UP=154,
	GAMEPAD_HAT_LEFT=155,
	GAMEPAD_HAT_DOWN=156,
	GAMEPAD_HAT_RIGHT=157
};

#endif
