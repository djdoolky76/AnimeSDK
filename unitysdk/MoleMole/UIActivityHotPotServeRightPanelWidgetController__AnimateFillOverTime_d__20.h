#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityHotPotServeRightPanelWidgetController; }

#define MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER__ANIMATEFILLOVERTIME_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19903390)
#define MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER__ANIMATEFILLOVERTIME_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19903E90)
#define MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER__ANIMATEFILLOVERTIME_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19903EF0)
#define MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER__ANIMATEFILLOVERTIME_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19903EA0)
#define MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER__ANIMATEFILLOVERTIME_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19903380)
#define MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER__ANIMATEFILLOVERTIME_D__20__CTOR_OFFSET UNITYSDK_OFFSET(0x19903370)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotServeRightPanelWidgetController__AnimateFillOverTime_d__20_TypeDefinitionIndex = 57040;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
	class UIActivityHotPotServeRightPanelWidgetController__AnimateFillOverTime_d__20 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityHotPotServeRightPanelWidgetController* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single _elapsedTime_5__4; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Single duration; // 0x28
		::System::Single _initialRightOffset_5__3; // 0x2C
		::System::Single targetRatio; // 0x30
		::System::Single _targetRightOffset_5__2; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER__ANIMATEFILLOVERTIME_D__20__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER__ANIMATEFILLOVERTIME_D__20_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER__ANIMATEFILLOVERTIME_D__20_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER__ANIMATEFILLOVERTIME_D__20_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER__ANIMATEFILLOVERTIME_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVERIGHTPANELWIDGETCONTROLLER__ANIMATEFILLOVERTIME_D__20_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
