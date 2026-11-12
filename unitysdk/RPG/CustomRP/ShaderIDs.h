#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CUSTOMRP_SHADERIDS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE1CFB0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ShaderIDs_TypeDefinitionIndex = 38558;

	class ShaderIDs : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__2_MRT_SLOT0()
		{
			return (::System::String**)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x25850);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_Null_Keyword()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x25858);
		}

		static ::System::String** StaticGet__3_MRT_SLOT1()
		{
			return (::System::String**)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x25860);
		}

		static ::System::String** StaticGet__2_MRT_SLOT1()
		{
			return (::System::String**)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x25868);
		}

		static ::System::Int32* StaticGet__Saturation()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7330);
		}

		static ::System::Int32* StaticGet_HashIDColorCorrectionHighlightMin()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7334);
		}

		static ::System::Int32* StaticGet_HashIDCustomLUTIntensity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7338);
		}

		static ::System::Int32* StaticGet__RainDropTilling()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x733C);
		}

		static ::System::Int32* StaticGet_WhitePercent()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7340);
		}

		static ::System::Int32* StaticGet__MK_Coverage()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7344);
		}

		static ::System::Int32* StaticGet__MK_NoiseTiling()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7348);
		}

		static ::System::Int32* StaticGet_LensFlareElementAspect()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x734C);
		}

		static ::System::Int32* StaticGet_CenterYScale()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7350);
		}

		static ::System::Int32* StaticGet__MK_BrightColor1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7354);
		}

		static ::System::Int32* StaticGet__ReflectionColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7358);
		}

		static ::System::Int32* StaticGet_UseTwoTone()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x735C);
		}

		static ::System::Int32* StaticGet_BloomG()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7360);
		}

		static ::System::Int32* StaticGet_FullScreenMask()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7364);
		}

		static ::System::Int32* StaticGet_MainTex5()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7368);
		}

		static ::System::Int32* StaticGet__LightedWidth()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x736C);
		}

		static ::System::Int32* StaticGet_RadialParams()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7370);
		}

		static ::System::Int32* StaticGet_cameraProjectionMatrix()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7374);
		}

		static ::System::Int32* StaticGet_DisScale()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7378);
		}

		static ::System::Int32* StaticGet__AABBSize()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x737C);
		}

		static ::System::Int32* StaticGet_HashIDMidSegmentA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7380);
		}

		static ::System::Int32* StaticGet_HashIDColorGainShadow()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7384);
		}

		static ::System::Int32* StaticGet_LengthRate()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7388);
		}

		static ::System::Int32* StaticGet__MK_BleedColor1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x738C);
		}

		static ::System::Int32* StaticGet__Color()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7390);
		}

		static ::System::Int32* StaticGet_Input1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7394);
		}

		static ::System::Int32* StaticGet__OutputToTempRT()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7398);
		}

		static ::System::Int32* StaticGet_MBVelocityMax()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x739C);
		}

		static ::System::Int32* StaticGet_MotionBlurAlphaTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73A0);
		}

		static ::System::Int32* StaticGet__DetailTex2()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73A4);
		}

		static ::System::Int32* StaticGet_ACES_D()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73A8);
		}

		static ::System::Int32* StaticGet_NearFocalRegion()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73AC);
		}

		static ::System::Int32* StaticGet__LocalAABBMin()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73B0);
		}

		static ::System::Int32* StaticGet_TileGridResParams()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73B4);
		}

		static ::System::Int32* StaticGet_GaussianUVTransform()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73B8);
		}

		static ::System::Int32* StaticGet_HashIDColorContrastMidtone()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73BC);
		}

		static ::System::Int32* StaticGet_DepthBlurParameters()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73C0);
		}

		static ::System::Int32* StaticGet_Height()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73C4);
		}

		static ::System::Int32* StaticGet__NoiseTilingFlow()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73C8);
		}

		static ::System::Int32* StaticGet_LensDistortion_Params2()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73CC);
		}

		static ::System::Int32* StaticGet_DOFBokehParams()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73D0);
		}

		static ::System::Int32* StaticGet_HashIDColorSaturationShadow()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73D4);
		}

		static ::System::Int32* StaticGet_DialogAvatarRT()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73D8);
		}

		static ::System::Int32* StaticGet_LineTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73DC);
		}

		static ::System::Int32* StaticGet_HashIDColorSaturationHighlight()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73E0);
		}

		static ::System::Int32* StaticGet__NoiseSeed1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73E4);
		}

		static ::System::Int32* StaticGet_CoCBlurUnit()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73E8);
		}

		static ::System::Int32* StaticGet_ColorGradualParams()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73EC);
		}

		static ::System::Int32* StaticGet_screenParams()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73F0);
		}

		static ::System::Int32* StaticGet__RainMaskVal()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73F4);
		}

		static ::System::Int32* StaticGet_OutlinePolygonOffsetUnits()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73F8);
		}

		static ::System::Int32* StaticGet__NoiseSpeed()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x73FC);
		}

		static ::System::Int32* StaticGet__LineST()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7400);
		}

		static ::System::Int32* StaticGet__RainDistortStrength()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7404);
		}

		static ::System::Int32* StaticGet_HashIDShoSegmentB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7408);
		}

		static ::System::Int32* StaticGet_BlitTransparentPass()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x740C);
		}

		static ::System::Int32* StaticGet__RainDropVelocity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7410);
		}

		static ::System::Int32* StaticGet_LineDivide()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7414);
		}

		static ::System::Int32* StaticGet_LensFlareSampleCenter()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7418);
		}

		static ::System::Int32* StaticGet_NearCocTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x741C);
		}

		static ::System::Int32* StaticGet__DistortIntensity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7420);
		}

		static ::System::Int32* StaticGet__LineInts()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7424);
		}

		static ::System::Int32* StaticGet_inverseCameraProjectionMatrix()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7428);
		}

		static ::System::Int32* StaticGet_VignetteUIOuterEdge()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x742C);
		}

		static ::System::Int32* StaticGet__BoundingBoxForTraceMax()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7430);
		}

		static ::System::Int32* StaticGet_BlinkDuration()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7434);
		}

		static ::System::Int32* StaticGet_BlitCopyPass()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7438);
		}

		static ::System::Int32* StaticGet_Output_Sum22()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x743C);
		}

		static ::System::Int32* StaticGet_LensFlareColorThreshold()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7440);
		}

		static ::System::Int32* StaticGet_HashIDColorCorrectionShadowMax()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7444);
		}

		static ::System::Int32* StaticGet__FarClip()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7448);
		}

		static ::System::Int32* StaticGet__RainDropStrength()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x744C);
		}

		static ::System::Int32* StaticGet_HashIDCustomGradualNoiseUVScaleOffset()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7450);
		}

		static ::System::Int32* StaticGet_VignetteParams1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7454);
		}

		static ::System::Int32* StaticGet__DotInts()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7458);
		}

		static ::System::Int32* StaticGet__DotSpeed()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x745C);
		}

		static ::System::Int32* StaticGet_VelocityTileTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7460);
		}

		static ::System::Int32* StaticGet_OutlinePolygonOffsetFactor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7464);
		}

		static ::System::Int32* StaticGet_FarFocalRegion()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7468);
		}

		static ::System::Int32* StaticGet__SkillRadialBlurParams1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x746C);
		}

		static ::System::Int32* StaticGet__GrowingProgress()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7470);
		}

		static ::System::Int32* StaticGet_GaussianUVClamp()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7474);
		}

		static ::System::Int32* StaticGet_HashIDColorContrastShadow()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7478);
		}

		static ::System::Int32* StaticGet_ScreenSpaceDistortionTexture()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x747C);
		}

		static ::System::Int32* StaticGet_MainTex4()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7480);
		}

		static ::System::Int32* StaticGet__MainTex1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7484);
		}

		static ::System::Int32* StaticGet_BlinkRadii()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7488);
		}

		static ::System::Int32* StaticGet_viewAndProjectionMatrix()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x748C);
		}

		static ::System::Int32* StaticGet_WhiteClip()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7490);
		}

		static ::System::Int32* StaticGet_MainTex0()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7494);
		}

		static ::System::Int32* StaticGet__UseSphereShape()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7498);
		}

		static ::System::Int32* StaticGet_GaussWeights()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x749C);
		}

		static ::System::Int32* StaticGet__LocalAABBMax()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74A0);
		}

		static ::System::Int32* StaticGet_HashIDColorGainHighlight()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74A4);
		}

		static ::System::Int32* StaticGet_InputFgdTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74A8);
		}

		static ::System::Int32* StaticGet__CloudSDF()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74AC);
		}

		static ::System::Int32* StaticGet_MainTex2()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74B0);
		}

		static ::System::Int32* StaticGet_ChromaFilterC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74B4);
		}

		static ::System::Int32* StaticGet__MK_DarkColor0()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74B8);
		}

		static ::System::Int32* StaticGet_UVTransform()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74BC);
		}

		static ::System::Int32* StaticGet_ExpandGamut()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74C0);
		}

		static ::System::Int32* StaticGet_HashIDColorGainGlobal()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74C4);
		}

		static ::System::Int32* StaticGet_VignetteParams2()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74C8);
		}

		static ::System::Int32* StaticGet_HashIDHueSatCon()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74CC);
		}

		static ::System::Int32* StaticGet_StencilBlitDestAlpha()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74D0);
		}

		static ::System::Int32* StaticGet_BlinkAspect()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74D4);
		}

		static ::System::Int32* StaticGet__Capture3DAlphaTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74D8);
		}

		static ::System::Int32* StaticGet_LensFlareUseTexmapRGB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74DC);
		}

		static ::System::Int32* StaticGet_TAADestination()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74E0);
		}

		static ::System::Int32* StaticGet_GaussianLayerIntensity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74E4);
		}

		static ::System::Int32* StaticGet__CloudColor_ST()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74E8);
		}

		static ::System::Int32* StaticGet_Width()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74EC);
		}

		static ::System::Int32* StaticGet_LensFlareIgnoreRotation()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74F0);
		}

		static ::System::Int32* StaticGet_EnableBlinkSpeedline()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74F4);
		}

		static ::System::Int32* StaticGet__BoundingBoxMax()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74F8);
		}

		static ::System::Int32* StaticGet_NearCocImmediateTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x74FC);
		}

		static ::System::Int32* StaticGet__DotST()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7500);
		}

		static ::System::Int32* StaticGet__LensGlitch2GradualParams()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7504);
		}

		static ::System::Int32* StaticGet_OutputTex1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7508);
		}

		static ::System::Int32* StaticGet__ColorBlendRange()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x750C);
		}

		static ::System::Int32* StaticGet__PPPattern_Color()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7510);
		}

		static ::System::Int32* StaticGet_BloomThreshold()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7514);
		}

		static ::System::Int32* StaticGet__DepthComp()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7518);
		}

		static ::System::Int32* StaticGet_BlinkOffset()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x751C);
		}

		static ::System::Int32* StaticGet__MK_Transparency()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7520);
		}

		static ::System::Int32* StaticGet_GaussianGradualParams()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7524);
		}

		static ::System::Int32* StaticGet_BloomIntensity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7528);
		}

		static ::System::Int32* StaticGet__MainTexSpeed()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x752C);
		}

		static ::System::Int32* StaticGet_LensFlareProbe()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7530);
		}

		static ::System::Int32* StaticGet__BlendSrc()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7534);
		}

		static ::System::Int32* StaticGet_HashIDLevelShadowTone()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7538);
		}

		static ::System::Int32* StaticGet_InputBgdTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x753C);
		}

		static ::System::Int32* StaticGet_DOFDilateRadius()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7540);
		}

		static ::System::Int32* StaticGet__BoundingBoxMin()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7544);
		}

		static ::System::Int32* StaticGet__UseDualTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7548);
		}

		static ::System::Int32* StaticGet_FocusDistance()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x754C);
		}

		static ::System::Int32* StaticGet_BlinkMaskColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7550);
		}

		static ::System::Int32* StaticGet__MK_BrightColor0()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7554);
		}

		static ::System::Int32* StaticGet_BlinkSpeedlineLength()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7558);
		}

		static ::System::Int32* StaticGet_LensDistortion_Params1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x755C);
		}

		static ::System::Int32* StaticGet_ACES_E()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7560);
		}

		static ::System::Int32* StaticGet__UseNoiseGlitch()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7564);
		}

		static ::System::Int32* StaticGet_HashIDColorGainMidtone()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7568);
		}

		static ::System::Int32* StaticGet_Alpha()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x756C);
		}

		static ::System::Int32* StaticGet_HashIDColorSaturationGlobal()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7570);
		}

		static ::System::Int32* StaticGet_StencilOnly()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7574);
		}

		static ::System::Int32* StaticGet_BlinkDownScale()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7578);
		}

		static ::System::Int32* StaticGet__CloudColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x757C);
		}

		static ::System::Int32* StaticGet_BlueCorrection()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7580);
		}

		static ::System::Int32* StaticGet_EndDistance()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7584);
		}

		static ::System::Int32* StaticGet__CloudScale()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7588);
		}

		static ::System::Int32* StaticGet_zBufferParams()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x758C);
		}

		static ::System::Int32* StaticGet_BlinkChinkScale()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7590);
		}

		static ::System::Int32* StaticGet__BaseColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7594);
		}

		static ::System::Int32* StaticGet__DetailTex1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7598);
		}

		static ::System::Int32* StaticGet_Shoulder()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x759C);
		}

		static ::System::Int32* StaticGet__MainTex1_ST()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75A0);
		}

		static ::System::Int32* StaticGet_PlanarReflectionColorRT()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75A4);
		}

		static ::System::Int32* StaticGet_MinRange()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75A8);
		}

		static ::System::Int32* StaticGet_OutputTex0()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75AC);
		}

		static ::System::Int32* StaticGet_FarTransitionRegion()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75B0);
		}

		static ::System::Int32* StaticGet_HashIDMidSegmentB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75B4);
		}

		static ::System::Int32* StaticGet__VigIntst()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75B8);
		}

		static ::System::Int32* StaticGet__MK_DarkColor1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75BC);
		}

		static ::System::Int32* StaticGet_LensFlareFadeMaxSize()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75C0);
		}

		static ::System::Int32* StaticGet_TemporalFilterParams()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75C4);
		}

		static ::System::Int32* StaticGet_LensFlareRT()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75C8);
		}

		static ::System::Int32* StaticGet_CameraDir()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75CC);
		}

		static ::System::Int32* StaticGet_OffsetIndensity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75D0);
		}

		static ::System::Int32* StaticGet__NoiseIntensity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75D4);
		}

		static ::System::Int32* StaticGet_orthoParams()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75D8);
		}

		static ::System::Int32* StaticGet__MotionMaskTexture()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75DC);
		}

		static ::System::Int32* StaticGet_BlinkSpeedlineSpeed()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75E0);
		}

		static ::System::Int32* StaticGet_Brightness()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75E4);
		}

		static ::System::Int32* StaticGet_LensFlareGradient()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75E8);
		}

		static ::System::Int32* StaticGet_Rotate()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75EC);
		}

		static ::System::Int32* StaticGet_MaxRcpBlurRadius()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75F0);
		}

		static ::System::Int32* StaticGet_VignetteUIInnerEdge()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75F4);
		}

		static ::System::Int32* StaticGet_HashIDCustomGradualNoiseTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75F8);
		}

		static ::System::Int32* StaticGet_LensDistortionTexture()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x75FC);
		}

		static ::System::Int32* StaticGet_PolaroidColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7600);
		}

		static ::System::Int32* StaticGet_InputFgdOpacityTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7604);
		}

		static ::System::Int32* StaticGet_BlinkRotation()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7608);
		}

		static ::System::Int32* StaticGet_LensDistortion_Params0()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x760C);
		}

		static ::System::Int32* StaticGet_AdditionalColorGradualLineNormal()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7610);
		}

		static ::System::Int32* StaticGet_Input2()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7614);
		}

		static ::System::Int32* StaticGet_DebugHDROutputIntermediate()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7618);
		}

		static ::System::Int32* StaticGet__MK_DetailMapWeight()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x761C);
		}

		static ::System::Int32* StaticGet_projectionParams()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7620);
		}

		static ::System::Int32* StaticGet_LineOffset()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7624);
		}

		static ::System::Int32* StaticGet_BloomR()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7628);
		}

		static ::System::Int32* StaticGet_LensFlareSampleStart()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x762C);
		}

		static ::System::Int32* StaticGet_HashIDToeSegmentA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7630);
		}

		static ::System::Int32* StaticGet__PPPatternGradualParams()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7634);
		}

		static ::System::Int32* StaticGet_LensFlareAspect()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7638);
		}

		static ::System::Int32* StaticGet__LightedStar()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x763C);
		}

		static ::System::Int32* StaticGet_LensFlareEdgeFade()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7640);
		}

		static ::System::Int32* StaticGet_LineDivideY()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7644);
		}

		static ::System::Int32* StaticGet_PolygonOffsetUnits()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7648);
		}

		static ::System::Int32* StaticGet_LensFlareScale()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x764C);
		}

		static ::System::Int32* StaticGet_Output_Sum12()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7650);
		}

		static ::System::Int32* StaticGet_LensFlareDustTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7654);
		}

		static ::System::Int32* StaticGet_BloomAtlasUVClamp()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7658);
		}

		static ::System::Int32* StaticGet_SpeedlineEdgeSoft()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x765C);
		}

		static ::System::Int32* StaticGet_LensFlareDustTilling()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7660);
		}

		static ::System::Int32* StaticGet_NearTransitionRegion()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7664);
		}

		static ::System::Int32* StaticGet_StartDistance()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7668);
		}

		static ::System::Int32* StaticGet_LineDensity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x766C);
		}

		static ::System::Int32* StaticGet__WeatherTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7670);
		}

		static ::System::Int32* StaticGet__MK_NoiseSpeed()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7674);
		}

		static ::System::Int32* StaticGet_VelocityTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7678);
		}

		static ::System::Int32* StaticGet_HashIDCustomLUTTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x767C);
		}

		static ::System::Int32* StaticGet_HalfResParams()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7680);
		}

		static ::System::Int32* StaticGet_ChromaFilterB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7684);
		}

		static ::System::Int32* StaticGet_SmallWindowDOFMaskRect()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7688);
		}

		static ::System::Int32* StaticGet_LightenTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x768C);
		}

		static ::System::Int32* StaticGet_RadialRangeParams()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7690);
		}

		static ::System::Int32* StaticGet_DOFGoldenRot()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7694);
		}

		static ::System::Int32* StaticGet_HashIDColorContrastGlobal()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7698);
		}

		static ::System::Int32* StaticGet_CenterX()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x769C);
		}

		static ::System::Int32* StaticGet__BoundingBoxForTraceMin()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76A0);
		}

		static ::System::Int32* StaticGet_inverseViewMatrix()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76A4);
		}

		static ::System::Int32* StaticGet_LineBrightness()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76A8);
		}

		static ::System::Int32* StaticGet_SpeedBlurStrength()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76AC);
		}

		static ::System::Int32* StaticGet_LensDistortion_Params3()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76B0);
		}

		static ::System::Int32* StaticGet__LocalBoundingSphere()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76B4);
		}

		static ::System::Int32* StaticGet__MK_BGDarkColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76B8);
		}

		static ::System::Int32* StaticGet_ChromaAmount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76BC);
		}

		static ::System::Int32* StaticGet_Lut2DTexParam()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76C0);
		}

		static ::System::Int32* StaticGet_BlinkDistortStrength()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76C4);
		}

		static ::System::Int32* StaticGet_GaussianGradualLineNormal()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76C8);
		}

		static ::System::Int32* StaticGet_BlinkSmoothRange()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76CC);
		}

		static ::System::Int32* StaticGet_GaussOffset()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76D0);
		}

		static ::System::Int32* StaticGet__LerpValue()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76D4);
		}

		static ::System::Int32* StaticGet_DistrotionTextureTilling()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76D8);
		}

		static ::System::Int32* StaticGet__MK_GradientWeight()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76DC);
		}

		static ::System::Int32* StaticGet_BloomAtlasGaussWeight()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76E0);
		}

		static ::System::Int32* StaticGet_LensDisTexTilingOffset()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76E4);
		}

		static ::System::Int32* StaticGet_NoiseTexture()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76E8);
		}

		static ::System::Int32* StaticGet_VignetteUIColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76EC);
		}

		static ::System::Int32* StaticGet__SDFAdd()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76F0);
		}

		static ::System::Int32* StaticGet_LensFlareCenter()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76F4);
		}

		static ::System::Int32* StaticGet_Speed()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76F8);
		}

		static ::System::Int32* StaticGet__LightDirection()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x76FC);
		}

		static ::System::Int32* StaticGet_PlanarReflectionDepthRT()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7700);
		}

		static ::System::Int32* StaticGet_PosX()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7704);
		}

		static ::System::Int32* StaticGet_ReferenceValueTime()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7708);
		}

		static ::System::Int32* StaticGet__MotionMaskHistoryTexture()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x770C);
		}

		static ::System::Int32* StaticGet_Lut2DTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7710);
		}

		static ::System::Int32* StaticGet_BloomAtlasUVTrans()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7714);
		}

		static ::System::Int32* StaticGet__MK_BGBrightColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7718);
		}

		static ::System::Int32* StaticGet_Output_Sum1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x771C);
		}

		static ::System::Int32* StaticGet_MBVelocityScale()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7720);
		}

		static ::System::Int32* StaticGet__UsePolarCoord()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7724);
		}

		static ::System::Int32* StaticGet__MainTex2()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7728);
		}

		static ::System::Int32* StaticGet_HashIDLut2D_Params()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x772C);
		}

		static ::System::Int32* StaticGet_BlackClip()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7730);
		}

		static ::System::Int32* StaticGet_Slope()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7734);
		}

		static ::System::Int32* StaticGet__BlendDst()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7738);
		}

		static ::System::Int32* StaticGet_Toe()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x773C);
		}

		static ::System::Int32* StaticGet_MainTex3()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7740);
		}

		static ::System::Int32* StaticGet_HashIDColorSaturationMidtone()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7744);
		}

		static ::System::Int32* StaticGet__WindDirection()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7748);
		}

		static ::System::Int32* StaticGet__LineSpeed()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x774C);
		}

		static ::System::Int32* StaticGet_ChromaFilterA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7750);
		}

		static ::System::Int32* StaticGet_HashIDToeSegmentB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7754);
		}

		static ::System::Int32* StaticGet_BlurScale()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7758);
		}

		static ::System::Int32* StaticGet_ACES_A()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x775C);
		}

		static ::System::Int32* StaticGet_BloomAtlasGaussLayerIntensity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7760);
		}

		static ::System::Int32* StaticGet__SDFScale()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7764);
		}

		static ::System::Int32* StaticGet_LengthRateLerp()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7768);
		}

		static ::System::Int32* StaticGet_NoiseTextureTilling()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x776C);
		}

		static ::System::Int32* StaticGet__CameraDepthTexture()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7770);
		}

		static ::System::Int32* StaticGet_BloomAtlasGaussOffset()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7774);
		}

		static ::System::Int32* StaticGet_DialogAvatarRT2()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7778);
		}

		static ::System::Int32* StaticGet_ForceDisableToneMapping()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x777C);
		}

		static ::System::Int32* StaticGet_OutlineWidth()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7780);
		}

		static ::System::Int32* StaticGet__SkillRadialBlurParams()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7784);
		}

		static ::System::Int32* StaticGet_MainTex1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7788);
		}

		static ::System::Int32* StaticGet_BlinkDist()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x778C);
		}

		static ::System::Int32* StaticGet_HashIDShoSegmentA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7790);
		}

		static ::System::Int32* StaticGet__WindSpeed()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7794);
		}

		static ::System::Int32* StaticGet__MK_BleedColor0()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7798);
		}

		static ::System::Int32* StaticGet_PosY()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x779C);
		}

		static ::System::Int32* StaticGet__CloudMaskScale()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77A0);
		}

		static ::System::Int32* StaticGet_CenterY()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77A4);
		}

		static ::System::Int32* StaticGet__CloudSDF2()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77A8);
		}

		static ::System::Int32* StaticGet__MaskTex1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77AC);
		}

		static ::System::Int32* StaticGet_HashIDCustomToneCurve()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77B0);
		}

		static ::System::Int32* StaticGet_HDRHeadroom()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77B4);
		}

		static ::System::Int32* StaticGet_BloomAtlasGaussTaps()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77B8);
		}

		static ::System::Int32* StaticGet__ShadowBias()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77BC);
		}

		static ::System::Int32* StaticGet_ColorGradualLineNormal()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77C0);
		}

		static ::System::Int32* StaticGet_SpeedLineRotation()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77C4);
		}

		static ::System::Int32* StaticGet_StencilBlitSrcAlpha()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77C8);
		}

		static ::System::Int32* StaticGet_ColorGradingMaskTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77CC);
		}

		static ::System::Int32* StaticGet_DistrotionTexture()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77D0);
		}

		static ::System::Int32* StaticGet__CullMode()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77D4);
		}

		static ::System::Int32* StaticGet__PPPattern_Color1()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77D8);
		}

		static ::System::Int32* StaticGet_LensFlareAlphaScale()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77DC);
		}

		static ::System::Int32* StaticGet_MainTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77E0);
		}

		static ::System::Int32* StaticGet_LightenIntensity()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77E4);
		}

		static ::System::Int32* StaticGet_BlinkReverse()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77E8);
		}

		static ::System::Int32* StaticGet_OutlineScale()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77EC);
		}

		static ::System::Int32* StaticGet_SpeedLineColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77F0);
		}

		static ::System::Int32* StaticGet_AdditionalColorGradualParams()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77F4);
		}

		static ::System::Int32* StaticGet__MaskTex2()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77F8);
		}

		static ::System::Int32* StaticGet_EnableHDRTonemapping()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x77FC);
		}

		static ::System::Int32* StaticGet_DirectionalBlurParams()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7800);
		}

		static ::System::Int32* StaticGet_LensFlareRotationStart()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7804);
		}

		static ::System::Int32* StaticGet__SDFAdd2()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7808);
		}

		static ::System::Int32* StaticGet_worldSpaceCameraPos()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x780C);
		}

		static ::System::Int32* StaticGet__RainDropCount()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7810);
		}

		static ::System::Int32* StaticGet__FrameColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7814);
		}

		static ::System::Int32* StaticGet_cameraToWorldMatrix()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7818);
		}

		static ::System::Int32* StaticGet_HashIDLevelColor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x781C);
		}

		static ::System::Int32* StaticGet_Output_Sum2()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7820);
		}

		static ::System::Int32* StaticGet_NoiseBlendScale()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7824);
		}

		static ::System::Int32* StaticGet_viewMatrix()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7828);
		}

		static ::System::Int32* StaticGet_BlitHiQualityPass()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x782C);
		}

		static ::System::Int32* StaticGet_HashIDLevelHighTone()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7830);
		}

		static ::System::Int32* StaticGet_CocModelParameters()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7834);
		}

		static ::System::Int32* StaticGet_BlinkSpeedlineWidth()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7838);
		}

		static ::System::Int32* StaticGet_Output_Sum11()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x783C);
		}

		static ::System::Int32* StaticGet_Exposure()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7840);
		}

		static ::System::Int32* StaticGet_BloomB()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7844);
		}

		static ::System::Int32* StaticGet_ScanlineMultiple()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7848);
		}

		static ::System::Int32* StaticGet_LensFlareDepthBias()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x784C);
		}

		static ::System::Int32* StaticGet_LensFlareTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7850);
		}

		static ::System::Int32* StaticGet_EnableEffect0()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7854);
		}

		static ::System::Int32* StaticGet__DepthTex()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7858);
		}

		static ::System::Int32* StaticGet_HashIDColorContrastHighlight()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x785C);
		}

		static ::System::Int32* StaticGet_projectionMatrix()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7860);
		}

		static ::System::Int32* StaticGet__NoiseSeed2()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7864);
		}

		static ::System::Int32* StaticGet__MainTex_ST()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7868);
		}

		static ::System::Int32* StaticGet_BlinkSpeedlineRange()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x786C);
		}

		static ::System::Int32* StaticGet_BlinkDistortFreq()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7870);
		}

		static ::System::Int32* StaticGet_GaussianGradualMode()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7874);
		}

		static ::System::Int32* StaticGet__SDFScale2()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7878);
		}

		static ::System::Int32* StaticGet_LensFlareSampleRadius()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x787C);
		}

		static ::System::Int32* StaticGet_PolygonOffsetFactor()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7880);
		}

		static ::System::Int32* StaticGet_CocGeneralParams()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7884);
		}

		static ::System::Int32* StaticGet_worldToCameraMatrix()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7888);
		}

		static ::System::Int32* StaticGet_ACES_C()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x788C);
		}

		static ::System::Int32* StaticGet_MaxBlurRadius()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7890);
		}

		static ::System::Int32* StaticGet__LightedSpeed()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7894);
		}

		static ::System::Int32* StaticGet_GaussTaps()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x7898);
		}

		static ::System::Int32* StaticGet_MaxRange()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x789C);
		}

		static ::System::Int32* StaticGet_SampleOffset()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x78A0);
		}

		static ::System::Int32* StaticGet__NoiseAnimSpeed()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x78A4);
		}

		static ::System::Int32* StaticGet__VigST()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x78A8);
		}

		static ::System::Int32* StaticGet_PolaroidScale()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x78AC);
		}

		static ::System::Int32* StaticGet_SpeedLineSpeed()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x78B0);
		}

		static ::System::Int32* StaticGet__CloudHeightmap()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x78B4);
		}

		static ::System::Int32* StaticGet_ACES_B()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "ShaderIDs")->GetStaticField(0x78B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERIDS_CCTOR_OFFSET))();
		}

	};
}
