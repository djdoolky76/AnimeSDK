#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournExpRewardRow; }

#define RPG_GAMECORE_ROGUETOURNEXPREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA0B880)
#define RPG_GAMECORE_ROGUETOURNEXPREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA0B700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournExpRewardRow_TypeDefinitionIndex = 14977;

	class RogueTournExpRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 Exp; // 0x10
		::System::UInt32 MainTournID; // 0x14
		::System::UInt32 Level; // 0x18
		::System::UInt32 RewardID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXPREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournExpRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournExpRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXPREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
