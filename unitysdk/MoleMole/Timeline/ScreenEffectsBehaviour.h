#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/ScreenEffectsBehaviour_GLBLODFIAEK.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BlendModes.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UvModes.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class ScreenEffects; }

#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_BNELCFMNFMI_OFFSET UNITYSDK_OFFSET(0x1C0D56A0)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1C0D4510)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1C0E07E0)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x1C0E07D0)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1C0D6400)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x1C0E0800)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1C0D5A90)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1C0E07F0)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1C0DDC90)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1C0DE710)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0E0670)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ScreenEffectsBehaviour_TypeDefinitionIndex = 59944;

	class ScreenEffectsBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ScreenEffectsBehaviour_GLBLODFIAEK _methodParm; // 0x18
		::System::Boolean behaviorEnabled; // 0x370
		::System::Boolean active_enabled; // 0x371
		::System::Boolean use_enabled; // 0x372
		::System::Boolean enabled; // 0x373
		::System::Boolean active_blendMode; // 0x374
		::System::Boolean use_blendMode; // 0x375
		::System::Byte _padding0[0x2];
		::UnityEngine::Rendering::Universal::BlendModes blendMode; // 0x378
		::System::Boolean active_polarUVAspect; // 0x37C
		::System::Boolean use_polarUVAspect; // 0x37D
		::System::Byte _padding1[0x2];
		::System::Single polarUVAspect; // 0x380
		::System::Boolean active_boundaryMode; // 0x384
		::System::Boolean use_boundaryMode; // 0x385
		::System::Byte _padding2[0x2];
		::UnityEngine::Rendering::Universal::UvModes boundaryMode; // 0x388
		::System::Boolean active_boundaryUVAspect; // 0x38C
		::System::Boolean use_boundaryUVAspect; // 0x38D
		::System::Byte _padding3[0x2];
		::System::Single boundaryUVAspect; // 0x390
		::System::Boolean active_boundary; // 0x394
		::System::Boolean use_boundary; // 0x395
		::System::Byte _padding4[0x2];
		::System::Single boundary; // 0x398
		::System::Boolean active_feather; // 0x39C
		::System::Boolean use_feather; // 0x39D
		::System::Byte _padding5[0x2];
		::System::Single feather; // 0x3A0
		::System::Boolean active_maxOpacity; // 0x3A4
		::System::Boolean use_maxOpacity; // 0x3A5
		::System::Byte _padding6[0x2];
		::System::Single maxOpacity; // 0x3A8
		::System::Boolean active_invert; // 0x3AC
		::System::Boolean use_invert; // 0x3AD
		::System::Boolean invert; // 0x3AE
		::System::Boolean active_mainTex; // 0x3AF
		::System::Boolean use_mainTex; // 0x3B0
		::System::Byte _padding7[0x7];
		::UnityEngine::Texture* mainTex; // 0x3B8
		::System::Boolean active_mainTexUvMode; // 0x3C0
		::System::Boolean use_mainTexUvMode; // 0x3C1
		::System::Byte _padding8[0x2];
		::UnityEngine::Rendering::Universal::UvModes mainTexUvMode; // 0x3C4
		::System::Boolean active_mainTexScaleOffset; // 0x3C8
		::System::Boolean use_mainTexScaleOffset; // 0x3C9
		::System::Byte _padding9[0x2];
		::UnityEngine::Vector4 mainTexScaleOffset; // 0x3CC
		::System::Boolean active_useRGBColorChannelMapping; // 0x3DC
		::System::Boolean use_useRGBColorChannelMapping; // 0x3DD
		::System::Boolean useRGBColorChannelMapping; // 0x3DE
		::System::Boolean active_colorChannelMapping; // 0x3DF
		::System::Boolean use_colorChannelMapping; // 0x3E0
		::System::Byte _padding10[0x3];
		::UnityEngine::Rendering::Universal::ChannelMapping colorChannelMapping; // 0x3E4
		::System::Boolean active_alphaChannelMapping; // 0x3E8
		::System::Boolean use_alphaChannelMapping; // 0x3E9
		::System::Byte _padding11[0x2];
		::UnityEngine::Rendering::Universal::ChannelMapping alphaChannelMapping; // 0x3EC
		::System::Boolean active_colorA; // 0x3F0
		::System::Boolean use_colorA; // 0x3F1
		::System::Byte _padding12[0x2];
		::UnityEngine::Color colorA; // 0x3F4
		::System::Boolean active_colorB; // 0x404
		::System::Boolean use_colorB; // 0x405
		::System::Byte _padding13[0x2];
		::UnityEngine::Color colorB; // 0x408
		::System::Boolean active_lerpBrightness; // 0x418
		::System::Boolean use_lerpBrightness; // 0x419
		::System::Byte _padding14[0x2];
		::System::Single lerpBrightness; // 0x41C
		::System::Boolean active_uvMoveSpeed; // 0x420
		::System::Boolean use_uvMoveSpeed; // 0x421
		::System::Byte _padding15[0x2];
		::UnityEngine::Vector2 uvMoveSpeed; // 0x424
		::System::Boolean active_maskTex; // 0x42C
		::System::Boolean use_maskTex; // 0x42D
		::System::Byte _padding16[0x2];
		::UnityEngine::Texture* maskTex; // 0x430
		::System::Boolean active_maskTexUvMode; // 0x438
		::System::Boolean use_maskTexUvMode; // 0x439
		::System::Byte _padding17[0x2];
		::UnityEngine::Rendering::Universal::UvModes maskTexUvMode; // 0x43C
		::System::Boolean active_maskTexScaleOffset; // 0x440
		::System::Boolean use_maskTexScaleOffset; // 0x441
		::System::Byte _padding18[0x2];
		::UnityEngine::Vector4 maskTexScaleOffset; // 0x444
		::System::Boolean active_maskChannelMapping; // 0x454
		::System::Boolean use_maskChannelMapping; // 0x455
		::System::Byte _padding19[0x2];
		::UnityEngine::Rendering::Universal::ChannelMapping maskChannelMapping; // 0x458
		::System::Boolean active_maskUvMoveSpeed; // 0x45C
		::System::Boolean use_maskUvMoveSpeed; // 0x45D
		::System::Byte _padding20[0x2];
		::UnityEngine::Vector2 maskUvMoveSpeed; // 0x460
		::System::Boolean active_dissolveTex; // 0x468
		::System::Boolean use_dissolveTex; // 0x469
		::System::Byte _padding21[0x6];
		::UnityEngine::Texture* dissolveTex; // 0x470
		::System::Boolean active_dissolveTexUvMode; // 0x478
		::System::Boolean use_dissolveTexUvMode; // 0x479
		::System::Byte _padding22[0x2];
		::UnityEngine::Rendering::Universal::UvModes dissolveTexUvMode; // 0x47C
		::System::Boolean active_dissolveTexScaleOffset; // 0x480
		::System::Boolean use_dissolveTexScaleOffset; // 0x481
		::System::Byte _padding23[0x2];
		::UnityEngine::Vector4 dissolveTexScaleOffset; // 0x484
		::System::Boolean active_dissolveChannel; // 0x494
		::System::Boolean use_dissolveChannel; // 0x495
		::System::Byte _padding24[0x2];
		::UnityEngine::Rendering::Universal::ChannelMapping dissolveChannel; // 0x498
		::System::Boolean active_dissolveProgress; // 0x49C
		::System::Boolean use_dissolveProgress; // 0x49D
		::System::Byte _padding25[0x2];
		::System::Single dissolveProgress; // 0x4A0
		::System::Boolean active_dissolveUVSpeed; // 0x4A4
		::System::Boolean use_dissolveUVSpeed; // 0x4A5
		::System::Byte _padding26[0x2];
		::UnityEngine::Vector2 dissolveUVSpeed; // 0x4A8
		::System::Boolean active_dissolveRandomUV; // 0x4B0
		::System::Boolean use_dissolveRandomUV; // 0x4B1
		::System::Boolean dissolveRandomUV; // 0x4B2
		::System::Boolean active_dissolveAffects2Tone; // 0x4B3
		::System::Boolean use_dissolveAffects2Tone; // 0x4B4
		::System::Boolean dissolveAffects2Tone; // 0x4B5
		::System::Boolean active_distortionTex; // 0x4B6
		::System::Boolean use_distortionTex; // 0x4B7
		::UnityEngine::Texture* distortionTex; // 0x4B8
		::System::Boolean active_distortionTexUvMode; // 0x4C0
		::System::Boolean use_distortionTexUvMode; // 0x4C1
		::System::Byte _padding27[0x2];
		::UnityEngine::Rendering::Universal::UvModes distortionTexUvMode; // 0x4C4
		::System::Boolean active_distortionTexScaleOffset; // 0x4C8
		::System::Boolean use_distortionTexScaleOffset; // 0x4C9
		::System::Byte _padding28[0x2];
		::UnityEngine::Vector4 distortionTexScaleOffset; // 0x4CC
		::System::Boolean active_distortionChannel; // 0x4DC
		::System::Boolean use_distortionChannel; // 0x4DD
		::System::Byte _padding29[0x2];
		::UnityEngine::Rendering::Universal::ChannelMapping distortionChannel; // 0x4E0
		::System::Boolean active_distortionUVSpeed; // 0x4E4
		::System::Boolean use_distortionUVSpeed; // 0x4E5
		::System::Byte _padding30[0x2];
		::UnityEngine::Vector2 distortionUVSpeed; // 0x4E8
		::System::Boolean active_distortionRandomUV; // 0x4F0
		::System::Boolean use_distortionRandomUV; // 0x4F1
		::System::Boolean distortionRandomUV; // 0x4F2
		::System::Boolean active_distortionIntensity; // 0x4F3
		::System::Boolean use_distortionIntensity; // 0x4F4
		::System::Byte _padding31[0x3];
		::System::Single distortionIntensity; // 0x4F8
		::System::Boolean active_dissolveDistortionIntensity; // 0x4FC
		::System::Boolean use_dissolveDistortionIntensity; // 0x4FD
		::System::Byte _padding32[0x2];
		::System::Single dissolveDistortionIntensity; // 0x500
		::System::Boolean active_softRange; // 0x504
		::System::Boolean use_softRange; // 0x505
		::System::Byte _padding33[0x2];
		::System::Single softRange; // 0x508
		::System::Boolean active_alphaCutoff; // 0x50C
		::System::Boolean use_alphaCutoff; // 0x50D
		::System::Byte _padding34[0x2];
		::System::Single alphaCutoff; // 0x510
		::System::Boolean active_screenDistortion; // 0x514
		::System::Boolean use_screenDistortion; // 0x515
		::System::Boolean screenDistortion; // 0x516
		::System::Boolean active_screenDistortionTex; // 0x517
		::System::Boolean use_screenDistortionTex; // 0x518
		::System::Byte _padding35[0x7];
		::UnityEngine::Texture* screenDistortionTex; // 0x520
		::System::Boolean active_screenDistortionTexUvMode; // 0x528
		::System::Boolean use_screenDistortionTexUvMode; // 0x529
		::System::Byte _padding36[0x2];
		::UnityEngine::Rendering::Universal::UvModes screenDistortionTexUvMode; // 0x52C
		::System::Boolean active_screenDistortionTexScaleOffset; // 0x530
		::System::Boolean use_screenDistortionTexScaleOffset; // 0x531
		::System::Byte _padding37[0x2];
		::UnityEngine::Vector4 screenDistortionTexScaleOffset; // 0x534
		::System::Boolean active_screenDistortionIntensity; // 0x544
		::System::Boolean use_screenDistortionIntensity; // 0x545
		::System::Byte _padding38[0x2];
		::System::Single screenDistortionIntensity; // 0x548
		::System::Boolean active_screenDistortionUVSpeed; // 0x54C
		::System::Boolean use_screenDistortionUVSpeed; // 0x54D
		::System::Byte _padding39[0x2];
		::UnityEngine::Vector2 screenDistortionUVSpeed; // 0x550
		::System::Boolean active_ignoreTimeScale; // 0x558
		::System::Boolean use_ignoreTimeScale; // 0x559
		::System::Boolean ignoreTimeScale; // 0x55A
		::System::Boolean active_characterGhost; // 0x55B
		::System::Boolean use_characterGhost; // 0x55C
		::System::Boolean characterGhost; // 0x55D
		::System::Boolean active_characterGhostBlitWithProxy; // 0x55E
		::System::Boolean use_characterGhostBlitWithProxy; // 0x55F
		::System::Boolean characterGhostBlitWithProxy; // 0x560
		::System::Boolean active_characterGhostDownSample; // 0x561
		::System::Boolean use_characterGhostDownSample; // 0x562
		::System::Byte _padding40[0x1];
		::System::Int32 characterGhostDownSample; // 0x564
		::System::Boolean active_characterGhostDistortionTexture; // 0x568
		::System::Boolean use_characterGhostDistortionTexture; // 0x569
		::System::Byte _padding41[0x6];
		::UnityEngine::Texture* characterGhostDistortionTexture; // 0x570
		::System::Boolean active_characterGhostDistortionUVScale; // 0x578
		::System::Boolean use_characterGhostDistortionUVScale; // 0x579
		::System::Byte _padding42[0x2];
		::UnityEngine::Vector2 characterGhostDistortionUVScale; // 0x57C
		::System::Boolean active_characterGhostDistortionUVSpeed; // 0x584
		::System::Boolean use_characterGhostDistortionUVSpeed; // 0x585
		::System::Byte _padding43[0x2];
		::UnityEngine::Vector2 characterGhostDistortionUVSpeed; // 0x588
		::System::Boolean active_characterGhostRadius; // 0x590
		::System::Boolean use_characterGhostRadius; // 0x591
		::System::Byte _padding44[0x2];
		::System::Single characterGhostRadius; // 0x594
		::System::Boolean active_characterGhostIntensity; // 0x598
		::System::Boolean use_characterGhostIntensity; // 0x599
		::System::Byte _padding45[0x2];
		::System::Single characterGhostIntensity; // 0x59C
		::System::Boolean active_characterGhostSelfMask; // 0x5A0
		::System::Boolean use_characterGhostSelfMask; // 0x5A1
		::System::Boolean characterGhostSelfMask; // 0x5A2
		::System::Boolean active_useScreenSpaceRadius; // 0x5A3
		::System::Boolean use_useScreenSpaceRadius; // 0x5A4
		::System::Boolean useScreenSpaceRadius; // 0x5A5
		::System::Boolean active_characterGhostTargetPosition; // 0x5A6
		::System::Boolean use_characterGhostTargetPosition; // 0x5A7
		::UnityEngine::Vector3 characterGhostTargetPosition; // 0x5A8
		::System::Boolean active_characterGhostLayer; // 0x5B4
		::System::Boolean use_characterGhostLayer; // 0x5B5
		::System::Byte _padding46[0x2];
		::System::Int32 characterGhostLayer; // 0x5B8
		::System::Boolean active_layer1Direction; // 0x5BC
		::System::Boolean use_layer1Direction; // 0x5BD
		::System::Byte _padding47[0x2];
		::System::Single layer1Direction; // 0x5C0
		::System::Boolean active_layer1Radius; // 0x5C4
		::System::Boolean use_layer1Radius; // 0x5C5
		::System::Byte _padding48[0x2];
		::System::Single layer1Radius; // 0x5C8
		::System::Boolean active_layer1Intensity; // 0x5CC
		::System::Boolean use_layer1Intensity; // 0x5CD
		::System::Byte _padding49[0x2];
		::System::Single layer1Intensity; // 0x5D0
		::System::Boolean active_layer1Color; // 0x5D4
		::System::Boolean use_layer1Color; // 0x5D5
		::System::Byte _padding50[0x2];
		::UnityEngine::Color layer1Color; // 0x5D8
		::System::Boolean active_layer2Direction; // 0x5E8
		::System::Boolean use_layer2Direction; // 0x5E9
		::System::Byte _padding51[0x2];
		::System::Single layer2Direction; // 0x5EC
		::System::Boolean active_layer2Radius; // 0x5F0
		::System::Boolean use_layer2Radius; // 0x5F1
		::System::Byte _padding52[0x2];
		::System::Single layer2Radius; // 0x5F4
		::System::Boolean active_layer2Intensity; // 0x5F8
		::System::Boolean use_layer2Intensity; // 0x5F9
		::System::Byte _padding53[0x2];
		::System::Single layer2Intensity; // 0x5FC
		::System::Boolean active_layer2Color; // 0x600
		::System::Boolean use_layer2Color; // 0x601
		::System::Byte _padding54[0x2];
		::UnityEngine::Color layer2Color; // 0x604
		::System::Boolean active_layer3Direction; // 0x614
		::System::Boolean use_layer3Direction; // 0x615
		::System::Byte _padding55[0x2];
		::System::Single layer3Direction; // 0x618
		::System::Boolean active_layer3Radius; // 0x61C
		::System::Boolean use_layer3Radius; // 0x61D
		::System::Byte _padding56[0x2];
		::System::Single layer3Radius; // 0x620
		::System::Boolean active_layer3Intensity; // 0x624
		::System::Boolean use_layer3Intensity; // 0x625
		::System::Byte _padding57[0x2];
		::System::Single layer3Intensity; // 0x628
		::System::Boolean active_layer3Color; // 0x62C
		::System::Boolean use_layer3Color; // 0x62D
		::System::Byte _padding58[0x2];
		::UnityEngine::Color layer3Color; // 0x630
		::System::Boolean active_layer4Direction; // 0x640
		::System::Boolean use_layer4Direction; // 0x641
		::System::Byte _padding59[0x2];
		::System::Single layer4Direction; // 0x644
		::System::Boolean active_layer4Radius; // 0x648
		::System::Boolean use_layer4Radius; // 0x649
		::System::Byte _padding60[0x2];
		::System::Single layer4Radius; // 0x64C
		::System::Boolean active_layer4Intensity; // 0x650
		::System::Boolean use_layer4Intensity; // 0x651
		::System::Byte _padding61[0x2];
		::System::Single layer4Intensity; // 0x654
		::System::Boolean active_layer4Color; // 0x658
		::System::Boolean use_layer4Color; // 0x659
		::System::Byte _padding62[0x2];
		::UnityEngine::Color layer4Color; // 0x65C
		::System::Boolean active_layer5Direction; // 0x66C
		::System::Boolean use_layer5Direction; // 0x66D
		::System::Byte _padding63[0x2];
		::System::Single layer5Direction; // 0x670
		::System::Boolean active_layer5Radius; // 0x674
		::System::Boolean use_layer5Radius; // 0x675
		::System::Byte _padding64[0x2];
		::System::Single layer5Radius; // 0x678
		::System::Boolean active_layer5Intensity; // 0x67C
		::System::Boolean use_layer5Intensity; // 0x67D
		::System::Byte _padding65[0x2];
		::System::Single layer5Intensity; // 0x680
		::System::Boolean active_layer5Color; // 0x684
		::System::Boolean use_layer5Color; // 0x685
		::System::Byte _padding66[0x2];
		::UnityEngine::Color layer5Color; // 0x688
		::System::Boolean active_characterGhostColor; // 0x698
		::System::Boolean use_characterGhostColor; // 0x699
		::System::Byte _padding67[0x2];
		::UnityEngine::Color characterGhostColor; // 0x69C
		::System::Boolean active_characterGhostFresnel; // 0x6AC
		::System::Boolean use_characterGhostFresnel; // 0x6AD
		::System::Boolean characterGhostFresnel; // 0x6AE
		::System::Boolean active_characterGhostFresnelPower; // 0x6AF
		::System::Boolean use_characterGhostFresnelPower; // 0x6B0
		::System::Byte _padding68[0x3];
		::System::Single characterGhostFresnelPower; // 0x6B4
		::System::Boolean active_characterGhostSingleColor; // 0x6B8
		::System::Boolean use_characterGhostSingleColor; // 0x6B9
		::System::Boolean characterGhostSingleColor; // 0x6BA
		::System::Boolean active_characterGhostMinIntensity; // 0x6BB
		::System::Boolean use_characterGhostMinIntensity; // 0x6BC
		::System::Byte _padding69[0x3];
		::System::Single characterGhostMinIntensity; // 0x6C0
		::System::Boolean active_ghostDepthCulling; // 0x6C4
		::System::Boolean use_ghostDepthCulling; // 0x6C5
		::System::Boolean ghostDepthCulling; // 0x6C6
		::System::Byte _padding70[0x1];
		::UnityEngine::Rendering::Universal::ScreenEffects* _ScreenEffects; // 0x6C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::UnityEngine::Rendering::Universal::ScreenEffects* BNELCFMNFMI(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::ScreenEffects*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_BNELCFMNFMI_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}
	};
}
