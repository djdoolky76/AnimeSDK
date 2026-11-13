#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/ActiveSkillDescShowMode.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B104260)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingCarActiveSkillItemViewModel_TypeDefinitionIndex = 84764;

	class B51RacingCarActiveSkillItemViewModel : public ::System::Object
	{
	public:
		::System::UInt32 SkillID; // 0x10
		::System::Boolean ShowExpBar; // 0x14
		::System::Byte _padding0[0x3];
		::System::Single ExpProgress; // 0x18
		::RPG::Client::B51Racing::ActiveSkillDescShowMode DescShowMode; // 0x1C
		::System::UInt32 SkillLevel; // 0x20
		::System::UInt32 SkillMaxLevel; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGCARACTIVESKILLITEMVIEWMODEL_CTOR_OFFSET))(this);
		}

	};
}
