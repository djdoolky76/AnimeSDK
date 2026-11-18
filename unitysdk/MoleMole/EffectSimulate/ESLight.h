#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LightType.h"

namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1B45A2E0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_BEAOLNJFLBL_OFFSET UNITYSDK_OFFSET(0x1B458B30)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_FFKHIHLMJCD_OFFSET UNITYSDK_OFFSET(0x1B458AB0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_FNFNKLBOOCE_OFFSET UNITYSDK_OFFSET(0x1B45AE80)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_GET_LIGHTTYPE_OFFSET UNITYSDK_OFFSET(0x1B459780)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_GHJJJKANOAM_OFFSET UNITYSDK_OFFSET(0x1B45B0C0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_IEIIAPJKAKN_OFFSET UNITYSDK_OFFSET(0x1B45AF10)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_LLLIDJKOBEC_OFFSET UNITYSDK_OFFSET(0x1B45AF90)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_MLOKIDFFEPH_OFFSET UNITYSDK_OFFSET(0x1B45AE70)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_MNLDADDKOMC_OFFSET UNITYSDK_OFFSET(0x1B45B160)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_NMIBBDCBLLE_OFFSET UNITYSDK_OFFSET(0x1B4593B0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1B45B030)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_OMGBHAKAGLE_OFFSET UNITYSDK_OFFSET(0x1B45ADE0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_ONMFOCAEDEI_OFFSET UNITYSDK_OFFSET(0x1B458B70)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B45A760)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT_PKOOKCIHDHF_OFFSET UNITYSDK_OFFSET(0x1B459900)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B45ADD0)
#define MOLEMOLE_EFFECTSIMULATE_ESLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B45A940)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESLight_TypeDefinitionIndex = 57416;

	class ESLight : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		static ::System::Boolean* StaticGet_CAN_IN_JOB()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ESLight_TypeDefinitionIndex)->GetStaticField(0x10BA0);
		}
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		::System::Boolean m_bHasSetVal; // 0x58
		::System::Byte _padding0[0x3];
		::System::Single m_RangeValCache; // 0x5C
		::System::Boolean m_bRangeChanged; // 0x60
		::System::Byte _padding1[0x3];
		::System::Single m_IndirectMultiplierValCache; // 0x64
		::System::Boolean m_bIndirectMultiplierChanged; // 0x68
		::System::Byte _padding2[0x3];
		::System::Single m_InnerSpotAngleValCache; // 0x6C
		::System::Boolean m_bInnerSpotAngleChanged; // 0x70
		::System::Byte _padding3[0x3];
		::System::Single m_OuterSpotAngleValCache; // 0x74
		::System::Boolean m_bOuterSpotAngleChanged; // 0x78
		::System::Byte _padding4[0x3];
		::System::Single m_IntensityValCache; // 0x7C
		::System::Boolean m_bIntensityChanged; // 0x80
		::System::Byte _padding5[0x3];
		::UnityEngine::Color m_ColorValCache; // 0x84
		::System::Boolean m_bColorChanged; // 0x94
		::System::Byte _padding6[0x3];
		::System::Single m_AvatarLightMultiplierValCache; // 0x98
		::System::Boolean m_bAvatarLightMultiplierChanged; // 0x9C
		::System::Byte _padding7[0x3];
		::UnityEngine::Color m_AvatarLightColorValCache; // 0xA0
		::System::Boolean m_bAvatarLightColorChanged; // 0xB0
		::System::Byte _padding8[0x7];
		::UnityEngine::Light* m_stLightCom; // 0xB8
		::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* m_stAdditionalLightData; // 0xC0
		::UnityEngine::LightType m_eLightTypeCache; // 0xC8
		::System::Byte _padding9[0x4];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* range; // 0xD0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* innerSpotAngle; // 0xD8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* outerSpotAngle; // 0xE0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* intensity; // 0xE8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* avatarLightMultiplier; // 0xF0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* indirectMultiplier; // 0xF8
		::MoleMole::EffectSimulate::ColorKeyframeCurve* color; // 0x100
		::MoleMole::EffectSimulate::ColorKeyframeCurve* avatarLightColor; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT__CCTOR_OFFSET))();
		}

		::System::Boolean FFKHIHLMJCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_FFKHIHLMJCD_OFFSET))(this);
		}

		::System::Boolean BEAOLNJFLBL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_BEAOLNJFLBL_OFFSET))(this);
		}

		::System::Void ONMFOCAEDEI(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_ONMFOCAEDEI_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void NMIBBDCBLLE(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_NMIBBDCBLLE_OFFSET))(this, HIIOCANBKAM);
		}

		::UnityEngine::LightType get_lightType()
		{
			return ((::UnityEngine::LightType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_GET_LIGHTTYPE_OFFSET))(this);
		}

		::System::Void PKOOKCIHDHF(::UnityEngine::GameObject* NJOAJLDJCCJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_PKOOKCIHDHF_OFFSET))(this, NJOAJLDJCCJ);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void PHOADBJGFBE(::System::Boolean PBKICEDNILK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_PHOADBJGFBE_OFFSET))(this, PBKICEDNILK);
		}

		::System::Boolean OMGBHAKAGLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_OMGBHAKAGLE_OFFSET))(this);
		}

		::System::Void MLOKIDFFEPH(::UnityEngine::GameObject* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_MLOKIDFFEPH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Boolean FNFNKLBOOCE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_FNFNKLBOOCE_OFFSET))(this);
		}

		::System::String* IEIIAPJKAKN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_IEIIAPJKAKN_OFFSET))(this);
		}

		::System::Void LLLIDJKOBEC(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_LLLIDJKOBEC_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OHFHFOHMBJH(::System::Boolean MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_OHFHFOHMBJH_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHJJJKANOAM(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_GHJJJKANOAM_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void MNLDADDKOMC(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESLIGHT_MNLDADDKOMC_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
