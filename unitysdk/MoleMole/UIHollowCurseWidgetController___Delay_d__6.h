#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowCurseWidgetController; }

#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17C34410)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17C345A0)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17C34600)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17C345B0)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C34400)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x17C343F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCurseWidgetController___Delay_d__6_TypeDefinitionIndex = 56627;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class UIHollowCurseWidgetController___Delay_d__6 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowCurseWidgetController* __4__this; // 0x10
		::System::Int32 _i_5__2; // 0x18
		::System::Int32 __1__state; // 0x1C
		::System::Single __2__current; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___DELAY_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
