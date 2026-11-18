#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityAutoExposureEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x1BA641F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1BA667A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x1BA63FC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1BA64E10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x1BA649C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x1BA63FB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x1BA63B70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x1BA67CC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x1BA67290)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA686F0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessAutoExposure_TypeDefinitionIndex = 50947;

	class ESPostProcessAutoExposure
	{
	public:
		::MoleMole::Config::ConfigEntityAutoExposureEffects* m_stAsset; // 0xB0
		::UnityEngine::Vector2 _VolDefault_Filtering; // 0xB8
		::UnityEngine::Vector2 _VolDefault_LuminanceRange; // 0xC0
		::System::Single _VolDefault_ExposureCompensation; // 0xC8
		::System::Boolean _VolDefault_ProgressiveEyeAdaptation; // 0xCC
		::System::Byte _padding0[0x3];
		::System::Single _VolDefault_SpeedUp; // 0xD0
		::System::Single _VolDefault_SpeedDown; // 0xD4
		::System::Boolean _VolPreVal_Filtering_overrideState; // 0xD8
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector2 _VolPreVal_Filtering; // 0xDC
		::System::Boolean _VolPreVal_LuminanceRange_overrideState; // 0xE4
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector2 _VolPreVal_LuminanceRange; // 0xE8
		::System::Boolean _VolPreVal_ExposureCompensation_overrideState; // 0xF0
		::System::Byte _padding3[0x3];
		::System::Single _VolPreVal_ExposureCompensation; // 0xF4
		::System::Boolean _VolPreVal_ProgressiveEyeAdaptation_overrideState; // 0xF8
		::System::Boolean _VolPreVal_ProgressiveEyeAdaptation; // 0xF9
		::System::Boolean _VolPreVal_SpeedUp_overrideState; // 0xFA
		::System::Byte _padding4[0x1];
		::System::Single _VolPreVal_SpeedUp; // 0xFC
		::System::Boolean _VolPreVal_SpeedDown_overrideState; // 0x100
		::System::Byte _padding5[0x3];
		::System::Single _VolPreVal_SpeedDown; // 0x104
		::UnityEngine::Vector2 _TimelineCurveFirstVal_Filtering; // 0x108
		::UnityEngine::Vector2 _TimelineCurveLastVal_Filtering; // 0x110
		::UnityEngine::Vector2 _TimelineCurveFirstVal_LuminanceRange; // 0x118
		::UnityEngine::Vector2 _TimelineCurveLastVal_LuminanceRange; // 0x120
		::System::Single _TimelineCurveFirstVal_ExposureCompensation; // 0x128
		::System::Single _TimelineCurveLastVal_ExposureCompensation; // 0x12C
		::System::Boolean _TimelineCurveFirstVal_ProgressiveEyeAdaptation; // 0x130
		::System::Boolean _TimelineCurveLastVal_ProgressiveEyeAdaptation; // 0x131
		::System::Byte _padding6[0x2];
		::System::Single _TimelineCurveFirstVal_SpeedUp; // 0x134
		::System::Single _TimelineCurveLastVal_SpeedUp; // 0x138
		::System::Single _TimelineCurveFirstVal_SpeedDown; // 0x13C
		::System::Single _TimelineCurveLastVal_SpeedDown; // 0x140
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_Filtering_FieldHandleType; // 0x144
		::System::Boolean ESPP_Filtering_UseIt; // 0x148
		::System::Byte _padding7[0x7];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_Filtering; // 0x150
		::System::Boolean ESPP_Filtering_EnableFade; // 0x158
		::System::Boolean ESPP_Filtering_EnableOverrideDefaultValue; // 0x159
		::System::Byte _padding8[0x2];
		::UnityEngine::Vector2 ESPP_Filtering_OverrideDefaultValue; // 0x15C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_LuminanceRange_FieldHandleType; // 0x164
		::System::Boolean ESPP_LuminanceRange_UseIt; // 0x168
		::System::Byte _padding9[0x7];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_LuminanceRange; // 0x170
		::System::Boolean ESPP_LuminanceRange_EnableFade; // 0x178
		::System::Boolean ESPP_LuminanceRange_EnableOverrideDefaultValue; // 0x179
		::System::Byte _padding10[0x2];
		::UnityEngine::Vector2 ESPP_LuminanceRange_OverrideDefaultValue; // 0x17C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ExposureCompensation_FieldHandleType; // 0x184
		::System::Boolean ESPP_ExposureCompensation_UseIt; // 0x188
		::System::Byte _padding11[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_ExposureCompensation; // 0x190
		::System::Boolean ESPP_ExposureCompensation_EnableFade; // 0x198
		::System::Boolean ESPP_ExposureCompensation_EnableOverrideDefaultValue; // 0x199
		::System::Byte _padding12[0x2];
		::System::Single ESPP_ExposureCompensation_OverrideDefaultValue; // 0x19C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ProgressiveEyeAdaptation_FieldHandleType; // 0x1A0
		::System::Boolean ESPP_ProgressiveEyeAdaptation_UseIt; // 0x1A4
		::System::Byte _padding13[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_ProgressiveEyeAdaptation; // 0x1A8
		::System::Boolean ESPP_ProgressiveEyeAdaptation_EnableFade; // 0x1B0
		::System::Boolean ESPP_ProgressiveEyeAdaptation_EnableOverrideDefaultValue; // 0x1B1
		::System::Boolean ESPP_ProgressiveEyeAdaptation_OverrideDefaultValue; // 0x1B2
		::System::Byte _padding14[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_SpeedUp_FieldHandleType; // 0x1B4
		::System::Boolean ESPP_SpeedUp_UseIt; // 0x1B8
		::System::Byte _padding15[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_SpeedUp; // 0x1C0
		::System::Boolean ESPP_SpeedUp_EnableFade; // 0x1C8
		::System::Boolean ESPP_SpeedUp_EnableOverrideDefaultValue; // 0x1C9
		::System::Byte _padding16[0x2];
		::System::Single ESPP_SpeedUp_OverrideDefaultValue; // 0x1CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_SpeedDown_FieldHandleType; // 0x1D0
		::System::Boolean ESPP_SpeedDown_UseIt; // 0x1D4
		::System::Byte _padding17[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_SpeedDown; // 0x1D8
		::System::Boolean ESPP_SpeedDown_EnableFade; // 0x1E0
		::System::Boolean ESPP_SpeedDown_EnableOverrideDefaultValue; // 0x1E1
		::System::Byte _padding18[0x2];
		::System::Single ESPP_SpeedDown_OverrideDefaultValue; // 0x1E4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSAUTOEXPOSURE_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
