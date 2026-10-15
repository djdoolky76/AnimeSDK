#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChallengePeakRewardORRow; }

#define RPG_GAMECORE_CHALLENGEPEAKREWARDORROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D562380)
#define RPG_GAMECORE_CHALLENGEPEAKREWARDORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D562210)

namespace RPG::GameCore
{
	class ChallengePeakRewardORRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 RewardID; // 0x14
		::System::UInt32 PeakGroupID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKREWARDORROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChallengePeakRewardORRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChallengePeakRewardORRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKREWARDORROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
