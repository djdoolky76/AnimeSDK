#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GravityBallPuzzleSwitchBoard; }

#define RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D723B80)
#define RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D723BF0)
#define RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D723AF0)

namespace RPG::GameCore
{
	class GravityBallPuzzleSwitchBoard : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* PuzzleID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GravityBallPuzzleSwitchBoard* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GravityBallPuzzleSwitchBoard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GravityBallPuzzleSwitchBoard* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GravityBallPuzzleSwitchBoard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAVITYBALLPUZZLESWITCHBOARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
