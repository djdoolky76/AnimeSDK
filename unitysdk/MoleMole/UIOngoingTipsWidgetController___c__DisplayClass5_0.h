#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIOngoingTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CLOSECHAT_B__0_OFFSET UNITYSDK_OFFSET(0x1840B410)
#define MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1840B400)

namespace MoleMole
{
	inline static constexpr unsigned int UIOngoingTipsWidgetController___c__DisplayClass5_0_TypeDefinitionIndex = 40996;

	class UIOngoingTipsWidgetController___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MoleMole::UIOngoingTipsWidgetController* __4__this; // 0x10
		::System::Action* onEnd; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _CloseChat_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIONGOINGTIPSWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CLOSECHAT_B__0_OFFSET))(this);
		}
	};
}
