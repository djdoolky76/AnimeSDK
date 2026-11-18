#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1768F1C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookAntiqueItemRowWidgetController_PanelData_TypeDefinitionIndex = 83495;

	class UIHandBookAntiqueItemRowWidgetController_PanelData : public ::System::Object
	{
	public:
		::System::String* Title; // 0x10
		::System::String* TargetTxt; // 0x18
		::System::Int32 CurrentCount; // 0x20
		::System::Int32 LockTipsId; // 0x24
		::System::Int32 GotoAccessId; // 0x28
		::Share::ENotificationBadgeType RedSignType; // 0x2C
		::System::Int32 TotalCount; // 0x30
		::System::Boolean IsRate; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKANTIQUEITEMROWWIDGETCONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}
	};
}
