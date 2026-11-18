#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMCCPINHAGM;
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS95_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8C1A0)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS95_0__ONWEAPONROWEQUIPBTNCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x19C8C1B0)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS95_0__ONWEAPONROWEQUIPBTNCLICK_B__1_OFFSET UNITYSDK_OFFSET(0x19C8C350)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageController___c__DisplayClass95_0_TypeDefinitionIndex = 52239;

	class UIStrategyGuidePageController___c__DisplayClass95_0 : public ::System::Object
	{
	public:
		::DMCCPINHAGM* curWeaponData; // 0x10
		::System::String* textKey; // 0x18
		::System::Action* __9__1; // 0x20
		::DMCCPINHAGM* bestWeapon; // 0x28
		::System::UInt32 avatarId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS95_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnWeaponRowEquipBtnClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS95_0__ONWEAPONROWEQUIPBTNCLICK_B__0_OFFSET))(this);
		}

		::System::Void _OnWeaponRowEquipBtnClick_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS95_0__ONWEAPONROWEQUIPBTNCLICK_B__1_OFFSET))(this);
		}
	};
}
