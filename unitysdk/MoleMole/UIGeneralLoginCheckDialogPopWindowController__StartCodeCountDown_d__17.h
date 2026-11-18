#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALLOGINCHECKDIALOGPOPWINDOWCONTROLLER__STARTCODECOUNTDOWN_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18F0EFE0)
#define MOLEMOLE_UIGENERALLOGINCHECKDIALOGPOPWINDOWCONTROLLER__STARTCODECOUNTDOWN_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18F0F0E0)
#define MOLEMOLE_UIGENERALLOGINCHECKDIALOGPOPWINDOWCONTROLLER__STARTCODECOUNTDOWN_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18F0F140)
#define MOLEMOLE_UIGENERALLOGINCHECKDIALOGPOPWINDOWCONTROLLER__STARTCODECOUNTDOWN_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18F0F0F0)
#define MOLEMOLE_UIGENERALLOGINCHECKDIALOGPOPWINDOWCONTROLLER__STARTCODECOUNTDOWN_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F0EFD0)
#define MOLEMOLE_UIGENERALLOGINCHECKDIALOGPOPWINDOWCONTROLLER__STARTCODECOUNTDOWN_D__17__CTOR_OFFSET UNITYSDK_OFFSET(0x18F0EFC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralLoginCheckDialogPopWindowController__StartCodeCountDown_d__17_TypeDefinitionIndex = 61598;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
	class UIGeneralLoginCheckDialogPopWindowController__StartCodeCountDown_d__17 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::System::Action_1<::System::Int32>* SecondsCall; // 0x18
		::System::Boolean _isStart_5__3; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 __1__state; // 0x24
		::System::Int32 _timer_5__2; // 0x28

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINCHECKDIALOGPOPWINDOWCONTROLLER__STARTCODECOUNTDOWN_D__17__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINCHECKDIALOGPOPWINDOWCONTROLLER__STARTCODECOUNTDOWN_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINCHECKDIALOGPOPWINDOWCONTROLLER__STARTCODECOUNTDOWN_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINCHECKDIALOGPOPWINDOWCONTROLLER__STARTCODECOUNTDOWN_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINCHECKDIALOGPOPWINDOWCONTROLLER__STARTCODECOUNTDOWN_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLOGINCHECKDIALOGPOPWINDOWCONTROLLER__STARTCODECOUNTDOWN_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
