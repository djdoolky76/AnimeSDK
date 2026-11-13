#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace InControl { class KeyboardLayoutChanged; }
namespace System { class Object; }
namespace System::Threading { class Timer; }

#define INCONTROL_KEYBOARDLAYOUTWATCHER_CHECKKEYBOARDLAYOUT_OFFSET UNITYSDK_OFFSET(0x19FAE4E0)
#define INCONTROL_KEYBOARDLAYOUTWATCHER_CTOR_OFFSET UNITYSDK_OFFSET(0x19FAE130)
#define INCONTROL_KEYBOARDLAYOUTWATCHER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19FAE540)
#define INCONTROL_KEYBOARDLAYOUTWATCHER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19FAE5C0)
#define INCONTROL_KEYBOARDLAYOUTWATCHER_GETCURRENTKEYBOARDLAYOUT_OFFSET UNITYSDK_OFFSET(0x19FAE350)
#define INCONTROL_KEYBOARDLAYOUTWATCHER_GETFOREGROUNDWINDOW_OFFSET UNITYSDK_OFFSET(0x19FAE1C0)
#define INCONTROL_KEYBOARDLAYOUTWATCHER_GETKEYBOARDLAYOUT_OFFSET UNITYSDK_OFFSET(0x19FAE2D0)
#define INCONTROL_KEYBOARDLAYOUTWATCHER_GETWINDOWTHREADPROCESSID_OFFSET UNITYSDK_OFFSET(0x19FAE240)
#define INCONTROL_KEYBOARDLAYOUTWATCHER_RELEASEUNMANAGEDRESOURCES_OFFSET UNITYSDK_OFFSET(0x19FAE520)

namespace InControl
{
	inline static constexpr unsigned int KeyboardLayoutWatcher_TypeDefinitionIndex = 41837;

	class KeyboardLayoutWatcher : public ::System::Object
	{
	public:
		::System::Threading::Timer* _timer; // 0x10
		::InControl::KeyboardLayoutChanged* KeyboardLayoutChanged; // 0x18
		::System::Int32 _currentLayout; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTWATCHER_CTOR_OFFSET))(this);
		}

		static ::System::IntPtr GetForegroundWindow()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTWATCHER_GETFOREGROUNDWINDOW_OFFSET))();
		}

		static ::System::UInt32 GetWindowThreadProcessId(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTWATCHER_GETWINDOWTHREADPROCESSID_OFFSET))(a1, a2);
		}

		static ::System::IntPtr GetKeyboardLayout(::System::UInt32 a1)
		{
			return ((::System::IntPtr(*)(::System::UInt32))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTWATCHER_GETKEYBOARDLAYOUT_OFFSET))(a1);
		}

		::System::Int32 GetCurrentKeyboardLayout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTWATCHER_GETCURRENTKEYBOARDLAYOUT_OFFSET))(this);
		}

		::System::Void CheckKeyboardLayout(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTWATCHER_CHECKKEYBOARDLAYOUT_OFFSET))(this, a1);
		}

		::System::Void ReleaseUnmanagedResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTWATCHER_RELEASEUNMANAGEDRESOURCES_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTWATCHER_DISPOSE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTWATCHER_FINALIZE_OFFSET))(this);
		}

	};
}
