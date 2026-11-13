#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/RPG/GameCore/RelicMode.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicConfigRow; }

#define RPG_GAMECORE_RELICCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F236DA0)
#define RPG_GAMECORE_RELICCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F235C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicConfigRow_TypeDefinitionIndex = 14787;

	class RelicConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 CoinCost; // 0x10
		::System::UInt32 SetID; // 0x14
		::RPG::GameCore::RelicType Type; // 0x18
		::RPG::GameCore::RelicMode Mode; // 0x1C
		::System::UInt32 ExpProvide; // 0x20
		::System::UInt32 MainAffixGroup; // 0x24
		::System::UInt32 ID; // 0x28
		::System::UInt32 MaxLevel; // 0x2C
		::RPG::GameCore::CombatPowerRelicRarityType Rarity; // 0x30
		::System::UInt32 ExpType; // 0x34
		::System::UInt32 SubAffixGroup; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RelicConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RelicConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
