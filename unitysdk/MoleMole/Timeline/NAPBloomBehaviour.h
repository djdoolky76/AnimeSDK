#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/NAPBloomBehaviour_FONOMIIMOPF.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapBloomQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BloomResolution.h"
#include "unitysdk/UnityEngine/Rendering/Universal/HQBloomMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/PP_Quality.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class FlareProfile_NativeSRP; }
namespace UnityEngine::Rendering::Universal { class NapBloom; }

#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1C0C9F30)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1C0D37C0)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x1C0D37E0)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_NPKJDKDKLHI_OFFSET UNITYSDK_OFFSET(0x1C0CAD30)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1C0CB960)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x1C0D37B0)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1C0CB120)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1C0D37D0)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1C0D14E0)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1C0D1E30)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0D3510)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int NAPBloomBehaviour_TypeDefinitionIndex = 67238;

	class NAPBloomBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::NAPBloomBehaviour_FONOMIIMOPF _methodParm; // 0x18
		::System::Boolean enabled; // 0x270
		::System::Boolean active_hqBloomMode; // 0x271
		::System::Boolean use_hqBloomMode; // 0x272
		::System::Byte _padding0[0x1];
		::UnityEngine::Rendering::Universal::HQBloomMode hqBloomMode; // 0x274
		::System::Boolean active_hqUESampleQuality; // 0x278
		::System::Boolean use_hqUESampleQuality; // 0x279
		::System::Byte _padding1[0x2];
		::UnityEngine::Rendering::Universal::PP_Quality hqUESampleQuality; // 0x27C
		::System::Boolean active_hqUEBloomThreshold; // 0x280
		::System::Boolean use_hqUEBloomThreshold; // 0x281
		::System::Byte _padding2[0x2];
		::System::Single hqUEBloomThreshold; // 0x284
		::System::Boolean active_hqUEBloomThresholdChar; // 0x288
		::System::Boolean use_hqUEBloomThresholdChar; // 0x289
		::System::Byte _padding3[0x2];
		::System::Single hqUEBloomThresholdChar; // 0x28C
		::System::Boolean active_hqUEBloomMaxThreshold; // 0x290
		::System::Boolean use_hqUEBloomMaxThreshold; // 0x291
		::System::Byte _padding4[0x2];
		::System::Single hqUEBloomMaxThreshold; // 0x294
		::System::Boolean active_hqUEBloomMaxThresholdChar; // 0x298
		::System::Boolean use_hqUEBloomMaxThresholdChar; // 0x299
		::System::Byte _padding5[0x2];
		::System::Single hqUEBloomMaxThresholdChar; // 0x29C
		::System::Boolean active_hqUEBloomIntensity; // 0x2A0
		::System::Boolean use_hqUEBloomIntensity; // 0x2A1
		::System::Byte _padding6[0x2];
		::System::Single hqUEBloomIntensity; // 0x2A4
		::System::Boolean active_hqUEBloomIntensityChar; // 0x2A8
		::System::Boolean use_hqUEBloomIntensityChar; // 0x2A9
		::System::Byte _padding7[0x2];
		::System::Single hqUEBloomIntensityChar; // 0x2AC
		::System::Boolean active_glareIntensity; // 0x2B0
		::System::Boolean use_glareIntensity; // 0x2B1
		::System::Byte _padding8[0x2];
		::System::Single glareIntensity; // 0x2B4
		::System::Boolean active_xBlurIntensity; // 0x2B8
		::System::Boolean use_xBlurIntensity; // 0x2B9
		::System::Byte _padding9[0x2];
		::System::Single xBlurIntensity; // 0x2BC
		::System::Boolean active_yBlurIntensity; // 0x2C0
		::System::Boolean use_yBlurIntensity; // 0x2C1
		::System::Byte _padding10[0x2];
		::System::Single yBlurIntensity; // 0x2C4
		::System::Boolean active_hqBloomSize6; // 0x2C8
		::System::Boolean use_hqBloomSize6; // 0x2C9
		::System::Byte _padding11[0x2];
		::System::Single hqBloomSize6; // 0x2CC
		::System::Boolean active_hqBloomSize5; // 0x2D0
		::System::Boolean use_hqBloomSize5; // 0x2D1
		::System::Byte _padding12[0x2];
		::System::Single hqBloomSize5; // 0x2D4
		::System::Boolean active_hqBloomSize4; // 0x2D8
		::System::Boolean use_hqBloomSize4; // 0x2D9
		::System::Byte _padding13[0x2];
		::System::Single hqBloomSize4; // 0x2DC
		::System::Boolean active_hqBloomSize3; // 0x2E0
		::System::Boolean use_hqBloomSize3; // 0x2E1
		::System::Byte _padding14[0x2];
		::System::Single hqBloomSize3; // 0x2E4
		::System::Boolean active_hqBloomSize2; // 0x2E8
		::System::Boolean use_hqBloomSize2; // 0x2E9
		::System::Byte _padding15[0x2];
		::System::Single hqBloomSize2; // 0x2EC
		::System::Boolean active_hqBloomSize1; // 0x2F0
		::System::Boolean use_hqBloomSize1; // 0x2F1
		::System::Byte _padding16[0x2];
		::System::Single hqBloomSize1; // 0x2F4
		::System::Boolean active_hqBloomTint6; // 0x2F8
		::System::Boolean use_hqBloomTint6; // 0x2F9
		::System::Byte _padding17[0x2];
		::System::Single hqBloomTint6; // 0x2FC
		::System::Boolean active_hqBloomTint5; // 0x300
		::System::Boolean use_hqBloomTint5; // 0x301
		::System::Byte _padding18[0x2];
		::System::Single hqBloomTint5; // 0x304
		::System::Boolean active_hqBloomTint4; // 0x308
		::System::Boolean use_hqBloomTint4; // 0x309
		::System::Byte _padding19[0x2];
		::System::Single hqBloomTint4; // 0x30C
		::System::Boolean active_hqBloomTint3; // 0x310
		::System::Boolean use_hqBloomTint3; // 0x311
		::System::Byte _padding20[0x2];
		::System::Single hqBloomTint3; // 0x314
		::System::Boolean active_hqBloomTint2; // 0x318
		::System::Boolean use_hqBloomTint2; // 0x319
		::System::Byte _padding21[0x2];
		::System::Single hqBloomTint2; // 0x31C
		::System::Boolean active_hqBloomTint1; // 0x320
		::System::Boolean use_hqBloomTint1; // 0x321
		::System::Byte _padding22[0x2];
		::System::Single hqBloomTint1; // 0x324
		::System::Boolean active_hQBloomIntensity; // 0x328
		::System::Boolean use_hQBloomIntensity; // 0x329
		::System::Byte _padding23[0x2];
		::System::Single hQBloomIntensity; // 0x32C
		::System::Boolean active_hQBloomThreshold; // 0x330
		::System::Boolean use_hQBloomThreshold; // 0x331
		::System::Byte _padding24[0x2];
		::System::Single hQBloomThreshold; // 0x334
		::System::Boolean active_hQBloomScatter; // 0x338
		::System::Boolean use_hQBloomScatter; // 0x339
		::System::Byte _padding25[0x2];
		::System::Single hQBloomScatter; // 0x33C
		::System::Boolean active_hQBloomTint; // 0x340
		::System::Boolean use_hQBloomTint; // 0x341
		::System::Byte _padding26[0x2];
		::UnityEngine::Color hQBloomTint; // 0x344
		::System::Boolean active_hqBloomResolution; // 0x354
		::System::Boolean use_hqBloomResolution; // 0x355
		::System::Byte _padding27[0x2];
		::UnityEngine::Rendering::Universal::BloomResolution hqBloomResolution; // 0x358
		::System::Boolean active_useRealDownSample; // 0x35C
		::System::Boolean use_useRealDownSample; // 0x35D
		::System::Boolean useRealDownSample; // 0x35E
		::System::Boolean active_blurRadius; // 0x35F
		::System::Boolean use_blurRadius; // 0x360
		::System::Byte _padding28[0x3];
		::System::Single blurRadius; // 0x364
		::System::Boolean active_doBloomAfterTAA; // 0x368
		::System::Boolean use_doBloomAfterTAA; // 0x369
		::System::Boolean doBloomAfterTAA; // 0x36A
		::System::Boolean active_useSourceLumaMask; // 0x36B
		::System::Boolean use_useSourceLumaMask; // 0x36C
		::System::Boolean useSourceLumaMask; // 0x36D
		::System::Boolean active_glareThreshold; // 0x36E
		::System::Boolean use_glareThreshold; // 0x36F
		::System::Single glareThreshold; // 0x370
		::System::Boolean active_glareThresholdForHDR; // 0x374
		::System::Boolean use_glareThresholdForHDR; // 0x375
		::System::Byte _padding29[0x2];
		::System::Single glareThresholdForHDR; // 0x378
		::System::Boolean active_glareScaler; // 0x37C
		::System::Boolean use_glareScaler; // 0x37D
		::System::Byte _padding30[0x2];
		::System::Single glareScaler; // 0x380
		::System::Boolean active_glareScalerForHDR; // 0x384
		::System::Boolean use_glareScalerForHDR; // 0x385
		::System::Byte _padding31[0x2];
		::System::Single glareScalerForHDR; // 0x388
		::System::Boolean active_blurLevelWeights; // 0x38C
		::System::Boolean use_blurLevelWeights; // 0x38D
		::System::Byte _padding32[0x2];
		::UnityEngine::Vector4 blurLevelWeights; // 0x390
		::System::Boolean active_secondaryGlareThreshold; // 0x3A0
		::System::Boolean use_secondaryGlareThreshold; // 0x3A1
		::System::Byte _padding33[0x2];
		::System::Single secondaryGlareThreshold; // 0x3A4
		::System::Boolean active_secondaryGlareContrast; // 0x3A8
		::System::Boolean use_secondaryGlareContrast; // 0x3A9
		::System::Byte _padding34[0x2];
		::System::Single secondaryGlareContrast; // 0x3AC
		::System::Boolean active_secondaryGlareWeight; // 0x3B0
		::System::Boolean use_secondaryGlareWeight; // 0x3B1
		::System::Byte _padding35[0x2];
		::System::Single secondaryGlareWeight; // 0x3B4
		::System::Boolean active_secondaryBlurRadius; // 0x3B8
		::System::Boolean use_secondaryBlurRadius; // 0x3B9
		::System::Byte _padding36[0x2];
		::System::Int32 secondaryBlurRadius; // 0x3BC
		::System::Boolean active_quality; // 0x3C0
		::System::Boolean use_quality; // 0x3C1
		::System::Byte _padding37[0x2];
		::UnityEngine::NAPRenderPipeline0::NapBloomQuality quality; // 0x3C4
		::System::Boolean active_blurLevelBufferHeights; // 0x3C8
		::System::Boolean use_blurLevelBufferHeights; // 0x3C9
		::System::Byte _padding38[0x2];
		::UnityEngine::Vector4 blurLevelBufferHeights; // 0x3CC
		::System::Boolean active_secondaryBlurLevelBufferHeight; // 0x3DC
		::System::Boolean use_secondaryBlurLevelBufferHeight; // 0x3DD
		::System::Byte _padding39[0x2];
		::System::Int32 secondaryBlurLevelBufferHeight; // 0x3E0
		::System::Boolean active_dirtTexture; // 0x3E4
		::System::Boolean use_dirtTexture; // 0x3E5
		::System::Byte _padding40[0x2];
		::UnityEngine::Texture* dirtTexture; // 0x3E8
		::System::Boolean active_dirtIntensity; // 0x3F0
		::System::Boolean use_dirtIntensity; // 0x3F1
		::System::Byte _padding41[0x2];
		::System::Single dirtIntensity; // 0x3F4
		::System::Boolean active_HasExtraDownsample; // 0x3F8
		::System::Boolean use_HasExtraDownsample; // 0x3F9
		::System::Boolean HasExtraDownsample; // 0x3FA
		::System::Boolean active_enableSpriteFlare; // 0x3FB
		::System::Boolean use_enableSpriteFlare; // 0x3FC
		::System::Boolean enableSpriteFlare; // 0x3FD
		::System::Boolean active_flareThreshold; // 0x3FE
		::System::Boolean use_flareThreshold; // 0x3FF
		::System::Single flareThreshold; // 0x400
		::System::Boolean active_areaThreshold; // 0x404
		::System::Boolean use_areaThreshold; // 0x405
		::System::Byte _padding42[0x2];
		::System::Single areaThreshold; // 0x408
		::System::Boolean active_saturate; // 0x40C
		::System::Boolean use_saturate; // 0x40D
		::System::Byte _padding43[0x2];
		::System::Single saturate; // 0x410
		::System::Boolean active_randomize; // 0x414
		::System::Boolean use_randomize; // 0x415
		::System::Byte _padding44[0x2];
		::System::Single randomize; // 0x418
		::System::Boolean active_sizeClamp; // 0x41C
		::System::Boolean use_sizeClamp; // 0x41D
		::System::Byte _padding45[0x2];
		::System::Single sizeClamp; // 0x420
		::System::Boolean active_intensityClamp; // 0x424
		::System::Boolean use_intensityClamp; // 0x425
		::System::Byte _padding46[0x2];
		::System::Single intensityClamp; // 0x428
		::System::Boolean active_iterationNum; // 0x42C
		::System::Boolean use_iterationNum; // 0x42D
		::System::Byte _padding47[0x2];
		::System::Int32 iterationNum; // 0x430
		::System::Boolean active_flareProfile; // 0x434
		::System::Boolean use_flareProfile; // 0x435
		::System::Byte _padding48[0x2];
		::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP* flareProfile; // 0x438
		::System::Boolean active_hqUEBloomEnableRTXSingleControl; // 0x440
		::System::Boolean use_hqUEBloomEnableRTXSingleControl; // 0x441
		::System::Boolean hqUEBloomEnableRTXSingleControl; // 0x442
		::System::Boolean active_hqUEBloomThresholdRTX; // 0x443
		::System::Boolean use_hqUEBloomThresholdRTX; // 0x444
		::System::Byte _padding49[0x3];
		::System::Single hqUEBloomThresholdRTX; // 0x448
		::System::Boolean active_hqUEBloomIntensityRTX; // 0x44C
		::System::Boolean use_hqUEBloomIntensityRTX; // 0x44D
		::System::Byte _padding50[0x2];
		::System::Single hqUEBloomIntensityRTX; // 0x450
		::System::Boolean active_hqBloomSize6RTX; // 0x454
		::System::Boolean use_hqBloomSize6RTX; // 0x455
		::System::Byte _padding51[0x2];
		::System::Single hqBloomSize6RTX; // 0x458
		::System::Boolean active_hqBloomSize5RTX; // 0x45C
		::System::Boolean use_hqBloomSize5RTX; // 0x45D
		::System::Byte _padding52[0x2];
		::System::Single hqBloomSize5RTX; // 0x460
		::System::Boolean active_hqBloomSize4RTX; // 0x464
		::System::Boolean use_hqBloomSize4RTX; // 0x465
		::System::Byte _padding53[0x2];
		::System::Single hqBloomSize4RTX; // 0x468
		::System::Boolean active_hqBloomSize3RTX; // 0x46C
		::System::Boolean use_hqBloomSize3RTX; // 0x46D
		::System::Byte _padding54[0x2];
		::System::Single hqBloomSize3RTX; // 0x470
		::System::Boolean active_hqBloomSize2RTX; // 0x474
		::System::Boolean use_hqBloomSize2RTX; // 0x475
		::System::Byte _padding55[0x2];
		::System::Single hqBloomSize2RTX; // 0x478
		::System::Boolean active_hqBloomSize1RTX; // 0x47C
		::System::Boolean use_hqBloomSize1RTX; // 0x47D
		::System::Byte _padding56[0x2];
		::System::Single hqBloomSize1RTX; // 0x480
		::System::Boolean active_hqUEBloomMaxThresholdRTX; // 0x484
		::System::Boolean use_hqUEBloomMaxThresholdRTX; // 0x485
		::System::Byte _padding57[0x2];
		::System::Single hqUEBloomMaxThresholdRTX; // 0x488
		::System::Boolean active_hqBloomTint6RTX; // 0x48C
		::System::Boolean use_hqBloomTint6RTX; // 0x48D
		::System::Byte _padding58[0x2];
		::System::Single hqBloomTint6RTX; // 0x490
		::System::Boolean active_hqBloomTint5RTX; // 0x494
		::System::Boolean use_hqBloomTint5RTX; // 0x495
		::System::Byte _padding59[0x2];
		::System::Single hqBloomTint5RTX; // 0x498
		::System::Boolean active_hqBloomTint4RTX; // 0x49C
		::System::Boolean use_hqBloomTint4RTX; // 0x49D
		::System::Byte _padding60[0x2];
		::System::Single hqBloomTint4RTX; // 0x4A0
		::System::Boolean active_hqBloomTint3RTX; // 0x4A4
		::System::Boolean use_hqBloomTint3RTX; // 0x4A5
		::System::Byte _padding61[0x2];
		::System::Single hqBloomTint3RTX; // 0x4A8
		::System::Boolean active_hqBloomTint2RTX; // 0x4AC
		::System::Boolean use_hqBloomTint2RTX; // 0x4AD
		::System::Byte _padding62[0x2];
		::System::Single hqBloomTint2RTX; // 0x4B0
		::System::Boolean active_hqBloomTint1RTX; // 0x4B4
		::System::Boolean use_hqBloomTint1RTX; // 0x4B5
		::System::Byte _padding63[0x2];
		::System::Single hqBloomTint1RTX; // 0x4B8
		::System::Boolean active_hqUEBloomIntensityCharFromScene; // 0x4BC
		::System::Boolean use_hqUEBloomIntensityCharFromScene; // 0x4BD
		::System::Byte _padding64[0x2];
		::System::Single hqUEBloomIntensityCharFromScene; // 0x4C0
		::System::Byte _padding65[0x4];
		::UnityEngine::Rendering::Universal::NapBloom* _NapBloom; // 0x4C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::UnityEngine::Rendering::Universal::NapBloom* NPKJDKDKLHI(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::NapBloom*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_NPKJDKDKLHI_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}
	};
}
