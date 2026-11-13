#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengePeakRewardType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengePeakRewardRow; }

#define RPG_GAMECORE_CHALLENGEPEAKREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC0CFA0)
#define RPG_GAMECORE_CHALLENGEPEAKREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EC0CDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengePeakRewardRow_TypeDefinitionIndex = 13052;

	class ChallengePeakRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardGroupID; // 0x10
		::System::UInt32 TypeValue; // 0x14
		::System::UInt32 ID; // 0x18
		::System::UInt32 RewardID; // 0x1C
		::RPG::GameCore::ChallengePeakRewardType RewardType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChallengePeakRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChallengePeakRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
