#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define TA_SCENELIGHTCOMPONENT_VLB_POLYGONHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace TA::SceneLightComponent::VLB
{
	inline static constexpr unsigned int PolygonHelper_TypeDefinitionIndex = 16411;

	class PolygonHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_POLYGONHELPER__CTOR_OFFSET))(this);
		}
	};
}
