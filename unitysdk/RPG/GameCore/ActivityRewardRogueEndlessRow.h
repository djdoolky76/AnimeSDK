#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRewardRogueEndlessRow; }

#define RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37DE40)
#define RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D37D800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRewardRogueEndlessRow_TypeDefinitionIndex = 12339;

	class ActivityRewardRogueEndlessRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID RewardLevelName; // 0x10
		::System::UInt32 RewardLevel; // 0x20
		::System::UInt32 RewardPoint; // 0x24
		::System::UInt32 RewardID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityRewardRogueEndlessRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityRewardRogueEndlessRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
