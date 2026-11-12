#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MUSEUMGETFUNDNOTIFYPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xE347750)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumGetFundNotifyParam_TypeDefinitionIndex = 68280;

	class MuseumGetFundNotifyParam : public ::System::Object
	{
	public:
		::System::UInt32 RewardTargetID; // 0x10
		::System::UInt32 FundNum; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMGETFUNDNOTIFYPARAM_CTOR_OFFSET))(this);
		}

	};
}
