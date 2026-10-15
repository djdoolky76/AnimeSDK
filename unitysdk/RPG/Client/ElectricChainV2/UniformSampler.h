#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Sampler.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_ELECTRICCHAINV2_UNIFORMSAMPLER_CTOR_OFFSET UNITYSDK_OFFSET(0xCD84B90)
#define RPG_CLIENT_ELECTRICCHAINV2_UNIFORMSAMPLER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xCD84B10)
#define RPG_CLIENT_ELECTRICCHAINV2_UNIFORMSAMPLER_GET_VECTOR2VALUE_OFFSET UNITYSDK_OFFSET(0xCD84B20)

namespace RPG::Client::ElectricChainV2
{
	class UniformSampler : public ::RPG::Client::ElectricChainV2::Sampler
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_UNIFORMSAMPLER_CTOR_OFFSET))(this);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_UNIFORMSAMPLER_GET_VALUE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_vector2Value()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_UNIFORMSAMPLER_GET_VECTOR2VALUE_OFFSET))(this);
		}

	};
}
