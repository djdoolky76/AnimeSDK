#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class BirdPieceTypeWeightConfig; }

#define RPG_GAMECORE_MATCH3_BIRDPIECETYPEWEIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81D020)
#define RPG_GAMECORE_MATCH3_BIRDPIECETYPEWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D81CE30)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BirdPieceTypeWeightConfig_TypeDefinitionIndex = 24936;

	class BirdPieceTypeWeightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ItemPackCount; // 0x10
		::System::Boolean UseWeight; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt32 FruitWeight; // 0x18
		::System::UInt32 ItemPackWeight; // 0x1C
		::System::UInt32 BreakCount; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDPIECETYPEWEIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::BirdPieceTypeWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDPIECETYPEWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
