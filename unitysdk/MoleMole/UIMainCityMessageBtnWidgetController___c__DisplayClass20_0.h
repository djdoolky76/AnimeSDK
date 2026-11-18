#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityMessageBtnWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYMESSAGEBTNWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x173F8DF0)
#define MOLEMOLE_UIMAINCITYMESSAGEBTNWIDGETCONTROLLER___C__DISPLAYCLASS20_0__HIDEMESSAGEBTNINSTREAMINGPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x173F8E00)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMessageBtnWidgetController___c__DisplayClass20_0_TypeDefinitionIndex = 49575;

	class UIMainCityMessageBtnWidgetController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityMessageBtnWidgetController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMESSAGEBTNWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _HideMessageBtnInStreamingPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMESSAGEBTNWIDGETCONTROLLER___C__DISPLAYCLASS20_0__HIDEMESSAGEBTNINSTREAMINGPAGE_B__0_OFFSET))(this);
		}
	};
}
