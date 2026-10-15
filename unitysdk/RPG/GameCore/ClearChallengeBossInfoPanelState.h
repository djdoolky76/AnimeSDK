#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearChallengeBossInfoPanelState; }

#define RPG_GAMECORE_CLEARCHALLENGEBOSSINFOPANELSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D587FE0)
#define RPG_GAMECORE_CLEARCHALLENGEBOSSINFOPANELSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D587FF0)
#define RPG_GAMECORE_CLEARCHALLENGEBOSSINFOPANELSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D587F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearChallengeBossInfoPanelState_TypeDefinitionIndex = 23220;

	class ClearChallengeBossInfoPanelState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARCHALLENGEBOSSINFOPANELSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearChallengeBossInfoPanelState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARCHALLENGEBOSSINFOPANELSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearChallengeBossInfoPanelState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARCHALLENGEBOSSINFOPANELSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
