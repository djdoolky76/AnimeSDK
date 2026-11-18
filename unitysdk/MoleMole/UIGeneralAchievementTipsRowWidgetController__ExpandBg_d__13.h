#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralAchievementTipsRowWidgetController; }

#define MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19C279D0)
#define MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19C27B60)
#define MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19C27BC0)
#define MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19C27B70)
#define MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19C279C0)
#define MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x19C279B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralAchievementTipsRowWidgetController__ExpandBg_d__13_TypeDefinitionIndex = 53168;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
	class UIGeneralAchievementTipsRowWidgetController__ExpandBg_d__13 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralAchievementTipsRowWidgetController* __4__this; // 0x10
		::System::Boolean isFadeIn; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single length; // 0x1C
		::System::Int32 __1__state; // 0x20
		::System::Single _t_5__2; // 0x24
		::System::Single __2__current; // 0x28
		::System::Single from; // 0x2C
		::System::Single to; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALACHIEVEMENTTIPSROWWIDGETCONTROLLER__EXPANDBG_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
