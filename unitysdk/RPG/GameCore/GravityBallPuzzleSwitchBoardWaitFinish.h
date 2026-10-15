#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GravityBallPuzzleSwitchBoardWaitFinish; }

#define RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARDWAITFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D723DF0)
#define RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARDWAITFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D723E00)
#define RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARDWAITFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D723D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GravityBallPuzzleSwitchBoardWaitFinish_TypeDefinitionIndex = 20379;

	class GravityBallPuzzleSwitchBoardWaitFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARDWAITFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GravityBallPuzzleSwitchBoardWaitFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GravityBallPuzzleSwitchBoardWaitFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARDWAITFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GravityBallPuzzleSwitchBoardWaitFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GravityBallPuzzleSwitchBoardWaitFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARDWAITFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
