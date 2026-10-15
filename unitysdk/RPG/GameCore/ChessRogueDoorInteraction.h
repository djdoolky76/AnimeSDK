#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChessRogueDoorInteraction; }

#define RPG_GAMECORE_CHESSROGUEDOORINTERACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5953A0)
#define RPG_GAMECORE_CHESSROGUEDOORINTERACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5953B0)
#define RPG_GAMECORE_CHESSROGUEDOORINTERACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D595370)

namespace RPG::GameCore
{
	class ChessRogueDoorInteraction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean InteractWithConsole; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSROGUEDOORINTERACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChessRogueDoorInteraction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChessRogueDoorInteraction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSROGUEDOORINTERACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChessRogueDoorInteraction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChessRogueDoorInteraction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSROGUEDOORINTERACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
