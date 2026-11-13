#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DailyLoginRewardActivityData.h"

#define RPG_CLIENT_RECOLLECTIONAHALOGINREWARDACTIVITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D06D8E0)
#define RPG_CLIENT_RECOLLECTIONAHALOGINREWARDACTIVITYDATA_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0x1D06D8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ReCollectionAhaLoginRewardActivityData_TypeDefinitionIndex = 63056;

	class ReCollectionAhaLoginRewardActivityData : public ::RPG::Client::DailyLoginRewardActivityData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOLLECTIONAHALOGINREWARDACTIVITYDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOLLECTIONAHALOGINREWARDACTIVITYDATA_GET_ISDISPLAY_OFFSET))(this);
		}

	};
}
