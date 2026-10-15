#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainPartyBuildItemDynamicBindValue.h"

#define RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION_CTOR_OFFSET UNITYSDK_OFFSET(0xE2FE230)
#define RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xE2FE190)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyBuildItemDynamicBindValue_Mission_TypeDefinitionIndex = 68880;

	class TrainPartyBuildItemDynamicBindValue_Mission : public ::RPG::Client::TrainPartyBuildItemDynamicBindValue
	{
	public:
		::System::UInt32 SubMissionID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION_CTOR_OFFSET))(this);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_MISSION_KFGJEKJHIMB_OFFSET))(this);
		}

	};
}
