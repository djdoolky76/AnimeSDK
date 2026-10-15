#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelEnterTutorialBattle; }

#define RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5718C0)
#define RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5718D0)
#define RPG_GAMECORE_CHIMERADUELENTERTUTORIALBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D571800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEnterTutorialBattle_TypeDefinitionIndex = 21741;

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
