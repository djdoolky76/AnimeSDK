#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PauseGameModeToState; }

#define RPG_GAMECORE_PAUSEGAMEMODETOSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F2DD0)
#define RPG_GAMECORE_PAUSEGAMEMODETOSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8F2DE0)
#define RPG_GAMECORE_PAUSEGAMEMODETOSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8F2DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseGameModeToState_TypeDefinitionIndex = 23425;

	class PauseGameModeToState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TurnState PauseTurnState; // 0x18
		::System::Boolean Pause; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEGAMEMODETOSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseGameModeToState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseGameModeToState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEGAMEMODETOSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PauseGameModeToState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PauseGameModeToState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEGAMEMODETOSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
