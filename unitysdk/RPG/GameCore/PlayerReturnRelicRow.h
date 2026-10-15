#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerReturnRelicRow; }

#define RPG_GAMECORE_PLAYERRETURNRELICROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90DDF0)
#define RPG_GAMECORE_PLAYERRETURNRELICROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D90DC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnRelicRow_TypeDefinitionIndex = 14535;

	class PlayerReturnRelicRow : public ::System::Object
	{
	public:
		::System::Boolean IsRelicMatchMainAffix; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::CombatPowerRelicRarityType RelicRarity; // 0x14
		::System::UInt32 RelicLevel; // 0x18
		::System::UInt32 WorldLevel; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNRELICROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerReturnRelicRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerReturnRelicRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNRELICROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
