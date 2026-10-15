#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_AudioEventParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_BlinkParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_ChromaticAberrationParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_ColorGradingParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_GaussianBlurParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_LensGlitch2Parameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_PPPatternParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_RadialBlurParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_ScreenEffectParameter.h"
#include "unitysdk/RPG/CustomRP/PPFilterStack_VignetteParameter.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace UnityEngine { class AnimationCurve; }

#define RPG_CUSTOMRP_PPFILTERSTACK_AHPBDIANJDO_OFFSET UNITYSDK_OFFSET(0xE491970)
#define RPG_CUSTOMRP_PPFILTERSTACK_CTOR_OFFSET UNITYSDK_OFFSET(0xE4927C0)
#define RPG_CUSTOMRP_PPFILTERSTACK_DDNOKNMJOAG_OFFSET UNITYSDK_OFFSET(0xE491C80)
#define RPG_CUSTOMRP_PPFILTERSTACK_HJFBOCPLCFF_OFFSET UNITYSDK_OFFSET(0xE4907A0)
#define RPG_CUSTOMRP_PPFILTERSTACK_ICJHMAHOJKP_OFFSET UNITYSDK_OFFSET(0xE491630)
#define RPG_CUSTOMRP_PPFILTERSTACK_IHHJKBFJFEO_OFFSET UNITYSDK_OFFSET(0xE4912D0)
#define RPG_CUSTOMRP_PPFILTERSTACK_KPAMCBKCHAJ_OFFSET UNITYSDK_OFFSET(0xE4925C0)
#define RPG_CUSTOMRP_PPFILTERSTACK_LNFLPMJBBKN_OFFSET UNITYSDK_OFFSET(0xE490D10)
#define RPG_CUSTOMRP_PPFILTERSTACK_MGDDONDIJCI_OFFSET UNITYSDK_OFFSET(0xE493610)
#define RPG_CUSTOMRP_PPFILTERSTACK_MOLEENNPLHI_OFFSET UNITYSDK_OFFSET(0xE491070)

namespace RPG::CustomRP
{
	class PPFilterStack : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPG::CustomRP::PPFilterStack_AudioEventParameter m_AudioEventParameter; // 0x18
		::RPG::CustomRP::PPFilterStack_ScreenEffectParameter m_ScreenEffectParameter; // 0x30
		::RPG::CustomRP::PPFilterStack_ColorGradingParameter m_colorGradingParameter; // 0x38
		::System::Boolean toneMappingCurveOverrideState; // 0x1BC
		::System::Byte _padding0[0x3];
		::UnityEngine::AnimationCurve* toneMappingCurve; // 0x1C0
		::RPG::CustomRP::PPFilterStack_RadialBlurParameter m_radialBlurParameter; // 0x1C8
		::System::Boolean radialBlurCurveOverrideState; // 0x210
		::System::Byte _padding1[0x7];
		::UnityEngine::AnimationCurve* radialBlurCurve; // 0x218
		::RPG::CustomRP::PPFilterStack_VignetteParameter m_vignetteParameter; // 0x220
		::System::Boolean vignetteCurveOverrideState; // 0x254
		::System::Byte _padding2[0x3];
		::UnityEngine::AnimationCurve* vignetteCurve; // 0x258
		::RPG::CustomRP::PPFilterStack_ChromaticAberrationParameter m_chromaticParameter; // 0x260
		::System::Boolean chromaticCurveOverrideState; // 0x2A4
		::System::Byte _padding3[0x3];
		::UnityEngine::AnimationCurve* chromaticCurve; // 0x2A8
		::RPG::CustomRP::PPFilterStack_BlinkParameter m_blinkParameter; // 0x2B0
		::System::Boolean blinkCurveOverrideState; // 0x318
		::System::Byte _padding4[0x7];
		::UnityEngine::AnimationCurve* blinkCurve; // 0x320
		::RPG::CustomRP::PPFilterStack_GaussianBlurParameter m_gaussianBlurParameter; // 0x328
		::System::Boolean GaussianBlurCurveOverrideState; // 0x368
		::System::Byte _padding5[0x7];
		::UnityEngine::AnimationCurve* GaussianBlurCurve; // 0x370
		::RPG::CustomRP::PPFilterStack_PPPatternParameter m_PPPatternParameter; // 0x378
		::System::Boolean PPPatternParameterOverrideState; // 0x5C0
		::System::Byte _padding6[0x7];
		::UnityEngine::AnimationCurve* PPPatternCurve; // 0x5C8
		::RPG::CustomRP::PPFilterStack_LensGlitch2Parameter m_LensGlitch2Parameter; // 0x5D0
		::System::Boolean LensGlitch2CurveOverrideState; // 0x608
		::System::Byte _padding7[0x7];
		::UnityEngine::AnimationCurve* LensGlitch2Curve; // 0x610
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_CTOR_OFFSET))(this);
		}

		::RPG::CustomRP::PPFilterStack_ColorGradingParameter HJFBOCPLCFF(::System::Single a1)
		{
			return ((::RPG::CustomRP::PPFilterStack_ColorGradingParameter(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_HJFBOCPLCFF_OFFSET))(this, a1);
		}

		::RPG::CustomRP::PPFilterStack_RadialBlurParameter LNFLPMJBBKN(::System::Single a1)
		{
			return ((::RPG::CustomRP::PPFilterStack_RadialBlurParameter(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_LNFLPMJBBKN_OFFSET))(this, a1);
		}

		::RPG::CustomRP::PPFilterStack_VignetteParameter MOLEENNPLHI(::System::Single a1)
		{
			return ((::RPG::CustomRP::PPFilterStack_VignetteParameter(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_MOLEENNPLHI_OFFSET))(this, a1);
		}

		::RPG::CustomRP::PPFilterStack_ChromaticAberrationParameter IHHJKBFJFEO(::System::Single a1)
		{
			return ((::RPG::CustomRP::PPFilterStack_ChromaticAberrationParameter(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_IHHJKBFJFEO_OFFSET))(this, a1);
		}

		::RPG::CustomRP::PPFilterStack_BlinkParameter ICJHMAHOJKP(::System::Single a1)
		{
			return ((::RPG::CustomRP::PPFilterStack_BlinkParameter(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_ICJHMAHOJKP_OFFSET))(this, a1);
		}

		::RPG::CustomRP::PPFilterStack_GaussianBlurParameter AHPBDIANJDO(::System::Single a1)
		{
			return ((::RPG::CustomRP::PPFilterStack_GaussianBlurParameter(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_AHPBDIANJDO_OFFSET))(this, a1);
		}

		::RPG::CustomRP::PPFilterStack_PPPatternParameter DDNOKNMJOAG(::System::Single a1)
		{
			return ((::RPG::CustomRP::PPFilterStack_PPPatternParameter(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_DDNOKNMJOAG_OFFSET))(this, a1);
		}

		::RPG::CustomRP::PPFilterStack_LensGlitch2Parameter KPAMCBKCHAJ(::System::Single a1)
		{
			return ((::RPG::CustomRP::PPFilterStack_LensGlitch2Parameter(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_KPAMCBKCHAJ_OFFSET))(this, a1);
		}

		::System::Boolean MGDDONDIJCI(::RPG::GameCore::PPEffectFilterType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_PPFILTERSTACK_MGDDONDIJCI_OFFSET))(this, a1);
		}

	};
}
