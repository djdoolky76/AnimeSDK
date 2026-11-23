#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/B15072CFB0F4977D.h"
#include "unitysdk/TA/SceneLightComponent/EasyFogController_B9E1F9C949AF68DC.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace TA::SceneLightComponent { class EasyFogController_ExtraExportData; }
namespace UnityEngine { class FAED0374422E783A; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define TA_SCENELIGHTCOMPONENT_EASYFOGCONTROLLER_A6AF450CCE60E5F2_OFFSET UNITYSDK_OFFSET(0x286FD20)
#define TA_SCENELIGHTCOMPONENT_EASYFOGCONTROLLER_AD970635A668CF89_OFFSET UNITYSDK_OFFSET(0x1678550)
#define TA_SCENELIGHTCOMPONENT_EASYFOGCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x286FD70)

namespace TA::SceneLightComponent
{
	inline static constexpr unsigned int EasyFogController_TypeDefinitionIndex = 16115;

	class EasyFogController
	{
	public:
		::TA::SceneLightComponent::EasyFogController_ExtraExportData* dataExportEasyFog; // 0x28
		::UnityEngine::Material* easyFogTemplateMaterial; // 0x30
		::UnityEngine::E46B881AA2636190 baseColorTint; // 0x38
		::System::Single enableBillboarding; // 0x48
		::System::Single fogDensity; // 0x4C
		::UnityEngine::Texture2D* opacityMap; // 0x50
		::UnityEngine::Texture2D* fogNormalMap; // 0x58
		::System::Single normalFlip; // 0x60
		::System::Single normalIntensity; // 0x64
		::UnityEngine::Vector2 detailNoiseTiling; // 0x68
		::UnityEngine::Vector2 detailNoiseSpeed; // 0x70
		::System::Single detailNoiseContrast; // 0x78
		::UnityEngine::Vector2 distortTiling; // 0x7C
		::UnityEngine::Vector2 distortMapFlow; // 0x84
		::System::Single distortIntensity; // 0x8C
		::System::Single directionalLightIntensity; // 0x90
		::UnityEngine::E46B881AA2636190 customDirectionalLightColor; // 0x94
		::TA::SceneLightComponent::EasyFogController_B9E1F9C949AF68DC directionalLightBlendMode; // 0xA4
		::UnityEngine::E46B881AA2636190 customAmbientColor; // 0xA8
		::TA::SceneLightComponent::EasyFogController_B9E1F9C949AF68DC ambientLightBlendMode; // 0xB8
		::UnityEngine::E46B881AA2636190 customEmissiveColor; // 0xBC
		::System::Single softParticlesNearFadeDistance; // 0xCC
		::System::Single softParticlesFarFadeDistance; // 0xD0
		::System::Single cameraNearFadeDistance; // 0xD4
		::System::Single cameraFarFadeDistance; // 0xD8
		::System::Int32 renderQueue; // 0xDC
		::System::Boolean intensityControlledByES; // 0xE0
		::System::Byte _padding0[0x3];
		::B88870E9FB4B8C1A::B15072CFB0F4977D ControlMode; // 0xE4
		::UnityEngine::FAED0374422E783A* CustomCurve; // 0xE8
		::System::Boolean IsFarlight; // 0xF0

		::System::Void A6AF450CCE60E5F2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_EASYFOGCONTROLLER_A6AF450CCE60E5F2_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_EASYFOGCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean AD970635A668CF89()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_EASYFOGCONTROLLER_AD970635A668CF89_OFFSET))(this);
		}
	};
}
