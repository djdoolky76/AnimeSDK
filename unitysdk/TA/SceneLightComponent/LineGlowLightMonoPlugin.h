#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/B15072CFB0F4977D.h"
#include "unitysdk/B88870E9FB4B8C1A/EBEF12FEF73806C7.h"
#include "unitysdk/TA/SceneLightComponent/LineGlowLightMonoPlugin_A0307D6E8D7E08AD.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace UnityEngine { class FAED0374422E783A; }

#define TA_SCENELIGHTCOMPONENT_LINEGLOWLIGHTMONOPLUGIN_AD970635A668CF89_OFFSET UNITYSDK_OFFSET(0x1678550)
#define TA_SCENELIGHTCOMPONENT_LINEGLOWLIGHTMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x28E4D80)

namespace TA::SceneLightComponent
{
	inline static constexpr unsigned int LineGlowLightMonoPlugin_TypeDefinitionIndex = 16363;

	class LineGlowLightMonoPlugin
	{
	public:
		::UnityEngine::E46B881AA2636190 Color; // 0x28
		::System::Single AlphaScale; // 0x38
		::System::Single BaseFadeOut; // 0x3C
		::System::Single NoiseFrequence; // 0x40
		::System::Single NoiseSpeed; // 0x44
		::System::Single HeadFade; // 0x48
		::System::Single Deform; // 0x4C
		::System::Single SoftParticleRange; // 0x50
		::System::Single SoftParticleSmoothness; // 0x54
		::TA::SceneLightComponent::LineGlowLightMonoPlugin_A0307D6E8D7E08AD Channle; // 0x58
		::System::Boolean intensityControlledByES; // 0x5C
		::System::Byte _padding0[0x3];
		::B88870E9FB4B8C1A::B15072CFB0F4977D ControlMode; // 0x60
		::System::Byte _padding1[0x4];
		::UnityEngine::FAED0374422E783A* CustomCurve; // 0x68
		::B88870E9FB4B8C1A::EBEF12FEF73806C7 m_LocalLightLevel; // 0x70
		::System::Boolean IsFarLight; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_LINEGLOWLIGHTMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Boolean AD970635A668CF89()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_LINEGLOWLIGHTMONOPLUGIN_AD970635A668CF89_OFFSET))(this);
		}
	};
}
