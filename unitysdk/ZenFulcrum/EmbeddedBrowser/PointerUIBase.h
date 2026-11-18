#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/MouseButton.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/PointerUIBase_PointerState.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Event; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserCursor; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserInputSettings; }
namespace ZenFulcrum::EmbeddedBrowser { class KeyEvents; }

#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_ADD_ONCLICK_OFFSET UNITYSDK_OFFSET(0x1FF4BAE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_ADD_ONHANDLEPOINTERS_OFFSET UNITYSDK_OFFSET(0x1FF4B9E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FF4BBE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_CALCULATEPOINTER_OFFSET UNITYSDK_OFFSET(0x1FF4C260)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_CURSORUPDATED_OFFSET UNITYSDK_OFFSET(0x1FF4C5C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_FEEDFPS_OFFSET UNITYSDK_OFFSET(0x1FF4D0A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_FEEDMOUSEPOINTER_OFFSET UNITYSDK_OFFSET(0x1FF4CC70)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_FEEDPOINTERSTATE_OFFSET UNITYSDK_OFFSET(0x1FF4BFD0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_FEEDTOUCHPOINTERS_OFFSET UNITYSDK_OFFSET(0x1FF4C7F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_FEEDVRPOINTERS_OFFSET UNITYSDK_OFFSET(0x1FF4D760)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_FORCEKEYBOARDHASFOCUS_OFFSET UNITYSDK_OFFSET(0x1FF4C5D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_GET_BROWSERCURSOR_OFFSET UNITYSDK_OFFSET(0x1FF4D830)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_GET_INPUTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1FF4D850)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_GET_KEYBOARDHASFOCUS_OFFSET UNITYSDK_OFFSET(0x1FF4D7F0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_GET_KEYEVENTS_OFFSET UNITYSDK_OFFSET(0x1FF4D810)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_GET_MOUSEBUTTONS_OFFSET UNITYSDK_OFFSET(0x1FF4D7B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_GET_MOUSEHASFOCUS_OFFSET UNITYSDK_OFFSET(0x1FF4D770)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_GET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1FF4D790)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_GET_MOUSESCROLL_OFFSET UNITYSDK_OFFSET(0x1FF4D7D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_INPUTUPDATE_OFFSET UNITYSDK_OFFSET(0x1FF4BF40)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_MOUSEISOFF_OFFSET UNITYSDK_OFFSET(0x1FF4C4C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_MOUSEISOVER_OFFSET UNITYSDK_OFFSET(0x1FF4C530)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x1FF4BFC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_ONGUI_OFFSET UNITYSDK_OFFSET(0x1FF4C570)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_ONHANDLEPOINTERS_OFFSET UNITYSDK_OFFSET(0x1FF4C610)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_REMOVE_ONCLICK_OFFSET UNITYSDK_OFFSET(0x1FF4BB60)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_REMOVE_ONHANDLEPOINTERS_OFFSET UNITYSDK_OFFSET(0x1FF4BA60)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_SET_BROWSERCURSOR_OFFSET UNITYSDK_OFFSET(0x1FF4D840)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_SET_INPUTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1FF4D860)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_SET_KEYBOARDHASFOCUS_OFFSET UNITYSDK_OFFSET(0x1FF4D800)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_SET_MOUSEBUTTONS_OFFSET UNITYSDK_OFFSET(0x1FF4D7C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_SET_MOUSEHASFOCUS_OFFSET UNITYSDK_OFFSET(0x1FF4D780)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_SET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1FF4D7A0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_SET_MOUSESCROLL_OFFSET UNITYSDK_OFFSET(0x1FF4D7E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF4D870)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int PointerUIBase_TypeDefinitionIndex = 32757;

	class PointerUIBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::ZenFulcrum::EmbeddedBrowser::KeyEvents* keyEvents; // 0x18
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x20
		::System::Boolean appFocused; // 0x28
		::System::Byte _padding0[0x7];
		::System::Action* onHandlePointers; // 0x30
		::System::Int32 currentPointerId; // 0x38
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* currentPointers; // 0x40
		::System::Single dragMovementThreshold; // 0x48
		::UnityEngine::Vector2 mouseDownPosition; // 0x4C
		::System::Boolean dragging; // 0x54
		::System::Byte _padding2[0x3];
		::System::Action* onClick; // 0x58
		::System::Int32 p_currentDown; // 0x60
		::System::Int32 p_anyDown; // 0x64
		::System::Int32 p_currentOver; // 0x68
		::System::Int32 p_anyOver; // 0x6C
		::System::Boolean mouseWasOver; // 0x70
		::System::Byte _padding3[0x3];
		::System::Int32 focusForceCount; // 0x74
		::UnityEngine::Camera* viewCamera; // 0x78
		::System::Boolean enableMouseInput; // 0x80
		::System::Boolean enableTouchInput; // 0x81
		::System::Boolean enableFPSInput; // 0x82
		::System::Boolean enableVRInput; // 0x83
		::System::Single maxDistance; // 0x84
		::System::Boolean disableMouseEmulation; // 0x88
		::System::Boolean _MouseHasFocus_k__BackingField; // 0x89
		::System::Byte _padding4[0x2];
		::UnityEngine::Vector2 _MousePosition_k__BackingField; // 0x8C
		::ZenFulcrum::EmbeddedBrowser::MouseButton _MouseButtons_k__BackingField; // 0x94
		::UnityEngine::Vector2 _MouseScroll_k__BackingField; // 0x98
		::System::Boolean _KeyboardHasFocus_k__BackingField; // 0xA0
		::System::Byte _padding5[0x7];
		::ZenFulcrum::EmbeddedBrowser::BrowserCursor* _BrowserCursor_k__BackingField; // 0xA8
		::ZenFulcrum::EmbeddedBrowser::BrowserInputSettings* _InputSettings_k__BackingField; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE__CTOR_OFFSET))(this);
		}

		::System::Void add_onHandlePointers(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_ADD_ONHANDLEPOINTERS_OFFSET))(this, value);
		}

		::System::Void remove_onHandlePointers(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_REMOVE_ONHANDLEPOINTERS_OFFSET))(this, value);
		}

		::System::Void add_onClick(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_ADD_ONCLICK_OFFSET))(this, value);
		}

		::System::Void remove_onClick(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_REMOVE_ONCLICK_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_AWAKE_OFFSET))(this);
		}

		::System::Void InputUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_INPUTUPDATE_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean focused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_ONAPPLICATIONFOCUS_OFFSET))(this, focused);
		}

		::System::Void FeedPointerState(::ZenFulcrum::EmbeddedBrowser::PointerUIBase_PointerState state)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::PointerUIBase_PointerState))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_FEEDPOINTERSTATE_OFFSET))(this, state);
		}

		::System::Void CalculatePointer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_CALCULATEPOINTER_OFFSET))(this);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_ONGUI_OFFSET))(this);
		}

		::System::Void MouseIsOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_MOUSEISOVER_OFFSET))(this);
		}

		::System::Void MouseIsOff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_MOUSEISOFF_OFFSET))(this);
		}

		::System::Void CursorUpdated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_CURSORUPDATED_OFFSET))(this);
		}

		::System::Void ForceKeyboardHasFocus(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_FORCEKEYBOARDHASFOCUS_OFFSET))(this, force);
		}

		::System::Void OnHandlePointers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_ONHANDLEPOINTERS_OFFSET))(this);
		}

		::System::Void FeedTouchPointers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_FEEDTOUCHPOINTERS_OFFSET))(this);
		}

		::System::Void FeedMousePointer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_FEEDMOUSEPOINTER_OFFSET))(this);
		}

		::System::Void FeedFPS()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_FEEDFPS_OFFSET))(this);
		}

		::System::Void FeedVRPointers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_FEEDVRPOINTERS_OFFSET))(this);
		}

		::System::Boolean get_MouseHasFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_GET_MOUSEHASFOCUS_OFFSET))(this);
		}

		::System::Void set_MouseHasFocus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_SET_MOUSEHASFOCUS_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_MousePosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_GET_MOUSEPOSITION_OFFSET))(this);
		}

		::System::Void set_MousePosition(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_SET_MOUSEPOSITION_OFFSET))(this, value);
		}

		::ZenFulcrum::EmbeddedBrowser::MouseButton get_MouseButtons()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::MouseButton(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_GET_MOUSEBUTTONS_OFFSET))(this);
		}

		::System::Void set_MouseButtons(::ZenFulcrum::EmbeddedBrowser::MouseButton value)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::MouseButton))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_SET_MOUSEBUTTONS_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_MouseScroll()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_GET_MOUSESCROLL_OFFSET))(this);
		}

		::System::Void set_MouseScroll(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_SET_MOUSESCROLL_OFFSET))(this, value);
		}

		::System::Boolean get_KeyboardHasFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_GET_KEYBOARDHASFOCUS_OFFSET))(this);
		}

		::System::Void set_KeyboardHasFocus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_SET_KEYBOARDHASFOCUS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Event*>* get_KeyEvents()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Event*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_GET_KEYEVENTS_OFFSET))(this);
		}

		::ZenFulcrum::EmbeddedBrowser::BrowserCursor* get_BrowserCursor()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::BrowserCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_GET_BROWSERCURSOR_OFFSET))(this);
		}

		::System::Void set_BrowserCursor(::ZenFulcrum::EmbeddedBrowser::BrowserCursor* value)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserCursor*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_SET_BROWSERCURSOR_OFFSET))(this, value);
		}

		::ZenFulcrum::EmbeddedBrowser::BrowserInputSettings* get_InputSettings()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::BrowserInputSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_GET_INPUTSETTINGS_OFFSET))(this);
		}

		::System::Void set_InputSettings(::ZenFulcrum::EmbeddedBrowser::BrowserInputSettings* value)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserInputSettings*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_POINTERUIBASE_SET_INPUTSETTINGS_OFFSET))(this, value);
		}
	};
}
