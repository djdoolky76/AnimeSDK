#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigLensDistortions; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x16224AC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x16226EF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x16224880)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x162256F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x162252A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x16224870)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x16224430)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x16228480)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x16227A00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16228F00)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessLensDistortion_TypeDefinitionIndex = 82471;

	class ESPostProcessLensDistortion
	{
	public:
		::MoleMole::Config::ConfigLensDistortions* m_stAsset; // 0xB0
		::System::Single _DefaultIntensity; // 0xB8
		::System::Single _DefaultXMultiplier; // 0xBC
		::System::Single _DefaultYMultiplier; // 0xC0
		::System::Single _DefaultScale; // 0xC4
		::System::Single _DefaultDepthClip; // 0xC8
		::UnityEngine::Vector2 _DefaultCenter; // 0xCC
		::System::Single _VolDefault_intensity; // 0xD4
		::System::Single _VolDefault_xMultiplier; // 0xD8
		::System::Single _VolDefault_yMultiplier; // 0xDC
		::System::Single _VolDefault_scale; // 0xE0
		::System::Single _VolDefault_depthClip; // 0xE4
		::UnityEngine::Vector2 _VolDefault_center; // 0xE8
		::System::Boolean _VolPreVal_intensity_overrideState; // 0xF0
		::System::Byte _padding0[0x3];
		::System::Single _VolPreVal_intensity; // 0xF4
		::System::Boolean _VolPreVal_xMultiplier_overrideState; // 0xF8
		::System::Byte _padding1[0x3];
		::System::Single _VolPreVal_xMultiplier; // 0xFC
		::System::Boolean _VolPreVal_yMultiplier_overrideState; // 0x100
		::System::Byte _padding2[0x3];
		::System::Single _VolPreVal_yMultiplier; // 0x104
		::System::Boolean _VolPreVal_scale_overrideState; // 0x108
		::System::Byte _padding3[0x3];
		::System::Single _VolPreVal_scale; // 0x10C
		::System::Boolean _VolPreVal_depthClip_overrideState; // 0x110
		::System::Byte _padding4[0x3];
		::System::Single _VolPreVal_depthClip; // 0x114
		::System::Boolean _VolPreVal_center_overrideState; // 0x118
		::System::Byte _padding5[0x3];
		::UnityEngine::Vector2 _VolPreVal_center; // 0x11C
		::System::Single _TimelineCurveFirstVal_intensity; // 0x124
		::System::Single _TimelineCurveLastVal_intensity; // 0x128
		::System::Single _TimelineCurveFirstVal_xMultiplier; // 0x12C
		::System::Single _TimelineCurveLastVal_xMultiplier; // 0x130
		::System::Single _TimelineCurveFirstVal_yMultiplier; // 0x134
		::System::Single _TimelineCurveLastVal_yMultiplier; // 0x138
		::System::Single _TimelineCurveFirstVal_scale; // 0x13C
		::System::Single _TimelineCurveLastVal_scale; // 0x140
		::System::Single _TimelineCurveFirstVal_depthClip; // 0x144
		::System::Single _TimelineCurveLastVal_depthClip; // 0x148
		::UnityEngine::Vector2 _TimelineCurveFirstVal_center; // 0x14C
		::UnityEngine::Vector2 _TimelineCurveLastVal_center; // 0x154
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x15C
		::System::Boolean ESPP_intensity_UseIt; // 0x160
		::System::Byte _padding6[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x168
		::System::Boolean ESPP_intensity_EnableFade; // 0x170
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x171
		::System::Byte _padding7[0x2];
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x174
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_xMultiplier_FieldHandleType; // 0x178
		::System::Boolean ESPP_xMultiplier_UseIt; // 0x17C
		::System::Byte _padding8[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_xMultiplier; // 0x180
		::System::Boolean ESPP_xMultiplier_EnableFade; // 0x188
		::System::Boolean ESPP_xMultiplier_EnableOverrideDefaultValue; // 0x189
		::System::Byte _padding9[0x2];
		::System::Single ESPP_xMultiplier_OverrideDefaultValue; // 0x18C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_yMultiplier_FieldHandleType; // 0x190
		::System::Boolean ESPP_yMultiplier_UseIt; // 0x194
		::System::Byte _padding10[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_yMultiplier; // 0x198
		::System::Boolean ESPP_yMultiplier_EnableFade; // 0x1A0
		::System::Boolean ESPP_yMultiplier_EnableOverrideDefaultValue; // 0x1A1
		::System::Byte _padding11[0x2];
		::System::Single ESPP_yMultiplier_OverrideDefaultValue; // 0x1A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scale_FieldHandleType; // 0x1A8
		::System::Boolean ESPP_scale_UseIt; // 0x1AC
		::System::Byte _padding12[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scale; // 0x1B0
		::System::Boolean ESPP_scale_EnableFade; // 0x1B8
		::System::Boolean ESPP_scale_EnableOverrideDefaultValue; // 0x1B9
		::System::Byte _padding13[0x2];
		::System::Single ESPP_scale_OverrideDefaultValue; // 0x1BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_depthClip_FieldHandleType; // 0x1C0
		::System::Boolean ESPP_depthClip_UseIt; // 0x1C4
		::System::Byte _padding14[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_depthClip; // 0x1C8
		::System::Boolean ESPP_depthClip_EnableFade; // 0x1D0
		::System::Boolean ESPP_depthClip_EnableOverrideDefaultValue; // 0x1D1
		::System::Byte _padding15[0x2];
		::System::Single ESPP_depthClip_OverrideDefaultValue; // 0x1D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_center_FieldHandleType; // 0x1D8
		::System::Boolean ESPP_center_UseIt; // 0x1DC
		::System::Byte _padding16[0x3];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_center; // 0x1E0
		::System::Boolean ESPP_center_EnableFade; // 0x1E8
		::System::Boolean ESPP_center_EnableOverrideDefaultValue; // 0x1E9
		::System::Byte _padding17[0x2];
		::UnityEngine::Vector2 ESPP_center_OverrideDefaultValue; // 0x1EC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDISTORTION_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
