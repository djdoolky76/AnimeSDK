#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActAddMagicRogueExtraRoundConfig; }

#define RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96F710)
#define RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96F720)
#define RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96F6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActAddMagicRogueExtraRoundConfig_TypeDefinitionIndex = 19690;

	class RogueActAddMagicRogueExtraRoundConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActAddMagicRogueExtraRoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActAddMagicRogueExtraRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActAddMagicRogueExtraRoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActAddMagicRogueExtraRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
