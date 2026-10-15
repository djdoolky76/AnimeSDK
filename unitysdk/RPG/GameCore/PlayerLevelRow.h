#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerLevelRow; }

#define RPG_GAMECORE_PLAYERLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D908550)
#define RPG_GAMECORE_PLAYERLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D907EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerLevelRow_TypeDefinitionIndex = 14500;

	class PlayerLevelRow : public ::System::Object
	{
	public:
		::System::UInt32 LevelRewardID; // 0x10
		::System::UInt32 Level; // 0x14
		::System::UInt32 StaminaLimit; // 0x18
		::System::UInt32 PlayerExp; // 0x1C
		::System::UInt32 RewardID; // 0x20
		::System::UInt32 RewardStamina; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
