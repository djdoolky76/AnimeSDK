#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ReplaceTrialPlayer; }

#define RPG_GAMECORE_REPLACETRIALPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D987FA0)
#define RPG_GAMECORE_REPLACETRIALPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D987FB0)
#define RPG_GAMECORE_REPLACETRIALPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D987F60)

namespace RPG::GameCore
{
	class ReplaceTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACETRIALPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReplaceTrialPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReplaceTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACETRIALPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReplaceTrialPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReplaceTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACETRIALPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
