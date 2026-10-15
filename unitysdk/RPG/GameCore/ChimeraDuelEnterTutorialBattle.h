#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelEnterTutorialBattle; }

#define RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59F310)
#define RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59F320)
#define RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59F250)

namespace RPG::GameCore
{
	class ChimeraDuelEnterTutorialBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEnterTutorialBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEnterTutorialBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEnterTutorialBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEnterTutorialBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
