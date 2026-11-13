#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELECTRICCHAINV2_SAMPLER_CTOR_OFFSET UNITYSDK_OFFSET(0x189BF0D0)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Sampler_TypeDefinitionIndex = 75713;

	class Sampler : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SAMPLER_CTOR_OFFSET))(this);
		}

	};
}
