#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/CharacterColorCorrectionBehaviour_OEPFOAAMLHI.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }
namespace UnityEngine::Rendering::Universal { class CharacterColorCorrection; }

#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_BGHCCFKLHNO_OFFSET UNITYSDK_OFFSET(0x14BD2930)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x14BCBDE0)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x14BD2950)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x14BD2960)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x14BCD230)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_OELAGHAGNPA_OFFSET UNITYSDK_OFFSET(0x14BCC8F0)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x14BD2940)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x14BCBCE0)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x14BCCCE0)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x14BD2920)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x14BD0C30)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x14BD1290)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x14BD2730)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CharacterColorCorrectionBehaviour_TypeDefinitionIndex = 72538;

	class CharacterColorCorrectionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::CharacterColorCorrectionBehaviour_OEPFOAAMLHI _methodParm; // 0x18
		::System::Boolean enabled; // 0x2A0
		::System::Boolean active_enable; // 0x2A1
		::System::Boolean use_enable; // 0x2A2
		::System::Boolean enable; // 0x2A3
		::System::Boolean active_ambient; // 0x2A4
		::System::Boolean use_ambient; // 0x2A5
		::System::Byte _padding0[0x2];
		::UnityEngine::Color ambient; // 0x2A8
		::System::Boolean active_skinFrontTint; // 0x2B8
		::System::Boolean use_skinFrontTint; // 0x2B9
		::System::Byte _padding1[0x2];
		::UnityEngine::Color skinFrontTint; // 0x2BC
		::System::Boolean active_frontTint; // 0x2CC
		::System::Boolean use_frontTint; // 0x2CD
		::System::Byte _padding2[0x2];
		::UnityEngine::Color frontTint; // 0x2D0
		::System::Boolean active_skinSssTint; // 0x2E0
		::System::Boolean use_skinSssTint; // 0x2E1
		::System::Byte _padding3[0x2];
		::UnityEngine::Color skinSssTint; // 0x2E4
		::System::Boolean active_sssTint; // 0x2F4
		::System::Boolean use_sssTint; // 0x2F5
		::System::Byte _padding4[0x2];
		::UnityEngine::Color sssTint; // 0x2F8
		::System::Boolean active_skinShallowTint; // 0x308
		::System::Boolean use_skinShallowTint; // 0x309
		::System::Byte _padding5[0x2];
		::UnityEngine::Color skinShallowTint; // 0x30C
		::System::Boolean active_shallowTint; // 0x31C
		::System::Boolean use_shallowTint; // 0x31D
		::System::Byte _padding6[0x2];
		::UnityEngine::Color shallowTint; // 0x320
		::System::Boolean active_skinShallowFadeTint; // 0x330
		::System::Boolean use_skinShallowFadeTint; // 0x331
		::System::Byte _padding7[0x2];
		::UnityEngine::Color skinShallowFadeTint; // 0x334
		::System::Boolean active_shallowFadeTint; // 0x344
		::System::Boolean use_shallowFadeTint; // 0x345
		::System::Byte _padding8[0x2];
		::UnityEngine::Color shallowFadeTint; // 0x348
		::System::Boolean active_skinShadowTint; // 0x358
		::System::Boolean use_skinShadowTint; // 0x359
		::System::Byte _padding9[0x2];
		::UnityEngine::Color skinShadowTint; // 0x35C
		::System::Boolean active_shadowTint; // 0x36C
		::System::Boolean use_shadowTint; // 0x36D
		::System::Byte _padding10[0x2];
		::UnityEngine::Color shadowTint; // 0x370
		::System::Boolean active_skinShadowFadeTint; // 0x380
		::System::Boolean use_skinShadowFadeTint; // 0x381
		::System::Byte _padding11[0x2];
		::UnityEngine::Color skinShadowFadeTint; // 0x384
		::System::Boolean active_shadowFadeTint; // 0x394
		::System::Boolean use_shadowFadeTint; // 0x395
		::System::Byte _padding12[0x2];
		::UnityEngine::Color shadowFadeTint; // 0x398
		::System::Boolean active_ambientGradient; // 0x3A8
		::System::Boolean use_ambientGradient; // 0x3A9
		::System::Byte _padding13[0x2];
		::UnityEngine::Color ambientGradient; // 0x3AC
		::System::Boolean active_useShadowTintAsOutline; // 0x3BC
		::System::Boolean use_useShadowTintAsOutline; // 0x3BD
		::System::Boolean useShadowTintAsOutline; // 0x3BE
		::System::Boolean active_outlineTint; // 0x3BF
		::System::Boolean use_outlineTint; // 0x3C0
		::System::Byte _padding14[0x3];
		::UnityEngine::Color outlineTint; // 0x3C4
		::System::Boolean active_toeStrength; // 0x3D4
		::System::Boolean use_toeStrength; // 0x3D5
		::System::Byte _padding15[0x2];
		::System::Single toeStrength; // 0x3D8
		::System::Boolean active_toeLength; // 0x3DC
		::System::Boolean use_toeLength; // 0x3DD
		::System::Byte _padding16[0x2];
		::System::Single toeLength; // 0x3E0
		::System::Boolean active_shoulderStrength; // 0x3E4
		::System::Boolean use_shoulderStrength; // 0x3E5
		::System::Byte _padding17[0x2];
		::System::Single shoulderStrength; // 0x3E8
		::System::Boolean active_shoulderLength; // 0x3EC
		::System::Boolean use_shoulderLength; // 0x3ED
		::System::Byte _padding18[0x2];
		::System::Single shoulderLength; // 0x3F0
		::System::Boolean active_shoulderAngle; // 0x3F4
		::System::Boolean use_shoulderAngle; // 0x3F5
		::System::Byte _padding19[0x2];
		::System::Single shoulderAngle; // 0x3F8
		::System::Boolean active_customGamma; // 0x3FC
		::System::Boolean use_customGamma; // 0x3FD
		::System::Byte _padding20[0x2];
		::System::Single customGamma; // 0x400
		::System::Boolean active_lift; // 0x404
		::System::Boolean use_lift; // 0x405
		::System::Byte _padding21[0x2];
		::UnityEngine::Vector4 lift; // 0x408
		::System::Boolean active_gamma; // 0x418
		::System::Boolean use_gamma; // 0x419
		::System::Byte _padding22[0x2];
		::UnityEngine::Vector4 gamma; // 0x41C
		::System::Boolean active_gain; // 0x42C
		::System::Boolean use_gain; // 0x42D
		::System::Byte _padding23[0x2];
		::UnityEngine::Vector4 gain; // 0x430
		::System::Boolean active_postExposure; // 0x440
		::System::Boolean use_postExposure; // 0x441
		::System::Byte _padding24[0x2];
		::System::Single postExposure; // 0x444
		::System::Boolean active_contrast; // 0x448
		::System::Boolean use_contrast; // 0x449
		::System::Byte _padding25[0x2];
		::System::Single contrast; // 0x44C
		::System::Boolean active_saturation; // 0x450
		::System::Boolean use_saturation; // 0x451
		::System::Byte _padding26[0x2];
		::System::Single saturation; // 0x454
		::System::Boolean active_rimGlowIntensityForChara; // 0x458
		::System::Boolean use_rimGlowIntensityForChara; // 0x459
		::System::Byte _padding27[0x2];
		::System::Single rimGlowIntensityForChara; // 0x45C
		::System::Boolean active_rimGlowWidthForCharacter; // 0x460
		::System::Boolean use_rimGlowWidthForCharacter; // 0x461
		::System::Byte _padding28[0x2];
		::System::Single rimGlowWidthForCharacter; // 0x464
		::System::Boolean active_weaponUseCustomLightProperty; // 0x468
		::System::Boolean use_weaponUseCustomLightProperty; // 0x469
		::System::Boolean weaponUseCustomLightProperty; // 0x46A
		::System::Boolean active_master; // 0x46B
		::System::Boolean use_master; // 0x46C
		::System::Byte _padding29[0x3];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* master; // 0x470
		::System::Boolean active_red; // 0x478
		::System::Boolean use_red; // 0x479
		::System::Byte _padding30[0x6];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* red; // 0x480
		::System::Boolean active_green; // 0x488
		::System::Boolean use_green; // 0x489
		::System::Byte _padding31[0x6];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* green; // 0x490
		::System::Boolean active_blue; // 0x498
		::System::Boolean use_blue; // 0x499
		::System::Byte _padding32[0x6];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* blue; // 0x4A0
		::System::Boolean active_hueVsHue; // 0x4A8
		::System::Boolean use_hueVsHue; // 0x4A9
		::System::Byte _padding33[0x6];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* hueVsHue; // 0x4B0
		::System::Boolean active_hueVsSat; // 0x4B8
		::System::Boolean use_hueVsSat; // 0x4B9
		::System::Byte _padding34[0x6];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* hueVsSat; // 0x4C0
		::System::Boolean active_satVsSat; // 0x4C8
		::System::Boolean use_satVsSat; // 0x4C9
		::System::Byte _padding35[0x6];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* satVsSat; // 0x4D0
		::System::Boolean active_lumVsSat; // 0x4D8
		::System::Boolean use_lumVsSat; // 0x4D9
		::System::Byte _padding36[0x6];
		::UnityEngine::NAPRenderPipeline0::TextureCurve* lumVsSat; // 0x4E0
		::System::Boolean active_rimGlowColorForCharacter; // 0x4E8
		::System::Boolean use_rimGlowColorForCharacter; // 0x4E9
		::System::Byte _padding37[0x2];
		::UnityEngine::Color rimGlowColorForCharacter; // 0x4EC
		::System::Boolean active_rimGlowStyleForCharacter01; // 0x4FC
		::System::Boolean use_rimGlowStyleForCharacter01; // 0x4FD
		::System::Byte _padding38[0x2];
		::System::Single rimGlowStyleForCharacter01; // 0x500
		::System::Boolean active_rimGlowStyleForCharacter02; // 0x504
		::System::Boolean use_rimGlowStyleForCharacter02; // 0x505
		::System::Byte _padding39[0x2];
		::System::Single rimGlowStyleForCharacter02; // 0x508
		::System::Boolean active_rimGlowStyleForCharacter03; // 0x50C
		::System::Boolean use_rimGlowStyleForCharacter03; // 0x50D
		::System::Byte _padding40[0x2];
		::System::Single rimGlowStyleForCharacter03; // 0x510
		::System::Boolean active_rimGlowStyleForCharacter04; // 0x514
		::System::Boolean use_rimGlowStyleForCharacter04; // 0x515
		::System::Byte _padding41[0x2];
		::System::Single rimGlowStyleForCharacter04; // 0x518
		::System::Boolean active_revertSaturation; // 0x51C
		::System::Boolean use_revertSaturation; // 0x51D
		::System::Boolean revertSaturation; // 0x51E
		::System::Boolean SkinColorsDiffWithOther; // 0x51F
		::UnityEngine::Rendering::Universal::CharacterColorCorrection* _CharacterColorCorrection; // 0x520

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void BGHCCFKLHNO(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_BGHCCFKLHNO_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Rendering::Universal::CharacterColorCorrection* OELAGHAGNPA(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::CharacterColorCorrection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_OELAGHAGNPA_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
