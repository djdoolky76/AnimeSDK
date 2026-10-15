#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPlaySummonBotAnimAction; }

#define RPG_GAMECORE_FIVEDIMPLAYSUMMONBOTANIMACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A3600)
#define RPG_GAMECORE_FIVEDIMPLAYSUMMONBOTANIMACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6A3610)
#define RPG_GAMECORE_FIVEDIMPLAYSUMMONBOTANIMACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A3590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlaySummonBotAnimAction_TypeDefinitionIndex = 18728;

	class FiveDimPlaySummonBotAnimAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYSUMMONBOTANIMACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYSUMMONBOTANIMACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPlaySummonBotAnimAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYSUMMONBOTANIMACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
