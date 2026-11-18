#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigEntityDistortionEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x1A0760E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1A079240)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x1A075E90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1A076F00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x1A076C20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x1A075E80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x1A075B30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x1A07A790)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x1A079FB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A07AF70)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessDistortion_TypeDefinitionIndex = 90483;

	class ESPostProcessDistortion
	{
	public:
		::MoleMole::Config::ConfigEntityDistortionEffects* m_stAsset; // 0xB0
		::System::Single _DefaultIntensity; // 0xB8
		::System::Single _DefaultSeparateRGBIntensity; // 0xBC
		::System::Int32 _VolDefault_downScaleFactor; // 0xC0
		::System::Single _VolDefault_intensity; // 0xC4
		::UnityEngine::Vector3 _VolDefault_rgbShift; // 0xC8
		::System::Single _VolDefault_separateRGBIntensity; // 0xD4
		::System::Boolean _VolDefault_forceActive; // 0xD8
		::System::Boolean _VolDefault_forceDistortionOnLowPlatform; // 0xD9
		::System::Byte _padding0[0x2];
		::UnityEngine::NAPRenderPipeline0::DistortionQueueType _VolDefault_effectRenderQueue; // 0xDC
		::System::Boolean _VolPreVal_downScaleFactor_overrideState; // 0xE0
		::System::Byte _padding1[0x3];
		::System::Int32 _VolPreVal_downScaleFactor; // 0xE4
		::System::Boolean _VolPreVal_intensity_overrideState; // 0xE8
		::System::Byte _padding2[0x3];
		::System::Single _VolPreVal_intensity; // 0xEC
		::System::Boolean _VolPreVal_rgbShift_overrideState; // 0xF0
		::System::Byte _padding3[0x3];
		::UnityEngine::Vector3 _VolPreVal_rgbShift; // 0xF4
		::System::Boolean _VolPreVal_separateRGBIntensity_overrideState; // 0x100
		::System::Byte _padding4[0x3];
		::System::Single _VolPreVal_separateRGBIntensity; // 0x104
		::System::Boolean _VolPreVal_forceActive_overrideState; // 0x108
		::System::Boolean _VolPreVal_forceActive; // 0x109
		::System::Boolean _VolPreVal_forceDistortionOnLowPlatform_overrideState; // 0x10A
		::System::Boolean _VolPreVal_forceDistortionOnLowPlatform; // 0x10B
		::System::Boolean _VolPreVal_effectRenderQueue_overrideState; // 0x10C
		::System::Byte _padding5[0x3];
		::UnityEngine::NAPRenderPipeline0::DistortionQueueType _VolPreVal_effectRenderQueue; // 0x110
		::System::Single _TimelineCurveFirstVal_intensity; // 0x114
		::System::Single _TimelineCurveLastVal_intensity; // 0x118
		::System::Single _TimelineCurveFirstVal_separateRGBIntensity; // 0x11C
		::System::Single _TimelineCurveLastVal_separateRGBIntensity; // 0x120
		::System::Boolean _TimelineCurveFirstVal_forceActive; // 0x124
		::System::Boolean _TimelineCurveLastVal_forceActive; // 0x125
		::System::Boolean _TimelineCurveFirstVal_forceDistortionOnLowPlatform; // 0x126
		::System::Boolean _TimelineCurveLastVal_forceDistortionOnLowPlatform; // 0x127
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_downScaleFactor_FieldHandleType; // 0x128
		::System::Int32 ESPP_downScaleFactor; // 0x12C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x130
		::System::Boolean ESPP_intensity_UseIt; // 0x134
		::System::Byte _padding6[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x138
		::System::Boolean ESPP_intensity_EnableFade; // 0x140
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x141
		::System::Byte _padding7[0x2];
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x144
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rgbShift_FieldHandleType; // 0x148
		::UnityEngine::Vector3 ESPP_rgbShift; // 0x14C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_separateRGBIntensity_FieldHandleType; // 0x158
		::System::Boolean ESPP_separateRGBIntensity_UseIt; // 0x15C
		::System::Byte _padding8[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_separateRGBIntensity; // 0x160
		::System::Boolean ESPP_separateRGBIntensity_EnableFade; // 0x168
		::System::Boolean ESPP_separateRGBIntensity_EnableOverrideDefaultValue; // 0x169
		::System::Byte _padding9[0x2];
		::System::Single ESPP_separateRGBIntensity_OverrideDefaultValue; // 0x16C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_forceActive_FieldHandleType; // 0x170
		::System::Boolean ESPP_forceActive_UseIt; // 0x174
		::System::Byte _padding10[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_forceActive; // 0x178
		::System::Boolean ESPP_forceActive_EnableFade; // 0x180
		::System::Boolean ESPP_forceActive_EnableOverrideDefaultValue; // 0x181
		::System::Boolean ESPP_forceActive_OverrideDefaultValue; // 0x182
		::System::Byte _padding11[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_forceDistortionOnLowPlatform_FieldHandleType; // 0x184
		::System::Boolean ESPP_forceDistortionOnLowPlatform_UseIt; // 0x188
		::System::Byte _padding12[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_forceDistortionOnLowPlatform; // 0x190
		::System::Boolean ESPP_forceDistortionOnLowPlatform_EnableFade; // 0x198
		::System::Boolean ESPP_forceDistortionOnLowPlatform_EnableOverrideDefaultValue; // 0x199
		::System::Boolean ESPP_forceDistortionOnLowPlatform_OverrideDefaultValue; // 0x19A
		::System::Byte _padding13[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_effectRenderQueue_FieldHandleType; // 0x19C
		::UnityEngine::NAPRenderPipeline0::DistortionQueueType ESPP_effectRenderQueue; // 0x1A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
