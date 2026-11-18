#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PIDHOLGGLAC;
namespace MoleMole { class UITowerDefenseLevelPageController; }

#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13BBCC60)
#define MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS28_0__REFRESHLEVELLIST_B__0_OFFSET UNITYSDK_OFFSET(0x13BBCC70)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseLevelPageController___c__DisplayClass28_0_TypeDefinitionIndex = 45983;

	class UITowerDefenseLevelPageController___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::PIDHOLGGLAC* template_; // 0x10
		::MoleMole::UITowerDefenseLevelPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLevelList_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSELEVELPAGECONTROLLER___C__DISPLAYCLASS28_0__REFRESHLEVELLIST_B__0_OFFSET))(this);
		}
	};
}
