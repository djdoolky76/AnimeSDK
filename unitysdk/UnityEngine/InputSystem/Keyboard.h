#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A769E3105BB55487/B90CE0530FC74669.h"
#include "unitysdk/A9D579A26574851C.h"
#include "unitysdk/FDA6F913E2FF036D.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice.h"
#include "unitysdk/A5F7BD813DE60ED2.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::InputSystem::Controls { class AnyKeyControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class KeyControl; }

#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_ADD_ONIMECOMPOSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x3F54180)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_ADD_ONTEXTINPUT_OFFSET UNITYSDK_OFFSET(0x3F54260)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_FINDKEYONCURRENTKEYBOARDLAYOUT_OFFSET UNITYSDK_OFFSET(0x3F51DA0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x3F51EC0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_AKEY_OFFSET UNITYSDK_OFFSET(0x3F543F0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ALLKEYS_OFFSET UNITYSDK_OFFSET(0x3F54400)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ALTKEY_OFFSET UNITYSDK_OFFSET(0x29D8A90)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ANYKEY_OFFSET UNITYSDK_OFFSET(0x385A040)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BACKQUOTEKEY_OFFSET UNITYSDK_OFFSET(0x3F54470)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BACKSLASHKEY_OFFSET UNITYSDK_OFFSET(0x3F54480)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BACKSPACEKEY_OFFSET UNITYSDK_OFFSET(0x3F54490)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BKEY_OFFSET UNITYSDK_OFFSET(0x3F54460)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CAPSLOCKKEY_OFFSET UNITYSDK_OFFSET(0x3F544B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CKEY_OFFSET UNITYSDK_OFFSET(0x3F544A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_COMMAKEY_OFFSET UNITYSDK_OFFSET(0x3F544C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CONTEXTMENUKEY_OFFSET UNITYSDK_OFFSET(0x3F544D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CTRLKEY_OFFSET UNITYSDK_OFFSET(0x2A4C140)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F544E0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x3F54530)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT0KEY_OFFSET UNITYSDK_OFFSET(0x3F54540)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT1KEY_OFFSET UNITYSDK_OFFSET(0x3F54550)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT2KEY_OFFSET UNITYSDK_OFFSET(0x3F54560)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT3KEY_OFFSET UNITYSDK_OFFSET(0x3F54570)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT4KEY_OFFSET UNITYSDK_OFFSET(0x3F54580)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT5KEY_OFFSET UNITYSDK_OFFSET(0x3F54590)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT6KEY_OFFSET UNITYSDK_OFFSET(0x3F545A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT7KEY_OFFSET UNITYSDK_OFFSET(0x3F545B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT8KEY_OFFSET UNITYSDK_OFFSET(0x3F545C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT9KEY_OFFSET UNITYSDK_OFFSET(0x3F545D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DKEY_OFFSET UNITYSDK_OFFSET(0x3F54520)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DOWNARROWKEY_OFFSET UNITYSDK_OFFSET(0x3F545E0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_EKEY_OFFSET UNITYSDK_OFFSET(0x3F545F0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ENDKEY_OFFSET UNITYSDK_OFFSET(0x3F54600)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ENTERKEY_OFFSET UNITYSDK_OFFSET(0x3F54610)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_EQUALSKEY_OFFSET UNITYSDK_OFFSET(0x3F54620)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ESCAPEKEY_OFFSET UNITYSDK_OFFSET(0x3F54630)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F10KEY_OFFSET UNITYSDK_OFFSET(0x3F54640)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F11KEY_OFFSET UNITYSDK_OFFSET(0x3F54650)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F12KEY_OFFSET UNITYSDK_OFFSET(0x3F54660)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F1KEY_OFFSET UNITYSDK_OFFSET(0x3F54670)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F2KEY_OFFSET UNITYSDK_OFFSET(0x3F54680)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F3KEY_OFFSET UNITYSDK_OFFSET(0x3F54690)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F4KEY_OFFSET UNITYSDK_OFFSET(0x3F546A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F5KEY_OFFSET UNITYSDK_OFFSET(0x3F546B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F6KEY_OFFSET UNITYSDK_OFFSET(0x3F546C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F7KEY_OFFSET UNITYSDK_OFFSET(0x3F546D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F8KEY_OFFSET UNITYSDK_OFFSET(0x3F546E0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F9KEY_OFFSET UNITYSDK_OFFSET(0x3F546F0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_FKEY_OFFSET UNITYSDK_OFFSET(0x3F54700)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_GKEY_OFFSET UNITYSDK_OFFSET(0x3F54710)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_HKEY_OFFSET UNITYSDK_OFFSET(0x3F54720)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_HOMEKEY_OFFSET UNITYSDK_OFFSET(0x3F54730)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_IKEY_OFFSET UNITYSDK_OFFSET(0x3F54740)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_IMESELECTED_OFFSET UNITYSDK_OFFSET(0x28D2D30)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_INSERTKEY_OFFSET UNITYSDK_OFFSET(0x3F54750)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3F54340)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_JKEY_OFFSET UNITYSDK_OFFSET(0x3F54760)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_KEYBOARDLAYOUT_OFFSET UNITYSDK_OFFSET(0x3F54780)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x385A030)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_KKEY_OFFSET UNITYSDK_OFFSET(0x3F54770)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTALTKEY_OFFSET UNITYSDK_OFFSET(0x3F547B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTAPPLEKEY_OFFSET UNITYSDK_OFFSET(0x3F547C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTARROWKEY_OFFSET UNITYSDK_OFFSET(0x3F547D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTBRACKETKEY_OFFSET UNITYSDK_OFFSET(0x3F547E0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTCOMMANDKEY_OFFSET UNITYSDK_OFFSET(0x3F547C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTCTRLKEY_OFFSET UNITYSDK_OFFSET(0x3F547F0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTMETAKEY_OFFSET UNITYSDK_OFFSET(0x3F547C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTSHIFTKEY_OFFSET UNITYSDK_OFFSET(0x3F54800)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTWINDOWSKEY_OFFSET UNITYSDK_OFFSET(0x3F547C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LKEY_OFFSET UNITYSDK_OFFSET(0x3F547A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_MINUSKEY_OFFSET UNITYSDK_OFFSET(0x3F54820)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_MKEY_OFFSET UNITYSDK_OFFSET(0x3F54810)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NKEY_OFFSET UNITYSDK_OFFSET(0x3F54830)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMLOCKKEY_OFFSET UNITYSDK_OFFSET(0x3F54840)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD0KEY_OFFSET UNITYSDK_OFFSET(0x3F54850)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD1KEY_OFFSET UNITYSDK_OFFSET(0x3F54860)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD2KEY_OFFSET UNITYSDK_OFFSET(0x3F54870)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD3KEY_OFFSET UNITYSDK_OFFSET(0x3F54880)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD4KEY_OFFSET UNITYSDK_OFFSET(0x3F54890)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD5KEY_OFFSET UNITYSDK_OFFSET(0x3F548A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD6KEY_OFFSET UNITYSDK_OFFSET(0x3F548B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD7KEY_OFFSET UNITYSDK_OFFSET(0x3F548C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD8KEY_OFFSET UNITYSDK_OFFSET(0x3F548D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD9KEY_OFFSET UNITYSDK_OFFSET(0x3F548E0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADDIVIDEKEY_OFFSET UNITYSDK_OFFSET(0x3F548F0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADENTERKEY_OFFSET UNITYSDK_OFFSET(0x3F54900)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADEQUALSKEY_OFFSET UNITYSDK_OFFSET(0x3F54910)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADMINUSKEY_OFFSET UNITYSDK_OFFSET(0x3F54920)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADMULTIPLYKEY_OFFSET UNITYSDK_OFFSET(0x3F54930)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADPERIODKEY_OFFSET UNITYSDK_OFFSET(0x3F54940)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADPLUSKEY_OFFSET UNITYSDK_OFFSET(0x3F54950)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM1KEY_OFFSET UNITYSDK_OFFSET(0x3F54970)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM2KEY_OFFSET UNITYSDK_OFFSET(0x3F54980)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM3KEY_OFFSET UNITYSDK_OFFSET(0x3F54990)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM4KEY_OFFSET UNITYSDK_OFFSET(0x3F549A0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM5KEY_OFFSET UNITYSDK_OFFSET(0x3F549B0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OKEY_OFFSET UNITYSDK_OFFSET(0x3F54960)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PAGEDOWNKEY_OFFSET UNITYSDK_OFFSET(0x3F549D0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PAGEUPKEY_OFFSET UNITYSDK_OFFSET(0x3F549E0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PAUSEKEY_OFFSET UNITYSDK_OFFSET(0x3F549F0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PERIODKEY_OFFSET UNITYSDK_OFFSET(0x3F54A00)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PKEY_OFFSET UNITYSDK_OFFSET(0x3F549C0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PRINTSCREENKEY_OFFSET UNITYSDK_OFFSET(0x3F54A10)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_QKEY_OFFSET UNITYSDK_OFFSET(0x3F54A20)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_QUOTEKEY_OFFSET UNITYSDK_OFFSET(0x3F54A30)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTALTKEY_OFFSET UNITYSDK_OFFSET(0x3F54A50)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTAPPLEKEY_OFFSET UNITYSDK_OFFSET(0x3F54A60)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTARROWKEY_OFFSET UNITYSDK_OFFSET(0x3F54A70)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTBRACKETKEY_OFFSET UNITYSDK_OFFSET(0x3F54A80)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTCOMMANDKEY_OFFSET UNITYSDK_OFFSET(0x3F54A60)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTCTRLKEY_OFFSET UNITYSDK_OFFSET(0x3F54A90)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTMETAKEY_OFFSET UNITYSDK_OFFSET(0x3F54A60)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTSHIFTKEY_OFFSET UNITYSDK_OFFSET(0x3F54AA0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTWINDOWSKEY_OFFSET UNITYSDK_OFFSET(0x3F54A60)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RKEY_OFFSET UNITYSDK_OFFSET(0x3F54A40)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SCROLLLOCKKEY_OFFSET UNITYSDK_OFFSET(0x3F54AC0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SEMICOLONKEY_OFFSET UNITYSDK_OFFSET(0x3F54AD0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SHIFTKEY_OFFSET UNITYSDK_OFFSET(0x3F54AE0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SKEY_OFFSET UNITYSDK_OFFSET(0x3F54AB0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SLASHKEY_OFFSET UNITYSDK_OFFSET(0x3F54AF0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SPACEKEY_OFFSET UNITYSDK_OFFSET(0x3F54B00)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_TABKEY_OFFSET UNITYSDK_OFFSET(0x3F54B20)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_TKEY_OFFSET UNITYSDK_OFFSET(0x3F54B10)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_UKEY_OFFSET UNITYSDK_OFFSET(0x3F54B30)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_UPARROWKEY_OFFSET UNITYSDK_OFFSET(0x3F54B40)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_VKEY_OFFSET UNITYSDK_OFFSET(0x3F54B50)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_WKEY_OFFSET UNITYSDK_OFFSET(0x3F54B60)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_XKEY_OFFSET UNITYSDK_OFFSET(0x3F54B70)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_YKEY_OFFSET UNITYSDK_OFFSET(0x3F54B80)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ZKEY_OFFSET UNITYSDK_OFFSET(0x3F54B90)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x3F53CE0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_ONIMECOMPOSITIONCHANGED_OFFSET UNITYSDK_OFFSET(0x3F53D40)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x3F53E50)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_ONTEXTINPUT_OFFSET UNITYSDK_OFFSET(0x3F53EE0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_REFRESHCONFIGURATION_OFFSET UNITYSDK_OFFSET(0x3F53F70)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_REMOVE_ONIMECOMPOSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x3F54BA0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_REMOVE_ONTEXTINPUT_OFFSET UNITYSDK_OFFSET(0x3F54BF0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SETIMECURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x3F54080)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SETIMEENABLED_OFFSET UNITYSDK_OFFSET(0x3F540F0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_ALTKEY_OFFSET UNITYSDK_OFFSET(0x29D8AA0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_ANYKEY_OFFSET UNITYSDK_OFFSET(0x3F46420)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_CTRLKEY_OFFSET UNITYSDK_OFFSET(0x2A4C1F0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F54C40)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_IMESELECTED_OFFSET UNITYSDK_OFFSET(0x2A68970)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_KEYBOARDLAYOUT_OFFSET UNITYSDK_OFFSET(0x3F54C90)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_KEYS_OFFSET UNITYSDK_OFFSET(0x385A240)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_SHIFTKEY_OFFSET UNITYSDK_OFFSET(0x3F54CB0)
#define UNITYENGINE_INPUTSYSTEM_KEYBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x3F54170)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Keyboard_TypeDefinitionIndex = 14148;

	class Keyboard : public ::UnityEngine::InputSystem::InputDevice
	{
	public:
		static ::UnityEngine::InputSystem::Keyboard** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Keyboard**)Il2CppClass::FromTypeDefinitionIndex(Keyboard_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 KeyCount = 0x6E; // 0x0
		::UnityEngine::InputSystem::Controls::AnyKeyControl* _anyKey_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::ButtonControl* _shiftKey_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::ButtonControl* _ctrlKey_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _altKey_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _imeSelected_k__BackingField; // 0x1B0
		::FDA6F913E2FF036D<::System::Action_1<::System::Char>*> m_TextInputListeners; // 0x1B8
		::System::Byte _padding0[0x10];
		::System::String* m_KeyboardLayoutName; // 0x1D0
		::Il2CppArray<::UnityEngine::InputSystem::Controls::KeyControl*>* m_Keys; // 0x1D8
		::FDA6F913E2FF036D<::System::Action_1<::A9D579A26574851C>*> m_ImeCompositionListeners; // 0x1E0

		::UnityEngine::InputSystem::Controls::KeyControl* get_minusKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_MINUSKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_altKey()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ALTKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad0Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD0KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit6Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT6KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_endKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ENDKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_jKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_JKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_ctrlKey()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CTRLKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightWindowsKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTWINDOWSKEY_OFFSET))(this);
		}

		::System::Void add_onIMECompositionChange(::System::Action_1<::A9D579A26574851C>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::A9D579A26574851C>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_ADD_ONIMECOMPOSITIONCHANGE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::String* get_keyboardLayout()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_KEYBOARDLAYOUT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_backquoteKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BACKQUOTEKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_backslashKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BACKSLASHKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad3Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD3KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f5Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F5KEY_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f6Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F6KEY_OFFSET))(this);
		}

		::System::Void set_anyKey(::UnityEngine::InputSystem::Controls::AnyKeyControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AnyKeyControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_ANYKEY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_iKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_IKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_homeKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_HOMEKEY_OFFSET))(this);
		}

		::System::Void OnTextInput(::System::Char F1971BC3E14481B3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_ONTEXTINPUT_OFFSET))(this, F1971BC3E14481B3);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_kKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_KKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_commaKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_COMMAKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_scrollLockKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SCROLLLOCKKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftAppleKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTAPPLEKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_periodKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PERIODKEY_OFFSET))(this);
		}

		::System::Void set_shiftKey(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_SHIFTKEY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit0Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT0KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_insertKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_INSERTKEY_OFFSET))(this);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_MAKECURRENT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_pageDownKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PAGEDOWNKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_quoteKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_QUOTEKEY_OFFSET))(this);
		}

		::A5F7BD813DE60ED2<::UnityEngine::InputSystem::Controls::KeyControl*> get_allKeys()
		{
			return ((::A5F7BD813DE60ED2<::UnityEngine::InputSystem::Controls::KeyControl*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ALLKEYS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit9Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT9KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_contextMenuKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CONTEXTMENUKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_qKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_QKEY_OFFSET))(this);
		}

		::System::Void SetIMECursorPosition(::UnityEngine::Vector2 EB211B01816ACA79)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SETIMECURSORPOSITION_OFFSET))(this, EB211B01816ACA79);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_nKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_hKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_HKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_fKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_FKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit5Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT5KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_uKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_UKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_vKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_VKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadPeriodKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADPERIODKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftBracketKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTBRACKETKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadMinusKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADMINUSKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightBracketKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTBRACKETKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f10Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F10KEY_OFFSET))(this);
		}

		::System::Void set_keys(::Il2CppArray<::UnityEngine::InputSystem::Controls::KeyControl*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::InputSystem::Controls::KeyControl*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_KEYS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadMultiplyKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADMULTIPLYKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_oem2Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM2KEY_OFFSET))(this);
		}

		::System::Void SetIMEEnabled(::System::Boolean FBF3AC291087F95C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SETIMEENABLED_OFFSET))(this, FBF3AC291087F95C);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_ONREMOVED_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::Keyboard* get_current()
		{
			return ((::UnityEngine::InputSystem::Keyboard*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CURRENT_OFFSET))();
		}

		::System::Void remove_onIMECompositionChange(::System::Action_1<::A9D579A26574851C>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::A9D579A26574851C>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_REMOVE_ONIMECOMPOSITIONCHANGE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad7Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD7KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_backspaceKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BACKSPACEKEY_OFFSET))(this);
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::Keyboard* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Keyboard*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_CURRENT_OFFSET))(E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftShiftKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTSHIFTKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad2Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD2KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftCommandKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTCOMMANDKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_zKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ZKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightAppleKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTAPPLEKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_slashKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SLASHKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad8Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD8KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit2Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT2KEY_OFFSET))(this);
		}

		::System::Void add_onTextInput(::System::Action_1<::System::Char>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Char>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_ADD_ONTEXTINPUT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void RefreshConfiguration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_REFRESHCONFIGURATION_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_bKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_BKEY_OFFSET))(this);
		}

		::System::Void set_imeSelected(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_IMESELECTED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadEqualsKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADEQUALSKEY_OFFSET))(this);
		}

		::System::Void OnIMECompositionChanged(::A9D579A26574851C E9D3687BDACAB7AF)
		{
			return ((::System::Void(*)(::PVOID, ::A9D579A26574851C))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_ONIMECOMPOSITIONCHANGED_OFFSET))(this, E9D3687BDACAB7AF);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightAltKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTALTKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_deleteKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DELETEKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AnyKeyControl* get_anyKey()
		{
			return ((::UnityEngine::InputSystem::Controls::AnyKeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ANYKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_pageUpKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PAGEUPKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_spaceKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SPACEKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_oKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_shiftKey()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SHIFTKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* FindKeyOnCurrentKeyboardLayout(::System::String* BF35D9381545B37C)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_FINDKEYONCURRENTKEYBOARDLAYOUT_OFFSET))(this, BF35D9381545B37C);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_upArrowKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_UPARROWKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad4Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD4KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_equalsKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_EQUALSKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_Item(::A769E3105BB55487::B90CE0530FC74669 A5C299C395D3E1B2)
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID, ::A769E3105BB55487::B90CE0530FC74669))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ITEM_OFFSET))(this, A5C299C395D3E1B2);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightCtrlKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTCTRLKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_imeSelected()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_IMESELECTED_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f2Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F2KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f1Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F1KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_gKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_GKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_oem3Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM3KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_capsLockKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CAPSLOCKKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_sKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_yKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_YKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_pauseKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PAUSEKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_pKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PKEY_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_FINISHSETUP_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f7Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F7KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftArrowKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTARROWKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightCommandKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTCOMMANDKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_tabKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_TABKEY_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::InputSystem::Controls::KeyControl*>* get_keys()
		{
			return ((::Il2CppArray<::UnityEngine::InputSystem::Controls::KeyControl*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_KEYS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_oem4Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM4KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f3Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F3KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightShiftKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTSHIFTKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad9Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD9KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_aKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_AKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f9Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F9KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftWindowsKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTWINDOWSKEY_OFFSET))(this);
		}

		::System::Void set_keyboardLayout(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_KEYBOARDLAYOUT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftCtrlKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTCTRLKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f12Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F12KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftAltKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTALTKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_eKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_EKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_xKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_XKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f4Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F4KEY_OFFSET))(this);
		}

		::System::Void set_ctrlKey(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_CTRLKEY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_escapeKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ESCAPEKEY_OFFSET))(this);
		}

		::System::Void remove_onTextInput(::System::Action_1<::System::Char>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Char>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_REMOVE_ONTEXTINPUT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_lKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_mKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_MKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_cKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_CKEY_OFFSET))(this);
		}

		::System::Void set_altKey(::UnityEngine::InputSystem::Controls::ButtonControl* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_SET_ALTKEY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit7Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT7KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadPlusKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADPLUSKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_dKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightArrowKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTARROWKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadEnterKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADENTERKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad6Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD6KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numLockKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMLOCKKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f11Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F11KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_oem1Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM1KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_downArrowKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DOWNARROWKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_tKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_TKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_oem5Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_OEM5KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_rightMetaKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_RIGHTMETAKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit3Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT3KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad5Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD5KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpadDivideKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPADDIVIDEKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_wKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_WKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit8Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT8KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_f8Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_F8KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_printScreenKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_PRINTSCREENKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit1Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT1KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_leftMetaKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_LEFTMETAKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_semicolonKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_SEMICOLONKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_numpad1Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_NUMPAD1KEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_enterKey()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_ENTERKEY_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::KeyControl* get_digit4Key()
		{
			return ((::UnityEngine::InputSystem::Controls::KeyControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_KEYBOARD_GET_DIGIT4KEY_OFFSET))(this);
		}
	};
}
