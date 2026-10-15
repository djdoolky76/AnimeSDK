#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/Shape.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_ELECTRICCHAINV2_POINT_BMOMBCHEEEI_OFFSET UNITYSDK_OFFSET(0xCD79F70)
#define RPG_CLIENT_ELECTRICCHAINV2_POINT_CTOR_OFFSET UNITYSDK_OFFSET(0xCD78860)
#define RPG_CLIENT_ELECTRICCHAINV2_POINT_LOICGIBKHMM_OFFSET UNITYSDK_OFFSET(0xCD7A080)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int Point_TypeDefinitionIndex = 73594;

	class Point : public ::RPG::Client::ElectricChainV2::Shape
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POINT_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 BMOMBCHEEEI()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POINT_BMOMBCHEEEI_OFFSET))(this);
		}

		::UnityEngine::Vector3 LOICGIBKHMM()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_POINT_LOICGIBKHMM_OFFSET))(this);
		}

	};
}
