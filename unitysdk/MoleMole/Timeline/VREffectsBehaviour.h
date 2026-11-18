#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/VREffectsBehaviour_FAIJAIIOBIE.h"
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
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class VREffects; }

#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1A7296D0)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1A73CB80)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_HJFJNGDNDPH_OFFSET UNITYSDK_OFFSET(0x1A72B960)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x1A73CB70)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1A72CC50)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x1A73CB60)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1A72BD50)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1A73CB50)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A738700)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A739710)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A73C810)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VREffectsBehaviour_TypeDefinitionIndex = 69072;

	class VREffectsBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::VREffectsBehaviour_FAIJAIIOBIE _methodParm; // 0x18
		::System::Boolean enabled; // 0x580
		::System::Boolean active_useStencil; // 0x581
		::System::Boolean use_useStencil; // 0x582
		::System::Boolean useStencil; // 0x583
		::System::Boolean active_gridOn; // 0x584
		::System::Boolean use_gridOn; // 0x585
		::System::Boolean gridOn; // 0x586
		::System::Boolean active_gridDistance; // 0x587
		::System::Boolean use_gridDistance; // 0x588
		::System::Byte _padding0[0x3];
		::System::Single gridDistance; // 0x58C
		::System::Boolean active_gridBlendScanLine; // 0x590
		::System::Boolean use_gridBlendScanLine; // 0x591
		::System::Boolean gridBlendScanLine; // 0x592
		::System::Boolean active_gridColor; // 0x593
		::System::Boolean use_gridColor; // 0x594
		::System::Byte _padding1[0x3];
		::UnityEngine::Color gridColor; // 0x598
		::System::Boolean active_gridPower; // 0x5A8
		::System::Boolean use_gridPower; // 0x5A9
		::System::Byte _padding2[0x2];
		::System::Single gridPower; // 0x5AC
		::System::Boolean active_groundYPos; // 0x5B0
		::System::Boolean use_groundYPos; // 0x5B1
		::System::Byte _padding3[0x2];
		::System::Single groundYPos; // 0x5B4
		::System::Boolean active_screenSpaceGrid; // 0x5B8
		::System::Boolean use_screenSpaceGrid; // 0x5B9
		::System::Boolean screenSpaceGrid; // 0x5BA
		::System::Boolean active_screenSpaceGridScale; // 0x5BB
		::System::Boolean use_screenSpaceGridScale; // 0x5BC
		::System::Byte _padding4[0x3];
		::System::Single screenSpaceGridScale; // 0x5C0
		::System::Boolean active_screenSpaceGridWidth; // 0x5C4
		::System::Boolean use_screenSpaceGridWidth; // 0x5C5
		::System::Byte _padding5[0x2];
		::System::Single screenSpaceGridWidth; // 0x5C8
		::System::Boolean active_outlineOn; // 0x5CC
		::System::Boolean use_outlineOn; // 0x5CD
		::System::Boolean outlineOn; // 0x5CE
		::System::Boolean active_outlineBlendScanLine; // 0x5CF
		::System::Boolean use_outlineBlendScanLine; // 0x5D0
		::System::Boolean outlineBlendScanLine; // 0x5D1
		::System::Boolean active_outlineOpacity; // 0x5D2
		::System::Boolean use_outlineOpacity; // 0x5D3
		::System::Single outlineOpacity; // 0x5D4
		::System::Boolean active_outlineDiffOffset; // 0x5D8
		::System::Boolean use_outlineDiffOffset; // 0x5D9
		::System::Byte _padding6[0x2];
		::System::Single outlineDiffOffset; // 0x5DC
		::System::Boolean active_outlineDepthThreshold; // 0x5E0
		::System::Boolean use_outlineDepthThreshold; // 0x5E1
		::System::Byte _padding7[0x2];
		::System::Single outlineDepthThreshold; // 0x5E4
		::System::Boolean active_outlineNormalThreshold; // 0x5E8
		::System::Boolean use_outlineNormalThreshold; // 0x5E9
		::System::Byte _padding8[0x2];
		::System::Single outlineNormalThreshold; // 0x5EC
		::System::Boolean active_outlineNormalThresholdScale; // 0x5F0
		::System::Boolean use_outlineNormalThresholdScale; // 0x5F1
		::System::Byte _padding9[0x2];
		::System::Single outlineNormalThresholdScale; // 0x5F4
		::System::Boolean active_outlineColor; // 0x5F8
		::System::Boolean use_outlineColor; // 0x5F9
		::System::Byte _padding10[0x2];
		::UnityEngine::Color outlineColor; // 0x5FC
		::System::Boolean active_textureSheetOn; // 0x60C
		::System::Boolean use_textureSheetOn; // 0x60D
		::System::Boolean textureSheetOn; // 0x60E
		::System::Boolean active_textureSheetTex; // 0x60F
		::System::Boolean use_textureSheetTex; // 0x610
		::System::Byte _padding11[0x7];
		::UnityEngine::Texture* textureSheetTex; // 0x618
		::System::Boolean active_textureSheetXY; // 0x620
		::System::Boolean use_textureSheetXY; // 0x621
		::System::Byte _padding12[0x2];
		::UnityEngine::Vector2 textureSheetXY; // 0x624
		::System::Boolean active_textureSheetIndex; // 0x62C
		::System::Boolean use_textureSheetIndex; // 0x62D
		::System::Byte _padding13[0x2];
		::System::Int32 textureSheetIndex; // 0x630
		::System::Boolean active_textureSheetColor; // 0x634
		::System::Boolean use_textureSheetColor; // 0x635
		::System::Byte _padding14[0x2];
		::UnityEngine::Color textureSheetColor; // 0x638
		::System::Boolean active_scanType; // 0x648
		::System::Boolean use_scanType; // 0x649
		::System::Byte _padding15[0x2];
		::UnityEngine::Rendering::Universal::ScanType scanType; // 0x64C
		::System::Boolean active_useCustomScanDirection; // 0x650
		::System::Boolean use_useCustomScanDirection; // 0x651
		::System::Boolean useCustomScanDirection; // 0x652
		::System::Boolean active_customScanDirection; // 0x653
		::System::Boolean use_customScanDirection; // 0x654
		::System::Byte _padding16[0x3];
		::System::Single customScanDirection; // 0x658
		::System::Boolean active_scanColor0End; // 0x65C
		::System::Boolean use_scanColor0End; // 0x65D
		::System::Byte _padding17[0x2];
		::UnityEngine::Color scanColor0End; // 0x660
		::System::Boolean active_scanColor1End; // 0x670
		::System::Boolean use_scanColor1End; // 0x671
		::System::Byte _padding18[0x2];
		::UnityEngine::Color scanColor1End; // 0x674
		::System::Boolean active_scanColor2End; // 0x684
		::System::Boolean use_scanColor2End; // 0x685
		::System::Byte _padding19[0x2];
		::UnityEngine::Color scanColor2End; // 0x688
		::System::Boolean active_scanColor3End; // 0x698
		::System::Boolean use_scanColor3End; // 0x699
		::System::Byte _padding20[0x2];
		::UnityEngine::Color scanColor3End; // 0x69C
		::System::Boolean active_lensDistortionIntensity; // 0x6AC
		::System::Boolean use_lensDistortionIntensity; // 0x6AD
		::System::Byte _padding21[0x2];
		::System::Single lensDistortionIntensity; // 0x6B0
		::System::Boolean active_lensDistortionXMultiplier; // 0x6B4
		::System::Boolean use_lensDistortionXMultiplier; // 0x6B5
		::System::Byte _padding22[0x2];
		::System::Single lensDistortionXMultiplier; // 0x6B8
		::System::Boolean active_lensDistortionYMultiplier; // 0x6BC
		::System::Boolean use_lensDistortionYMultiplier; // 0x6BD
		::System::Byte _padding23[0x2];
		::System::Single lensDistortionYMultiplier; // 0x6C0
		::System::Boolean active_lensDistortionCenter; // 0x6C4
		::System::Boolean use_lensDistortionCenter; // 0x6C5
		::System::Byte _padding24[0x2];
		::UnityEngine::Vector2 lensDistortionCenter; // 0x6C8
		::System::Boolean active_lensDistortionScale; // 0x6D0
		::System::Boolean use_lensDistortionScale; // 0x6D1
		::System::Byte _padding25[0x2];
		::System::Single lensDistortionScale; // 0x6D4
		::System::Boolean active_enable; // 0x6D8
		::System::Boolean use_enable; // 0x6D9
		::System::Boolean enable; // 0x6DA
		::System::Boolean active_hue; // 0x6DB
		::System::Boolean use_hue; // 0x6DC
		::System::Byte _padding26[0x3];
		::System::Single hue; // 0x6E0
		::System::Boolean active_saturation; // 0x6E4
		::System::Boolean use_saturation; // 0x6E5
		::System::Byte _padding27[0x2];
		::System::Single saturation; // 0x6E8
		::System::Boolean active_brightness; // 0x6EC
		::System::Boolean use_brightness; // 0x6ED
		::System::Byte _padding28[0x2];
		::System::Single brightness; // 0x6F0
		::System::Boolean active_contrast; // 0x6F4
		::System::Boolean use_contrast; // 0x6F5
		::System::Byte _padding29[0x2];
		::System::Single contrast; // 0x6F8
		::System::Boolean active_contrastMiddlePoint; // 0x6FC
		::System::Boolean use_contrastMiddlePoint; // 0x6FD
		::System::Byte _padding30[0x2];
		::System::Single contrastMiddlePoint; // 0x700
		::System::Boolean active_colorTintNear; // 0x704
		::System::Boolean use_colorTintNear; // 0x705
		::System::Byte _padding31[0x2];
		::UnityEngine::Color colorTintNear; // 0x708
		::System::Boolean active_colorTintFar; // 0x718
		::System::Boolean use_colorTintFar; // 0x719
		::System::Byte _padding32[0x2];
		::UnityEngine::Color colorTintFar; // 0x71C
		::System::Boolean active_colorTintStart; // 0x72C
		::System::Boolean use_colorTintStart; // 0x72D
		::System::Byte _padding33[0x2];
		::System::Single colorTintStart; // 0x730
		::System::Boolean active_colorTintEnd; // 0x734
		::System::Boolean use_colorTintEnd; // 0x735
		::System::Byte _padding34[0x2];
		::System::Single colorTintEnd; // 0x738
		::System::Boolean active_scanlineWidth; // 0x73C
		::System::Boolean use_scanlineWidth; // 0x73D
		::System::Byte _padding35[0x2];
		::System::Single scanlineWidth; // 0x740
		::System::Boolean active_scanlineContrast; // 0x744
		::System::Boolean use_scanlineContrast; // 0x745
		::System::Byte _padding36[0x2];
		::System::Single scanlineContrast; // 0x748
		::System::Boolean active_scanlineDistortion; // 0x74C
		::System::Boolean use_scanlineDistortion; // 0x74D
		::System::Byte _padding37[0x2];
		::System::Single scanlineDistortion; // 0x750
		::System::Boolean active_sliceWidth; // 0x754
		::System::Boolean use_sliceWidth; // 0x755
		::System::Byte _padding38[0x2];
		::System::Single sliceWidth; // 0x758
		::System::Boolean active_sliceAngle; // 0x75C
		::System::Boolean use_sliceAngle; // 0x75D
		::System::Byte _padding39[0x2];
		::System::Single sliceAngle; // 0x760
		::System::Boolean active_reverse; // 0x764
		::System::Boolean use_reverse; // 0x765
		::System::Boolean reverse; // 0x766
		::System::Boolean active_sliceOffset; // 0x767
		::System::Boolean use_sliceOffset; // 0x768
		::System::Byte _padding40[0x3];
		::System::Single sliceOffset; // 0x76C
		::System::Boolean active_sliceColorA; // 0x770
		::System::Boolean use_sliceColorA; // 0x771
		::System::Byte _padding41[0x2];
		::UnityEngine::Color sliceColorA; // 0x774
		::System::Boolean active_sliceColorAMode; // 0x784
		::System::Boolean use_sliceColorAMode; // 0x785
		::System::Byte _padding42[0x2];
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod sliceColorAMode; // 0x788
		::System::Boolean active_sliceColorB; // 0x78C
		::System::Boolean use_sliceColorB; // 0x78D
		::System::Byte _padding43[0x2];
		::UnityEngine::Color sliceColorB; // 0x790
		::System::Boolean active_sliceColorBMode; // 0x7A0
		::System::Boolean use_sliceColorBMode; // 0x7A1
		::System::Byte _padding44[0x2];
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod sliceColorBMode; // 0x7A4
		::System::Boolean active_scanStart0; // 0x7A8
		::System::Boolean use_scanStart0; // 0x7A9
		::System::Byte _padding45[0x2];
		::System::Single scanStart0; // 0x7AC
		::System::Boolean active_scanEnd0; // 0x7B0
		::System::Boolean use_scanEnd0; // 0x7B1
		::System::Byte _padding46[0x2];
		::System::Single scanEnd0; // 0x7B4
		::System::Boolean active_scanStart0Soft; // 0x7B8
		::System::Boolean use_scanStart0Soft; // 0x7B9
		::System::Byte _padding47[0x2];
		::System::Single scanStart0Soft; // 0x7BC
		::System::Boolean active_scanEnd0Soft; // 0x7C0
		::System::Boolean use_scanEnd0Soft; // 0x7C1
		::System::Byte _padding48[0x2];
		::System::Single scanEnd0Soft; // 0x7C4
		::System::Boolean active_scanColor0; // 0x7C8
		::System::Boolean use_scanColor0; // 0x7C9
		::System::Byte _padding49[0x2];
		::UnityEngine::Color scanColor0; // 0x7CC
		::System::Boolean active_scanColor0Mode; // 0x7DC
		::System::Boolean use_scanColor0Mode; // 0x7DD
		::System::Byte _padding50[0x2];
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor0Mode; // 0x7E0
		::System::Boolean active_scanStart1; // 0x7E4
		::System::Boolean use_scanStart1; // 0x7E5
		::System::Byte _padding51[0x2];
		::System::Single scanStart1; // 0x7E8
		::System::Boolean active_scanEnd1; // 0x7EC
		::System::Boolean use_scanEnd1; // 0x7ED
		::System::Byte _padding52[0x2];
		::System::Single scanEnd1; // 0x7F0
		::System::Boolean active_scanStart1Soft; // 0x7F4
		::System::Boolean use_scanStart1Soft; // 0x7F5
		::System::Byte _padding53[0x2];
		::System::Single scanStart1Soft; // 0x7F8
		::System::Boolean active_scanEnd1Soft; // 0x7FC
		::System::Boolean use_scanEnd1Soft; // 0x7FD
		::System::Byte _padding54[0x2];
		::System::Single scanEnd1Soft; // 0x800
		::System::Boolean active_scanColor1; // 0x804
		::System::Boolean use_scanColor1; // 0x805
		::System::Byte _padding55[0x2];
		::UnityEngine::Color scanColor1; // 0x808
		::System::Boolean active_scanColor1Mode; // 0x818
		::System::Boolean use_scanColor1Mode; // 0x819
		::System::Byte _padding56[0x2];
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor1Mode; // 0x81C
		::System::Boolean active_scanStart2; // 0x820
		::System::Boolean use_scanStart2; // 0x821
		::System::Byte _padding57[0x2];
		::System::Single scanStart2; // 0x824
		::System::Boolean active_scanEnd2; // 0x828
		::System::Boolean use_scanEnd2; // 0x829
		::System::Byte _padding58[0x2];
		::System::Single scanEnd2; // 0x82C
		::System::Boolean active_scanStart2Soft; // 0x830
		::System::Boolean use_scanStart2Soft; // 0x831
		::System::Byte _padding59[0x2];
		::System::Single scanStart2Soft; // 0x834
		::System::Boolean active_scanEnd2Soft; // 0x838
		::System::Boolean use_scanEnd2Soft; // 0x839
		::System::Byte _padding60[0x2];
		::System::Single scanEnd2Soft; // 0x83C
		::System::Boolean active_scanColor2; // 0x840
		::System::Boolean use_scanColor2; // 0x841
		::System::Byte _padding61[0x2];
		::UnityEngine::Color scanColor2; // 0x844
		::System::Boolean active_scanColor2Mode; // 0x854
		::System::Boolean use_scanColor2Mode; // 0x855
		::System::Byte _padding62[0x2];
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor2Mode; // 0x858
		::System::Boolean active_scanStart3; // 0x85C
		::System::Boolean use_scanStart3; // 0x85D
		::System::Byte _padding63[0x2];
		::System::Single scanStart3; // 0x860
		::System::Boolean active_scanEnd3; // 0x864
		::System::Boolean use_scanEnd3; // 0x865
		::System::Byte _padding64[0x2];
		::System::Single scanEnd3; // 0x868
		::System::Boolean active_scanStart3Soft; // 0x86C
		::System::Boolean use_scanStart3Soft; // 0x86D
		::System::Byte _padding65[0x2];
		::System::Single scanStart3Soft; // 0x870
		::System::Boolean active_scanEnd3Soft; // 0x874
		::System::Boolean use_scanEnd3Soft; // 0x875
		::System::Byte _padding66[0x2];
		::System::Single scanEnd3Soft; // 0x878
		::System::Boolean active_scanColor3; // 0x87C
		::System::Boolean use_scanColor3; // 0x87D
		::System::Byte _padding67[0x2];
		::UnityEngine::Color scanColor3; // 0x880
		::System::Boolean active_scanColor3Mode; // 0x890
		::System::Boolean use_scanColor3Mode; // 0x891
		::System::Byte _padding68[0x2];
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor3Mode; // 0x894
		::System::Boolean active_uvOffsetR; // 0x898
		::System::Boolean use_uvOffsetR; // 0x899
		::System::Byte _padding69[0x2];
		::UnityEngine::Vector2 uvOffsetR; // 0x89C
		::System::Boolean active_colorR; // 0x8A4
		::System::Boolean use_colorR; // 0x8A5
		::System::Byte _padding70[0x2];
		::UnityEngine::Color colorR; // 0x8A8
		::System::Boolean active_uvOffsetG; // 0x8B8
		::System::Boolean use_uvOffsetG; // 0x8B9
		::System::Byte _padding71[0x2];
		::UnityEngine::Vector2 uvOffsetG; // 0x8BC
		::System::Boolean active_colorG; // 0x8C4
		::System::Boolean use_colorG; // 0x8C5
		::System::Byte _padding72[0x2];
		::UnityEngine::Color colorG; // 0x8C8
		::System::Boolean active_uvOffsetB; // 0x8D8
		::System::Boolean use_uvOffsetB; // 0x8D9
		::System::Byte _padding73[0x2];
		::UnityEngine::Vector2 uvOffsetB; // 0x8DC
		::System::Boolean active_colorB; // 0x8E4
		::System::Boolean use_colorB; // 0x8E5
		::System::Byte _padding74[0x2];
		::UnityEngine::Color colorB; // 0x8E8
		::System::Boolean active_fadeSourceImage; // 0x8F8
		::System::Boolean use_fadeSourceImage; // 0x8F9
		::System::Byte _padding75[0x2];
		::System::Single fadeSourceImage; // 0x8FC
		::System::Boolean active_outlineDistortion; // 0x900
		::System::Boolean use_outlineDistortion; // 0x901
		::System::Boolean outlineDistortion; // 0x902
		::System::Boolean active_outlineDistortionTex; // 0x903
		::System::Boolean use_outlineDistortionTex; // 0x904
		::System::Byte _padding76[0x3];
		::UnityEngine::Texture* outlineDistortionTex; // 0x908
		::System::Boolean active_outlineDistortionTexTiling; // 0x910
		::System::Boolean use_outlineDistortionTexTiling; // 0x911
		::System::Byte _padding77[0x2];
		::UnityEngine::Vector2 outlineDistortionTexTiling; // 0x914
		::System::Boolean active_outlineDistortionTexOffset; // 0x91C
		::System::Boolean use_outlineDistortionTexOffset; // 0x91D
		::System::Byte _padding78[0x2];
		::UnityEngine::Vector2 outlineDistortionTexOffset; // 0x920
		::System::Boolean active_outlineDistortionUVSpeed; // 0x928
		::System::Boolean use_outlineDistortionUVSpeed; // 0x929
		::System::Byte _padding79[0x2];
		::UnityEngine::Vector2 outlineDistortionUVSpeed; // 0x92C
		::System::Boolean active_outlineDistortionOffset; // 0x934
		::System::Boolean use_outlineDistortionOffset; // 0x935
		::System::Byte _padding80[0x2];
		::UnityEngine::Vector2 outlineDistortionOffset; // 0x938
		::System::Boolean active_outlineDistortionIntensity; // 0x940
		::System::Boolean use_outlineDistortionIntensity; // 0x941
		::System::Byte _padding81[0x2];
		::UnityEngine::Vector2 outlineDistortionIntensity; // 0x944
		::System::Boolean active_scanMaskType; // 0x94C
		::System::Boolean use_scanMaskType; // 0x94D
		::System::Byte _padding82[0x2];
		::UnityEngine::Rendering::Universal::ScanMaskType scanMaskType; // 0x950
		::System::Boolean active_scanMaskTex; // 0x954
		::System::Boolean use_scanMaskTex; // 0x955
		::System::Byte _padding83[0x2];
		::UnityEngine::Texture* scanMaskTex; // 0x958
		::System::Boolean active_scanMaskTexChannel; // 0x960
		::System::Boolean use_scanMaskTexChannel; // 0x961
		::System::Byte _padding84[0x2];
		::UnityEngine::Rendering::Universal::ChannelMapping scanMaskTexChannel; // 0x964
		::System::Boolean active_scanMaskTexTiling; // 0x968
		::System::Boolean use_scanMaskTexTiling; // 0x969
		::System::Byte _padding85[0x2];
		::UnityEngine::Vector2 scanMaskTexTiling; // 0x96C
		::System::Boolean active_scanMaskTexOffset; // 0x974
		::System::Boolean use_scanMaskTexOffset; // 0x975
		::System::Byte _padding86[0x2];
		::UnityEngine::Vector2 scanMaskTexOffset; // 0x978
		::System::Boolean active_scanMaskTexUVSpeed; // 0x980
		::System::Boolean use_scanMaskTexUVSpeed; // 0x981
		::System::Byte _padding87[0x2];
		::UnityEngine::Vector2 scanMaskTexUVSpeed; // 0x984
		::System::Boolean active_scanMaskBaseY; // 0x98C
		::System::Boolean use_scanMaskBaseY; // 0x98D
		::System::Byte _padding88[0x2];
		::System::Single scanMaskBaseY; // 0x990
		::System::Boolean active_scanMaskYRange; // 0x994
		::System::Boolean use_scanMaskYRange; // 0x995
		::System::Byte _padding89[0x2];
		::System::Single scanMaskYRange; // 0x998
		::System::Boolean active_scanMaskIntensity0; // 0x99C
		::System::Boolean use_scanMaskIntensity0; // 0x99D
		::System::Byte _padding90[0x2];
		::System::Single scanMaskIntensity0; // 0x9A0
		::System::Boolean active_scanMaskIntensity1; // 0x9A4
		::System::Boolean use_scanMaskIntensity1; // 0x9A5
		::System::Byte _padding91[0x2];
		::System::Single scanMaskIntensity1; // 0x9A8
		::System::Boolean active_scanMaskIntensity2; // 0x9AC
		::System::Boolean use_scanMaskIntensity2; // 0x9AD
		::System::Byte _padding92[0x2];
		::System::Single scanMaskIntensity2; // 0x9B0
		::System::Boolean active_scanMaskIntensity3; // 0x9B4
		::System::Boolean use_scanMaskIntensity3; // 0x9B5
		::System::Byte _padding93[0x2];
		::System::Single scanMaskIntensity3; // 0x9B8
		::System::Boolean active_keepInFrontForUberPost; // 0x9BC
		::System::Boolean use_keepInFrontForUberPost; // 0x9BD
		::System::Boolean keepInFrontForUberPost; // 0x9BE
		::System::Boolean active_enableDistanceDistortionColorization; // 0x9BF
		::System::Boolean use_enableDistanceDistortionColorization; // 0x9C0
		::System::Boolean enableDistanceDistortionColorization; // 0x9C1
		::System::Boolean active_distanceDistortionTexture; // 0x9C2
		::System::Boolean use_distanceDistortionTexture; // 0x9C3
		::System::Byte _padding94[0x4];
		::UnityEngine::Texture* distanceDistortionTexture; // 0x9C8
		::System::Boolean active_distanceColorizeTexture; // 0x9D0
		::System::Boolean use_distanceColorizeTexture; // 0x9D1
		::System::Byte _padding95[0x6];
		::UnityEngine::Texture* distanceColorizeTexture; // 0x9D8
		::System::Boolean active_distanceDistortionColor; // 0x9E0
		::System::Boolean use_distanceDistortionColor; // 0x9E1
		::System::Byte _padding96[0x2];
		::UnityEngine::Color distanceDistortionColor; // 0x9E4
		::System::Boolean active_distanceDistortionStart; // 0x9F4
		::System::Boolean use_distanceDistortionStart; // 0x9F5
		::System::Byte _padding97[0x2];
		::System::Single distanceDistortionStart; // 0x9F8
		::System::Boolean active_distanceDistortionEnd; // 0x9FC
		::System::Boolean use_distanceDistortionEnd; // 0x9FD
		::System::Byte _padding98[0x2];
		::System::Single distanceDistortionEnd; // 0xA00
		::System::Boolean active_distanceDistortionFadeRange; // 0xA04
		::System::Boolean use_distanceDistortionFadeRange; // 0xA05
		::System::Byte _padding99[0x2];
		::System::Single distanceDistortionFadeRange; // 0xA08
		::System::Boolean active_distanceDistortionOffsetSpeed; // 0xA0C
		::System::Boolean use_distanceDistortionOffsetSpeed; // 0xA0D
		::System::Byte _padding100[0x2];
		::UnityEngine::Vector3 distanceDistortionOffsetSpeed; // 0xA10
		::System::Boolean active_distanceDistortionTiling; // 0xA1C
		::System::Boolean use_distanceDistortionTiling; // 0xA1D
		::System::Byte _padding101[0x2];
		::System::Single distanceDistortionTiling; // 0xA20
		::System::Boolean active_distanceDistortionIntensity; // 0xA24
		::System::Boolean use_distanceDistortionIntensity; // 0xA25
		::System::Byte _padding102[0x2];
		::System::Single distanceDistortionIntensity; // 0xA28
		::System::Boolean active_distanceColorizationOffsetSpeed; // 0xA2C
		::System::Boolean use_distanceColorizationOffsetSpeed; // 0xA2D
		::System::Byte _padding103[0x2];
		::UnityEngine::Vector3 distanceColorizationOffsetSpeed; // 0xA30
		::System::Boolean active_distanceColorizationTiling; // 0xA3C
		::System::Boolean use_distanceColorizationTiling; // 0xA3D
		::System::Byte _padding104[0x2];
		::System::Single distanceColorizationTiling; // 0xA40
		::System::Boolean active_distanceDistortionHeightStart; // 0xA44
		::System::Boolean use_distanceDistortionHeightStart; // 0xA45
		::System::Byte _padding105[0x2];
		::System::Single distanceDistortionHeightStart; // 0xA48
		::System::Boolean active_distanceDistortionHeightEnd; // 0xA4C
		::System::Boolean use_distanceDistortionHeightEnd; // 0xA4D
		::System::Byte _padding106[0x2];
		::System::Single distanceDistortionHeightEnd; // 0xA50
		::System::Boolean active_distanceDistortionHeightFadeRange; // 0xA54
		::System::Boolean use_distanceDistortionHeightFadeRange; // 0xA55
		::System::Byte _padding107[0x2];
		::System::Single distanceDistortionHeightFadeRange; // 0xA58
		::System::Boolean active_distanceDistortionBlendMode; // 0xA5C
		::System::Boolean use_distanceDistortionBlendMode; // 0xA5D
		::System::Byte _padding108[0x2];
		::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode distanceDistortionBlendMode; // 0xA60
		::System::Boolean active_distanceColorizationEffect; // 0xA64
		::System::Boolean use_distanceColorizationEffect; // 0xA65
		::System::Byte _padding109[0x2];
		::System::Single distanceColorizationEffect; // 0xA68
		::System::Boolean active_scanCustomCenterPosition; // 0xA6C
		::System::Boolean use_scanCustomCenterPosition; // 0xA6D
		::System::Byte _padding110[0x2];
		::UnityEngine::Vector3 scanCustomCenterPosition; // 0xA70
		::System::Boolean active_outlineInUberShader; // 0xA7C
		::System::Boolean use_outlineInUberShader; // 0xA7D
		::System::Boolean outlineInUberShader; // 0xA7E
		::System::Boolean active_outlineScreenSpaceMaskTex; // 0xA7F
		::System::Boolean use_outlineScreenSpaceMaskTex; // 0xA80
		::System::Byte _padding111[0x7];
		::UnityEngine::Texture* outlineScreenSpaceMaskTex; // 0xA88
		::System::Boolean active_applyBeforeUberPost; // 0xA90
		::System::Boolean use_applyBeforeUberPost; // 0xA91
		::System::Boolean applyBeforeUberPost; // 0xA92
		::System::Boolean active_outlineScreenSpaceMaskTexScaleOffset; // 0xA93
		::System::Boolean use_outlineScreenSpaceMaskTexScaleOffset; // 0xA94
		::System::Byte _padding112[0x3];
		::UnityEngine::Vector4 outlineScreenSpaceMaskTexScaleOffset; // 0xA98
		::System::Boolean active_scanlineBlendMode; // 0xAA8
		::System::Boolean use_scanlineBlendMode; // 0xAA9
		::System::Byte _padding113[0x2];
		::UnityEngine::Rendering::Universal::ScanlineBlendMode scanlineBlendMode; // 0xAAC
		::System::Boolean active_enable2DSpot; // 0xAB0
		::System::Boolean use_enable2DSpot; // 0xAB1
		::System::Boolean enable2DSpot; // 0xAB2
		::System::Boolean active_spotCenter; // 0xAB3
		::System::Boolean use_spotCenter; // 0xAB4
		::System::Byte _padding114[0x3];
		::UnityEngine::Vector2 spotCenter; // 0xAB8
		::System::Boolean active_spotRadius; // 0xAC0
		::System::Boolean use_spotRadius; // 0xAC1
		::System::Byte _padding115[0x2];
		::System::Single spotRadius; // 0xAC4
		::System::Boolean active_blackIntensity; // 0xAC8
		::System::Boolean use_blackIntensity; // 0xAC9
		::System::Byte _padding116[0x2];
		::System::Single blackIntensity; // 0xACC
		::System::Boolean active_overlayIntensity; // 0xAD0
		::System::Boolean use_overlayIntensity; // 0xAD1
		::System::Byte _padding117[0x2];
		::System::Single overlayIntensity; // 0xAD4
		::System::Boolean active_curvePower; // 0xAD8
		::System::Boolean use_curvePower; // 0xAD9
		::System::Byte _padding118[0x2];
		::System::Single curvePower; // 0xADC
		::System::Boolean active_outlineNormalDiffThreshold; // 0xAE0
		::System::Boolean use_outlineNormalDiffThreshold; // 0xAE1
		::System::Byte _padding119[0x2];
		::System::Single outlineNormalDiffThreshold; // 0xAE4
		::UnityEngine::Rendering::Universal::VREffects* _VREffects; // 0xAE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::VREffects* HJFJNGDNDPH(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::VREffects*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_HJFJNGDNDPH_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
