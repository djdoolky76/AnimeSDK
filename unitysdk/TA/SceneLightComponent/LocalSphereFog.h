#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/B15072CFB0F4977D.h"
#include "unitysdk/B88870E9FB4B8C1A/EBEF12FEF73806C7.h"
#include "unitysdk/TA/SceneLightComponent/LocalSphereFog_B67106F3F23501DB.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace UnityEngine { class FAED0374422E783A; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define TA_SCENELIGHTCOMPONENT_LOCALSPHEREFOG_A6AF450CCE60E5F2_OFFSET UNITYSDK_OFFSET(0x28E4FB0)
#define TA_SCENELIGHTCOMPONENT_LOCALSPHEREFOG_AD970635A668CF89_OFFSET UNITYSDK_OFFSET(0x1678550)
#define TA_SCENELIGHTCOMPONENT_LOCALSPHEREFOG__CTOR_OFFSET UNITYSDK_OFFSET(0x28E5000)

namespace TA::SceneLightComponent
{
	inline static constexpr unsigned int LocalSphereFog_TypeDefinitionIndex = 16409;

	class LocalSphereFog
	{
	public:
		::UnityEngine::E46B881AA2636190 color; // 0x28
		::System::Boolean enableGradient; // 0x38
		::System::Byte _padding0[0x7];
		::UnityEngine::Texture* ScatterFadeRamp; // 0x40
		::System::Single lower; // 0x48
		::System::Single upper; // 0x4C
		::System::Single fadePointNear; // 0x50
		::System::Single nearDensity; // 0x54
		::System::Single fadePointFar; // 0x58
		::System::Single farDensity; // 0x5C
		::System::Single heightFallOff; // 0x60
		::System::Boolean overrideRenderQueue; // 0x64
		::System::Byte _padding1[0x3];
		::System::UInt32 MaterialRenderQueue; // 0x68
		::TA::SceneLightComponent::LocalSphereFog_B67106F3F23501DB RenderingBlendMode; // 0x6C
		::System::Boolean CameraFadeOut; // 0x70
		::System::Byte _padding2[0x3];
		::System::Single CameraFadeoutScale; // 0x74
		::System::Single CameraFadeoutOffset; // 0x78
		::System::Boolean intensityControlledByES; // 0x7C
		::System::Byte _padding3[0x3];
		::B88870E9FB4B8C1A::B15072CFB0F4977D ControlMode; // 0x80
		::System::Byte _padding4[0x4];
		::UnityEngine::FAED0374422E783A* CustomCurve; // 0x88
		::System::Boolean isFarlight; // 0x90
		::System::Byte _padding5[0x3];
		::B88870E9FB4B8C1A::EBEF12FEF73806C7 m_LocalLightLevel; // 0x94
		::UnityEngine::Material* defaultMaterial; // 0x98
		::UnityEngine::Material* gradientMaterial; // 0xA0
		::System::Int32 matrenderQueue; // 0xA8

		::System::Void A6AF450CCE60E5F2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_LOCALSPHEREFOG_A6AF450CCE60E5F2_OFFSET))(this);
		}

		::System::Boolean AD970635A668CF89()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_LOCALSPHEREFOG_AD970635A668CF89_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_SCENELIGHTCOMPONENT_LOCALSPHEREFOG__CTOR_OFFSET))(this);
		}
	};
}
