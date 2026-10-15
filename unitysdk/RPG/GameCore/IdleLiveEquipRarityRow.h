#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEquipRarityRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEEQUIPRARITYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77AC40)
#define RPG_GAMECORE_IDLELIVEEQUIPRARITYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77A8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveEquipRarityRow_TypeDefinitionIndex = 11759;

	class IdleLiveEquipRarityRow : public ::System::Object
	{
	public:
		::System::String* OrbEffectPath; // 0x10
		::System::String* StateName; // 0x18
		::System::String* RarityIcon; // 0x20
		::System::String* RarityBg; // 0x28
		::RPG::GameCore::FixPoint SpEquipRarityAddPower; // 0x30
		::RPG::GameCore::FixPoint EquipRarityAddPower; // 0x38
		::System::UInt32 Rarity; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint SpEquipPowerFactor; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPRARITYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveEquipRarityRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveEquipRarityRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPRARITYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
