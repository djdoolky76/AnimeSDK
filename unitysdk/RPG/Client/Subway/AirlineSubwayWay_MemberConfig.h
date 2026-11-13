#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_MEMBERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE3A70)

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirlineSubwayWay_MemberConfig_TypeDefinitionIndex = 85067;

	class AirlineSubwayWay_MemberConfig : public ::System::Object
	{
	public:
		::System::String* Type; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRLINESUBWAYWAY_MEMBERCONFIG_CTOR_OFFSET))(this);
		}

	};
}
