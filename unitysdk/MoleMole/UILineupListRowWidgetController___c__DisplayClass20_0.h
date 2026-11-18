#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OJLAOJKCHLF;
namespace MoleMole { class UILineupListRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14C8C260)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS20_0__ONCLICKRESETBTN_B__0_OFFSET UNITYSDK_OFFSET(0x14C8C270)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupListRowWidgetController___c__DisplayClass20_0_TypeDefinitionIndex = 38871;

	class UILineupListRowWidgetController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::Action* onResetConfirm; // 0x10
		::OJLAOJKCHLF* model; // 0x18
		::MoleMole::UILineupListRowWidgetController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickResetBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS20_0__ONCLICKRESETBTN_B__0_OFFSET))(this);
		}
	};
}
