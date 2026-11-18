#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VREffects_NativeSRP_ColorBlendMethod.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DistanceDistortionBlendMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanMaskType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanlineBlendMode.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigEntityVREffectsEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector3KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector4KeyframeCurve; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_AAOGMJFNGIB_OFFSET UNITYSDK_OFFSET(0x1CD36610)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_AFPCLLAALBH_OFFSET UNITYSDK_OFFSET(0x1CD6C2F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_AJIPNBANCOC_OFFSET UNITYSDK_OFFSET(0x1CD34BD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_ALJEEEAPCBH_OFFSET UNITYSDK_OFFSET(0x1CD46010)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_BAHGDCGIEKL_OFFSET UNITYSDK_OFFSET(0x1CD40D50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_IEFBPLNILIE_OFFSET UNITYSDK_OFFSET(0x1CD34BC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_MKDCJGGNNGN_OFFSET UNITYSDK_OFFSET(0x1CD907B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_NNEGPFCPCAB_OFFSET UNITYSDK_OFFSET(0x1CD31820)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_ONPGLGIFOJJ_OFFSET UNITYSDK_OFFSET(0x1CD82DE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_PEDOJDBBGPC_OFFSET UNITYSDK_OFFSET(0x1CD79200)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD8C9C0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessVREffects_TypeDefinitionIndex = 52972;

	class ESPostProcessVREffects
	{
	public:
		::MoleMole::Config::ConfigEntityVREffectsEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_enable; // 0xB8
		::System::Byte _padding0[0x3];
		::System::Single _VolDefault_hue; // 0xBC
		::System::Single _VolDefault_saturation; // 0xC0
		::System::Single _VolDefault_brightness; // 0xC4
		::System::Single _VolDefault_contrast; // 0xC8
		::System::Single _VolDefault_contrastMiddlePoint; // 0xCC
		::System::Single _VolDefault_colorTintStart; // 0xD0
		::UnityEngine::Color _VolDefault_colorTintNear; // 0xD4
		::System::Single _VolDefault_colorTintEnd; // 0xE4
		::UnityEngine::Color _VolDefault_colorTintFar; // 0xE8
		::System::Single _VolDefault_scanlineWidth; // 0xF8
		::System::Single _VolDefault_scanlineContrast; // 0xFC
		::System::Single _VolDefault_scanlineDistortion; // 0x100
		::UnityEngine::Rendering::Universal::ScanType _VolDefault_scanType; // 0x104
		::System::Boolean _VolDefault_useCustomScanDirection; // 0x108
		::System::Byte _padding1[0x3];
		::System::Single _VolDefault_customScanDirection; // 0x10C
		::UnityEngine::Rendering::Universal::ScanMaskType _VolDefault_scanMaskType; // 0x110
		::System::Byte _padding2[0x4];
		::UnityEngine::Texture* _VolDefault_scanMaskTex; // 0x118
		::UnityEngine::Rendering::Universal::ChannelMapping _VolDefault_scanMaskTexChannel; // 0x120
		::UnityEngine::Vector2 _VolDefault_scanMaskTexTiling; // 0x124
		::UnityEngine::Vector2 _VolDefault_scanMaskTexOffset; // 0x12C
		::UnityEngine::Vector2 _VolDefault_scanMaskTexUVSpeed; // 0x134
		::System::Single _VolDefault_scanMaskBaseY; // 0x13C
		::System::Single _VolDefault_scanMaskYRange; // 0x140
		::System::Boolean _VolDefault_keepInFrontForUberPost; // 0x144
		::System::Byte _padding3[0x3];
		::System::Single _VolDefault_scanStart0; // 0x148
		::System::Single _VolDefault_scanEnd0; // 0x14C
		::System::Single _VolDefault_scanStart0Soft; // 0x150
		::System::Single _VolDefault_scanEnd0Soft; // 0x154
		::UnityEngine::Color _VolDefault_scanColor0; // 0x158
		::UnityEngine::Color _VolDefault_scanColor0End; // 0x168
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolDefault_scanColor0Mode; // 0x178
		::System::Single _VolDefault_scanMaskIntensity0; // 0x17C
		::System::Single _VolDefault_scanStart1; // 0x180
		::System::Single _VolDefault_scanEnd1; // 0x184
		::System::Single _VolDefault_scanStart1Soft; // 0x188
		::System::Single _VolDefault_scanEnd1Soft; // 0x18C
		::UnityEngine::Color _VolDefault_scanColor1; // 0x190
		::UnityEngine::Color _VolDefault_scanColor1End; // 0x1A0
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolDefault_scanColor1Mode; // 0x1B0
		::System::Single _VolDefault_scanMaskIntensity1; // 0x1B4
		::System::Single _VolDefault_scanStart2; // 0x1B8
		::System::Single _VolDefault_scanEnd2; // 0x1BC
		::System::Single _VolDefault_scanStart2Soft; // 0x1C0
		::System::Single _VolDefault_scanEnd2Soft; // 0x1C4
		::UnityEngine::Color _VolDefault_scanColor2; // 0x1C8
		::UnityEngine::Color _VolDefault_scanColor2End; // 0x1D8
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolDefault_scanColor2Mode; // 0x1E8
		::System::Single _VolDefault_scanMaskIntensity2; // 0x1EC
		::System::Single _VolDefault_scanStart3; // 0x1F0
		::System::Single _VolDefault_scanEnd3; // 0x1F4
		::System::Single _VolDefault_scanStart3Soft; // 0x1F8
		::System::Single _VolDefault_scanEnd3Soft; // 0x1FC
		::UnityEngine::Color _VolDefault_scanColor3; // 0x200
		::UnityEngine::Color _VolDefault_scanColor3End; // 0x210
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolDefault_scanColor3Mode; // 0x220
		::System::Single _VolDefault_scanMaskIntensity3; // 0x224
		::UnityEngine::Vector2 _VolDefault_uvOffsetR; // 0x228
		::UnityEngine::Color _VolDefault_colorR; // 0x230
		::UnityEngine::Vector2 _VolDefault_uvOffsetG; // 0x240
		::UnityEngine::Color _VolDefault_colorG; // 0x248
		::UnityEngine::Vector2 _VolDefault_uvOffsetB; // 0x258
		::UnityEngine::Color _VolDefault_colorB; // 0x260
		::System::Single _VolDefault_fadeSourceImage; // 0x270
		::System::Single _VolDefault_sliceWidth; // 0x274
		::System::Single _VolDefault_sliceAngle; // 0x278
		::System::Boolean _VolDefault_reverse; // 0x27C
		::System::Byte _padding4[0x3];
		::System::Single _VolDefault_sliceOffset; // 0x280
		::UnityEngine::Color _VolDefault_sliceColorA; // 0x284
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolDefault_sliceColorAMode; // 0x294
		::UnityEngine::Color _VolDefault_sliceColorB; // 0x298
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolDefault_sliceColorBMode; // 0x2A8
		::System::Boolean _VolDefault_gridOn; // 0x2AC
		::System::Byte _padding5[0x3];
		::System::Single _VolDefault_gridDistance; // 0x2B0
		::System::Boolean _VolDefault_gridBlendScanLine; // 0x2B4
		::System::Byte _padding6[0x3];
		::UnityEngine::Color _VolDefault_gridColor; // 0x2B8
		::System::Single _VolDefault_gridPower; // 0x2C8
		::System::Single _VolDefault_groundYPos; // 0x2CC
		::System::Single _VolDefault_screenSpaceGridScale; // 0x2D0
		::System::Single _VolDefault_screenSpaceGridWidth; // 0x2D4
		::System::Boolean _VolDefault_outlineOn; // 0x2D8
		::System::Boolean _VolDefault_outlineBlendScanLine; // 0x2D9
		::System::Byte _padding7[0x2];
		::System::Single _VolDefault_outlineOpacity; // 0x2DC
		::System::Single _VolDefault_outlineDiffOffset; // 0x2E0
		::System::Single _VolDefault_outlineDepthThreshold; // 0x2E4
		::System::Single _VolDefault_outlineNormalThreshold; // 0x2E8
		::System::Single _VolDefault_outlineNormalThresholdScale; // 0x2EC
		::UnityEngine::Color _VolDefault_outlineColor; // 0x2F0
		::System::Boolean _VolDefault_outlineInUberShader; // 0x300
		::System::Boolean _VolDefault_outlineDistortion; // 0x301
		::System::Byte _padding8[0x6];
		::UnityEngine::Texture* _VolDefault_outlineDistortionTex; // 0x308
		::UnityEngine::Vector2 _VolDefault_outlineDistortionTexTiling; // 0x310
		::UnityEngine::Vector2 _VolDefault_outlineDistortionTexOffset; // 0x318
		::UnityEngine::Vector2 _VolDefault_outlineDistortionUVSpeed; // 0x320
		::UnityEngine::Vector2 _VolDefault_outlineDistortionOffset; // 0x328
		::UnityEngine::Vector2 _VolDefault_outlineDistortionIntensity; // 0x330
		::System::Boolean _VolDefault_textureSheetOn; // 0x338
		::System::Byte _padding9[0x7];
		::UnityEngine::Texture* _VolDefault_textureSheetTex; // 0x340
		::UnityEngine::Vector2 _VolDefault_textureSheetXY; // 0x348
		::System::Int32 _VolDefault_textureSheetIndex; // 0x350
		::UnityEngine::Color _VolDefault_textureSheetColor; // 0x354
		::System::Single _VolDefault_lensDistortionIntensity; // 0x364
		::System::Single _VolDefault_lensDistortionXMultiplier; // 0x368
		::System::Single _VolDefault_lensDistortionYMultiplier; // 0x36C
		::UnityEngine::Vector2 _VolDefault_lensDistortionCenter; // 0x370
		::System::Single _VolDefault_lensDistortionScale; // 0x378
		::System::Boolean _VolDefault_enableDistanceDistortionColorization; // 0x37C
		::System::Byte _padding10[0x3];
		::System::Single _VolDefault_distanceColorizationEffect; // 0x380
		::System::Byte _padding11[0x4];
		::UnityEngine::Texture* _VolDefault_distanceDistortionTexture; // 0x388
		::UnityEngine::Texture* _VolDefault_distanceColorizeTexture; // 0x390
		::System::Single _VolDefault_distanceDistortionStart; // 0x398
		::System::Single _VolDefault_distanceDistortionEnd; // 0x39C
		::System::Single _VolDefault_distanceDistortionFadeRange; // 0x3A0
		::System::Single _VolDefault_distanceDistortionHeightStart; // 0x3A4
		::System::Single _VolDefault_distanceDistortionHeightEnd; // 0x3A8
		::System::Single _VolDefault_distanceDistortionHeightFadeRange; // 0x3AC
		::UnityEngine::Vector3 _VolDefault_distanceDistortionOffsetSpeed; // 0x3B0
		::System::Single _VolDefault_distanceDistortionTiling; // 0x3BC
		::System::Single _VolDefault_distanceDistortionIntensity; // 0x3C0
		::UnityEngine::Vector3 _VolDefault_distanceColorizationOffsetSpeed; // 0x3C4
		::System::Single _VolDefault_distanceColorizationTiling; // 0x3D0
		::UnityEngine::Color _VolDefault_distanceDistortionColor; // 0x3D4
		::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode _VolDefault_distanceDistortionBlendMode; // 0x3E4
		::System::Boolean _VolDefault_useStencil; // 0x3E8
		::System::Boolean _VolDefault_applyBeforeUberPost; // 0x3E9
		::System::Boolean _VolDefault_screenSpaceGrid; // 0x3EA
		::System::Byte _padding12[0x5];
		::UnityEngine::Texture* _VolDefault_outlineScreenSpaceMaskTex; // 0x3F0
		::UnityEngine::Vector3 _VolDefault_scanCustomCenterPosition; // 0x3F8
		::UnityEngine::Vector4 _VolDefault_outlineScreenSpaceMaskTexScaleOffset; // 0x404
		::UnityEngine::Rendering::Universal::ScanlineBlendMode _VolDefault_scanlineBlendMode; // 0x414
		::System::Boolean _VolDefault_enable2DSpot; // 0x418
		::System::Byte _padding13[0x3];
		::UnityEngine::Vector2 _VolDefault_spotCenter; // 0x41C
		::System::Single _VolDefault_spotRadius; // 0x424
		::System::Single _VolDefault_blackIntensity; // 0x428
		::System::Single _VolDefault_overlayIntensity; // 0x42C
		::System::Single _VolDefault_curvePower; // 0x430
		::System::Single _VolDefault_outlineNormalDiffThreshold; // 0x434
		::System::Boolean _VolPreVal_enable_overrideState; // 0x438
		::System::Boolean _VolPreVal_enable; // 0x439
		::System::Boolean _VolPreVal_hue_overrideState; // 0x43A
		::System::Byte _padding14[0x1];
		::System::Single _VolPreVal_hue; // 0x43C
		::System::Boolean _VolPreVal_saturation_overrideState; // 0x440
		::System::Byte _padding15[0x3];
		::System::Single _VolPreVal_saturation; // 0x444
		::System::Boolean _VolPreVal_brightness_overrideState; // 0x448
		::System::Byte _padding16[0x3];
		::System::Single _VolPreVal_brightness; // 0x44C
		::System::Boolean _VolPreVal_contrast_overrideState; // 0x450
		::System::Byte _padding17[0x3];
		::System::Single _VolPreVal_contrast; // 0x454
		::System::Boolean _VolPreVal_contrastMiddlePoint_overrideState; // 0x458
		::System::Byte _padding18[0x3];
		::System::Single _VolPreVal_contrastMiddlePoint; // 0x45C
		::System::Boolean _VolPreVal_colorTintStart_overrideState; // 0x460
		::System::Byte _padding19[0x3];
		::System::Single _VolPreVal_colorTintStart; // 0x464
		::System::Boolean _VolPreVal_colorTintNear_overrideState; // 0x468
		::System::Byte _padding20[0x3];
		::UnityEngine::Color _VolPreVal_colorTintNear; // 0x46C
		::System::Boolean _VolPreVal_colorTintEnd_overrideState; // 0x47C
		::System::Byte _padding21[0x3];
		::System::Single _VolPreVal_colorTintEnd; // 0x480
		::System::Boolean _VolPreVal_colorTintFar_overrideState; // 0x484
		::System::Byte _padding22[0x3];
		::UnityEngine::Color _VolPreVal_colorTintFar; // 0x488
		::System::Boolean _VolPreVal_scanlineWidth_overrideState; // 0x498
		::System::Byte _padding23[0x3];
		::System::Single _VolPreVal_scanlineWidth; // 0x49C
		::System::Boolean _VolPreVal_scanlineContrast_overrideState; // 0x4A0
		::System::Byte _padding24[0x3];
		::System::Single _VolPreVal_scanlineContrast; // 0x4A4
		::System::Boolean _VolPreVal_scanlineDistortion_overrideState; // 0x4A8
		::System::Byte _padding25[0x3];
		::System::Single _VolPreVal_scanlineDistortion; // 0x4AC
		::System::Boolean _VolPreVal_scanType_overrideState; // 0x4B0
		::System::Byte _padding26[0x3];
		::UnityEngine::Rendering::Universal::ScanType _VolPreVal_scanType; // 0x4B4
		::System::Boolean _VolPreVal_useCustomScanDirection_overrideState; // 0x4B8
		::System::Boolean _VolPreVal_useCustomScanDirection; // 0x4B9
		::System::Boolean _VolPreVal_customScanDirection_overrideState; // 0x4BA
		::System::Byte _padding27[0x1];
		::System::Single _VolPreVal_customScanDirection; // 0x4BC
		::System::Boolean _VolPreVal_scanMaskType_overrideState; // 0x4C0
		::System::Byte _padding28[0x3];
		::UnityEngine::Rendering::Universal::ScanMaskType _VolPreVal_scanMaskType; // 0x4C4
		::System::Boolean _VolPreVal_scanMaskTex_overrideState; // 0x4C8
		::System::Byte _padding29[0x7];
		::UnityEngine::Texture* _VolPreVal_scanMaskTex; // 0x4D0
		::System::Boolean _VolPreVal_scanMaskTexChannel_overrideState; // 0x4D8
		::System::Byte _padding30[0x3];
		::UnityEngine::Rendering::Universal::ChannelMapping _VolPreVal_scanMaskTexChannel; // 0x4DC
		::System::Boolean _VolPreVal_scanMaskTexTiling_overrideState; // 0x4E0
		::System::Byte _padding31[0x3];
		::UnityEngine::Vector2 _VolPreVal_scanMaskTexTiling; // 0x4E4
		::System::Boolean _VolPreVal_scanMaskTexOffset_overrideState; // 0x4EC
		::System::Byte _padding32[0x3];
		::UnityEngine::Vector2 _VolPreVal_scanMaskTexOffset; // 0x4F0
		::System::Boolean _VolPreVal_scanMaskTexUVSpeed_overrideState; // 0x4F8
		::System::Byte _padding33[0x3];
		::UnityEngine::Vector2 _VolPreVal_scanMaskTexUVSpeed; // 0x4FC
		::System::Boolean _VolPreVal_scanMaskBaseY_overrideState; // 0x504
		::System::Byte _padding34[0x3];
		::System::Single _VolPreVal_scanMaskBaseY; // 0x508
		::System::Boolean _VolPreVal_scanMaskYRange_overrideState; // 0x50C
		::System::Byte _padding35[0x3];
		::System::Single _VolPreVal_scanMaskYRange; // 0x510
		::System::Boolean _VolPreVal_keepInFrontForUberPost_overrideState; // 0x514
		::System::Boolean _VolPreVal_keepInFrontForUberPost; // 0x515
		::System::Boolean _VolPreVal_scanStart0_overrideState; // 0x516
		::System::Byte _padding36[0x1];
		::System::Single _VolPreVal_scanStart0; // 0x518
		::System::Boolean _VolPreVal_scanEnd0_overrideState; // 0x51C
		::System::Byte _padding37[0x3];
		::System::Single _VolPreVal_scanEnd0; // 0x520
		::System::Boolean _VolPreVal_scanStart0Soft_overrideState; // 0x524
		::System::Byte _padding38[0x3];
		::System::Single _VolPreVal_scanStart0Soft; // 0x528
		::System::Boolean _VolPreVal_scanEnd0Soft_overrideState; // 0x52C
		::System::Byte _padding39[0x3];
		::System::Single _VolPreVal_scanEnd0Soft; // 0x530
		::System::Boolean _VolPreVal_scanColor0_overrideState; // 0x534
		::System::Byte _padding40[0x3];
		::UnityEngine::Color _VolPreVal_scanColor0; // 0x538
		::System::Boolean _VolPreVal_scanColor0End_overrideState; // 0x548
		::System::Byte _padding41[0x3];
		::UnityEngine::Color _VolPreVal_scanColor0End; // 0x54C
		::System::Boolean _VolPreVal_scanColor0Mode_overrideState; // 0x55C
		::System::Byte _padding42[0x3];
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolPreVal_scanColor0Mode; // 0x560
		::System::Boolean _VolPreVal_scanMaskIntensity0_overrideState; // 0x564
		::System::Byte _padding43[0x3];
		::System::Single _VolPreVal_scanMaskIntensity0; // 0x568
		::System::Boolean _VolPreVal_scanStart1_overrideState; // 0x56C
		::System::Byte _padding44[0x3];
		::System::Single _VolPreVal_scanStart1; // 0x570
		::System::Boolean _VolPreVal_scanEnd1_overrideState; // 0x574
		::System::Byte _padding45[0x3];
		::System::Single _VolPreVal_scanEnd1; // 0x578
		::System::Boolean _VolPreVal_scanStart1Soft_overrideState; // 0x57C
		::System::Byte _padding46[0x3];
		::System::Single _VolPreVal_scanStart1Soft; // 0x580
		::System::Boolean _VolPreVal_scanEnd1Soft_overrideState; // 0x584
		::System::Byte _padding47[0x3];
		::System::Single _VolPreVal_scanEnd1Soft; // 0x588
		::System::Boolean _VolPreVal_scanColor1_overrideState; // 0x58C
		::System::Byte _padding48[0x3];
		::UnityEngine::Color _VolPreVal_scanColor1; // 0x590
		::System::Boolean _VolPreVal_scanColor1End_overrideState; // 0x5A0
		::System::Byte _padding49[0x3];
		::UnityEngine::Color _VolPreVal_scanColor1End; // 0x5A4
		::System::Boolean _VolPreVal_scanColor1Mode_overrideState; // 0x5B4
		::System::Byte _padding50[0x3];
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolPreVal_scanColor1Mode; // 0x5B8
		::System::Boolean _VolPreVal_scanMaskIntensity1_overrideState; // 0x5BC
		::System::Byte _padding51[0x3];
		::System::Single _VolPreVal_scanMaskIntensity1; // 0x5C0
		::System::Boolean _VolPreVal_scanStart2_overrideState; // 0x5C4
		::System::Byte _padding52[0x3];
		::System::Single _VolPreVal_scanStart2; // 0x5C8
		::System::Boolean _VolPreVal_scanEnd2_overrideState; // 0x5CC
		::System::Byte _padding53[0x3];
		::System::Single _VolPreVal_scanEnd2; // 0x5D0
		::System::Boolean _VolPreVal_scanStart2Soft_overrideState; // 0x5D4
		::System::Byte _padding54[0x3];
		::System::Single _VolPreVal_scanStart2Soft; // 0x5D8
		::System::Boolean _VolPreVal_scanEnd2Soft_overrideState; // 0x5DC
		::System::Byte _padding55[0x3];
		::System::Single _VolPreVal_scanEnd2Soft; // 0x5E0
		::System::Boolean _VolPreVal_scanColor2_overrideState; // 0x5E4
		::System::Byte _padding56[0x3];
		::UnityEngine::Color _VolPreVal_scanColor2; // 0x5E8
		::System::Boolean _VolPreVal_scanColor2End_overrideState; // 0x5F8
		::System::Byte _padding57[0x3];
		::UnityEngine::Color _VolPreVal_scanColor2End; // 0x5FC
		::System::Boolean _VolPreVal_scanColor2Mode_overrideState; // 0x60C
		::System::Byte _padding58[0x3];
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolPreVal_scanColor2Mode; // 0x610
		::System::Boolean _VolPreVal_scanMaskIntensity2_overrideState; // 0x614
		::System::Byte _padding59[0x3];
		::System::Single _VolPreVal_scanMaskIntensity2; // 0x618
		::System::Boolean _VolPreVal_scanStart3_overrideState; // 0x61C
		::System::Byte _padding60[0x3];
		::System::Single _VolPreVal_scanStart3; // 0x620
		::System::Boolean _VolPreVal_scanEnd3_overrideState; // 0x624
		::System::Byte _padding61[0x3];
		::System::Single _VolPreVal_scanEnd3; // 0x628
		::System::Boolean _VolPreVal_scanStart3Soft_overrideState; // 0x62C
		::System::Byte _padding62[0x3];
		::System::Single _VolPreVal_scanStart3Soft; // 0x630
		::System::Boolean _VolPreVal_scanEnd3Soft_overrideState; // 0x634
		::System::Byte _padding63[0x3];
		::System::Single _VolPreVal_scanEnd3Soft; // 0x638
		::System::Boolean _VolPreVal_scanColor3_overrideState; // 0x63C
		::System::Byte _padding64[0x3];
		::UnityEngine::Color _VolPreVal_scanColor3; // 0x640
		::System::Boolean _VolPreVal_scanColor3End_overrideState; // 0x650
		::System::Byte _padding65[0x3];
		::UnityEngine::Color _VolPreVal_scanColor3End; // 0x654
		::System::Boolean _VolPreVal_scanColor3Mode_overrideState; // 0x664
		::System::Byte _padding66[0x3];
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolPreVal_scanColor3Mode; // 0x668
		::System::Boolean _VolPreVal_scanMaskIntensity3_overrideState; // 0x66C
		::System::Byte _padding67[0x3];
		::System::Single _VolPreVal_scanMaskIntensity3; // 0x670
		::System::Boolean _VolPreVal_uvOffsetR_overrideState; // 0x674
		::System::Byte _padding68[0x3];
		::UnityEngine::Vector2 _VolPreVal_uvOffsetR; // 0x678
		::System::Boolean _VolPreVal_colorR_overrideState; // 0x680
		::System::Byte _padding69[0x3];
		::UnityEngine::Color _VolPreVal_colorR; // 0x684
		::System::Boolean _VolPreVal_uvOffsetG_overrideState; // 0x694
		::System::Byte _padding70[0x3];
		::UnityEngine::Vector2 _VolPreVal_uvOffsetG; // 0x698
		::System::Boolean _VolPreVal_colorG_overrideState; // 0x6A0
		::System::Byte _padding71[0x3];
		::UnityEngine::Color _VolPreVal_colorG; // 0x6A4
		::System::Boolean _VolPreVal_uvOffsetB_overrideState; // 0x6B4
		::System::Byte _padding72[0x3];
		::UnityEngine::Vector2 _VolPreVal_uvOffsetB; // 0x6B8
		::System::Boolean _VolPreVal_colorB_overrideState; // 0x6C0
		::System::Byte _padding73[0x3];
		::UnityEngine::Color _VolPreVal_colorB; // 0x6C4
		::System::Boolean _VolPreVal_fadeSourceImage_overrideState; // 0x6D4
		::System::Byte _padding74[0x3];
		::System::Single _VolPreVal_fadeSourceImage; // 0x6D8
		::System::Boolean _VolPreVal_sliceWidth_overrideState; // 0x6DC
		::System::Byte _padding75[0x3];
		::System::Single _VolPreVal_sliceWidth; // 0x6E0
		::System::Boolean _VolPreVal_sliceAngle_overrideState; // 0x6E4
		::System::Byte _padding76[0x3];
		::System::Single _VolPreVal_sliceAngle; // 0x6E8
		::System::Boolean _VolPreVal_reverse_overrideState; // 0x6EC
		::System::Boolean _VolPreVal_reverse; // 0x6ED
		::System::Boolean _VolPreVal_sliceOffset_overrideState; // 0x6EE
		::System::Byte _padding77[0x1];
		::System::Single _VolPreVal_sliceOffset; // 0x6F0
		::System::Boolean _VolPreVal_sliceColorA_overrideState; // 0x6F4
		::System::Byte _padding78[0x3];
		::UnityEngine::Color _VolPreVal_sliceColorA; // 0x6F8
		::System::Boolean _VolPreVal_sliceColorAMode_overrideState; // 0x708
		::System::Byte _padding79[0x3];
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolPreVal_sliceColorAMode; // 0x70C
		::System::Boolean _VolPreVal_sliceColorB_overrideState; // 0x710
		::System::Byte _padding80[0x3];
		::UnityEngine::Color _VolPreVal_sliceColorB; // 0x714
		::System::Boolean _VolPreVal_sliceColorBMode_overrideState; // 0x724
		::System::Byte _padding81[0x3];
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolPreVal_sliceColorBMode; // 0x728
		::System::Boolean _VolPreVal_gridOn_overrideState; // 0x72C
		::System::Boolean _VolPreVal_gridOn; // 0x72D
		::System::Boolean _VolPreVal_gridDistance_overrideState; // 0x72E
		::System::Byte _padding82[0x1];
		::System::Single _VolPreVal_gridDistance; // 0x730
		::System::Boolean _VolPreVal_gridBlendScanLine_overrideState; // 0x734
		::System::Boolean _VolPreVal_gridBlendScanLine; // 0x735
		::System::Boolean _VolPreVal_gridColor_overrideState; // 0x736
		::System::Byte _padding83[0x1];
		::UnityEngine::Color _VolPreVal_gridColor; // 0x738
		::System::Boolean _VolPreVal_gridPower_overrideState; // 0x748
		::System::Byte _padding84[0x3];
		::System::Single _VolPreVal_gridPower; // 0x74C
		::System::Boolean _VolPreVal_groundYPos_overrideState; // 0x750
		::System::Byte _padding85[0x3];
		::System::Single _VolPreVal_groundYPos; // 0x754
		::System::Boolean _VolPreVal_screenSpaceGridScale_overrideState; // 0x758
		::System::Byte _padding86[0x3];
		::System::Single _VolPreVal_screenSpaceGridScale; // 0x75C
		::System::Boolean _VolPreVal_screenSpaceGridWidth_overrideState; // 0x760
		::System::Byte _padding87[0x3];
		::System::Single _VolPreVal_screenSpaceGridWidth; // 0x764
		::System::Boolean _VolPreVal_outlineOn_overrideState; // 0x768
		::System::Boolean _VolPreVal_outlineOn; // 0x769
		::System::Boolean _VolPreVal_outlineBlendScanLine_overrideState; // 0x76A
		::System::Boolean _VolPreVal_outlineBlendScanLine; // 0x76B
		::System::Boolean _VolPreVal_outlineOpacity_overrideState; // 0x76C
		::System::Byte _padding88[0x3];
		::System::Single _VolPreVal_outlineOpacity; // 0x770
		::System::Boolean _VolPreVal_outlineDiffOffset_overrideState; // 0x774
		::System::Byte _padding89[0x3];
		::System::Single _VolPreVal_outlineDiffOffset; // 0x778
		::System::Boolean _VolPreVal_outlineDepthThreshold_overrideState; // 0x77C
		::System::Byte _padding90[0x3];
		::System::Single _VolPreVal_outlineDepthThreshold; // 0x780
		::System::Boolean _VolPreVal_outlineNormalThreshold_overrideState; // 0x784
		::System::Byte _padding91[0x3];
		::System::Single _VolPreVal_outlineNormalThreshold; // 0x788
		::System::Boolean _VolPreVal_outlineNormalThresholdScale_overrideState; // 0x78C
		::System::Byte _padding92[0x3];
		::System::Single _VolPreVal_outlineNormalThresholdScale; // 0x790
		::System::Boolean _VolPreVal_outlineColor_overrideState; // 0x794
		::System::Byte _padding93[0x3];
		::UnityEngine::Color _VolPreVal_outlineColor; // 0x798
		::System::Boolean _VolPreVal_outlineInUberShader_overrideState; // 0x7A8
		::System::Boolean _VolPreVal_outlineInUberShader; // 0x7A9
		::System::Boolean _VolPreVal_outlineDistortion_overrideState; // 0x7AA
		::System::Boolean _VolPreVal_outlineDistortion; // 0x7AB
		::System::Boolean _VolPreVal_outlineDistortionTex_overrideState; // 0x7AC
		::System::Byte _padding94[0x3];
		::UnityEngine::Texture* _VolPreVal_outlineDistortionTex; // 0x7B0
		::System::Boolean _VolPreVal_outlineDistortionTexTiling_overrideState; // 0x7B8
		::System::Byte _padding95[0x3];
		::UnityEngine::Vector2 _VolPreVal_outlineDistortionTexTiling; // 0x7BC
		::System::Boolean _VolPreVal_outlineDistortionTexOffset_overrideState; // 0x7C4
		::System::Byte _padding96[0x3];
		::UnityEngine::Vector2 _VolPreVal_outlineDistortionTexOffset; // 0x7C8
		::System::Boolean _VolPreVal_outlineDistortionUVSpeed_overrideState; // 0x7D0
		::System::Byte _padding97[0x3];
		::UnityEngine::Vector2 _VolPreVal_outlineDistortionUVSpeed; // 0x7D4
		::System::Boolean _VolPreVal_outlineDistortionOffset_overrideState; // 0x7DC
		::System::Byte _padding98[0x3];
		::UnityEngine::Vector2 _VolPreVal_outlineDistortionOffset; // 0x7E0
		::System::Boolean _VolPreVal_outlineDistortionIntensity_overrideState; // 0x7E8
		::System::Byte _padding99[0x3];
		::UnityEngine::Vector2 _VolPreVal_outlineDistortionIntensity; // 0x7EC
		::System::Boolean _VolPreVal_textureSheetOn_overrideState; // 0x7F4
		::System::Boolean _VolPreVal_textureSheetOn; // 0x7F5
		::System::Boolean _VolPreVal_textureSheetTex_overrideState; // 0x7F6
		::System::Byte _padding100[0x1];
		::UnityEngine::Texture* _VolPreVal_textureSheetTex; // 0x7F8
		::System::Boolean _VolPreVal_textureSheetXY_overrideState; // 0x800
		::System::Byte _padding101[0x3];
		::UnityEngine::Vector2 _VolPreVal_textureSheetXY; // 0x804
		::System::Boolean _VolPreVal_textureSheetIndex_overrideState; // 0x80C
		::System::Byte _padding102[0x3];
		::System::Int32 _VolPreVal_textureSheetIndex; // 0x810
		::System::Boolean _VolPreVal_textureSheetColor_overrideState; // 0x814
		::System::Byte _padding103[0x3];
		::UnityEngine::Color _VolPreVal_textureSheetColor; // 0x818
		::System::Boolean _VolPreVal_lensDistortionIntensity_overrideState; // 0x828
		::System::Byte _padding104[0x3];
		::System::Single _VolPreVal_lensDistortionIntensity; // 0x82C
		::System::Boolean _VolPreVal_lensDistortionXMultiplier_overrideState; // 0x830
		::System::Byte _padding105[0x3];
		::System::Single _VolPreVal_lensDistortionXMultiplier; // 0x834
		::System::Boolean _VolPreVal_lensDistortionYMultiplier_overrideState; // 0x838
		::System::Byte _padding106[0x3];
		::System::Single _VolPreVal_lensDistortionYMultiplier; // 0x83C
		::System::Boolean _VolPreVal_lensDistortionCenter_overrideState; // 0x840
		::System::Byte _padding107[0x3];
		::UnityEngine::Vector2 _VolPreVal_lensDistortionCenter; // 0x844
		::System::Boolean _VolPreVal_lensDistortionScale_overrideState; // 0x84C
		::System::Byte _padding108[0x3];
		::System::Single _VolPreVal_lensDistortionScale; // 0x850
		::System::Boolean _VolPreVal_enableDistanceDistortionColorization_overrideState; // 0x854
		::System::Boolean _VolPreVal_enableDistanceDistortionColorization; // 0x855
		::System::Boolean _VolPreVal_distanceColorizationEffect_overrideState; // 0x856
		::System::Byte _padding109[0x1];
		::System::Single _VolPreVal_distanceColorizationEffect; // 0x858
		::System::Boolean _VolPreVal_distanceDistortionTexture_overrideState; // 0x85C
		::System::Byte _padding110[0x3];
		::UnityEngine::Texture* _VolPreVal_distanceDistortionTexture; // 0x860
		::System::Boolean _VolPreVal_distanceColorizeTexture_overrideState; // 0x868
		::System::Byte _padding111[0x7];
		::UnityEngine::Texture* _VolPreVal_distanceColorizeTexture; // 0x870
		::System::Boolean _VolPreVal_distanceDistortionStart_overrideState; // 0x878
		::System::Byte _padding112[0x3];
		::System::Single _VolPreVal_distanceDistortionStart; // 0x87C
		::System::Boolean _VolPreVal_distanceDistortionEnd_overrideState; // 0x880
		::System::Byte _padding113[0x3];
		::System::Single _VolPreVal_distanceDistortionEnd; // 0x884
		::System::Boolean _VolPreVal_distanceDistortionFadeRange_overrideState; // 0x888
		::System::Byte _padding114[0x3];
		::System::Single _VolPreVal_distanceDistortionFadeRange; // 0x88C
		::System::Boolean _VolPreVal_distanceDistortionHeightStart_overrideState; // 0x890
		::System::Byte _padding115[0x3];
		::System::Single _VolPreVal_distanceDistortionHeightStart; // 0x894
		::System::Boolean _VolPreVal_distanceDistortionHeightEnd_overrideState; // 0x898
		::System::Byte _padding116[0x3];
		::System::Single _VolPreVal_distanceDistortionHeightEnd; // 0x89C
		::System::Boolean _VolPreVal_distanceDistortionHeightFadeRange_overrideState; // 0x8A0
		::System::Byte _padding117[0x3];
		::System::Single _VolPreVal_distanceDistortionHeightFadeRange; // 0x8A4
		::System::Boolean _VolPreVal_distanceDistortionOffsetSpeed_overrideState; // 0x8A8
		::System::Byte _padding118[0x3];
		::UnityEngine::Vector3 _VolPreVal_distanceDistortionOffsetSpeed; // 0x8AC
		::System::Boolean _VolPreVal_distanceDistortionTiling_overrideState; // 0x8B8
		::System::Byte _padding119[0x3];
		::System::Single _VolPreVal_distanceDistortionTiling; // 0x8BC
		::System::Boolean _VolPreVal_distanceDistortionIntensity_overrideState; // 0x8C0
		::System::Byte _padding120[0x3];
		::System::Single _VolPreVal_distanceDistortionIntensity; // 0x8C4
		::System::Boolean _VolPreVal_distanceColorizationOffsetSpeed_overrideState; // 0x8C8
		::System::Byte _padding121[0x3];
		::UnityEngine::Vector3 _VolPreVal_distanceColorizationOffsetSpeed; // 0x8CC
		::System::Boolean _VolPreVal_distanceColorizationTiling_overrideState; // 0x8D8
		::System::Byte _padding122[0x3];
		::System::Single _VolPreVal_distanceColorizationTiling; // 0x8DC
		::System::Boolean _VolPreVal_distanceDistortionColor_overrideState; // 0x8E0
		::System::Byte _padding123[0x3];
		::UnityEngine::Color _VolPreVal_distanceDistortionColor; // 0x8E4
		::System::Boolean _VolPreVal_distanceDistortionBlendMode_overrideState; // 0x8F4
		::System::Byte _padding124[0x3];
		::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode _VolPreVal_distanceDistortionBlendMode; // 0x8F8
		::System::Boolean _VolPreVal_useStencil_overrideState; // 0x8FC
		::System::Boolean _VolPreVal_useStencil; // 0x8FD
		::System::Boolean _VolPreVal_applyBeforeUberPost_overrideState; // 0x8FE
		::System::Boolean _VolPreVal_applyBeforeUberPost; // 0x8FF
		::System::Boolean _VolPreVal_screenSpaceGrid_overrideState; // 0x900
		::System::Boolean _VolPreVal_screenSpaceGrid; // 0x901
		::System::Boolean _VolPreVal_outlineScreenSpaceMaskTex_overrideState; // 0x902
		::System::Byte _padding125[0x5];
		::UnityEngine::Texture* _VolPreVal_outlineScreenSpaceMaskTex; // 0x908
		::System::Boolean _VolPreVal_scanCustomCenterPosition_overrideState; // 0x910
		::System::Byte _padding126[0x3];
		::UnityEngine::Vector3 _VolPreVal_scanCustomCenterPosition; // 0x914
		::System::Boolean _VolPreVal_outlineScreenSpaceMaskTexScaleOffset_overrideState; // 0x920
		::System::Byte _padding127[0x3];
		::UnityEngine::Vector4 _VolPreVal_outlineScreenSpaceMaskTexScaleOffset; // 0x924
		::System::Boolean _VolPreVal_scanlineBlendMode_overrideState; // 0x934
		::System::Byte _padding128[0x3];
		::UnityEngine::Rendering::Universal::ScanlineBlendMode _VolPreVal_scanlineBlendMode; // 0x938
		::System::Boolean _VolPreVal_enable2DSpot_overrideState; // 0x93C
		::System::Boolean _VolPreVal_enable2DSpot; // 0x93D
		::System::Boolean _VolPreVal_spotCenter_overrideState; // 0x93E
		::System::Byte _padding129[0x1];
		::UnityEngine::Vector2 _VolPreVal_spotCenter; // 0x940
		::System::Boolean _VolPreVal_spotRadius_overrideState; // 0x948
		::System::Byte _padding130[0x3];
		::System::Single _VolPreVal_spotRadius; // 0x94C
		::System::Boolean _VolPreVal_blackIntensity_overrideState; // 0x950
		::System::Byte _padding131[0x3];
		::System::Single _VolPreVal_blackIntensity; // 0x954
		::System::Boolean _VolPreVal_overlayIntensity_overrideState; // 0x958
		::System::Byte _padding132[0x3];
		::System::Single _VolPreVal_overlayIntensity; // 0x95C
		::System::Boolean _VolPreVal_curvePower_overrideState; // 0x960
		::System::Byte _padding133[0x3];
		::System::Single _VolPreVal_curvePower; // 0x964
		::System::Boolean _VolPreVal_outlineNormalDiffThreshold_overrideState; // 0x968
		::System::Byte _padding134[0x3];
		::System::Single _VolPreVal_outlineNormalDiffThreshold; // 0x96C
		::System::Single _TimelineCurveFirstVal_hue; // 0x970
		::System::Single _TimelineCurveLastVal_hue; // 0x974
		::System::Single _TimelineCurveFirstVal_saturation; // 0x978
		::System::Single _TimelineCurveLastVal_saturation; // 0x97C
		::System::Single _TimelineCurveFirstVal_brightness; // 0x980
		::System::Single _TimelineCurveLastVal_brightness; // 0x984
		::System::Single _TimelineCurveFirstVal_contrast; // 0x988
		::System::Single _TimelineCurveLastVal_contrast; // 0x98C
		::System::Single _TimelineCurveFirstVal_contrastMiddlePoint; // 0x990
		::System::Single _TimelineCurveLastVal_contrastMiddlePoint; // 0x994
		::System::Single _TimelineCurveFirstVal_colorTintStart; // 0x998
		::System::Single _TimelineCurveLastVal_colorTintStart; // 0x99C
		::UnityEngine::Color _TimelineCurveFirstVal_colorTintNear; // 0x9A0
		::UnityEngine::Color _TimelineCurveLastVal_colorTintNear; // 0x9B0
		::System::Single _TimelineCurveFirstVal_colorTintEnd; // 0x9C0
		::System::Single _TimelineCurveLastVal_colorTintEnd; // 0x9C4
		::UnityEngine::Color _TimelineCurveFirstVal_colorTintFar; // 0x9C8
		::UnityEngine::Color _TimelineCurveLastVal_colorTintFar; // 0x9D8
		::System::Single _TimelineCurveFirstVal_scanlineContrast; // 0x9E8
		::System::Single _TimelineCurveLastVal_scanlineContrast; // 0x9EC
		::System::Single _TimelineCurveFirstVal_scanlineDistortion; // 0x9F0
		::System::Single _TimelineCurveLastVal_scanlineDistortion; // 0x9F4
		::System::Boolean _TimelineCurveFirstVal_useCustomScanDirection; // 0x9F8
		::System::Boolean _TimelineCurveLastVal_useCustomScanDirection; // 0x9F9
		::System::Byte _padding135[0x2];
		::System::Single _TimelineCurveFirstVal_customScanDirection; // 0x9FC
		::System::Single _TimelineCurveLastVal_customScanDirection; // 0xA00
		::UnityEngine::Vector2 _TimelineCurveFirstVal_scanMaskTexTiling; // 0xA04
		::UnityEngine::Vector2 _TimelineCurveLastVal_scanMaskTexTiling; // 0xA0C
		::UnityEngine::Vector2 _TimelineCurveFirstVal_scanMaskTexOffset; // 0xA14
		::UnityEngine::Vector2 _TimelineCurveLastVal_scanMaskTexOffset; // 0xA1C
		::UnityEngine::Vector2 _TimelineCurveFirstVal_scanMaskTexUVSpeed; // 0xA24
		::UnityEngine::Vector2 _TimelineCurveLastVal_scanMaskTexUVSpeed; // 0xA2C
		::System::Single _TimelineCurveFirstVal_scanMaskBaseY; // 0xA34
		::System::Single _TimelineCurveLastVal_scanMaskBaseY; // 0xA38
		::System::Single _TimelineCurveFirstVal_scanMaskYRange; // 0xA3C
		::System::Single _TimelineCurveLastVal_scanMaskYRange; // 0xA40
		::System::Boolean _TimelineCurveFirstVal_keepInFrontForUberPost; // 0xA44
		::System::Boolean _TimelineCurveLastVal_keepInFrontForUberPost; // 0xA45
		::System::Byte _padding136[0x2];
		::System::Single _TimelineCurveFirstVal_scanStart0; // 0xA48
		::System::Single _TimelineCurveLastVal_scanStart0; // 0xA4C
		::System::Single _TimelineCurveFirstVal_scanEnd0; // 0xA50
		::System::Single _TimelineCurveLastVal_scanEnd0; // 0xA54
		::System::Single _TimelineCurveFirstVal_scanStart0Soft; // 0xA58
		::System::Single _TimelineCurveLastVal_scanStart0Soft; // 0xA5C
		::System::Single _TimelineCurveFirstVal_scanEnd0Soft; // 0xA60
		::System::Single _TimelineCurveLastVal_scanEnd0Soft; // 0xA64
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor0; // 0xA68
		::UnityEngine::Color _TimelineCurveLastVal_scanColor0; // 0xA78
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor0End; // 0xA88
		::UnityEngine::Color _TimelineCurveLastVal_scanColor0End; // 0xA98
		::System::Single _TimelineCurveFirstVal_scanMaskIntensity0; // 0xAA8
		::System::Single _TimelineCurveLastVal_scanMaskIntensity0; // 0xAAC
		::System::Single _TimelineCurveFirstVal_scanStart1; // 0xAB0
		::System::Single _TimelineCurveLastVal_scanStart1; // 0xAB4
		::System::Single _TimelineCurveFirstVal_scanEnd1; // 0xAB8
		::System::Single _TimelineCurveLastVal_scanEnd1; // 0xABC
		::System::Single _TimelineCurveFirstVal_scanStart1Soft; // 0xAC0
		::System::Single _TimelineCurveLastVal_scanStart1Soft; // 0xAC4
		::System::Single _TimelineCurveFirstVal_scanEnd1Soft; // 0xAC8
		::System::Single _TimelineCurveLastVal_scanEnd1Soft; // 0xACC
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor1; // 0xAD0
		::UnityEngine::Color _TimelineCurveLastVal_scanColor1; // 0xAE0
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor1End; // 0xAF0
		::UnityEngine::Color _TimelineCurveLastVal_scanColor1End; // 0xB00
		::System::Single _TimelineCurveFirstVal_scanMaskIntensity1; // 0xB10
		::System::Single _TimelineCurveLastVal_scanMaskIntensity1; // 0xB14
		::System::Single _TimelineCurveFirstVal_scanStart2; // 0xB18
		::System::Single _TimelineCurveLastVal_scanStart2; // 0xB1C
		::System::Single _TimelineCurveFirstVal_scanEnd2; // 0xB20
		::System::Single _TimelineCurveLastVal_scanEnd2; // 0xB24
		::System::Single _TimelineCurveFirstVal_scanStart2Soft; // 0xB28
		::System::Single _TimelineCurveLastVal_scanStart2Soft; // 0xB2C
		::System::Single _TimelineCurveFirstVal_scanEnd2Soft; // 0xB30
		::System::Single _TimelineCurveLastVal_scanEnd2Soft; // 0xB34
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor2; // 0xB38
		::UnityEngine::Color _TimelineCurveLastVal_scanColor2; // 0xB48
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor2End; // 0xB58
		::UnityEngine::Color _TimelineCurveLastVal_scanColor2End; // 0xB68
		::System::Single _TimelineCurveFirstVal_scanMaskIntensity2; // 0xB78
		::System::Single _TimelineCurveLastVal_scanMaskIntensity2; // 0xB7C
		::System::Single _TimelineCurveFirstVal_scanStart3; // 0xB80
		::System::Single _TimelineCurveLastVal_scanStart3; // 0xB84
		::System::Single _TimelineCurveFirstVal_scanEnd3; // 0xB88
		::System::Single _TimelineCurveLastVal_scanEnd3; // 0xB8C
		::System::Single _TimelineCurveFirstVal_scanStart3Soft; // 0xB90
		::System::Single _TimelineCurveLastVal_scanStart3Soft; // 0xB94
		::System::Single _TimelineCurveFirstVal_scanEnd3Soft; // 0xB98
		::System::Single _TimelineCurveLastVal_scanEnd3Soft; // 0xB9C
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor3; // 0xBA0
		::UnityEngine::Color _TimelineCurveLastVal_scanColor3; // 0xBB0
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor3End; // 0xBC0
		::UnityEngine::Color _TimelineCurveLastVal_scanColor3End; // 0xBD0
		::System::Single _TimelineCurveFirstVal_scanMaskIntensity3; // 0xBE0
		::System::Single _TimelineCurveLastVal_scanMaskIntensity3; // 0xBE4
		::UnityEngine::Vector2 _TimelineCurveFirstVal_uvOffsetR; // 0xBE8
		::UnityEngine::Vector2 _TimelineCurveLastVal_uvOffsetR; // 0xBF0
		::UnityEngine::Color _TimelineCurveFirstVal_colorR; // 0xBF8
		::UnityEngine::Color _TimelineCurveLastVal_colorR; // 0xC08
		::UnityEngine::Vector2 _TimelineCurveFirstVal_uvOffsetG; // 0xC18
		::UnityEngine::Vector2 _TimelineCurveLastVal_uvOffsetG; // 0xC20
		::UnityEngine::Color _TimelineCurveFirstVal_colorG; // 0xC28
		::UnityEngine::Color _TimelineCurveLastVal_colorG; // 0xC38
		::UnityEngine::Vector2 _TimelineCurveFirstVal_uvOffsetB; // 0xC48
		::UnityEngine::Vector2 _TimelineCurveLastVal_uvOffsetB; // 0xC50
		::UnityEngine::Color _TimelineCurveFirstVal_colorB; // 0xC58
		::UnityEngine::Color _TimelineCurveLastVal_colorB; // 0xC68
		::System::Single _TimelineCurveFirstVal_fadeSourceImage; // 0xC78
		::System::Single _TimelineCurveLastVal_fadeSourceImage; // 0xC7C
		::System::Single _TimelineCurveFirstVal_sliceWidth; // 0xC80
		::System::Single _TimelineCurveLastVal_sliceWidth; // 0xC84
		::System::Single _TimelineCurveFirstVal_sliceAngle; // 0xC88
		::System::Single _TimelineCurveLastVal_sliceAngle; // 0xC8C
		::System::Boolean _TimelineCurveFirstVal_reverse; // 0xC90
		::System::Boolean _TimelineCurveLastVal_reverse; // 0xC91
		::System::Byte _padding137[0x2];
		::System::Single _TimelineCurveFirstVal_sliceOffset; // 0xC94
		::System::Single _TimelineCurveLastVal_sliceOffset; // 0xC98
		::UnityEngine::Color _TimelineCurveFirstVal_sliceColorA; // 0xC9C
		::UnityEngine::Color _TimelineCurveLastVal_sliceColorA; // 0xCAC
		::UnityEngine::Color _TimelineCurveFirstVal_sliceColorB; // 0xCBC
		::UnityEngine::Color _TimelineCurveLastVal_sliceColorB; // 0xCCC
		::System::Boolean _TimelineCurveFirstVal_gridOn; // 0xCDC
		::System::Boolean _TimelineCurveLastVal_gridOn; // 0xCDD
		::System::Byte _padding138[0x2];
		::UnityEngine::Color _TimelineCurveFirstVal_gridColor; // 0xCE0
		::UnityEngine::Color _TimelineCurveLastVal_gridColor; // 0xCF0
		::System::Single _TimelineCurveFirstVal_groundYPos; // 0xD00
		::System::Single _TimelineCurveLastVal_groundYPos; // 0xD04
		::System::Single _TimelineCurveFirstVal_screenSpaceGridScale; // 0xD08
		::System::Single _TimelineCurveLastVal_screenSpaceGridScale; // 0xD0C
		::System::Single _TimelineCurveFirstVal_screenSpaceGridWidth; // 0xD10
		::System::Single _TimelineCurveLastVal_screenSpaceGridWidth; // 0xD14
		::System::Boolean _TimelineCurveFirstVal_outlineOn; // 0xD18
		::System::Boolean _TimelineCurveLastVal_outlineOn; // 0xD19
		::System::Byte _padding139[0x2];
		::System::Single _TimelineCurveFirstVal_outlineOpacity; // 0xD1C
		::System::Single _TimelineCurveLastVal_outlineOpacity; // 0xD20
		::UnityEngine::Color _TimelineCurveFirstVal_outlineColor; // 0xD24
		::UnityEngine::Color _TimelineCurveLastVal_outlineColor; // 0xD34
		::System::Boolean _TimelineCurveFirstVal_outlineInUberShader; // 0xD44
		::System::Boolean _TimelineCurveLastVal_outlineInUberShader; // 0xD45
		::System::Boolean _TimelineCurveFirstVal_outlineDistortion; // 0xD46
		::System::Boolean _TimelineCurveLastVal_outlineDistortion; // 0xD47
		::UnityEngine::Vector2 _TimelineCurveFirstVal_outlineDistortionTexTiling; // 0xD48
		::UnityEngine::Vector2 _TimelineCurveLastVal_outlineDistortionTexTiling; // 0xD50
		::UnityEngine::Vector2 _TimelineCurveFirstVal_outlineDistortionTexOffset; // 0xD58
		::UnityEngine::Vector2 _TimelineCurveLastVal_outlineDistortionTexOffset; // 0xD60
		::UnityEngine::Vector2 _TimelineCurveFirstVal_outlineDistortionUVSpeed; // 0xD68
		::UnityEngine::Vector2 _TimelineCurveLastVal_outlineDistortionUVSpeed; // 0xD70
		::UnityEngine::Vector2 _TimelineCurveFirstVal_outlineDistortionOffset; // 0xD78
		::UnityEngine::Vector2 _TimelineCurveLastVal_outlineDistortionOffset; // 0xD80
		::UnityEngine::Vector2 _TimelineCurveFirstVal_outlineDistortionIntensity; // 0xD88
		::UnityEngine::Vector2 _TimelineCurveLastVal_outlineDistortionIntensity; // 0xD90
		::System::Int32 _TimelineCurveFirstVal_textureSheetIndex; // 0xD98
		::System::Int32 _TimelineCurveLastVal_textureSheetIndex; // 0xD9C
		::UnityEngine::Color _TimelineCurveFirstVal_textureSheetColor; // 0xDA0
		::UnityEngine::Color _TimelineCurveLastVal_textureSheetColor; // 0xDB0
		::System::Single _TimelineCurveFirstVal_lensDistortionIntensity; // 0xDC0
		::System::Single _TimelineCurveLastVal_lensDistortionIntensity; // 0xDC4
		::System::Single _TimelineCurveFirstVal_lensDistortionXMultiplier; // 0xDC8
		::System::Single _TimelineCurveLastVal_lensDistortionXMultiplier; // 0xDCC
		::System::Single _TimelineCurveFirstVal_lensDistortionYMultiplier; // 0xDD0
		::System::Single _TimelineCurveLastVal_lensDistortionYMultiplier; // 0xDD4
		::UnityEngine::Vector2 _TimelineCurveFirstVal_lensDistortionCenter; // 0xDD8
		::UnityEngine::Vector2 _TimelineCurveLastVal_lensDistortionCenter; // 0xDE0
		::System::Single _TimelineCurveFirstVal_lensDistortionScale; // 0xDE8
		::System::Single _TimelineCurveLastVal_lensDistortionScale; // 0xDEC
		::System::Boolean _TimelineCurveFirstVal_enableDistanceDistortionColorization; // 0xDF0
		::System::Boolean _TimelineCurveLastVal_enableDistanceDistortionColorization; // 0xDF1
		::System::Byte _padding140[0x2];
		::System::Single _TimelineCurveFirstVal_distanceColorizationEffect; // 0xDF4
		::System::Single _TimelineCurveLastVal_distanceColorizationEffect; // 0xDF8
		::System::Single _TimelineCurveFirstVal_distanceDistortionStart; // 0xDFC
		::System::Single _TimelineCurveLastVal_distanceDistortionStart; // 0xE00
		::System::Single _TimelineCurveFirstVal_distanceDistortionEnd; // 0xE04
		::System::Single _TimelineCurveLastVal_distanceDistortionEnd; // 0xE08
		::System::Single _TimelineCurveFirstVal_distanceDistortionFadeRange; // 0xE0C
		::System::Single _TimelineCurveLastVal_distanceDistortionFadeRange; // 0xE10
		::System::Single _TimelineCurveFirstVal_distanceDistortionHeightStart; // 0xE14
		::System::Single _TimelineCurveLastVal_distanceDistortionHeightStart; // 0xE18
		::System::Single _TimelineCurveFirstVal_distanceDistortionHeightEnd; // 0xE1C
		::System::Single _TimelineCurveLastVal_distanceDistortionHeightEnd; // 0xE20
		::System::Single _TimelineCurveFirstVal_distanceDistortionHeightFadeRange; // 0xE24
		::System::Single _TimelineCurveLastVal_distanceDistortionHeightFadeRange; // 0xE28
		::UnityEngine::Vector3 _TimelineCurveFirstVal_distanceDistortionOffsetSpeed; // 0xE2C
		::UnityEngine::Vector3 _TimelineCurveLastVal_distanceDistortionOffsetSpeed; // 0xE38
		::System::Single _TimelineCurveFirstVal_distanceDistortionTiling; // 0xE44
		::System::Single _TimelineCurveLastVal_distanceDistortionTiling; // 0xE48
		::System::Single _TimelineCurveFirstVal_distanceDistortionIntensity; // 0xE4C
		::System::Single _TimelineCurveLastVal_distanceDistortionIntensity; // 0xE50
		::UnityEngine::Vector3 _TimelineCurveFirstVal_distanceColorizationOffsetSpeed; // 0xE54
		::UnityEngine::Vector3 _TimelineCurveLastVal_distanceColorizationOffsetSpeed; // 0xE60
		::System::Single _TimelineCurveFirstVal_distanceColorizationTiling; // 0xE6C
		::System::Single _TimelineCurveLastVal_distanceColorizationTiling; // 0xE70
		::UnityEngine::Color _TimelineCurveFirstVal_distanceDistortionColor; // 0xE74
		::UnityEngine::Color _TimelineCurveLastVal_distanceDistortionColor; // 0xE84
		::System::Boolean _TimelineCurveFirstVal_useStencil; // 0xE94
		::System::Boolean _TimelineCurveLastVal_useStencil; // 0xE95
		::System::Boolean _TimelineCurveFirstVal_applyBeforeUberPost; // 0xE96
		::System::Boolean _TimelineCurveLastVal_applyBeforeUberPost; // 0xE97
		::System::Boolean _TimelineCurveFirstVal_screenSpaceGrid; // 0xE98
		::System::Boolean _TimelineCurveLastVal_screenSpaceGrid; // 0xE99
		::System::Byte _padding141[0x2];
		::UnityEngine::Vector3 _TimelineCurveFirstVal_scanCustomCenterPosition; // 0xE9C
		::UnityEngine::Vector3 _TimelineCurveLastVal_scanCustomCenterPosition; // 0xEA8
		::UnityEngine::Vector4 _TimelineCurveFirstVal_outlineScreenSpaceMaskTexScaleOffset; // 0xEB4
		::UnityEngine::Vector4 _TimelineCurveLastVal_outlineScreenSpaceMaskTexScaleOffset; // 0xEC4
		::System::Boolean _TimelineCurveFirstVal_enable2DSpot; // 0xED4
		::System::Boolean _TimelineCurveLastVal_enable2DSpot; // 0xED5
		::System::Byte _padding142[0x2];
		::UnityEngine::Vector2 _TimelineCurveFirstVal_spotCenter; // 0xED8
		::UnityEngine::Vector2 _TimelineCurveLastVal_spotCenter; // 0xEE0
		::System::Single _TimelineCurveFirstVal_spotRadius; // 0xEE8
		::System::Single _TimelineCurveLastVal_spotRadius; // 0xEEC
		::System::Single _TimelineCurveFirstVal_blackIntensity; // 0xEF0
		::System::Single _TimelineCurveLastVal_blackIntensity; // 0xEF4
		::System::Single _TimelineCurveFirstVal_overlayIntensity; // 0xEF8
		::System::Single _TimelineCurveLastVal_overlayIntensity; // 0xEFC
		::System::Single _TimelineCurveFirstVal_curvePower; // 0xF00
		::System::Single _TimelineCurveLastVal_curvePower; // 0xF04
		::System::Single _TimelineCurveFirstVal_outlineNormalDiffThreshold; // 0xF08
		::System::Single _TimelineCurveLastVal_outlineNormalDiffThreshold; // 0xF0C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enable_FieldHandleType; // 0xF10
		::System::Boolean ESPP_enable; // 0xF14
		::System::Byte _padding143[0x3];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hue_FieldHandleType; // 0xF18
		::System::Boolean ESPP_hue_UseIt; // 0xF1C
		::System::Byte _padding144[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hue; // 0xF20
		::System::Boolean ESPP_hue_EnableFade; // 0xF28
		::System::Boolean ESPP_hue_EnableOverrideDefaultValue; // 0xF29
		::System::Byte _padding145[0x2];
		::System::Single ESPP_hue_OverrideDefaultValue; // 0xF2C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_saturation_FieldHandleType; // 0xF30
		::System::Boolean ESPP_saturation_UseIt; // 0xF34
		::System::Byte _padding146[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_saturation; // 0xF38
		::System::Boolean ESPP_saturation_EnableFade; // 0xF40
		::System::Boolean ESPP_saturation_EnableOverrideDefaultValue; // 0xF41
		::System::Byte _padding147[0x2];
		::System::Single ESPP_saturation_OverrideDefaultValue; // 0xF44
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_brightness_FieldHandleType; // 0xF48
		::System::Boolean ESPP_brightness_UseIt; // 0xF4C
		::System::Byte _padding148[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_brightness; // 0xF50
		::System::Boolean ESPP_brightness_EnableFade; // 0xF58
		::System::Boolean ESPP_brightness_EnableOverrideDefaultValue; // 0xF59
		::System::Byte _padding149[0x2];
		::System::Single ESPP_brightness_OverrideDefaultValue; // 0xF5C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_contrast_FieldHandleType; // 0xF60
		::System::Boolean ESPP_contrast_UseIt; // 0xF64
		::System::Byte _padding150[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_contrast; // 0xF68
		::System::Boolean ESPP_contrast_EnableFade; // 0xF70
		::System::Boolean ESPP_contrast_EnableOverrideDefaultValue; // 0xF71
		::System::Byte _padding151[0x2];
		::System::Single ESPP_contrast_OverrideDefaultValue; // 0xF74
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_contrastMiddlePoint_FieldHandleType; // 0xF78
		::System::Boolean ESPP_contrastMiddlePoint_UseIt; // 0xF7C
		::System::Byte _padding152[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_contrastMiddlePoint; // 0xF80
		::System::Boolean ESPP_contrastMiddlePoint_EnableFade; // 0xF88
		::System::Boolean ESPP_contrastMiddlePoint_EnableOverrideDefaultValue; // 0xF89
		::System::Byte _padding153[0x2];
		::System::Single ESPP_contrastMiddlePoint_OverrideDefaultValue; // 0xF8C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorTintStart_FieldHandleType; // 0xF90
		::System::Boolean ESPP_colorTintStart_UseIt; // 0xF94
		::System::Byte _padding154[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_colorTintStart; // 0xF98
		::System::Boolean ESPP_colorTintStart_EnableFade; // 0xFA0
		::System::Boolean ESPP_colorTintStart_EnableOverrideDefaultValue; // 0xFA1
		::System::Byte _padding155[0x2];
		::System::Single ESPP_colorTintStart_OverrideDefaultValue; // 0xFA4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorTintNear_FieldHandleType; // 0xFA8
		::System::Boolean ESPP_colorTintNear_UseIt; // 0xFAC
		::System::Byte _padding156[0x3];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_colorTintNear; // 0xFB0
		::System::Boolean ESPP_colorTintNear_EnableFade; // 0xFB8
		::System::Boolean ESPP_colorTintNear_EnableOverrideDefaultValue; // 0xFB9
		::System::Byte _padding157[0x2];
		::UnityEngine::Color ESPP_colorTintNear_OverrideDefaultValue; // 0xFBC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorTintEnd_FieldHandleType; // 0xFCC
		::System::Boolean ESPP_colorTintEnd_UseIt; // 0xFD0
		::System::Byte _padding158[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_colorTintEnd; // 0xFD8
		::System::Boolean ESPP_colorTintEnd_EnableFade; // 0xFE0
		::System::Boolean ESPP_colorTintEnd_EnableOverrideDefaultValue; // 0xFE1
		::System::Byte _padding159[0x2];
		::System::Single ESPP_colorTintEnd_OverrideDefaultValue; // 0xFE4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorTintFar_FieldHandleType; // 0xFE8
		::System::Boolean ESPP_colorTintFar_UseIt; // 0xFEC
		::System::Byte _padding160[0x3];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_colorTintFar; // 0xFF0
		::System::Boolean ESPP_colorTintFar_EnableFade; // 0xFF8
		::System::Boolean ESPP_colorTintFar_EnableOverrideDefaultValue; // 0xFF9
		::System::Byte _padding161[0x2];
		::UnityEngine::Color ESPP_colorTintFar_OverrideDefaultValue; // 0xFFC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanlineWidth_FieldHandleType; // 0x100C
		::System::Single ESPP_scanlineWidth; // 0x1010
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanlineContrast_FieldHandleType; // 0x1014
		::System::Boolean ESPP_scanlineContrast_UseIt; // 0x1018
		::System::Byte _padding162[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanlineContrast; // 0x1020
		::System::Boolean ESPP_scanlineContrast_EnableFade; // 0x1028
		::System::Boolean ESPP_scanlineContrast_EnableOverrideDefaultValue; // 0x1029
		::System::Byte _padding163[0x2];
		::System::Single ESPP_scanlineContrast_OverrideDefaultValue; // 0x102C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanlineDistortion_FieldHandleType; // 0x1030
		::System::Boolean ESPP_scanlineDistortion_UseIt; // 0x1034
		::System::Byte _padding164[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanlineDistortion; // 0x1038
		::System::Boolean ESPP_scanlineDistortion_EnableFade; // 0x1040
		::System::Boolean ESPP_scanlineDistortion_EnableOverrideDefaultValue; // 0x1041
		::System::Byte _padding165[0x2];
		::System::Single ESPP_scanlineDistortion_OverrideDefaultValue; // 0x1044
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanType_FieldHandleType; // 0x1048
		::UnityEngine::Rendering::Universal::ScanType ESPP_scanType; // 0x104C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useCustomScanDirection_FieldHandleType; // 0x1050
		::System::Boolean ESPP_useCustomScanDirection_UseIt; // 0x1054
		::System::Byte _padding166[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_useCustomScanDirection; // 0x1058
		::System::Boolean ESPP_useCustomScanDirection_EnableFade; // 0x1060
		::System::Boolean ESPP_useCustomScanDirection_EnableOverrideDefaultValue; // 0x1061
		::System::Boolean ESPP_useCustomScanDirection_OverrideDefaultValue; // 0x1062
		::System::Byte _padding167[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_customScanDirection_FieldHandleType; // 0x1064
		::System::Boolean ESPP_customScanDirection_UseIt; // 0x1068
		::System::Byte _padding168[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_customScanDirection; // 0x1070
		::System::Boolean ESPP_customScanDirection_EnableFade; // 0x1078
		::System::Boolean ESPP_customScanDirection_EnableOverrideDefaultValue; // 0x1079
		::System::Byte _padding169[0x2];
		::System::Single ESPP_customScanDirection_OverrideDefaultValue; // 0x107C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskType_FieldHandleType; // 0x1080
		::UnityEngine::Rendering::Universal::ScanMaskType ESPP_scanMaskType; // 0x1084
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskTex_FieldHandleType; // 0x1088
		::System::Byte _padding170[0x4];
		::UnityEngine::Texture* ESPP_scanMaskTex; // 0x1090
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskTexChannel_FieldHandleType; // 0x1098
		::UnityEngine::Rendering::Universal::ChannelMapping ESPP_scanMaskTexChannel; // 0x109C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskTexTiling_FieldHandleType; // 0x10A0
		::System::Boolean ESPP_scanMaskTexTiling_UseIt; // 0x10A4
		::System::Byte _padding171[0x3];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_scanMaskTexTiling; // 0x10A8
		::System::Boolean ESPP_scanMaskTexTiling_EnableFade; // 0x10B0
		::System::Boolean ESPP_scanMaskTexTiling_EnableOverrideDefaultValue; // 0x10B1
		::System::Byte _padding172[0x2];
		::UnityEngine::Vector2 ESPP_scanMaskTexTiling_OverrideDefaultValue; // 0x10B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskTexOffset_FieldHandleType; // 0x10BC
		::System::Boolean ESPP_scanMaskTexOffset_UseIt; // 0x10C0
		::System::Byte _padding173[0x7];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_scanMaskTexOffset; // 0x10C8
		::System::Boolean ESPP_scanMaskTexOffset_EnableFade; // 0x10D0
		::System::Boolean ESPP_scanMaskTexOffset_EnableOverrideDefaultValue; // 0x10D1
		::System::Byte _padding174[0x2];
		::UnityEngine::Vector2 ESPP_scanMaskTexOffset_OverrideDefaultValue; // 0x10D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskTexUVSpeed_FieldHandleType; // 0x10DC
		::System::Boolean ESPP_scanMaskTexUVSpeed_UseIt; // 0x10E0
		::System::Byte _padding175[0x7];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_scanMaskTexUVSpeed; // 0x10E8
		::System::Boolean ESPP_scanMaskTexUVSpeed_EnableFade; // 0x10F0
		::System::Boolean ESPP_scanMaskTexUVSpeed_EnableOverrideDefaultValue; // 0x10F1
		::System::Byte _padding176[0x2];
		::UnityEngine::Vector2 ESPP_scanMaskTexUVSpeed_OverrideDefaultValue; // 0x10F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskBaseY_FieldHandleType; // 0x10FC
		::System::Boolean ESPP_scanMaskBaseY_UseIt; // 0x1100
		::System::Byte _padding177[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanMaskBaseY; // 0x1108
		::System::Boolean ESPP_scanMaskBaseY_EnableFade; // 0x1110
		::System::Boolean ESPP_scanMaskBaseY_EnableOverrideDefaultValue; // 0x1111
		::System::Byte _padding178[0x2];
		::System::Single ESPP_scanMaskBaseY_OverrideDefaultValue; // 0x1114
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskYRange_FieldHandleType; // 0x1118
		::System::Boolean ESPP_scanMaskYRange_UseIt; // 0x111C
		::System::Byte _padding179[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanMaskYRange; // 0x1120
		::System::Boolean ESPP_scanMaskYRange_EnableFade; // 0x1128
		::System::Boolean ESPP_scanMaskYRange_EnableOverrideDefaultValue; // 0x1129
		::System::Byte _padding180[0x2];
		::System::Single ESPP_scanMaskYRange_OverrideDefaultValue; // 0x112C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_keepInFrontForUberPost_FieldHandleType; // 0x1130
		::System::Boolean ESPP_keepInFrontForUberPost_UseIt; // 0x1134
		::System::Byte _padding181[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_keepInFrontForUberPost; // 0x1138
		::System::Boolean ESPP_keepInFrontForUberPost_EnableFade; // 0x1140
		::System::Boolean ESPP_keepInFrontForUberPost_EnableOverrideDefaultValue; // 0x1141
		::System::Boolean ESPP_keepInFrontForUberPost_OverrideDefaultValue; // 0x1142
		::System::Byte _padding182[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart0_FieldHandleType; // 0x1144
		::System::Boolean ESPP_scanStart0_UseIt; // 0x1148
		::System::Byte _padding183[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart0; // 0x1150
		::System::Boolean ESPP_scanStart0_EnableFade; // 0x1158
		::System::Boolean ESPP_scanStart0_EnableOverrideDefaultValue; // 0x1159
		::System::Byte _padding184[0x2];
		::System::Single ESPP_scanStart0_OverrideDefaultValue; // 0x115C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd0_FieldHandleType; // 0x1160
		::System::Boolean ESPP_scanEnd0_UseIt; // 0x1164
		::System::Byte _padding185[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd0; // 0x1168
		::System::Boolean ESPP_scanEnd0_EnableFade; // 0x1170
		::System::Boolean ESPP_scanEnd0_EnableOverrideDefaultValue; // 0x1171
		::System::Byte _padding186[0x2];
		::System::Single ESPP_scanEnd0_OverrideDefaultValue; // 0x1174
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart0Soft_KeyFrame_FieldHandleType; // 0x1178
		::System::Boolean ESPP_scanStart0Soft_KeyFrame_UseIt; // 0x117C
		::System::Byte _padding187[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart0Soft_KeyFrame; // 0x1180
		::System::Boolean ESPP_scanStart0Soft_KeyFrame_EnableFade; // 0x1188
		::System::Boolean ESPP_scanStart0Soft_KeyFrame_EnableOverrideDefaultValue; // 0x1189
		::System::Byte _padding188[0x2];
		::System::Single ESPP_scanStart0Soft_KeyFrame_OverrideDefaultValue; // 0x118C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd0Soft_KeyFrame_FieldHandleType; // 0x1190
		::System::Boolean ESPP_scanEnd0Soft_KeyFrame_UseIt; // 0x1194
		::System::Byte _padding189[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd0Soft_KeyFrame; // 0x1198
		::System::Boolean ESPP_scanEnd0Soft_KeyFrame_EnableFade; // 0x11A0
		::System::Boolean ESPP_scanEnd0Soft_KeyFrame_EnableOverrideDefaultValue; // 0x11A1
		::System::Byte _padding190[0x2];
		::System::Single ESPP_scanEnd0Soft_KeyFrame_OverrideDefaultValue; // 0x11A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor0_FieldHandleType; // 0x11A8
		::System::Boolean ESPP_scanColor0_UseIt; // 0x11AC
		::System::Byte _padding191[0x3];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor0; // 0x11B0
		::System::Boolean ESPP_scanColor0_EnableFade; // 0x11B8
		::System::Boolean ESPP_scanColor0_EnableOverrideDefaultValue; // 0x11B9
		::System::Byte _padding192[0x2];
		::UnityEngine::Color ESPP_scanColor0_OverrideDefaultValue; // 0x11BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor0End_FieldHandleType; // 0x11CC
		::System::Boolean ESPP_scanColor0End_UseIt; // 0x11D0
		::System::Byte _padding193[0x7];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor0End; // 0x11D8
		::System::Boolean ESPP_scanColor0End_EnableFade; // 0x11E0
		::System::Boolean ESPP_scanColor0End_EnableOverrideDefaultValue; // 0x11E1
		::System::Byte _padding194[0x2];
		::UnityEngine::Color ESPP_scanColor0End_OverrideDefaultValue; // 0x11E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor0Mode_FieldHandleType; // 0x11F4
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod ESPP_scanColor0Mode; // 0x11F8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskIntensity0_FieldHandleType; // 0x11FC
		::System::Boolean ESPP_scanMaskIntensity0_UseIt; // 0x1200
		::System::Byte _padding195[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanMaskIntensity0; // 0x1208
		::System::Boolean ESPP_scanMaskIntensity0_EnableFade; // 0x1210
		::System::Boolean ESPP_scanMaskIntensity0_EnableOverrideDefaultValue; // 0x1211
		::System::Byte _padding196[0x2];
		::System::Single ESPP_scanMaskIntensity0_OverrideDefaultValue; // 0x1214
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart1_FieldHandleType; // 0x1218
		::System::Boolean ESPP_scanStart1_UseIt; // 0x121C
		::System::Byte _padding197[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart1; // 0x1220
		::System::Boolean ESPP_scanStart1_EnableFade; // 0x1228
		::System::Boolean ESPP_scanStart1_EnableOverrideDefaultValue; // 0x1229
		::System::Byte _padding198[0x2];
		::System::Single ESPP_scanStart1_OverrideDefaultValue; // 0x122C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd1_FieldHandleType; // 0x1230
		::System::Boolean ESPP_scanEnd1_UseIt; // 0x1234
		::System::Byte _padding199[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd1; // 0x1238
		::System::Boolean ESPP_scanEnd1_EnableFade; // 0x1240
		::System::Boolean ESPP_scanEnd1_EnableOverrideDefaultValue; // 0x1241
		::System::Byte _padding200[0x2];
		::System::Single ESPP_scanEnd1_OverrideDefaultValue; // 0x1244
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart1Soft_KeyFrame_FieldHandleType; // 0x1248
		::System::Boolean ESPP_scanStart1Soft_KeyFrame_UseIt; // 0x124C
		::System::Byte _padding201[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart1Soft_KeyFrame; // 0x1250
		::System::Boolean ESPP_scanStart1Soft_KeyFrame_EnableFade; // 0x1258
		::System::Boolean ESPP_scanStart1Soft_KeyFrame_EnableOverrideDefaultValue; // 0x1259
		::System::Byte _padding202[0x2];
		::System::Single ESPP_scanStart1Soft_KeyFrame_OverrideDefaultValue; // 0x125C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd1Soft_KeyFrame_FieldHandleType; // 0x1260
		::System::Boolean ESPP_scanEnd1Soft_KeyFrame_UseIt; // 0x1264
		::System::Byte _padding203[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd1Soft_KeyFrame; // 0x1268
		::System::Boolean ESPP_scanEnd1Soft_KeyFrame_EnableFade; // 0x1270
		::System::Boolean ESPP_scanEnd1Soft_KeyFrame_EnableOverrideDefaultValue; // 0x1271
		::System::Byte _padding204[0x2];
		::System::Single ESPP_scanEnd1Soft_KeyFrame_OverrideDefaultValue; // 0x1274
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor1_FieldHandleType; // 0x1278
		::System::Boolean ESPP_scanColor1_UseIt; // 0x127C
		::System::Byte _padding205[0x3];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor1; // 0x1280
		::System::Boolean ESPP_scanColor1_EnableFade; // 0x1288
		::System::Boolean ESPP_scanColor1_EnableOverrideDefaultValue; // 0x1289
		::System::Byte _padding206[0x2];
		::UnityEngine::Color ESPP_scanColor1_OverrideDefaultValue; // 0x128C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor1End_FieldHandleType; // 0x129C
		::System::Boolean ESPP_scanColor1End_UseIt; // 0x12A0
		::System::Byte _padding207[0x7];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor1End; // 0x12A8
		::System::Boolean ESPP_scanColor1End_EnableFade; // 0x12B0
		::System::Boolean ESPP_scanColor1End_EnableOverrideDefaultValue; // 0x12B1
		::System::Byte _padding208[0x2];
		::UnityEngine::Color ESPP_scanColor1End_OverrideDefaultValue; // 0x12B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor1Mode_FieldHandleType; // 0x12C4
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod ESPP_scanColor1Mode; // 0x12C8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskIntensity1_FieldHandleType; // 0x12CC
		::System::Boolean ESPP_scanMaskIntensity1_UseIt; // 0x12D0
		::System::Byte _padding209[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanMaskIntensity1; // 0x12D8
		::System::Boolean ESPP_scanMaskIntensity1_EnableFade; // 0x12E0
		::System::Boolean ESPP_scanMaskIntensity1_EnableOverrideDefaultValue; // 0x12E1
		::System::Byte _padding210[0x2];
		::System::Single ESPP_scanMaskIntensity1_OverrideDefaultValue; // 0x12E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart2_FieldHandleType; // 0x12E8
		::System::Boolean ESPP_scanStart2_UseIt; // 0x12EC
		::System::Byte _padding211[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart2; // 0x12F0
		::System::Boolean ESPP_scanStart2_EnableFade; // 0x12F8
		::System::Boolean ESPP_scanStart2_EnableOverrideDefaultValue; // 0x12F9
		::System::Byte _padding212[0x2];
		::System::Single ESPP_scanStart2_OverrideDefaultValue; // 0x12FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd2_FieldHandleType; // 0x1300
		::System::Boolean ESPP_scanEnd2_UseIt; // 0x1304
		::System::Byte _padding213[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd2; // 0x1308
		::System::Boolean ESPP_scanEnd2_EnableFade; // 0x1310
		::System::Boolean ESPP_scanEnd2_EnableOverrideDefaultValue; // 0x1311
		::System::Byte _padding214[0x2];
		::System::Single ESPP_scanEnd2_OverrideDefaultValue; // 0x1314
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart2Soft_KeyFrame_FieldHandleType; // 0x1318
		::System::Boolean ESPP_scanStart2Soft_KeyFrame_UseIt; // 0x131C
		::System::Byte _padding215[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart2Soft_KeyFrame; // 0x1320
		::System::Boolean ESPP_scanStart2Soft_KeyFrame_EnableFade; // 0x1328
		::System::Boolean ESPP_scanStart2Soft_KeyFrame_EnableOverrideDefaultValue; // 0x1329
		::System::Byte _padding216[0x2];
		::System::Single ESPP_scanStart2Soft_KeyFrame_OverrideDefaultValue; // 0x132C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd2Soft_KeyFrame_FieldHandleType; // 0x1330
		::System::Boolean ESPP_scanEnd2Soft_KeyFrame_UseIt; // 0x1334
		::System::Byte _padding217[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd2Soft_KeyFrame; // 0x1338
		::System::Boolean ESPP_scanEnd2Soft_KeyFrame_EnableFade; // 0x1340
		::System::Boolean ESPP_scanEnd2Soft_KeyFrame_EnableOverrideDefaultValue; // 0x1341
		::System::Byte _padding218[0x2];
		::System::Single ESPP_scanEnd2Soft_KeyFrame_OverrideDefaultValue; // 0x1344
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor2_FieldHandleType; // 0x1348
		::System::Boolean ESPP_scanColor2_UseIt; // 0x134C
		::System::Byte _padding219[0x3];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor2; // 0x1350
		::System::Boolean ESPP_scanColor2_EnableFade; // 0x1358
		::System::Boolean ESPP_scanColor2_EnableOverrideDefaultValue; // 0x1359
		::System::Byte _padding220[0x2];
		::UnityEngine::Color ESPP_scanColor2_OverrideDefaultValue; // 0x135C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor2End_FieldHandleType; // 0x136C
		::System::Boolean ESPP_scanColor2End_UseIt; // 0x1370
		::System::Byte _padding221[0x7];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor2End; // 0x1378
		::System::Boolean ESPP_scanColor2End_EnableFade; // 0x1380
		::System::Boolean ESPP_scanColor2End_EnableOverrideDefaultValue; // 0x1381
		::System::Byte _padding222[0x2];
		::UnityEngine::Color ESPP_scanColor2End_OverrideDefaultValue; // 0x1384
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor2Mode_FieldHandleType; // 0x1394
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod ESPP_scanColor2Mode; // 0x1398
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskIntensity2_FieldHandleType; // 0x139C
		::System::Boolean ESPP_scanMaskIntensity2_UseIt; // 0x13A0
		::System::Byte _padding223[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanMaskIntensity2; // 0x13A8
		::System::Boolean ESPP_scanMaskIntensity2_EnableFade; // 0x13B0
		::System::Boolean ESPP_scanMaskIntensity2_EnableOverrideDefaultValue; // 0x13B1
		::System::Byte _padding224[0x2];
		::System::Single ESPP_scanMaskIntensity2_OverrideDefaultValue; // 0x13B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart3_FieldHandleType; // 0x13B8
		::System::Boolean ESPP_scanStart3_UseIt; // 0x13BC
		::System::Byte _padding225[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart3; // 0x13C0
		::System::Boolean ESPP_scanStart3_EnableFade; // 0x13C8
		::System::Boolean ESPP_scanStart3_EnableOverrideDefaultValue; // 0x13C9
		::System::Byte _padding226[0x2];
		::System::Single ESPP_scanStart3_OverrideDefaultValue; // 0x13CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd3_FieldHandleType; // 0x13D0
		::System::Boolean ESPP_scanEnd3_UseIt; // 0x13D4
		::System::Byte _padding227[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd3; // 0x13D8
		::System::Boolean ESPP_scanEnd3_EnableFade; // 0x13E0
		::System::Boolean ESPP_scanEnd3_EnableOverrideDefaultValue; // 0x13E1
		::System::Byte _padding228[0x2];
		::System::Single ESPP_scanEnd3_OverrideDefaultValue; // 0x13E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart3Soft_KeyFrame_FieldHandleType; // 0x13E8
		::System::Boolean ESPP_scanStart3Soft_KeyFrame_UseIt; // 0x13EC
		::System::Byte _padding229[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart3Soft_KeyFrame; // 0x13F0
		::System::Boolean ESPP_scanStart3Soft_KeyFrame_EnableFade; // 0x13F8
		::System::Boolean ESPP_scanStart3Soft_KeyFrame_EnableOverrideDefaultValue; // 0x13F9
		::System::Byte _padding230[0x2];
		::System::Single ESPP_scanStart3Soft_KeyFrame_OverrideDefaultValue; // 0x13FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd3Soft_KeyFrame_FieldHandleType; // 0x1400
		::System::Boolean ESPP_scanEnd3Soft_KeyFrame_UseIt; // 0x1404
		::System::Byte _padding231[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd3Soft_KeyFrame; // 0x1408
		::System::Boolean ESPP_scanEnd3Soft_KeyFrame_EnableFade; // 0x1410
		::System::Boolean ESPP_scanEnd3Soft_KeyFrame_EnableOverrideDefaultValue; // 0x1411
		::System::Byte _padding232[0x2];
		::System::Single ESPP_scanEnd3Soft_KeyFrame_OverrideDefaultValue; // 0x1414
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor3_FieldHandleType; // 0x1418
		::System::Boolean ESPP_scanColor3_UseIt; // 0x141C
		::System::Byte _padding233[0x3];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor3; // 0x1420
		::System::Boolean ESPP_scanColor3_EnableFade; // 0x1428
		::System::Boolean ESPP_scanColor3_EnableOverrideDefaultValue; // 0x1429
		::System::Byte _padding234[0x2];
		::UnityEngine::Color ESPP_scanColor3_OverrideDefaultValue; // 0x142C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor3End_FieldHandleType; // 0x143C
		::System::Boolean ESPP_scanColor3End_UseIt; // 0x1440
		::System::Byte _padding235[0x7];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor3End; // 0x1448
		::System::Boolean ESPP_scanColor3End_EnableFade; // 0x1450
		::System::Boolean ESPP_scanColor3End_EnableOverrideDefaultValue; // 0x1451
		::System::Byte _padding236[0x2];
		::UnityEngine::Color ESPP_scanColor3End_OverrideDefaultValue; // 0x1454
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor3Mode_FieldHandleType; // 0x1464
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod ESPP_scanColor3Mode; // 0x1468
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskIntensity3_FieldHandleType; // 0x146C
		::System::Boolean ESPP_scanMaskIntensity3_UseIt; // 0x1470
		::System::Byte _padding237[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanMaskIntensity3; // 0x1478
		::System::Boolean ESPP_scanMaskIntensity3_EnableFade; // 0x1480
		::System::Boolean ESPP_scanMaskIntensity3_EnableOverrideDefaultValue; // 0x1481
		::System::Byte _padding238[0x2];
		::System::Single ESPP_scanMaskIntensity3_OverrideDefaultValue; // 0x1484
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_uvOffsetR_FieldHandleType; // 0x1488
		::System::Boolean ESPP_uvOffsetR_UseIt; // 0x148C
		::System::Byte _padding239[0x3];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_uvOffsetR; // 0x1490
		::System::Boolean ESPP_uvOffsetR_EnableFade; // 0x1498
		::System::Boolean ESPP_uvOffsetR_EnableOverrideDefaultValue; // 0x1499
		::System::Byte _padding240[0x2];
		::UnityEngine::Vector2 ESPP_uvOffsetR_OverrideDefaultValue; // 0x149C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorR_FieldHandleType; // 0x14A4
		::System::Boolean ESPP_colorR_UseIt; // 0x14A8
		::System::Byte _padding241[0x7];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_colorR; // 0x14B0
		::System::Boolean ESPP_colorR_EnableFade; // 0x14B8
		::System::Boolean ESPP_colorR_EnableOverrideDefaultValue; // 0x14B9
		::System::Byte _padding242[0x2];
		::UnityEngine::Color ESPP_colorR_OverrideDefaultValue; // 0x14BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_uvOffsetG_FieldHandleType; // 0x14CC
		::System::Boolean ESPP_uvOffsetG_UseIt; // 0x14D0
		::System::Byte _padding243[0x7];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_uvOffsetG; // 0x14D8
		::System::Boolean ESPP_uvOffsetG_EnableFade; // 0x14E0
		::System::Boolean ESPP_uvOffsetG_EnableOverrideDefaultValue; // 0x14E1
		::System::Byte _padding244[0x2];
		::UnityEngine::Vector2 ESPP_uvOffsetG_OverrideDefaultValue; // 0x14E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorG_FieldHandleType; // 0x14EC
		::System::Boolean ESPP_colorG_UseIt; // 0x14F0
		::System::Byte _padding245[0x7];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_colorG; // 0x14F8
		::System::Boolean ESPP_colorG_EnableFade; // 0x1500
		::System::Boolean ESPP_colorG_EnableOverrideDefaultValue; // 0x1501
		::System::Byte _padding246[0x2];
		::UnityEngine::Color ESPP_colorG_OverrideDefaultValue; // 0x1504
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_uvOffsetB_FieldHandleType; // 0x1514
		::System::Boolean ESPP_uvOffsetB_UseIt; // 0x1518
		::System::Byte _padding247[0x7];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_uvOffsetB; // 0x1520
		::System::Boolean ESPP_uvOffsetB_EnableFade; // 0x1528
		::System::Boolean ESPP_uvOffsetB_EnableOverrideDefaultValue; // 0x1529
		::System::Byte _padding248[0x2];
		::UnityEngine::Vector2 ESPP_uvOffsetB_OverrideDefaultValue; // 0x152C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorB_FieldHandleType; // 0x1534
		::System::Boolean ESPP_colorB_UseIt; // 0x1538
		::System::Byte _padding249[0x7];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_colorB; // 0x1540
		::System::Boolean ESPP_colorB_EnableFade; // 0x1548
		::System::Boolean ESPP_colorB_EnableOverrideDefaultValue; // 0x1549
		::System::Byte _padding250[0x2];
		::UnityEngine::Color ESPP_colorB_OverrideDefaultValue; // 0x154C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fadeSourceImage_FieldHandleType; // 0x155C
		::System::Boolean ESPP_fadeSourceImage_UseIt; // 0x1560
		::System::Byte _padding251[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fadeSourceImage; // 0x1568
		::System::Boolean ESPP_fadeSourceImage_EnableFade; // 0x1570
		::System::Boolean ESPP_fadeSourceImage_EnableOverrideDefaultValue; // 0x1571
		::System::Byte _padding252[0x2];
		::System::Single ESPP_fadeSourceImage_OverrideDefaultValue; // 0x1574
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceWidth_FieldHandleType; // 0x1578
		::System::Boolean ESPP_sliceWidth_UseIt; // 0x157C
		::System::Byte _padding253[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sliceWidth; // 0x1580
		::System::Boolean ESPP_sliceWidth_EnableFade; // 0x1588
		::System::Boolean ESPP_sliceWidth_EnableOverrideDefaultValue; // 0x1589
		::System::Byte _padding254[0x2];
		::System::Single ESPP_sliceWidth_OverrideDefaultValue; // 0x158C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceAngle_FieldHandleType; // 0x1590
		::System::Boolean ESPP_sliceAngle_UseIt; // 0x1594
		::System::Byte _padding255[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sliceAngle; // 0x1598
		::System::Boolean ESPP_sliceAngle_EnableFade; // 0x15A0
		::System::Boolean ESPP_sliceAngle_EnableOverrideDefaultValue; // 0x15A1
		::System::Byte _padding256[0x2];
		::System::Single ESPP_sliceAngle_OverrideDefaultValue; // 0x15A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_reverse_FieldHandleType; // 0x15A8
		::System::Boolean ESPP_reverse_UseIt; // 0x15AC
		::System::Byte _padding257[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_reverse; // 0x15B0
		::System::Boolean ESPP_reverse_EnableFade; // 0x15B8
		::System::Boolean ESPP_reverse_EnableOverrideDefaultValue; // 0x15B9
		::System::Boolean ESPP_reverse_OverrideDefaultValue; // 0x15BA
		::System::Byte _padding258[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceOffset_FieldHandleType; // 0x15BC
		::System::Boolean ESPP_sliceOffset_UseIt; // 0x15C0
		::System::Byte _padding259[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sliceOffset; // 0x15C8
		::System::Boolean ESPP_sliceOffset_EnableFade; // 0x15D0
		::System::Boolean ESPP_sliceOffset_EnableOverrideDefaultValue; // 0x15D1
		::System::Byte _padding260[0x2];
		::System::Single ESPP_sliceOffset_OverrideDefaultValue; // 0x15D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceColorA_FieldHandleType; // 0x15D8
		::System::Boolean ESPP_sliceColorA_UseIt; // 0x15DC
		::System::Byte _padding261[0x3];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_sliceColorA; // 0x15E0
		::System::Boolean ESPP_sliceColorA_EnableFade; // 0x15E8
		::System::Boolean ESPP_sliceColorA_EnableOverrideDefaultValue; // 0x15E9
		::System::Byte _padding262[0x2];
		::UnityEngine::Color ESPP_sliceColorA_OverrideDefaultValue; // 0x15EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceColorAMode_FieldHandleType; // 0x15FC
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod ESPP_sliceColorAMode; // 0x1600
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceColorB_FieldHandleType; // 0x1604
		::System::Boolean ESPP_sliceColorB_UseIt; // 0x1608
		::System::Byte _padding263[0x7];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_sliceColorB; // 0x1610
		::System::Boolean ESPP_sliceColorB_EnableFade; // 0x1618
		::System::Boolean ESPP_sliceColorB_EnableOverrideDefaultValue; // 0x1619
		::System::Byte _padding264[0x2];
		::UnityEngine::Color ESPP_sliceColorB_OverrideDefaultValue; // 0x161C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceColorBMode_FieldHandleType; // 0x162C
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod ESPP_sliceColorBMode; // 0x1630
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gridOn_FieldHandleType; // 0x1634
		::System::Boolean ESPP_gridOn_UseIt; // 0x1638
		::System::Byte _padding265[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_gridOn; // 0x1640
		::System::Boolean ESPP_gridOn_EnableFade; // 0x1648
		::System::Boolean ESPP_gridOn_EnableOverrideDefaultValue; // 0x1649
		::System::Boolean ESPP_gridOn_OverrideDefaultValue; // 0x164A
		::System::Byte _padding266[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gridDistance_FieldHandleType; // 0x164C
		::System::Single ESPP_gridDistance; // 0x1650
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gridBlendScanLine_FieldHandleType; // 0x1654
		::System::Boolean ESPP_gridBlendScanLine; // 0x1658
		::System::Byte _padding267[0x3];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gridColor_FieldHandleType; // 0x165C
		::System::Boolean ESPP_gridColor_UseIt; // 0x1660
		::System::Byte _padding268[0x7];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_gridColor; // 0x1668
		::System::Boolean ESPP_gridColor_EnableFade; // 0x1670
		::System::Boolean ESPP_gridColor_EnableOverrideDefaultValue; // 0x1671
		::System::Byte _padding269[0x2];
		::UnityEngine::Color ESPP_gridColor_OverrideDefaultValue; // 0x1674
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gridPower_FieldHandleType; // 0x1684
		::System::Single ESPP_gridPower; // 0x1688
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_groundYPos_FieldHandleType; // 0x168C
		::System::Boolean ESPP_groundYPos_UseIt; // 0x1690
		::System::Byte _padding270[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_groundYPos; // 0x1698
		::System::Boolean ESPP_groundYPos_EnableFade; // 0x16A0
		::System::Boolean ESPP_groundYPos_EnableOverrideDefaultValue; // 0x16A1
		::System::Byte _padding271[0x2];
		::System::Single ESPP_groundYPos_OverrideDefaultValue; // 0x16A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_screenSpaceGridScale_FieldHandleType; // 0x16A8
		::System::Boolean ESPP_screenSpaceGridScale_UseIt; // 0x16AC
		::System::Byte _padding272[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_screenSpaceGridScale; // 0x16B0
		::System::Boolean ESPP_screenSpaceGridScale_EnableFade; // 0x16B8
		::System::Boolean ESPP_screenSpaceGridScale_EnableOverrideDefaultValue; // 0x16B9
		::System::Byte _padding273[0x2];
		::System::Single ESPP_screenSpaceGridScale_OverrideDefaultValue; // 0x16BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_screenSpaceGridWidth_FieldHandleType; // 0x16C0
		::System::Boolean ESPP_screenSpaceGridWidth_UseIt; // 0x16C4
		::System::Byte _padding274[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_screenSpaceGridWidth; // 0x16C8
		::System::Boolean ESPP_screenSpaceGridWidth_EnableFade; // 0x16D0
		::System::Boolean ESPP_screenSpaceGridWidth_EnableOverrideDefaultValue; // 0x16D1
		::System::Byte _padding275[0x2];
		::System::Single ESPP_screenSpaceGridWidth_OverrideDefaultValue; // 0x16D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineOn_FieldHandleType; // 0x16D8
		::System::Boolean ESPP_outlineOn_UseIt; // 0x16DC
		::System::Byte _padding276[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineOn; // 0x16E0
		::System::Boolean ESPP_outlineOn_EnableFade; // 0x16E8
		::System::Boolean ESPP_outlineOn_EnableOverrideDefaultValue; // 0x16E9
		::System::Boolean ESPP_outlineOn_OverrideDefaultValue; // 0x16EA
		::System::Byte _padding277[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineBlendScanLine_FieldHandleType; // 0x16EC
		::System::Boolean ESPP_outlineBlendScanLine; // 0x16F0
		::System::Byte _padding278[0x3];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineOpacity_FieldHandleType; // 0x16F4
		::System::Boolean ESPP_outlineOpacity_UseIt; // 0x16F8
		::System::Byte _padding279[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_outlineOpacity; // 0x1700
		::System::Boolean ESPP_outlineOpacity_EnableFade; // 0x1708
		::System::Boolean ESPP_outlineOpacity_EnableOverrideDefaultValue; // 0x1709
		::System::Byte _padding280[0x2];
		::System::Single ESPP_outlineOpacity_OverrideDefaultValue; // 0x170C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDiffOffset_FieldHandleType; // 0x1710
		::System::Single ESPP_outlineDiffOffset; // 0x1714
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDepthThreshold_FieldHandleType; // 0x1718
		::System::Single ESPP_outlineDepthThreshold; // 0x171C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineNormalThreshold_FieldHandleType; // 0x1720
		::System::Single ESPP_outlineNormalThreshold; // 0x1724
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineNormalThresholdScale_FieldHandleType; // 0x1728
		::System::Single ESPP_outlineNormalThresholdScale; // 0x172C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineColor_FieldHandleType; // 0x1730
		::System::Boolean ESPP_outlineColor_UseIt; // 0x1734
		::System::Byte _padding281[0x3];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_outlineColor; // 0x1738
		::System::Boolean ESPP_outlineColor_EnableFade; // 0x1740
		::System::Boolean ESPP_outlineColor_EnableOverrideDefaultValue; // 0x1741
		::System::Byte _padding282[0x2];
		::UnityEngine::Color ESPP_outlineColor_OverrideDefaultValue; // 0x1744
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineInUberShader_FieldHandleType; // 0x1754
		::System::Boolean ESPP_outlineInUberShader_UseIt; // 0x1758
		::System::Byte _padding283[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineInUberShader; // 0x1760
		::System::Boolean ESPP_outlineInUberShader_EnableFade; // 0x1768
		::System::Boolean ESPP_outlineInUberShader_EnableOverrideDefaultValue; // 0x1769
		::System::Boolean ESPP_outlineInUberShader_OverrideDefaultValue; // 0x176A
		::System::Byte _padding284[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortion_FieldHandleType; // 0x176C
		::System::Boolean ESPP_outlineDistortion_UseIt; // 0x1770
		::System::Byte _padding285[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineDistortion; // 0x1778
		::System::Boolean ESPP_outlineDistortion_EnableFade; // 0x1780
		::System::Boolean ESPP_outlineDistortion_EnableOverrideDefaultValue; // 0x1781
		::System::Boolean ESPP_outlineDistortion_OverrideDefaultValue; // 0x1782
		::System::Byte _padding286[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortionTex_FieldHandleType; // 0x1784
		::UnityEngine::Texture* ESPP_outlineDistortionTex; // 0x1788
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortionTexTiling_FieldHandleType; // 0x1790
		::System::Boolean ESPP_outlineDistortionTexTiling_UseIt; // 0x1794
		::System::Byte _padding287[0x3];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_outlineDistortionTexTiling; // 0x1798
		::System::Boolean ESPP_outlineDistortionTexTiling_EnableFade; // 0x17A0
		::System::Boolean ESPP_outlineDistortionTexTiling_EnableOverrideDefaultValue; // 0x17A1
		::System::Byte _padding288[0x2];
		::UnityEngine::Vector2 ESPP_outlineDistortionTexTiling_OverrideDefaultValue; // 0x17A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortionTexOffset_FieldHandleType; // 0x17AC
		::System::Boolean ESPP_outlineDistortionTexOffset_UseIt; // 0x17B0
		::System::Byte _padding289[0x7];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_outlineDistortionTexOffset; // 0x17B8
		::System::Boolean ESPP_outlineDistortionTexOffset_EnableFade; // 0x17C0
		::System::Boolean ESPP_outlineDistortionTexOffset_EnableOverrideDefaultValue; // 0x17C1
		::System::Byte _padding290[0x2];
		::UnityEngine::Vector2 ESPP_outlineDistortionTexOffset_OverrideDefaultValue; // 0x17C4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortionUVSpeed_FieldHandleType; // 0x17CC
		::System::Boolean ESPP_outlineDistortionUVSpeed_UseIt; // 0x17D0
		::System::Byte _padding291[0x7];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_outlineDistortionUVSpeed; // 0x17D8
		::System::Boolean ESPP_outlineDistortionUVSpeed_EnableFade; // 0x17E0
		::System::Boolean ESPP_outlineDistortionUVSpeed_EnableOverrideDefaultValue; // 0x17E1
		::System::Byte _padding292[0x2];
		::UnityEngine::Vector2 ESPP_outlineDistortionUVSpeed_OverrideDefaultValue; // 0x17E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortionOffset_FieldHandleType; // 0x17EC
		::System::Boolean ESPP_outlineDistortionOffset_UseIt; // 0x17F0
		::System::Byte _padding293[0x7];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_outlineDistortionOffset; // 0x17F8
		::System::Boolean ESPP_outlineDistortionOffset_EnableFade; // 0x1800
		::System::Boolean ESPP_outlineDistortionOffset_EnableOverrideDefaultValue; // 0x1801
		::System::Byte _padding294[0x2];
		::UnityEngine::Vector2 ESPP_outlineDistortionOffset_OverrideDefaultValue; // 0x1804
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortionIntensity_FieldHandleType; // 0x180C
		::System::Boolean ESPP_outlineDistortionIntensity_UseIt; // 0x1810
		::System::Byte _padding295[0x7];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_outlineDistortionIntensity; // 0x1818
		::System::Boolean ESPP_outlineDistortionIntensity_EnableFade; // 0x1820
		::System::Boolean ESPP_outlineDistortionIntensity_EnableOverrideDefaultValue; // 0x1821
		::System::Byte _padding296[0x2];
		::UnityEngine::Vector2 ESPP_outlineDistortionIntensity_OverrideDefaultValue; // 0x1824
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_textureSheetOn_FieldHandleType; // 0x182C
		::System::Boolean ESPP_textureSheetOn; // 0x1830
		::System::Byte _padding297[0x3];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_textureSheetTex_FieldHandleType; // 0x1834
		::UnityEngine::Texture* ESPP_textureSheetTex; // 0x1838
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_textureSheetXY_FieldHandleType; // 0x1840
		::UnityEngine::Vector2 ESPP_textureSheetXY; // 0x1844
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_textureSheetIndex_FieldHandleType; // 0x184C
		::System::Boolean ESPP_textureSheetIndex_UseIt; // 0x1850
		::System::Byte _padding298[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_textureSheetIndex; // 0x1858
		::System::Boolean ESPP_textureSheetIndex_EnableFade; // 0x1860
		::System::Boolean ESPP_textureSheetIndex_EnableOverrideDefaultValue; // 0x1861
		::System::Byte _padding299[0x2];
		::System::Int32 ESPP_textureSheetIndex_OverrideDefaultValue; // 0x1864
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_textureSheetColor_FieldHandleType; // 0x1868
		::System::Boolean ESPP_textureSheetColor_UseIt; // 0x186C
		::System::Byte _padding300[0x3];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_textureSheetColor; // 0x1870
		::System::Boolean ESPP_textureSheetColor_EnableFade; // 0x1878
		::System::Boolean ESPP_textureSheetColor_EnableOverrideDefaultValue; // 0x1879
		::System::Byte _padding301[0x2];
		::UnityEngine::Color ESPP_textureSheetColor_OverrideDefaultValue; // 0x187C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lensDistortionIntensity_FieldHandleType; // 0x188C
		::System::Boolean ESPP_lensDistortionIntensity_UseIt; // 0x1890
		::System::Byte _padding302[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lensDistortionIntensity; // 0x1898
		::System::Boolean ESPP_lensDistortionIntensity_EnableFade; // 0x18A0
		::System::Boolean ESPP_lensDistortionIntensity_EnableOverrideDefaultValue; // 0x18A1
		::System::Byte _padding303[0x2];
		::System::Single ESPP_lensDistortionIntensity_OverrideDefaultValue; // 0x18A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lensDistortionXMultiplier_FieldHandleType; // 0x18A8
		::System::Boolean ESPP_lensDistortionXMultiplier_UseIt; // 0x18AC
		::System::Byte _padding304[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lensDistortionXMultiplier; // 0x18B0
		::System::Boolean ESPP_lensDistortionXMultiplier_EnableFade; // 0x18B8
		::System::Boolean ESPP_lensDistortionXMultiplier_EnableOverrideDefaultValue; // 0x18B9
		::System::Byte _padding305[0x2];
		::System::Single ESPP_lensDistortionXMultiplier_OverrideDefaultValue; // 0x18BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lensDistortionYMultiplier_FieldHandleType; // 0x18C0
		::System::Boolean ESPP_lensDistortionYMultiplier_UseIt; // 0x18C4
		::System::Byte _padding306[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lensDistortionYMultiplier; // 0x18C8
		::System::Boolean ESPP_lensDistortionYMultiplier_EnableFade; // 0x18D0
		::System::Boolean ESPP_lensDistortionYMultiplier_EnableOverrideDefaultValue; // 0x18D1
		::System::Byte _padding307[0x2];
		::System::Single ESPP_lensDistortionYMultiplier_OverrideDefaultValue; // 0x18D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lensDistortionCenter_FieldHandleType; // 0x18D8
		::System::Boolean ESPP_lensDistortionCenter_UseIt; // 0x18DC
		::System::Byte _padding308[0x3];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_lensDistortionCenter; // 0x18E0
		::System::Boolean ESPP_lensDistortionCenter_EnableFade; // 0x18E8
		::System::Boolean ESPP_lensDistortionCenter_EnableOverrideDefaultValue; // 0x18E9
		::System::Byte _padding309[0x2];
		::UnityEngine::Vector2 ESPP_lensDistortionCenter_OverrideDefaultValue; // 0x18EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lensDistortionScale_FieldHandleType; // 0x18F4
		::System::Boolean ESPP_lensDistortionScale_UseIt; // 0x18F8
		::System::Byte _padding310[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lensDistortionScale; // 0x1900
		::System::Boolean ESPP_lensDistortionScale_EnableFade; // 0x1908
		::System::Boolean ESPP_lensDistortionScale_EnableOverrideDefaultValue; // 0x1909
		::System::Byte _padding311[0x2];
		::System::Single ESPP_lensDistortionScale_OverrideDefaultValue; // 0x190C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableDistanceDistortionColorization_FieldHandleType; // 0x1910
		::System::Boolean ESPP_enableDistanceDistortionColorization_UseIt; // 0x1914
		::System::Byte _padding312[0x3];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enableDistanceDistortionColorization; // 0x1918
		::System::Boolean ESPP_enableDistanceDistortionColorization_EnableFade; // 0x1920
		::System::Boolean ESPP_enableDistanceDistortionColorization_EnableOverrideDefaultValue; // 0x1921
		::System::Boolean ESPP_enableDistanceDistortionColorization_OverrideDefaultValue; // 0x1922
		::System::Byte _padding313[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceColorizationEffect_FieldHandleType; // 0x1924
		::System::Boolean ESPP_distanceColorizationEffect_UseIt; // 0x1928
		::System::Byte _padding314[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceColorizationEffect; // 0x1930
		::System::Boolean ESPP_distanceColorizationEffect_EnableFade; // 0x1938
		::System::Boolean ESPP_distanceColorizationEffect_EnableOverrideDefaultValue; // 0x1939
		::System::Byte _padding315[0x2];
		::System::Single ESPP_distanceColorizationEffect_OverrideDefaultValue; // 0x193C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionTexture_FieldHandleType; // 0x1940
		::System::Byte _padding316[0x4];
		::UnityEngine::Texture* ESPP_distanceDistortionTexture; // 0x1948
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceColorizeTexture_FieldHandleType; // 0x1950
		::System::Byte _padding317[0x4];
		::UnityEngine::Texture* ESPP_distanceColorizeTexture; // 0x1958
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionStart_FieldHandleType; // 0x1960
		::System::Boolean ESPP_distanceDistortionStart_UseIt; // 0x1964
		::System::Byte _padding318[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionStart; // 0x1968
		::System::Boolean ESPP_distanceDistortionStart_EnableFade; // 0x1970
		::System::Boolean ESPP_distanceDistortionStart_EnableOverrideDefaultValue; // 0x1971
		::System::Byte _padding319[0x2];
		::System::Single ESPP_distanceDistortionStart_OverrideDefaultValue; // 0x1974
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionEnd_FieldHandleType; // 0x1978
		::System::Boolean ESPP_distanceDistortionEnd_UseIt; // 0x197C
		::System::Byte _padding320[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionEnd; // 0x1980
		::System::Boolean ESPP_distanceDistortionEnd_EnableFade; // 0x1988
		::System::Boolean ESPP_distanceDistortionEnd_EnableOverrideDefaultValue; // 0x1989
		::System::Byte _padding321[0x2];
		::System::Single ESPP_distanceDistortionEnd_OverrideDefaultValue; // 0x198C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionFadeRange_FieldHandleType; // 0x1990
		::System::Boolean ESPP_distanceDistortionFadeRange_UseIt; // 0x1994
		::System::Byte _padding322[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionFadeRange; // 0x1998
		::System::Boolean ESPP_distanceDistortionFadeRange_EnableFade; // 0x19A0
		::System::Boolean ESPP_distanceDistortionFadeRange_EnableOverrideDefaultValue; // 0x19A1
		::System::Byte _padding323[0x2];
		::System::Single ESPP_distanceDistortionFadeRange_OverrideDefaultValue; // 0x19A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionHeightStart_FieldHandleType; // 0x19A8
		::System::Boolean ESPP_distanceDistortionHeightStart_UseIt; // 0x19AC
		::System::Byte _padding324[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionHeightStart; // 0x19B0
		::System::Boolean ESPP_distanceDistortionHeightStart_EnableFade; // 0x19B8
		::System::Boolean ESPP_distanceDistortionHeightStart_EnableOverrideDefaultValue; // 0x19B9
		::System::Byte _padding325[0x2];
		::System::Single ESPP_distanceDistortionHeightStart_OverrideDefaultValue; // 0x19BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionHeightEnd_FieldHandleType; // 0x19C0
		::System::Boolean ESPP_distanceDistortionHeightEnd_UseIt; // 0x19C4
		::System::Byte _padding326[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionHeightEnd; // 0x19C8
		::System::Boolean ESPP_distanceDistortionHeightEnd_EnableFade; // 0x19D0
		::System::Boolean ESPP_distanceDistortionHeightEnd_EnableOverrideDefaultValue; // 0x19D1
		::System::Byte _padding327[0x2];
		::System::Single ESPP_distanceDistortionHeightEnd_OverrideDefaultValue; // 0x19D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionHeightFadeRange_FieldHandleType; // 0x19D8
		::System::Boolean ESPP_distanceDistortionHeightFadeRange_UseIt; // 0x19DC
		::System::Byte _padding328[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionHeightFadeRange; // 0x19E0
		::System::Boolean ESPP_distanceDistortionHeightFadeRange_EnableFade; // 0x19E8
		::System::Boolean ESPP_distanceDistortionHeightFadeRange_EnableOverrideDefaultValue; // 0x19E9
		::System::Byte _padding329[0x2];
		::System::Single ESPP_distanceDistortionHeightFadeRange_OverrideDefaultValue; // 0x19EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionOffsetSpeed_FieldHandleType; // 0x19F0
		::System::Boolean ESPP_distanceDistortionOffsetSpeed_UseIt; // 0x19F4
		::System::Byte _padding330[0x3];
		::MoleMole::EffectSimulate::Vector3KeyframeCurve* ESPP_distanceDistortionOffsetSpeed; // 0x19F8
		::System::Boolean ESPP_distanceDistortionOffsetSpeed_EnableFade; // 0x1A00
		::System::Boolean ESPP_distanceDistortionOffsetSpeed_EnableOverrideDefaultValue; // 0x1A01
		::System::Byte _padding331[0x2];
		::UnityEngine::Vector3 ESPP_distanceDistortionOffsetSpeed_OverrideDefaultValue; // 0x1A04
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionTiling_FieldHandleType; // 0x1A10
		::System::Boolean ESPP_distanceDistortionTiling_UseIt; // 0x1A14
		::System::Byte _padding332[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionTiling; // 0x1A18
		::System::Boolean ESPP_distanceDistortionTiling_EnableFade; // 0x1A20
		::System::Boolean ESPP_distanceDistortionTiling_EnableOverrideDefaultValue; // 0x1A21
		::System::Byte _padding333[0x2];
		::System::Single ESPP_distanceDistortionTiling_OverrideDefaultValue; // 0x1A24
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionIntensity_FieldHandleType; // 0x1A28
		::System::Boolean ESPP_distanceDistortionIntensity_UseIt; // 0x1A2C
		::System::Byte _padding334[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionIntensity; // 0x1A30
		::System::Boolean ESPP_distanceDistortionIntensity_EnableFade; // 0x1A38
		::System::Boolean ESPP_distanceDistortionIntensity_EnableOverrideDefaultValue; // 0x1A39
		::System::Byte _padding335[0x2];
		::System::Single ESPP_distanceDistortionIntensity_OverrideDefaultValue; // 0x1A3C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceColorizationOffsetSpeed_FieldHandleType; // 0x1A40
		::System::Boolean ESPP_distanceColorizationOffsetSpeed_UseIt; // 0x1A44
		::System::Byte _padding336[0x3];
		::MoleMole::EffectSimulate::Vector3KeyframeCurve* ESPP_distanceColorizationOffsetSpeed; // 0x1A48
		::System::Boolean ESPP_distanceColorizationOffsetSpeed_EnableFade; // 0x1A50
		::System::Boolean ESPP_distanceColorizationOffsetSpeed_EnableOverrideDefaultValue; // 0x1A51
		::System::Byte _padding337[0x2];
		::UnityEngine::Vector3 ESPP_distanceColorizationOffsetSpeed_OverrideDefaultValue; // 0x1A54
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceColorizationTiling_FieldHandleType; // 0x1A60
		::System::Boolean ESPP_distanceColorizationTiling_UseIt; // 0x1A64
		::System::Byte _padding338[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceColorizationTiling; // 0x1A68
		::System::Boolean ESPP_distanceColorizationTiling_EnableFade; // 0x1A70
		::System::Boolean ESPP_distanceColorizationTiling_EnableOverrideDefaultValue; // 0x1A71
		::System::Byte _padding339[0x2];
		::System::Single ESPP_distanceColorizationTiling_OverrideDefaultValue; // 0x1A74
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionColor_FieldHandleType; // 0x1A78
		::System::Boolean ESPP_distanceDistortionColor_UseIt; // 0x1A7C
		::System::Byte _padding340[0x3];
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_distanceDistortionColor; // 0x1A80
		::System::Boolean ESPP_distanceDistortionColor_EnableFade; // 0x1A88
		::System::Boolean ESPP_distanceDistortionColor_EnableOverrideDefaultValue; // 0x1A89
		::System::Byte _padding341[0x2];
		::UnityEngine::Color ESPP_distanceDistortionColor_OverrideDefaultValue; // 0x1A8C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionBlendMode_FieldHandleType; // 0x1A9C
		::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode ESPP_distanceDistortionBlendMode; // 0x1AA0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useStencil_FieldHandleType; // 0x1AA4
		::System::Boolean ESPP_useStencil_UseIt; // 0x1AA8
		::System::Byte _padding342[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_useStencil; // 0x1AB0
		::System::Boolean ESPP_useStencil_EnableFade; // 0x1AB8
		::System::Boolean ESPP_useStencil_EnableOverrideDefaultValue; // 0x1AB9
		::System::Boolean ESPP_useStencil_OverrideDefaultValue; // 0x1ABA
		::System::Byte _padding343[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_applyBeforeUberPost_FieldHandleType; // 0x1ABC
		::System::Boolean ESPP_applyBeforeUberPost_UseIt; // 0x1AC0
		::System::Byte _padding344[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_applyBeforeUberPost; // 0x1AC8
		::System::Boolean ESPP_applyBeforeUberPost_EnableFade; // 0x1AD0
		::System::Boolean ESPP_applyBeforeUberPost_EnableOverrideDefaultValue; // 0x1AD1
		::System::Boolean ESPP_applyBeforeUberPost_OverrideDefaultValue; // 0x1AD2
		::System::Byte _padding345[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_screenSpaceGrid_FieldHandleType; // 0x1AD4
		::System::Boolean ESPP_screenSpaceGrid_UseIt; // 0x1AD8
		::System::Byte _padding346[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_screenSpaceGrid; // 0x1AE0
		::System::Boolean ESPP_screenSpaceGrid_EnableFade; // 0x1AE8
		::System::Boolean ESPP_screenSpaceGrid_EnableOverrideDefaultValue; // 0x1AE9
		::System::Boolean ESPP_screenSpaceGrid_OverrideDefaultValue; // 0x1AEA
		::System::Byte _padding347[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineScreenSpaceMaskTex_FieldHandleType; // 0x1AEC
		::UnityEngine::Texture* ESPP_outlineScreenSpaceMaskTex; // 0x1AF0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanCustomCenterPosition_FieldHandleType; // 0x1AF8
		::System::Boolean ESPP_scanCustomCenterPosition_UseIt; // 0x1AFC
		::System::Byte _padding348[0x3];
		::MoleMole::EffectSimulate::Vector3KeyframeCurve* ESPP_scanCustomCenterPosition; // 0x1B00
		::System::Boolean ESPP_scanCustomCenterPosition_EnableFade; // 0x1B08
		::System::Boolean ESPP_scanCustomCenterPosition_EnableOverrideDefaultValue; // 0x1B09
		::System::Byte _padding349[0x2];
		::UnityEngine::Vector3 ESPP_scanCustomCenterPosition_OverrideDefaultValue; // 0x1B0C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineScreenSpaceMaskTexScaleOffset_FieldHandleType; // 0x1B18
		::System::Boolean ESPP_outlineScreenSpaceMaskTexScaleOffset_UseIt; // 0x1B1C
		::System::Byte _padding350[0x3];
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_outlineScreenSpaceMaskTexScaleOffset; // 0x1B20
		::System::Boolean ESPP_outlineScreenSpaceMaskTexScaleOffset_EnableFade; // 0x1B28
		::System::Boolean ESPP_outlineScreenSpaceMaskTexScaleOffset_EnableOverrideDefaultValue; // 0x1B29
		::System::Byte _padding351[0x2];
		::UnityEngine::Vector4 ESPP_outlineScreenSpaceMaskTexScaleOffset_OverrideDefaultValue; // 0x1B2C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanlineBlendMode_FieldHandleType; // 0x1B3C
		::UnityEngine::Rendering::Universal::ScanlineBlendMode ESPP_scanlineBlendMode; // 0x1B40
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enable2DSpot_FieldHandleType; // 0x1B44
		::System::Boolean ESPP_enable2DSpot_UseIt; // 0x1B48
		::System::Byte _padding352[0x7];
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enable2DSpot; // 0x1B50
		::System::Boolean ESPP_enable2DSpot_EnableFade; // 0x1B58
		::System::Boolean ESPP_enable2DSpot_EnableOverrideDefaultValue; // 0x1B59
		::System::Boolean ESPP_enable2DSpot_OverrideDefaultValue; // 0x1B5A
		::System::Byte _padding353[0x1];
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_spotCenter_FieldHandleType; // 0x1B5C
		::System::Boolean ESPP_spotCenter_UseIt; // 0x1B60
		::System::Byte _padding354[0x7];
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_spotCenter; // 0x1B68
		::System::Boolean ESPP_spotCenter_EnableFade; // 0x1B70
		::System::Boolean ESPP_spotCenter_EnableOverrideDefaultValue; // 0x1B71
		::System::Byte _padding355[0x2];
		::UnityEngine::Vector2 ESPP_spotCenter_OverrideDefaultValue; // 0x1B74
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_spotRadius_FieldHandleType; // 0x1B7C
		::System::Boolean ESPP_spotRadius_UseIt; // 0x1B80
		::System::Byte _padding356[0x7];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_spotRadius; // 0x1B88
		::System::Boolean ESPP_spotRadius_EnableFade; // 0x1B90
		::System::Boolean ESPP_spotRadius_EnableOverrideDefaultValue; // 0x1B91
		::System::Byte _padding357[0x2];
		::System::Single ESPP_spotRadius_OverrideDefaultValue; // 0x1B94
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blackIntensity_FieldHandleType; // 0x1B98
		::System::Boolean ESPP_blackIntensity_UseIt; // 0x1B9C
		::System::Byte _padding358[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_blackIntensity; // 0x1BA0
		::System::Boolean ESPP_blackIntensity_EnableFade; // 0x1BA8
		::System::Boolean ESPP_blackIntensity_EnableOverrideDefaultValue; // 0x1BA9
		::System::Byte _padding359[0x2];
		::System::Single ESPP_blackIntensity_OverrideDefaultValue; // 0x1BAC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_overlayIntensity_FieldHandleType; // 0x1BB0
		::System::Boolean ESPP_overlayIntensity_UseIt; // 0x1BB4
		::System::Byte _padding360[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_overlayIntensity; // 0x1BB8
		::System::Boolean ESPP_overlayIntensity_EnableFade; // 0x1BC0
		::System::Boolean ESPP_overlayIntensity_EnableOverrideDefaultValue; // 0x1BC1
		::System::Byte _padding361[0x2];
		::System::Single ESPP_overlayIntensity_OverrideDefaultValue; // 0x1BC4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_curvePower_FieldHandleType; // 0x1BC8
		::System::Boolean ESPP_curvePower_UseIt; // 0x1BCC
		::System::Byte _padding362[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_curvePower; // 0x1BD0
		::System::Boolean ESPP_curvePower_EnableFade; // 0x1BD8
		::System::Boolean ESPP_curvePower_EnableOverrideDefaultValue; // 0x1BD9
		::System::Byte _padding363[0x2];
		::System::Single ESPP_curvePower_OverrideDefaultValue; // 0x1BDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineNormalDiffThreshold_FieldHandleType; // 0x1BE0
		::System::Boolean ESPP_outlineNormalDiffThreshold_UseIt; // 0x1BE4
		::System::Byte _padding364[0x3];
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_outlineNormalDiffThreshold; // 0x1BE8
		::System::Boolean ESPP_outlineNormalDiffThreshold_EnableFade; // 0x1BF0
		::System::Boolean ESPP_outlineNormalDiffThreshold_EnableOverrideDefaultValue; // 0x1BF1
		::System::Byte _padding365[0x2];
		::System::Single ESPP_outlineNormalDiffThreshold_OverrideDefaultValue; // 0x1BF4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart0Soft_FieldHandleType; // 0x1BF8
		::System::Single ESPP_scanStart0Soft; // 0x1BFC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd0Soft_FieldHandleType; // 0x1C00
		::System::Single ESPP_scanEnd0Soft; // 0x1C04
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart1Soft_FieldHandleType; // 0x1C08
		::System::Single ESPP_scanStart1Soft; // 0x1C0C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd1Soft_FieldHandleType; // 0x1C10
		::System::Single ESPP_scanEnd1Soft; // 0x1C14
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart2Soft_FieldHandleType; // 0x1C18
		::System::Single ESPP_scanStart2Soft; // 0x1C1C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd2Soft_FieldHandleType; // 0x1C20
		::System::Single ESPP_scanEnd2Soft; // 0x1C24
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart3Soft_FieldHandleType; // 0x1C28
		::System::Single ESPP_scanStart3Soft; // 0x1C2C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd3Soft_FieldHandleType; // 0x1C30
		::System::Single ESPP_scanEnd3Soft; // 0x1C34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS__CTOR_OFFSET))(this);
		}

		::System::Void NNEGPFCPCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_NNEGPFCPCAB_OFFSET))(this);
		}

		::System::Void IEFBPLNILIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_IEFBPLNILIE_OFFSET))(this);
		}

		::System::Void AJIPNBANCOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_AJIPNBANCOC_OFFSET))(this);
		}

		::System::Void AAOGMJFNGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_AAOGMJFNGIB_OFFSET))(this);
		}

		::System::Void BAHGDCGIEKL(::System::Single PBKKBBHOCLC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_BAHGDCGIEKL_OFFSET))(this, PBKKBBHOCLC);
		}

		::System::Void ALJEEEAPCBH(::System::Single HIIOCANBKAM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_ALJEEEAPCBH_OFFSET))(this, HIIOCANBKAM);
		}

		::System::Void AFPCLLAALBH(::System::Single FDLDIDFMCIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_AFPCLLAALBH_OFFSET))(this, FDLDIDFMCIG);
		}

		::System::Void PEDOJDBBGPC(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_PEDOJDBBGPC_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void ONPGLGIFOJJ(::System::Single AHAFNGEDPLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_ONPGLGIFOJJ_OFFSET))(this, AHAFNGEDPLI);
		}

		::System::Void MKDCJGGNNGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_MKDCJGGNNGN_OFFSET))(this);
		}
	};
}
