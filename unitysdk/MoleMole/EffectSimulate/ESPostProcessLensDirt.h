#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigEntityLensDirtEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector4KeyframeCurve; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x1B8D48A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1B8D71B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x1B8D4630)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1B8D5510)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x1B8D5190)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x1B8D4620)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x1B8D42D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x1B8D8470)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x1B8D7D30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8D8BB0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessLensDirt_TypeDefinitionIndex = 55088;

	class ESPostProcessLensDirt
	{
	public:
		::MoleMole::Config::ConfigEntityLensDirtEffects* m_stAsset; // 0xB0
		::UnityEngine::Texture* _VolDefault_dirtTexture; // 0xB8
		::System::Boolean _VolDefault_enable; // 0xC0
		::System::Byte _padding0[0x3];
		::System::Single _VolDefault_intensity; // 0xC4
		::UnityEngine::Vector4 _VolDefault_dirtTextureScaleOffset; // 0xC8
		::UnityEngine::Texture* _VolDefault_dirtTextureOverlay; // 0xD8
		::UnityEngine::Vector4 _VolDefault_dirtTextureOverlayScaleOffset; // 0xE0
		::System::Single _VolDefault_dirtFlickFrequency; // 0xF0
		::System::Boolean _VolPreVal_dirtTexture_overrideState; // 0xF4
		::System::Byte _padding1[0x3];
		::UnityEngine::Texture* _VolPreVal_dirtTexture; // 0xF8
		::System::Boolean _VolPreVal_enable_overrideState; // 0x100
		::System::Boolean _VolPreVal_enable; // 0x101
		::System::Boolean _VolPreVal_intensity_overrideState; // 0x102
		::System::Byte _padding2[0x1];
		::System::Single _VolPreVal_intensity; // 0x104
		::System::Boolean _VolPreVal_dirtTextureScaleOffset_overrideState; // 0x108
		::System::Byte _padding3[0x3];
		::UnityEngine::Vector4 _VolPreVal_dirtTextureScaleOffset; // 0x10C
		::System::Boolean _VolPreVal_dirtTextureOverlay_overrideState; // 0x11C
		::System::Byte _padding4[0x3];
		::UnityEngine::Texture* _VolPreVal_dirtTextureOverlay; // 0x120
		::System::Boolean _VolPreVal_dirtTextureOverlayScaleOffset_overrideState; // 0x128
		::System::Byte _padding5[0x3];
		::UnityEngine::Vector4 _VolPreVal_dirtTextureOverlayScaleOffset; // 0x12C
		::System::Boolean _VolPreVal_dirtFlickFrequency_overrideState; // 0x13C
		::System::Byte _padding6[0x3];
		::System::Single _VolPreVal_dirtFlickFrequency; // 0x140
		::System::Single _TimelineCurveFirstVal_intensity; // 0x144
		::System::Single _TimelineCurveLastVal_intensity; // 0x148
		::UnityEngine::Vector4 _TimelineCurveFirstVal_dirtTextureScaleOffset; // 0x14C
		::UnityEngine::Vector4 _TimelineCurveLastVal_dirtTextureScaleOffset; // 0x15C
		::UnityEngine::Vector4 _TimelineCurveFirstVal_dirtTextureOverlayScaleOffset; // 0x16C
		::UnityEngine::Vector4 _TimelineCurveLastVal_dirtTextureOverlayScaleOffset; // 0x17C
		::System::Single _TimelineCurveFirstVal_dirtFlickFrequency; // 0x18C
		::System::Single _TimelineCurveLastVal_dirtFlickFrequency; // 0x190
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dirtTexture_FieldHandleType; // 0x194
		::UnityEngine::Texture* ESPP_dirtTexture; // 0x198
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enable_FieldHandleType; // 0x1A0
		::System::Boolean ESPP_enable; // 0x1A4
		::System::Byte _padding7[0x3];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x1A8
		::System::Boolean ESPP_intensity_UseIt; // 0x1AC
		::System::Byte _padding8[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x1B0
		::System::Boolean ESPP_intensity_EnableFade; // 0x1B8
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x1B9
		::System::Byte _padding9[0x2];
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x1BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dirtTextureScaleOffset_FieldHandleType; // 0x1C0
		::System::Boolean ESPP_dirtTextureScaleOffset_UseIt; // 0x1C4
		::System::Byte _padding10[0x3];
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_dirtTextureScaleOffset; // 0x1C8
		::System::Boolean ESPP_dirtTextureScaleOffset_EnableFade; // 0x1D0
		::System::Boolean ESPP_dirtTextureScaleOffset_EnableOverrideDefaultValue; // 0x1D1
		::System::Byte _padding11[0x2];
		::UnityEngine::Vector4 ESPP_dirtTextureScaleOffset_OverrideDefaultValue; // 0x1D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dirtTextureOverlay_FieldHandleType; // 0x1E4
		::UnityEngine::Texture* ESPP_dirtTextureOverlay; // 0x1E8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dirtTextureOverlayScaleOffset_FieldHandleType; // 0x1F0
		::System::Boolean ESPP_dirtTextureOverlayScaleOffset_UseIt; // 0x1F4
		::System::Byte _padding12[0x3];
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_dirtTextureOverlayScaleOffset; // 0x1F8
		::System::Boolean ESPP_dirtTextureOverlayScaleOffset_EnableFade; // 0x200
		::System::Boolean ESPP_dirtTextureOverlayScaleOffset_EnableOverrideDefaultValue; // 0x201
		::System::Byte _padding13[0x2];
		::UnityEngine::Vector4 ESPP_dirtTextureOverlayScaleOffset_OverrideDefaultValue; // 0x204
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dirtFlickFrequency_FieldHandleType; // 0x214
		::System::Boolean ESPP_dirtFlickFrequency_UseIt; // 0x218
		::System::Byte _padding14[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_dirtFlickFrequency; // 0x220
		::System::Boolean ESPP_dirtFlickFrequency_EnableFade; // 0x228
		::System::Boolean ESPP_dirtFlickFrequency_EnableOverrideDefaultValue; // 0x229
		::System::Byte _padding15[0x2];
		::System::Single ESPP_dirtFlickFrequency_OverrideDefaultValue; // 0x22C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSLENSDIRT_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
