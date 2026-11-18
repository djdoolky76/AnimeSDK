#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityVignettes; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x190ED670)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_ADDIBGGBBBL_OFFSET UNITYSDK_OFFSET(0x1243FD70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1243DCA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x190ED470)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x190EE1E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x190EDE00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x190ED460)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x190ED0A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x1243F080)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x1243E6F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1243FA10)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessVignette_TypeDefinitionIndex = 51259;

	class ESPostProcessVignette
	{
	public:
		::MoleMole::Config::ConfigEntityVignettes* m_stAsset; // 0xB0
		::UnityEngine::Color _DefaultColor; // 0xB8
		::UnityEngine::Vector2 _DefaultCenter; // 0xC8
		::System::Single _DefaultIntensity; // 0xD0
		::System::Single _DefaultSmoothness; // 0xD4
		::System::Boolean _DefaultRounded; // 0xD8
		::System::Byte _padding0[0x3];
		::UnityEngine::Color _VolDefault_color; // 0xDC
		::UnityEngine::Vector2 _VolDefault_center; // 0xEC
		::System::Single _VolDefault_intensity; // 0xF4
		::System::Single _VolDefault_smoothness; // 0xF8
		::System::Boolean _VolDefault_rounded; // 0xFC
		::System::Boolean _VolPreVal_color_overrideState; // 0xFD
		::System::Byte _padding1[0x2];
		::UnityEngine::Color _VolPreVal_color; // 0x100
		::System::Boolean _VolPreVal_center_overrideState; // 0x110
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector2 _VolPreVal_center; // 0x114
		::System::Boolean _VolPreVal_intensity_overrideState; // 0x11C
		::System::Byte _padding3[0x3];
		::System::Single _VolPreVal_intensity; // 0x120
		::System::Boolean _VolPreVal_smoothness_overrideState; // 0x124
		::System::Byte _padding4[0x3];
		::System::Single _VolPreVal_smoothness; // 0x128
		::System::Boolean _VolPreVal_rounded_overrideState; // 0x12C
		::System::Boolean _VolPreVal_rounded; // 0x12D
		::System::Byte _padding5[0x2];
		::UnityEngine::Color _TimelineCurveFirstVal_color; // 0x130
		::UnityEngine::Color _TimelineCurveLastVal_color; // 0x140
		::UnityEngine::Vector2 _TimelineCurveFirstVal_center; // 0x150
		::UnityEngine::Vector2 _TimelineCurveLastVal_center; // 0x158
		::System::Single _TimelineCurveFirstVal_intensity; // 0x160
		::System::Single _TimelineCurveLastVal_intensity; // 0x164
		::System::Single _TimelineCurveFirstVal_smoothness; // 0x168
		::System::Single _TimelineCurveLastVal_smoothness; // 0x16C
		::System::Boolean _TimelineCurveFirstVal_rounded; // 0x170
		::System::Boolean _TimelineCurveLastVal_rounded; // 0x171
		::System::Byte _padding6[0x2];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_color_KeyFrame_FieldHandleType; // 0x174
		::System::Boolean ESPP_color_KeyFrame_UseIt; // 0x178
		::System::Byte _padding7[0x7];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_color_KeyFrame; // 0x180
		::System::Boolean ESPP_color_KeyFrame_EnableFade; // 0x188
		::System::Boolean ESPP_color_KeyFrame_EnableOverrideDefaultValue; // 0x189
		::System::Byte _padding8[0x2];
		::UnityEngine::Color ESPP_color_KeyFrame_OverrideDefaultValue; // 0x18C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_center_FieldHandleType; // 0x19C
		::System::Boolean ESPP_center_UseIt; // 0x1A0
		::System::Byte _padding9[0x7];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_center; // 0x1A8
		::System::Boolean ESPP_center_EnableFade; // 0x1B0
		::System::Boolean ESPP_center_EnableOverrideDefaultValue; // 0x1B1
		::System::Byte _padding10[0x2];
		::UnityEngine::Vector2 ESPP_center_OverrideDefaultValue; // 0x1B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x1BC
		::System::Boolean ESPP_intensity_UseIt; // 0x1C0
		::System::Byte _padding11[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x1C8
		::System::Boolean ESPP_intensity_EnableFade; // 0x1D0
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x1D1
		::System::Byte _padding12[0x2];
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x1D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_smoothness_FieldHandleType; // 0x1D8
		::System::Boolean ESPP_smoothness_UseIt; // 0x1DC
		::System::Byte _padding13[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_smoothness; // 0x1E0
		::System::Boolean ESPP_smoothness_EnableFade; // 0x1E8
		::System::Boolean ESPP_smoothness_EnableOverrideDefaultValue; // 0x1E9
		::System::Byte _padding14[0x2];
		::System::Single ESPP_smoothness_OverrideDefaultValue; // 0x1EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rounded_FieldHandleType; // 0x1F0
		::System::Boolean ESPP_rounded_UseIt; // 0x1F4
		::System::Byte _padding15[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_rounded; // 0x1F8
		::System::Boolean ESPP_rounded_EnableFade; // 0x200
		::System::Boolean ESPP_rounded_EnableOverrideDefaultValue; // 0x201
		::System::Boolean ESPP_rounded_OverrideDefaultValue; // 0x202
		::System::Byte _padding16[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_color_FieldHandleType; // 0x204
		::UnityEngine::Color ESPP_color; // 0x208

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ADDIBGGBBBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_ADDIBGGBBBL_OFFSET))(this);
		}
	};
}
