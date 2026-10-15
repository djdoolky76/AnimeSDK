#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/PieceType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class PieceConfig; }

#define RPG_GAMECORE_MATCH3_PIECECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D821FE0)
#define RPG_GAMECORE_MATCH3_PIECECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D821E70)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int PieceConfig_TypeDefinitionIndex = 24867;

	class PieceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::Match3::PieceType Type; // 0x14
		::System::UInt32 StyleID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_PIECECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::PieceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::PieceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_PIECECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
