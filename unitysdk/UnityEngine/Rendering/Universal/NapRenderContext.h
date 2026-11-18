#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ForwardRenderer_ReadonlyRenderState.h"
#include "unitysdk/UnityEngine/Rendering/Universal/IgnoreSource.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_CLEARPERCAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1CA69D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_DIDDLSSPRODUCEHUDLESSTHISFRAME_OFFSET UNITYSDK_OFFSET(0x1CA69AB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_DIDFSRPRODUCEHUDLESSTHISFRAME_OFFSET UNITYSDK_OFFSET(0x1CA69B00)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_DIDXESSPRODUCEHUDLESSTHISFRAME_OFFSET UNITYSDK_OFFSET(0x1CA69B50)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_GET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x1CA69710)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1CA69A40)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_HOLDFRAMEGEN_OFFSET UNITYSDK_OFFSET(0x1CA69CF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_ISFRAMEGENHELD_OFFSET UNITYSDK_OFFSET(0x1CA69D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_MARKOFFSCREENUICLEARED_OFFSET UNITYSDK_OFFSET(0x1CA69CA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_MARKUISAMPLESSCENECOLOR_OFFSET UNITYSDK_OFFSET(0x1CA69BA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_NEEDSOFFSCREENUICLEAR_OFFSET UNITYSDK_OFFSET(0x1CA69C50)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_RESETSTATICSTATE_OFFSET UNITYSDK_OFFSET(0x1CA698A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SETIGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x1CA69720)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_DECALHEIGHTMAPDISABLE_OFFSET UNITYSDK_OFFSET(0x1CA69E80)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_INDIRECTSPECULARINTENSITY_OFFSET UNITYSDK_OFFSET(0x1CA63C30)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_TEMPENABLEOPAQUEOBJECTSCENELUT_OFFSET UNITYSDK_OFFSET(0x1CA69E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x1CA69AA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_UISAMPLESSCENECOLORTHISFRAME_OFFSET UNITYSDK_OFFSET(0x1CA69BF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA69FE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA69EE0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapRenderContext_TypeDefinitionIndex = 26641;

	class NapRenderContext : public ::System::Object
	{
	public:
		static ::UnityEngine::Camera** StaticGet_s_CachedCameraMain()
		{
			return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x22D70);
		}
		static ::UnityEngine::Rendering::Universal::NapRenderContext** StaticGet_instance()
		{
			return (::UnityEngine::Rendering::Universal::NapRenderContext**)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x22D78);
		}
		static ::System::Single* StaticGet_s_CloudShadowIntensityMultiplier()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52C0);
		}
		static ::System::Boolean* StaticGet_s_IsInBattle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52C4);
		}
		static ::System::Boolean* StaticGet_useFastPureUIPipeline()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52C5);
		}
		static ::System::Boolean* StaticGet_s_UseChessboard3DUIMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52C6);
		}
		static ::UnityEngine::Rendering::Universal::ForwardRenderer_ReadonlyRenderState* StaticGet_s_CachedForwardRendererState()
		{
			return (::UnityEngine::Rendering::Universal::ForwardRenderer_ReadonlyRenderState*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52C8);
		}
		static ::System::Boolean* StaticGet_s_ReleaseUnUsedLightMapAndCubeData()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52E8);
		}
		static ::System::Boolean* StaticGet_s_PerCameraStateSpineOutlineMaskOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52E9);
		}
		static ::System::Boolean* StaticGet_s_ForceDisableVFX_VOLUMETRIC_SHADOW()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52EA);
		}
		static ::System::Boolean* StaticGet_s_PerCameraState_FxCharacterGhostFullScreenBlitOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52EB);
		}
		static ::System::Boolean* StaticGet_s_IsInGacha()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52EC);
		}
		static ::System::Boolean* StaticGet_s_IsChessboardScene()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52ED);
		}
		static ::System::Boolean* StaticGet_s_IsInBlackCanvas()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52EE);
		}
		static ::System::Boolean* StaticGet_s_IsInGalgame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52EF);
		}
		static ::System::Boolean* StaticGet_s_DisableMotionVectorMaskForTAAOnMobile()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52F0);
		}
		static ::System::Boolean* StaticGet_s_PerCameraState_CharacterIgnisFatuusOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52F1);
		}
		static ::System::Boolean* StaticGet_s_ForceDisableCubeMapArray()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52F2);
		}
		static ::System::Boolean* StaticGet_s_ForceDisableKodama()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52F3);
		}
		static ::UnityEngine::Vector4* StaticGet_s_NapAvatarPosVector()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(NapRenderContext_TypeDefinitionIndex)->GetStaticField(0x52F4);
		}
		// static const ::System::Boolean IsCGProject = 0x0; // 0x0
		// static const ::System::Int32 kFrameGenHoldFrames = 0x1; // 0x0
		// static const ::UnityEngine::Rendering::Universal::SimulatingPlatform Platform = 0x1; // 0x0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::IgnoreSource, ::System::Int32>* _IgnoreTimeScaleCounters; // 0x10
		::System::Int32 frameGenHoldUntilFrame; // 0x18
		::System::Int32 _IgnoreTimeScaleTotal; // 0x1C
		::System::Int32 dlssHudlessProducedFrame; // 0x20
		::UnityEngine::Vector4 global_unity_SHBg; // 0x24
		::UnityEngine::Vector4 global_unity_SHBr; // 0x34
		::System::Int32 uiSceneColorSamplerCounter; // 0x44
		::System::Int32 uiSceneColorFrame; // 0x48
		::UnityEngine::Vector4 global_unity_SHC; // 0x4C
		::UnityEngine::Vector3 mainCharacterPos; // 0x5C
		::UnityEngine::Vector4 global_unity_SHBb; // 0x68
		::System::Int32 offScreenUIClearedFrame; // 0x78
		::UnityEngine::Vector4 global_unity_SHAr; // 0x7C
		::UnityEngine::Vector4 global_unity_SHAb; // 0x8C
		::System::Int32 xessHudlessProducedFrame; // 0x9C
		::System::Single uiBlurRadius; // 0xA0
		::UnityEngine::Vector4 sceneEffectParams; // 0xA4
		::System::Int32 suppressFrameGenCounter; // 0xB4
		::UnityEngine::Vector4 avatarMainLightPosition; // 0xB8
		::System::UInt32 uiBlurCounter; // 0xC8
		::System::Int32 fsrHudlessProducedFrame; // 0xCC
		::System::Single globalSpecialDamageTextureAlpha; // 0xD0
		::System::Single _TimeScale; // 0xD4
		::UnityEngine::Vector4 global_unity_SHAg; // 0xD8
		::System::Boolean disableTaau; // 0xE8
		::System::Boolean muteCharacterLightTonemap; // 0xE9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT__CCTOR_OFFSET))();
		}

		::System::Boolean get_ignoreTimeScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_GET_IGNORETIMESCALE_OFFSET))(this);
		}

		::System::Void SetIgnoreTimeScale(::UnityEngine::Rendering::Universal::IgnoreSource source, ::System::Boolean ignore)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::IgnoreSource, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SETIGNORETIMESCALE_OFFSET))(this, source, ignore);
		}

		static ::System::Void ResetStaticState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_RESETSTATICSTATE_OFFSET))();
		}

		::System::Single get_timeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void set_timeScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_TIMESCALE_OFFSET))(this, value);
		}

		::System::Boolean DidDlssProduceHudlessThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_DIDDLSSPRODUCEHUDLESSTHISFRAME_OFFSET))(this);
		}

		::System::Boolean DidFsrProduceHudlessThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_DIDFSRPRODUCEHUDLESSTHISFRAME_OFFSET))(this);
		}

		::System::Boolean DidXessProduceHudlessThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_DIDXESSPRODUCEHUDLESSTHISFRAME_OFFSET))(this);
		}

		::System::Void MarkUiSamplesSceneColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_MARKUISAMPLESSCENECOLOR_OFFSET))(this);
		}

		::System::Boolean UiSamplesSceneColorThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_UISAMPLESSCENECOLORTHISFRAME_OFFSET))(this);
		}

		::System::Boolean NeedsOffScreenUIClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_NEEDSOFFSCREENUICLEAR_OFFSET))(this);
		}

		::System::Void MarkOffScreenUICleared()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_MARKOFFSCREENUICLEARED_OFFSET))(this);
		}

		::System::Void HoldFrameGen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_HOLDFRAMEGEN_OFFSET))(this);
		}

		::System::Boolean IsFrameGenHeld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_ISFRAMEGENHELD_OFFSET))(this);
		}

		static ::System::Void ClearPerCameraState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_CLEARPERCAMERASTATE_OFFSET))();
		}

		::System::Void set_indirectSpecularIntensity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_INDIRECTSPECULARINTENSITY_OFFSET))(this, value);
		}

		::System::Void set_tempEnableOpaqueObjectSceneLut(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_TEMPENABLEOPAQUEOBJECTSCENELUT_OFFSET))(this, value);
		}

		::System::Void set_decalHeightMapDisable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPRENDERCONTEXT_SET_DECALHEIGHTMAPDISABLE_OFFSET))(this, value);
		}
	};
}
