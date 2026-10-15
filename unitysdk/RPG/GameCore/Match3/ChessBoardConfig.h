#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class BombCreateConfig; }
namespace RPG::GameCore::Match3 { class ChessBoardConfig; }
namespace RPG::GameCore::Match3 { class PieceConfig; }

#define RPG_GAMECORE_MATCH3_CHESSBOARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84B6C0)
#define RPG_GAMECORE_MATCH3_CHESSBOARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84B520)

namespace RPG::GameCore::Match3
{
	class ChessBoardConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::PieceConfig*>* PieceConfigs; // 0x10
		::Il2CppArray<::RPG::GameCore::Match3::BombCreateConfig*>* BombCreateConfigs; // 0x18
		::System::Single DelayAfterSwap; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_CHESSBOARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::ChessBoardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::ChessBoardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_CHESSBOARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
