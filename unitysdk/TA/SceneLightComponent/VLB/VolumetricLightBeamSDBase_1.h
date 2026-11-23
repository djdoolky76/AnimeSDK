#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BF785CE0C5120FB3/A82EF4DA48EDA156.h"
#include "unitysdk/BF785CE0C5120FB3/B398DFF195875BE2.h"
#include "unitysdk/TA/SceneLightComponent/VLB/VolumetricLightBeamAbstractBase.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace TA::SceneLightComponent::VLB { class BeamGeometrySD; }
namespace UnityEngine { class B196ACFA9D2AE729; }

namespace TA::SceneLightComponent::VLB
{
	inline static constexpr unsigned int VolumetricLightBeamSDBase_1_TypeDefinitionIndex = 16152;

	template <typename T>
	class VolumetricLightBeamSDBase_1 : public ::TA::SceneLightComponent::VLB::VolumetricLightBeamAbstractBase
	{
	public:
		::UnityEngine::E46B881AA2636190 colorBase; // 0x0
		::UnityEngine::B196ACFA9D2AE729* colorGradientbase; // 0x0
		::TA::SceneLightComponent::VLB::BeamGeometrySD* F539937276F0BBB4; // 0x0
		::BF785CE0C5120FB3::A82EF4DA48EDA156 dimensionsBase; // 0x0
		::BF785CE0C5120FB3::B398DFF195875BE2 colorModeBase; // 0x0
	};
}
