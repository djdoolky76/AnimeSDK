#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/SampleType.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Shape.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::ElectricChainV2 { class Sampler; }

#define RPG_CLIENT_ELECTRICCHAINV2_SPHERE_CTOR_OFFSET UNITYSDK_OFFSET(0xCD814A0)
#define RPG_CLIENT_ELECTRICCHAINV2_SPHERE_LOICGIBKHMM_OFFSET UNITYSDK_OFFSET(0xCD842F0)

namespace RPG::Client::ElectricChainV2
{
	class Sphere : public ::RPG::Client::ElectricChainV2::Shape
	{
	public:
		::System::Single radius; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::ElectricChainV2::Sampler* sampler; // 0x30
		::RPG::Client::ElectricChainV2::SampleType sampleType; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SPHERE_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 LOICGIBKHMM()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_SPHERE_LOICGIBKHMM_OFFSET))(this);
		}

	};
}
