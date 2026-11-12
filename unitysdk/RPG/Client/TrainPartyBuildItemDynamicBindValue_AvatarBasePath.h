#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/RPG/Client/TrainPartyBuildItemDynamicBindValue.h"

#define RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_AVATARBASEPATH_CTOR_OFFSET UNITYSDK_OFFSET(0xED69230)
#define RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_AVATARBASEPATH_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xED691E0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyBuildItemDynamicBindValue_AvatarBasePath_TypeDefinitionIndex = 70834;

	class TrainPartyBuildItemDynamicBindValue_AvatarBasePath : public ::RPG::Client::TrainPartyBuildItemDynamicBindValue
	{
	public:
		::HNOHHOEPFHC Type; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_AVATARBASEPATH_CTOR_OFFSET))(this);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_AVATARBASEPATH_KFGJEKJHIMB_OFFSET))(this);
		}

	};
}
