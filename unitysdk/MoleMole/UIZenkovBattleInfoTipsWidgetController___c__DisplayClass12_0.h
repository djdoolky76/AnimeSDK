#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovBattleInfoTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIZENKOVBATTLEINFOTIPSWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12FA6EC0)
#define MOLEMOLE_UIZENKOVBATTLEINFOTIPSWIDGETCONTROLLER___C__DISPLAYCLASS12_0__PLAYREMINDERANIM_B__0_OFFSET UNITYSDK_OFFSET(0x12FA6ED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBattleInfoTipsWidgetController___c__DisplayClass12_0_TypeDefinitionIndex = 40793;

	class UIZenkovBattleInfoTipsWidgetController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovBattleInfoTipsWidgetController* __4__this; // 0x10
		::System::Action* finishCB; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBATTLEINFOTIPSWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayReminderAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBATTLEINFOTIPSWIDGETCONTROLLER___C__DISPLAYCLASS12_0__PLAYREMINDERANIM_B__0_OFFSET))(this);
		}
	};
}
