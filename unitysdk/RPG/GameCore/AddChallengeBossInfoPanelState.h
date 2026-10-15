#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddChallengeBossInfoPanelState; }

#define RPG_GAMECORE_ADDCHALLENGEBOSSINFOPANELSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3860E0)
#define RPG_GAMECORE_ADDCHALLENGEBOSSINFOPANELSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3860F0)
#define RPG_GAMECORE_ADDCHALLENGEBOSSINFOPANELSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3860B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddChallengeBossInfoPanelState_TypeDefinitionIndex = 23218;

	class AddChallengeBossInfoPanelState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID WarningText; // 0x18
		::System::Int32 Priority; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDCHALLENGEBOSSINFOPANELSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddChallengeBossInfoPanelState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDCHALLENGEBOSSINFOPANELSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddChallengeBossInfoPanelState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDCHALLENGEBOSSINFOPANELSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
