#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FiveDimPlayerResetMode.h"
#include "unitysdk/RPG/GameCore/FiveDimPlayerResetSweepDirection.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetPlayerResetModeAction; }

#define RPG_GAMECORE_FIVEDIMSETPLAYERRESETMODEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DA2B0)
#define RPG_GAMECORE_FIVEDIMSETPLAYERRESETMODEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DA2C0)
#define RPG_GAMECORE_FIVEDIMSETPLAYERRESETMODEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DA270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPlayerResetModeAction_TypeDefinitionIndex = 18734;

	class FiveDimSetPlayerResetModeAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimPlayerResetMode Mode; // 0x10
		::RPG::GameCore::FiveDimPlayerResetSweepDirection SweepDirection; // 0x14
		::System::Single SweepXRatio; // 0x18
		::System::Single SweepYOffset; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERRESETMODEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetPlayerResetModeAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetPlayerResetModeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERRESETMODEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetPlayerResetModeAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetPlayerResetModeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERRESETMODEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
