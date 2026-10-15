#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::CustomRP { class VolumetricFogController; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CUSTOMRP_VOLUMETRICFOGCONTROLLER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC7CAD0)
#define RPG_CUSTOMRP_VOLUMETRICFOGCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC7CA40)
#define RPG_CUSTOMRP_VOLUMETRICFOGCONTROLLER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1CC7C830)
#define RPG_CUSTOMRP_VOLUMETRICFOGCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CC7C9E0)
#define RPG_CUSTOMRP_VOLUMETRICFOGCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CC7C980)
#define RPG_CUSTOMRP_VOLUMETRICFOGCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CC7C900)

namespace RPG::CustomRP
{
	class VolumetricFogController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single StartDistance; // 0x1C
		::System::Single FarCutoffDistance; // 0x20
		::System::Single DistanceFade; // 0x24
		::System::Single DistanceFadeExp; // 0x28
		::UnityEngine::Color AmbientColor; // 0x2C
		::System::Single AmbientIntensity; // 0x3C
		::System::Single LightScatteringIntensity; // 0x40
		::System::Boolean UseLocalLight; // 0x44
		::System::Boolean FogColorAffectLighting; // 0x45
		::System::Boolean EmissionUseConstantDensity; // 0x46
		::System::Byte _padding1[0x1];
		::System::Single ConstantDensity; // 0x48
		::System::Single PhaseG; // 0x4C
		::System::Single PhaseBase; // 0x50
		::System::Single PhaseScale; // 0x54
		::System::Single GlobalFogDensity; // 0x58
		::UnityEngine::Color GlobalFogColor; // 0x5C
		::System::Boolean UseHeightFog; // 0x6C
		::System::Byte _padding2[0x3];
		::System::Single HeightFogFalloff; // 0x70
		::System::Single HeightFogHeight; // 0x74
		::System::Boolean UseSecondGlobalFog; // 0x78
		::System::Byte _padding3[0x3];
		::System::Single SecondFogDensity; // 0x7C
		::UnityEngine::Color SecondFogColor; // 0x80
		::System::Boolean SecondFogUseHeightFog; // 0x90
		::System::Byte _padding4[0x3];
		::System::Single SecondHeightFogFalloff; // 0x94
		::System::Single SecondHeightFogHeight; // 0x98
		::System::Boolean UseNoise; // 0x9C
		::System::Byte _padding5[0x3];
		::System::Single NoiseTiling; // 0xA0
		::System::Single NoiseIntensity; // 0xA4
		::System::Single NoisePow; // 0xA8
		::System::Single MinFogDensity; // 0xAC
		::System::Single DepthSliceScale; // 0xB0
		::System::Single ResolutionScale; // 0xB4
		::System::Single TemporalAccumulationFactor; // 0xB8
		::System::Single TemporalJitterScale; // 0xBC
		::System::Boolean UseTemporalFilter; // 0xC0
		::System::Boolean UseSpatialFilter; // 0xC1
		::System::Byte _padding6[0x2];
		::System::Single SpatialFilterSize; // 0xC4
		::System::Boolean UseMotionTex; // 0xC8
		static ::System::Collections::Generic::HashSet_1<::RPG::CustomRP::VolumetricFogController*>** StaticGet__instances()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::CustomRP::VolumetricFogController*>**)UnitySDK::FromName("RPG.CustomRP", "VolumetricFogController")->GetStaticField(0x370D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICFOGCONTROLLER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICFOGCONTROLLER_CCTOR_OFFSET))();
		}

		static ::RPG::CustomRP::VolumetricFogController* get_Instance()
		{
			return ((::RPG::CustomRP::VolumetricFogController*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICFOGCONTROLLER_GET_INSTANCE_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICFOGCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICFOGCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICFOGCONTROLLER_ONDESTROY_OFFSET))(this);
		}

	};
}
