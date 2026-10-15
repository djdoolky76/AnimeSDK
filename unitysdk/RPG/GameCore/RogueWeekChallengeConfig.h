#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueWeekChallengeConfig; }

#define RPG_GAMECORE_ROGUEWEEKCHALLENGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA45A80)
#define RPG_GAMECORE_ROGUEWEEKCHALLENGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA45A40)

namespace RPG::GameCore
{
	class RogueWeekChallengeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWEEKCHALLENGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWeekChallengeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWeekChallengeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWEEKCHALLENGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
