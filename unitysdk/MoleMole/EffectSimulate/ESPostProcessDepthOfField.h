#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofBlurQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

namespace MoleMole::Config { class ConfigDepthOfFieldEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x190D9140)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x190DEBF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x190D8DB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x190DAC00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x190DA440)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x190D8DA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x190D8710)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x190E14A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x190E0370)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x190E25D0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessDepthOfField_TypeDefinitionIndex = 41982;

	class ESPostProcessDepthOfField
	{
	public:
		::MoleMole::Config::ConfigDepthOfFieldEffects* m_stAsset; // 0xB0
		::UnityEngine::Rendering::Universal::DepthOfFieldMode _DefaultMode; // 0xB8
		::System::Single _DefaultGaussianStart; // 0xBC
		::System::Single _DefaultGaussianEnd; // 0xC0
		::System::Single _DefaultGaussianMaxRadius; // 0xC4
		::System::Boolean _DefaultHighQualitySampling; // 0xC8
		::System::Byte _padding0[0x3];
		::System::Single _DefaultFocusDistance; // 0xCC
		::System::Single _DefaultFocalLength; // 0xD0
		::System::Single _DefaultAperture; // 0xD4
		::System::Int32 _DefaultBladeCount; // 0xD8
		::System::Single _DefaultBladeCurvature; // 0xDC
		::System::Single _DefaultBladeRotation; // 0xE0
		::UnityEngine::Rendering::Universal::DepthOfFieldMode _VolDefault_mode; // 0xE4
		::UnityEngine::Rendering::Universal::DofDebugMode _VolDefault_debugMode; // 0xE8
		::System::Single _VolDefault_gaussianStart; // 0xEC
		::System::Single _VolDefault_gaussianEnd; // 0xF0
		::System::Single _VolDefault_gaussianMaxRadius; // 0xF4
		::System::Boolean _VolDefault_highQualitySampling; // 0xF8
		::System::Byte _padding1[0x3];
		::System::Single _VolDefault_focusDistance; // 0xFC
		::System::Single _VolDefault_focalLength; // 0x100
		::System::Single _VolDefault_aperture; // 0x104
		::System::Int32 _VolDefault_bladeCount; // 0x108
		::System::Single _VolDefault_bladeCurvature; // 0x10C
		::System::Single _VolDefault_bladeRotation; // 0x110
		::System::Boolean _VolDefault_discardNearCoc; // 0x114
		::System::Boolean _VolDefault_forceNoDefaultDof; // 0x115
		::System::Byte _padding2[0x2];
		::UnityEngine::Rendering::Universal::DofBlurQuality _VolDefault_blurQuality; // 0x118
		::System::Boolean _VolPreVal_mode_overrideState; // 0x11C
		::System::Byte _padding3[0x3];
		::UnityEngine::Rendering::Universal::DepthOfFieldMode _VolPreVal_mode; // 0x120
		::System::Boolean _VolPreVal_debugMode_overrideState; // 0x124
		::System::Byte _padding4[0x3];
		::UnityEngine::Rendering::Universal::DofDebugMode _VolPreVal_debugMode; // 0x128
		::System::Boolean _VolPreVal_gaussianStart_overrideState; // 0x12C
		::System::Byte _padding5[0x3];
		::System::Single _VolPreVal_gaussianStart; // 0x130
		::System::Boolean _VolPreVal_gaussianEnd_overrideState; // 0x134
		::System::Byte _padding6[0x3];
		::System::Single _VolPreVal_gaussianEnd; // 0x138
		::System::Boolean _VolPreVal_gaussianMaxRadius_overrideState; // 0x13C
		::System::Byte _padding7[0x3];
		::System::Single _VolPreVal_gaussianMaxRadius; // 0x140
		::System::Boolean _VolPreVal_highQualitySampling_overrideState; // 0x144
		::System::Boolean _VolPreVal_highQualitySampling; // 0x145
		::System::Boolean _VolPreVal_focusDistance_overrideState; // 0x146
		::System::Byte _padding8[0x1];
		::System::Single _VolPreVal_focusDistance; // 0x148
		::System::Boolean _VolPreVal_focalLength_overrideState; // 0x14C
		::System::Byte _padding9[0x3];
		::System::Single _VolPreVal_focalLength; // 0x150
		::System::Boolean _VolPreVal_aperture_overrideState; // 0x154
		::System::Byte _padding10[0x3];
		::System::Single _VolPreVal_aperture; // 0x158
		::System::Boolean _VolPreVal_bladeCount_overrideState; // 0x15C
		::System::Byte _padding11[0x3];
		::System::Int32 _VolPreVal_bladeCount; // 0x160
		::System::Boolean _VolPreVal_bladeCurvature_overrideState; // 0x164
		::System::Byte _padding12[0x3];
		::System::Single _VolPreVal_bladeCurvature; // 0x168
		::System::Boolean _VolPreVal_bladeRotation_overrideState; // 0x16C
		::System::Byte _padding13[0x3];
		::System::Single _VolPreVal_bladeRotation; // 0x170
		::System::Boolean _VolPreVal_discardNearCoc_overrideState; // 0x174
		::System::Boolean _VolPreVal_discardNearCoc; // 0x175
		::System::Boolean _VolPreVal_forceNoDefaultDof_overrideState; // 0x176
		::System::Boolean _VolPreVal_forceNoDefaultDof; // 0x177
		::System::Boolean _VolPreVal_blurQuality_overrideState; // 0x178
		::System::Byte _padding14[0x3];
		::UnityEngine::Rendering::Universal::DofBlurQuality _VolPreVal_blurQuality; // 0x17C
		::System::Single _TimelineCurveFirstVal_gaussianStart; // 0x180
		::System::Single _TimelineCurveLastVal_gaussianStart; // 0x184
		::System::Single _TimelineCurveFirstVal_gaussianEnd; // 0x188
		::System::Single _TimelineCurveLastVal_gaussianEnd; // 0x18C
		::System::Single _TimelineCurveFirstVal_gaussianMaxRadius; // 0x190
		::System::Single _TimelineCurveLastVal_gaussianMaxRadius; // 0x194
		::System::Single _TimelineCurveFirstVal_focusDistance; // 0x198
		::System::Single _TimelineCurveLastVal_focusDistance; // 0x19C
		::System::Single _TimelineCurveFirstVal_focalLength; // 0x1A0
		::System::Single _TimelineCurveLastVal_focalLength; // 0x1A4
		::System::Single _TimelineCurveFirstVal_aperture; // 0x1A8
		::System::Single _TimelineCurveLastVal_aperture; // 0x1AC
		::System::Int32 _TimelineCurveFirstVal_bladeCount; // 0x1B0
		::System::Int32 _TimelineCurveLastVal_bladeCount; // 0x1B4
		::System::Single _TimelineCurveFirstVal_bladeCurvature; // 0x1B8
		::System::Single _TimelineCurveLastVal_bladeCurvature; // 0x1BC
		::System::Single _TimelineCurveFirstVal_bladeRotation; // 0x1C0
		::System::Single _TimelineCurveLastVal_bladeRotation; // 0x1C4
		::System::Boolean _TimelineCurveFirstVal_discardNearCoc; // 0x1C8
		::System::Boolean _TimelineCurveLastVal_discardNearCoc; // 0x1C9
		::System::Boolean _TimelineCurveFirstVal_forceNoDefaultDof; // 0x1CA
		::System::Boolean _TimelineCurveLastVal_forceNoDefaultDof; // 0x1CB
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_mode_FieldHandleType; // 0x1CC
		::UnityEngine::Rendering::Universal::DepthOfFieldMode ESPP_mode; // 0x1D0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_debugMode_FieldHandleType; // 0x1D4
		::UnityEngine::Rendering::Universal::DofDebugMode ESPP_debugMode; // 0x1D8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gaussianStart_FieldHandleType; // 0x1DC
		::System::Boolean ESPP_gaussianStart_UseIt; // 0x1E0
		::System::Byte _padding15[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_gaussianStart; // 0x1E8
		::System::Boolean ESPP_gaussianStart_EnableFade; // 0x1F0
		::System::Boolean ESPP_gaussianStart_EnableOverrideDefaultValue; // 0x1F1
		::System::Byte _padding16[0x2];
		::System::Single ESPP_gaussianStart_OverrideDefaultValue; // 0x1F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gaussianEnd_FieldHandleType; // 0x1F8
		::System::Boolean ESPP_gaussianEnd_UseIt; // 0x1FC
		::System::Byte _padding17[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_gaussianEnd; // 0x200
		::System::Boolean ESPP_gaussianEnd_EnableFade; // 0x208
		::System::Boolean ESPP_gaussianEnd_EnableOverrideDefaultValue; // 0x209
		::System::Byte _padding18[0x2];
		::System::Single ESPP_gaussianEnd_OverrideDefaultValue; // 0x20C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gaussianMaxRadius_FieldHandleType; // 0x210
		::System::Boolean ESPP_gaussianMaxRadius_UseIt; // 0x214
		::System::Byte _padding19[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_gaussianMaxRadius; // 0x218
		::System::Boolean ESPP_gaussianMaxRadius_EnableFade; // 0x220
		::System::Boolean ESPP_gaussianMaxRadius_EnableOverrideDefaultValue; // 0x221
		::System::Byte _padding20[0x2];
		::System::Single ESPP_gaussianMaxRadius_OverrideDefaultValue; // 0x224
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_highQualitySampling_FieldHandleType; // 0x228
		::System::Boolean ESPP_highQualitySampling; // 0x22C
		::System::Byte _padding21[0x3];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_focusDistance_FieldHandleType; // 0x230
		::System::Boolean ESPP_focusDistance_UseIt; // 0x234
		::System::Byte _padding22[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_focusDistance; // 0x238
		::System::Boolean ESPP_focusDistance_EnableFade; // 0x240
		::System::Boolean ESPP_focusDistance_EnableOverrideDefaultValue; // 0x241
		::System::Byte _padding23[0x2];
		::System::Single ESPP_focusDistance_OverrideDefaultValue; // 0x244
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_focalLength_FieldHandleType; // 0x248
		::System::Boolean ESPP_focalLength_UseIt; // 0x24C
		::System::Byte _padding24[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_focalLength; // 0x250
		::System::Boolean ESPP_focalLength_EnableFade; // 0x258
		::System::Boolean ESPP_focalLength_EnableOverrideDefaultValue; // 0x259
		::System::Byte _padding25[0x2];
		::System::Single ESPP_focalLength_OverrideDefaultValue; // 0x25C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_aperture_FieldHandleType; // 0x260
		::System::Boolean ESPP_aperture_UseIt; // 0x264
		::System::Byte _padding26[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_aperture; // 0x268
		::System::Boolean ESPP_aperture_EnableFade; // 0x270
		::System::Boolean ESPP_aperture_EnableOverrideDefaultValue; // 0x271
		::System::Byte _padding27[0x2];
		::System::Single ESPP_aperture_OverrideDefaultValue; // 0x274
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_bladeCount_FieldHandleType; // 0x278
		::System::Boolean ESPP_bladeCount_UseIt; // 0x27C
		::System::Byte _padding28[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_bladeCount; // 0x280
		::System::Boolean ESPP_bladeCount_EnableFade; // 0x288
		::System::Boolean ESPP_bladeCount_EnableOverrideDefaultValue; // 0x289
		::System::Byte _padding29[0x2];
		::System::Int32 ESPP_bladeCount_OverrideDefaultValue; // 0x28C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_bladeCurvature_FieldHandleType; // 0x290
		::System::Boolean ESPP_bladeCurvature_UseIt; // 0x294
		::System::Byte _padding30[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_bladeCurvature; // 0x298
		::System::Boolean ESPP_bladeCurvature_EnableFade; // 0x2A0
		::System::Boolean ESPP_bladeCurvature_EnableOverrideDefaultValue; // 0x2A1
		::System::Byte _padding31[0x2];
		::System::Single ESPP_bladeCurvature_OverrideDefaultValue; // 0x2A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_bladeRotation_FieldHandleType; // 0x2A8
		::System::Boolean ESPP_bladeRotation_UseIt; // 0x2AC
		::System::Byte _padding32[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_bladeRotation; // 0x2B0
		::System::Boolean ESPP_bladeRotation_EnableFade; // 0x2B8
		::System::Boolean ESPP_bladeRotation_EnableOverrideDefaultValue; // 0x2B9
		::System::Byte _padding33[0x2];
		::System::Single ESPP_bladeRotation_OverrideDefaultValue; // 0x2BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_discardNearCoc_FieldHandleType; // 0x2C0
		::System::Boolean ESPP_discardNearCoc_UseIt; // 0x2C4
		::System::Byte _padding34[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_discardNearCoc; // 0x2C8
		::System::Boolean ESPP_discardNearCoc_EnableFade; // 0x2D0
		::System::Boolean ESPP_discardNearCoc_EnableOverrideDefaultValue; // 0x2D1
		::System::Boolean ESPP_discardNearCoc_OverrideDefaultValue; // 0x2D2
		::System::Byte _padding35[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_forceNoDefaultDof_FieldHandleType; // 0x2D4
		::System::Boolean ESPP_forceNoDefaultDof_UseIt; // 0x2D8
		::System::Byte _padding36[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_forceNoDefaultDof; // 0x2E0
		::System::Boolean ESPP_forceNoDefaultDof_EnableFade; // 0x2E8
		::System::Boolean ESPP_forceNoDefaultDof_EnableOverrideDefaultValue; // 0x2E9
		::System::Boolean ESPP_forceNoDefaultDof_OverrideDefaultValue; // 0x2EA
		::System::Byte _padding37[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blurQuality_FieldHandleType; // 0x2EC
		::UnityEngine::Rendering::Universal::DofBlurQuality ESPP_blurQuality; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDEPTHOFFIELD_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}
	};
}
