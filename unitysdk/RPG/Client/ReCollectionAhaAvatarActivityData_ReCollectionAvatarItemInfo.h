#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_RECOLLECTIONAVATARITEMINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xE8BA8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ReCollectionAhaAvatarActivityData_ReCollectionAvatarItemInfo_TypeDefinitionIndex = 63054;

	class ReCollectionAhaAvatarActivityData_ReCollectionAvatarItemInfo : public ::System::Object
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOLLECTIONAHAAVATARACTIVITYDATA_RECOLLECTIONAVATARITEMINFO_CTOR_OFFSET))(this);
		}

	};
}
