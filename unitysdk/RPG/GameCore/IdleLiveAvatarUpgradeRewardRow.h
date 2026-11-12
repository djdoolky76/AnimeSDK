#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveTeamSlotLevelUpRewardType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveAvatarUpgradeRewardRow; }

#define RPG_GAMECORE_IDLELIVEAVATARUPGRADEREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98BDD0)
#define RPG_GAMECORE_IDLELIVEAVATARUPGRADEREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E98BC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveAvatarUpgradeRewardRow_TypeDefinitionIndex = 11775;

	class IdleLiveAvatarUpgradeRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 RewardID; // 0x14
		::RPG::GameCore::IdleLiveTeamSlotLevelUpRewardType Type; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARUPGRADEREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveAvatarUpgradeRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveAvatarUpgradeRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARUPGRADEREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
