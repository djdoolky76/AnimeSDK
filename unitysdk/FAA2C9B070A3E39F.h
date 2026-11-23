#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FAA2C9B070A3E39F_AABF0455C804001E_OFFSET UNITYSDK_OFFSET(0x387EA60)
#define FAA2C9B070A3E39F_B33747FD057436B2_OFFSET UNITYSDK_OFFSET(0x37FA260)
#define FAA2C9B070A3E39F_FA4EC2D57A32F6DA_OFFSET UNITYSDK_OFFSET(0x387EA80)
#define FAA2C9B070A3E39F_FC391960905BB82D_OFFSET UNITYSDK_OFFSET(0x387EB60)

inline static constexpr unsigned int FAA2C9B070A3E39F_TypeDefinitionIndex = 18089;

class FAA2C9B070A3E39F : public ::System::Object
{
public:
	static ::System::Boolean AABF0455C804001E(::System::Single BD8273AB04C4B760, ::System::Single BEEE7A5A60941632, ::System::Single E57A176F5117CA71)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FAA2C9B070A3E39F_AABF0455C804001E_OFFSET))(BD8273AB04C4B760, BEEE7A5A60941632, E57A176F5117CA71);
	}

	static ::UnityEngine::Quaternion FA4EC2D57A32F6DA(::UnityEngine::ACF10FE87B4C5617 BD8273AB04C4B760)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::ACF10FE87B4C5617))((::PBYTE)hIl2Cpp + FAA2C9B070A3E39F_FA4EC2D57A32F6DA_OFFSET))(BD8273AB04C4B760);
	}

	static ::UnityEngine::Vector3 FC391960905BB82D(::UnityEngine::ACF10FE87B4C5617 BD8273AB04C4B760)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::ACF10FE87B4C5617))((::PBYTE)hIl2Cpp + FAA2C9B070A3E39F_FC391960905BB82D_OFFSET))(BD8273AB04C4B760);
	}

	static ::UnityEngine::Vector3 B33747FD057436B2(::UnityEngine::ACF10FE87B4C5617 BD8273AB04C4B760)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::ACF10FE87B4C5617))((::PBYTE)hIl2Cpp + FAA2C9B070A3E39F_B33747FD057436B2_OFFSET))(BD8273AB04C4B760);
	}
};
