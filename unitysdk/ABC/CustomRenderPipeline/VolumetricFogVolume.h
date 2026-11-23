#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/B15072CFB0F4977D.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/F70547FE5596CB1B.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"

namespace UnityEngine { class FAED0374422E783A; }

#define ABC_CUSTOMRENDERPIPELINE_VOLUMETRICFOGVOLUME_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x27FCA20)
#define ABC_CUSTOMRENDERPIPELINE_VOLUMETRICFOGVOLUME_AEFA619BA582655E_OFFSET UNITYSDK_OFFSET(0x27FC4E0)
#define ABC_CUSTOMRENDERPIPELINE_VOLUMETRICFOGVOLUME_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x27FCA70)
#define ABC_CUSTOMRENDERPIPELINE_VOLUMETRICFOGVOLUME_ED34FA0FEC80BACE_OFFSET UNITYSDK_OFFSET(0x27FC830)
#define ABC_CUSTOMRENDERPIPELINE_VOLUMETRICFOGVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x27FCAC0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int VolumetricFogVolume_TypeDefinitionIndex = 16787;

	class VolumetricFogVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::E46B881AA2636190 fogAlbedo; // 0x20
		::UnityEngine::E46B881AA2636190 fogEmissive; // 0x30
		::System::Single giStrength; // 0x40
		::System::Single heightFogStart; // 0x44
		::System::Single heightFogExponent; // 0x48
		::System::Single fogMainLightStrengthScale; // 0x4C
		::System::Single fogLocalLightStrengthScale; // 0x50
		::System::Single extinctFar; // 0x54
		::System::Single extinctNear; // 0x58
		::System::Single sphereRadius; // 0x5C
		::System::Single radialExponent; // 0x60
		::System::Single farFadeDistance; // 0x64
		::System::Single nearFadeDistance; // 0x68
		::System::Single lerpToGlobal; // 0x6C
		::System::Boolean intensityControlledByES; // 0x70
		::System::Byte _padding0[0x3];
		::B88870E9FB4B8C1A::B15072CFB0F4977D intensityControlMode; // 0x74
		::UnityEngine::FAED0374422E783A* customIntensityCurve; // 0x78
		::System::Boolean visible; // 0x80

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_VOLUMETRICFOGVOLUME_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::F70547FE5596CB1B AEFA619BA582655E(::System::Single B46F2466742F1848)
		{
			return ((::F70547FE5596CB1B(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_VOLUMETRICFOGVOLUME_AEFA619BA582655E_OFFSET))(this, B46F2466742F1848);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_VOLUMETRICFOGVOLUME__CTOR_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_VOLUMETRICFOGVOLUME_BF13C91AD80643D2_OFFSET))(this);
		}

		::UnityEngine::B3A7F113FE1DE383 ED34FA0FEC80BACE()
		{
			return ((::UnityEngine::B3A7F113FE1DE383(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_VOLUMETRICFOGVOLUME_ED34FA0FEC80BACE_OFFSET))(this);
		}
	};
}
