#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActAddMagicRogueExtraRoundConfig; }

#define RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99D070)
#define RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99D080)
#define RPG_GAMECORE_ROGUEACTADDMAGICROGUEEXTRAROUNDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99D030)

namespace RPG::GameCore
{
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
