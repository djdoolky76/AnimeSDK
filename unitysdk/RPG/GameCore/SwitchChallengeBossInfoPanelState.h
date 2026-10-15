#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeBossInfoPanelState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchChallengeBossInfoPanelState; }

#define RPG_GAMECORE_SWITCHCHALLENGEBOSSINFOPANELSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB40950)
#define RPG_GAMECORE_SWITCHCHALLENGEBOSSINFOPANELSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB40960)
#define RPG_GAMECORE_SWITCHCHALLENGEBOSSINFOPANELSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB40920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchChallengeBossInfoPanelState_TypeDefinitionIndex = 23217;

	class SwitchChallengeBossInfoPanelState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ChallengeBossInfoPanelState TargetType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID WarningText; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHALLENGEBOSSINFOPANELSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchChallengeBossInfoPanelState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHALLENGEBOSSINFOPANELSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchChallengeBossInfoPanelState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHCHALLENGEBOSSINFOPANELSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
