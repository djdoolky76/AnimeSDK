#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define TA_SCENELIGHTCOMPONENT_LIGHTTESTCONTRLLER_AD970635A668CF89_OFFSET UNITYSDK_OFFSET(0x1678550)
#define TA_SCENELIGHTCOMPONENT_LIGHTTESTCONTRLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x2860ED0)

namespace TA::SceneLightComponent
{
	inline static constexpr unsigned int LightTestContrller_TypeDefinitionIndex = 16057;

	class LightTestContrller
	{
	public:
		::UnityEngine::Transform* TestCamera; // 0x28
		::UnityEngine::Vector3 CamPosOffset; // 0x30
		::UnityEngine::Vector3 CamRotation; // 0x3C
		::UnityEngine::Transform* LocalLight; // 0x48
		::UnityEngine::Vector3 LightPosOffset; // 0x50
		::UnityEngine::Vector3 LightRotation; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_LIGHTTESTCONTRLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean AD970635A668CF89()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_LIGHTTESTCONTRLLER_AD970635A668CF89_OFFSET))(this);
		}
	};
}
