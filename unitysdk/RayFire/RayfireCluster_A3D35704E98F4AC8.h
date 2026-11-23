#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RayFire { class RFCluster; }

#define RAYFIRE_RAYFIRECLUSTER_A3D35704E98F4AC8_B6A1C8B57460F2CB_OFFSET UNITYSDK_OFFSET(0x190BC60)
#define RAYFIRE_RAYFIRECLUSTER_A3D35704E98F4AC8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace RayFire
{
	inline static constexpr unsigned int RayfireCluster_A3D35704E98F4AC8_TypeDefinitionIndex = 15638;

	class RayfireCluster_A3D35704E98F4AC8 : public ::System::Object
	{
	public:
		::RayFire::RFCluster* F6E7398EE59BDDBA; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_A3D35704E98F4AC8__CTOR_OFFSET))(this);
		}

		::System::Boolean B6A1C8B57460F2CB(::RayFire::RFCluster* BBCFEC7DB309E927)
		{
			return ((::System::Boolean(*)(::PVOID, ::RayFire::RFCluster*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_A3D35704E98F4AC8_B6A1C8B57460F2CB_OFFSET))(this, BBCFEC7DB309E927);
		}
	};
}
