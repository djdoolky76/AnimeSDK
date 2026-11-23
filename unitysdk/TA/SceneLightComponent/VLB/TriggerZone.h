#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/SceneLightComponent/VLB/TriggerZone_B7FF8D0A8CC1988D.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace TA::SceneLightComponent::VLB { class DynamicOcclusionRaycasting; }
namespace TA::SceneLightComponent::VLB { class VolumetricLightBeamAbstractBase; }
namespace UnityEngine { class PolygonCollider2D; }

#define TA_SCENELIGHTCOMPONENT_VLB_TRIGGERZONE_B0A6A07AEC5FE159_OFFSET UNITYSDK_OFFSET(0x28EA680)
#define TA_SCENELIGHTCOMPONENT_VLB_TRIGGERZONE_B5A883AD02C2BF14_OFFSET UNITYSDK_OFFSET(0x28E9960)
#define TA_SCENELIGHTCOMPONENT_VLB_TRIGGERZONE_BBBEA0DC01597E12_OFFSET UNITYSDK_OFFSET(0x28EA610)
#define TA_SCENELIGHTCOMPONENT_VLB_TRIGGERZONE_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x28EA400)
#define TA_SCENELIGHTCOMPONENT_VLB_TRIGGERZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x28EA660)

namespace TA::SceneLightComponent::VLB
{
	inline static constexpr unsigned int TriggerZone_TypeDefinitionIndex = 16441;

	class TriggerZone : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean setIsTrigger; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single rangeMultiplier; // 0x24
		::TA::SceneLightComponent::VLB::VolumetricLightBeamAbstractBase* B8CE2972F20D7720; // 0x28
		::TA::SceneLightComponent::VLB::DynamicOcclusionRaycasting* F91BD410A72CA955; // 0x30
		::UnityEngine::PolygonCollider2D* F09A65BDC7BD366E; // 0x38

		::System::Void BBBEA0DC01597E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_TRIGGERZONE_BBBEA0DC01597E12_OFFSET))(this);
		}

		::System::Void B5A883AD02C2BF14()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_TRIGGERZONE_B5A883AD02C2BF14_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_TRIGGERZONE_BF13C91AD80643D2_OFFSET))(this);
		}

		::TA::SceneLightComponent::VLB::TriggerZone_B7FF8D0A8CC1988D B0A6A07AEC5FE159()
		{
			return ((::TA::SceneLightComponent::VLB::TriggerZone_B7FF8D0A8CC1988D(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_TRIGGERZONE_B0A6A07AEC5FE159_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_VLB_TRIGGERZONE__CTOR_OFFSET))(this);
		}
	};
}
