#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/A9DC7EED93BB8725.h"
#include "unitysdk/System/Object.h"

#define ABC_QUALITYSETTINGS_CLUSTERLIGHTINGDETAILSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE5F00)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int ClusterLightingDetailSettings_TypeDefinitionIndex = 7430;

	class ClusterLightingDetailSettings : public ::System::Object
	{
	public:
		::System::Boolean enableClusterDeferredLighting; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 maxPointLightCount; // 0x14
		::System::Int32 maxSpotLightCount; // 0x18
		::System::Single spotCookieScale; // 0x1C
		::System::Single pointLightCookieScale; // 0x20
		::B88870E9FB4B8C1A::A9DC7EED93BB8725 cookieSize; // 0x24
		::System::Boolean includeShadowLight; // 0x28
		::System::Byte _padding1[0x3];
		::System::Int32 maxLightCountPerCluster; // 0x2C
		::System::Int32 tileSizeX; // 0x30
		::System::Int32 tileSizeY; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_CLUSTERLIGHTINGDETAILSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
