#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RayFire { class RFShard; }

#define RAYFIRE_RAYFIRECLUSTER_B834490C0D1C84F7_AF9D6E64EEBF1935_OFFSET UNITYSDK_OFFSET(0x190BC60)
#define RAYFIRE_RAYFIRECLUSTER_B834490C0D1C84F7__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace RayFire
{
	inline static constexpr unsigned int RayfireCluster_B834490C0D1C84F7_TypeDefinitionIndex = 15637;

	class RayfireCluster_B834490C0D1C84F7 : public ::System::Object
	{
	public:
		::RayFire::RFShard* F7EF9B5C14B1148F; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_B834490C0D1C84F7__CTOR_OFFSET))(this);
		}

		::System::Boolean AF9D6E64EEBF1935(::RayFire::RFShard* BBCFEC7DB309E927)
		{
			return ((::System::Boolean(*)(::PVOID, ::RayFire::RFShard*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRECLUSTER_B834490C0D1C84F7_AF9D6E64EEBF1935_OFFSET))(this, BBCFEC7DB309E927);
		}
	};
}
