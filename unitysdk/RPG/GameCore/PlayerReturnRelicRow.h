#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerReturnRelicRow; }

#define RPG_GAMECORE_PLAYERRETURNRELICROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93B760)
#define RPG_GAMECORE_PLAYERRETURNRELICROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D93B5A0)

namespace RPG::GameCore
{
	class PlayerReturnRelicRow : public ::System::Object
	{
	public:
		::System::UInt32 RelicLevel; // 0x10
		::System::Boolean IsRelicMatchMainAffix; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt32 WorldLevel; // 0x18
		::RPG::GameCore::CombatPowerRelicRarityType RelicRarity; // 0x1C
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
