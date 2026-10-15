#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombCreateStyleType.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class BombCreateConfig; }

#define RPG_GAMECORE_MATCH3_BOMBCREATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81DB20)
#define RPG_GAMECORE_MATCH3_BOMBCREATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D81D920)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BombCreateConfig_TypeDefinitionIndex = 24868;

	class BombCreateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MinRowBreak; // 0x10
		::System::UInt32 MinColumnBreak; // 0x14
		::RPG::GameCore::Match3::BombType BombType; // 0x18
		::RPG::GameCore::Match3::BombCreateStyleType StyleType; // 0x1C
		::System::UInt32 PieceConfigID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BOMBCREATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::BombCreateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::BombCreateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BOMBCREATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
