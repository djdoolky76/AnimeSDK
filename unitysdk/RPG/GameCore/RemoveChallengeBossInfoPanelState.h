#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveChallengeBossInfoPanelState; }

#define RPG_GAMECORE_REMOVECHALLENGEBOSSINFOPANELSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D984430)
#define RPG_GAMECORE_REMOVECHALLENGEBOSSINFOPANELSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D984440)
#define RPG_GAMECORE_REMOVECHALLENGEBOSSINFOPANELSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D984400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveChallengeBossInfoPanelState_TypeDefinitionIndex = 23219;

	class RemoveChallengeBossInfoPanelState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID WarningText; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVECHALLENGEBOSSINFOPANELSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveChallengeBossInfoPanelState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVECHALLENGEBOSSINFOPANELSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveChallengeBossInfoPanelState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVECHALLENGEBOSSINFOPANELSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
