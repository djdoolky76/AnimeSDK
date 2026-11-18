#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAutoBattlePVERowWidgetController_Data_EState.h"
#include "unitysdk/System/Object.h"

class HFAKENNLPND;

#define MOLEMOLE_UIAUTOBATTLEPVEROWWIDGETCONTROLLER_DATA_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x18870070)
#define MOLEMOLE_UIAUTOBATTLEPVEROWWIDGETCONTROLLER_DATA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1886FE10)
#define MOLEMOLE_UIAUTOBATTLEPVEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x188700B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVERowWidgetController_Data_TypeDefinitionIndex = 77419;

	class UIAutoBattlePVERowWidgetController_Data : public ::System::Object
	{
	public:
		::HFAKENNLPND* Template; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}

		::MoleMole::UIAutoBattlePVERowWidgetController_Data_EState get_State()
		{
			return ((::MoleMole::UIAutoBattlePVERowWidgetController_Data_EState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEROWWIDGETCONTROLLER_DATA_GET_STATE_OFFSET))(this);
		}

		static ::MoleMole::UIAutoBattlePVERowWidgetController_Data* get_Empty()
		{
			return ((::MoleMole::UIAutoBattlePVERowWidgetController_Data*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEROWWIDGETCONTROLLER_DATA_GET_EMPTY_OFFSET))();
		}
	};
}
