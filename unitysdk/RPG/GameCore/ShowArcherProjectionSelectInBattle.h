#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateHouguType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowArcherProjectionSelectInBattle; }

#define RPG_GAMECORE_SHOWARCHERPROJECTIONSELECTINBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD6A60)
#define RPG_GAMECORE_SHOWARCHERPROJECTIONSELECTINBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD6A70)
#define RPG_GAMECORE_SHOWARCHERPROJECTIONSELECTINBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD6A30)

namespace RPG::GameCore
{
	class ShowArcherProjectionSelectInBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FateHouguType HouguType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWARCHERPROJECTIONSELECTINBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowArcherProjectionSelectInBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowArcherProjectionSelectInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWARCHERPROJECTIONSELECTINBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowArcherProjectionSelectInBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowArcherProjectionSelectInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWARCHERPROJECTIONSELECTINBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
