#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Shape.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::ElectricChainV2 { class Sampler; }

#define RPG_CLIENT_ELECTRICCHAINV2_DISC_CTOR_OFFSET UNITYSDK_OFFSET(0xCD73B60)
#define RPG_CLIENT_ELECTRICCHAINV2_DISC_LOICGIBKHMM_OFFSET UNITYSDK_OFFSET(0xCD73940)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Disc_TypeDefinitionIndex = 73595;

	class Disc : public ::RPG::Client::ElectricChainV2::Shape
	{
	public:
		::System::Single radius; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::ElectricChainV2::Sampler* sampler; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_DISC_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 LOICGIBKHMM()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_DISC_LOICGIBKHMM_OFFSET))(this);
		}

	};
}
