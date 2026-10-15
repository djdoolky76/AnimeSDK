#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityPunkLordRewardRow; }

#define RPG_GAMECORE_ACTIVITYPUNKLORDREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D371F50)
#define RPG_GAMECORE_ACTIVITYPUNKLORDREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D371890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPunkLordRewardRow_TypeDefinitionIndex = 12291;

	class ActivityPunkLordRewardRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID RewardLevelName; // 0x10
		::System::UInt32 RewardID; // 0x20
		::System::UInt32 RewardLevel; // 0x24
		::System::UInt32 RewardPoint; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityPunkLordRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityPunkLordRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
