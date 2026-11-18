#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalArgueStageLocation.h"
#include "unitysdk/System/Object.h"

class KANLNIKCCKJ;
namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole::GalGame { class GalPlayArgueHealthChangeNode; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C26A70)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_0__PLAYARGUEHEALTHCHANGENODE_B__0_OFFSET UNITYSDK_OFFSET(0x19C26A80)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_0__PLAYARGUEHEALTHCHANGENODE_B__1_OFFSET UNITYSDK_OFFSET(0x19C26B10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass41_0_TypeDefinitionIndex = 44800;

	class UIGalgamePageController___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::MoleMole::GalGame::GalPlayArgueHealthChangeNode* healthChangeData; // 0x10
		::KANLNIKCCKJ* targetStageData; // 0x18
		::MoleMole::UIGalgamePageController* __4__this; // 0x20
		::MoleMole::GalGame::GalArgueStageLocation targetLocation; // 0x28
		::System::Int32 healthDelta; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayArgueHealthChangeNode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_0__PLAYARGUEHEALTHCHANGENODE_B__0_OFFSET))(this);
		}

		::System::Void _PlayArgueHealthChangeNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_0__PLAYARGUEHEALTHCHANGENODE_B__1_OFFSET))(this);
		}
	};
}
