typedef struct _XINPUT_GAMEPAD {
  WORD  wButtons;
  BYTE  bLeftTrigger;
  BYTE  bRightTrigger;
  SHORT sThumbLX;
  SHORT sThumbLY;
  SHORT sThumbRX;
  SHORT sThumbRY;
} XINPUT_GAMEPAD, *PXINPUT_GAMEPAD;

if XINPUT_GAMEPAD_A();
// (Heark): Pulling the states.
DWORD XInputGetState(
  _In_   DWORD dwUserIndex,
  _Out_  XINPUT_STATE *pState

);
