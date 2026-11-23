#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/B15072CFB0F4977D.h"
#include "unitysdk/B88870E9FB4B8C1A/EBEF12FEF73806C7.h"
#include "unitysdk/TA/SceneLightComponent/LightBillboardController_B67106F3F23501DB.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class FAED0374422E783A; }
namespace UnityEngine { class Texture2D; }

#define TA_SCENELIGHTCOMPONENT_LIGHTBILLBOARDCONTROLLER_A6AF450CCE60E5F2_OFFSET UNITYSDK_OFFSET(0x285F410)
#define TA_SCENELIGHTCOMPONENT_LIGHTBILLBOARDCONTROLLER_AD970635A668CF89_OFFSET UNITYSDK_OFFSET(0x1678550)
#define TA_SCENELIGHTCOMPONENT_LIGHTBILLBOARDCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x285F460)

namespace TA::SceneLightComponent
{
	inline static constexpr unsigned int LightBillboardController_TypeDefinitionIndex = 15983;

	class LightBillboardController
	{
	public:
		::UnityEngine::Texture2D* LBMainTex; // 0x28
		::UnityEngine::Texture2D* LBMaskTex; // 0x30
		::System::Single MaskAdjust; // 0x38
		::System::Single NoiseStrength; // 0x3C
		::System::Single NoiseFrequency; // 0x40
		::System::Single PerlinNoiseRemapMin; // 0x44
		::System::Single PerlinNoiseRemapMax; // 0x48
		::UnityEngine::E46B881AA2636190 TintColor; // 0x4C
		::System::Single SceneBillboardFogIntensity; // 0x5C
		::System::Int32 RandomSeed; // 0x60
		::System::Single RandomScale; // 0x64
		::System::Single SinFrequency; // 0x68
		::System::Single VerticalRestraints; // 0x6C
		::System::Single FalloffStart; // 0x70
		::System::Single BlendRadius; // 0x74
		::System::Boolean CameraFadeOut; // 0x78
		::System::Byte _padding0[0x3];
		::System::Single CameraFadeoutScale; // 0x7C
		::System::Single CameraFadeoutOffset; // 0x80
		::UnityEngine::Vector2 WindSpeed; // 0x84
		::System::UInt32 MaterialRenderQueue; // 0x8C
		::TA::SceneLightComponent::LightBillboardController_B67106F3F23501DB RenderingBlendMode; // 0x90
		::System::Boolean intensityControlledByES; // 0x94
		::System::Byte _padding1[0x3];
		::B88870E9FB4B8C1A::B15072CFB0F4977D ControlMode; // 0x98
		::System::Byte _padding2[0x4];
		::UnityEngine::FAED0374422E783A* CustomCurve; // 0xA0
		::B88870E9FB4B8C1A::EBEF12FEF73806C7 m_LocalLightLevel; // 0xA8
		::System::Boolean isFarLight; // 0xAC

		::System::Void A6AF450CCE60E5F2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_LIGHTBILLBOARDCONTROLLER_A6AF450CCE60E5F2_OFFSET))(this);
		}

		::System::Boolean AD970635A668CF89()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_LIGHTBILLBOARDCONTROLLER_AD970635A668CF89_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_LIGHTBILLBOARDCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
