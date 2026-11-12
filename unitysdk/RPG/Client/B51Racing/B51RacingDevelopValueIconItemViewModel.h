#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONITEMVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD08AFB0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDevelopValueIconItemViewModel_TypeDefinitionIndex = 84806;

	class B51RacingDevelopValueIconItemViewModel : public ::System::Object
	{
	public:
		::RPG::GameCore::B51RacingStatType StatType; // 0x10
		::System::Boolean IsTarget; // 0x14
		::System::Boolean IsAvatarBonus; // 0x15
		::System::Byte _padding0[0x2];
		::System::UInt32 BonusValue; // 0x18
		::System::UInt32 BoostLevel; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONITEMVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
