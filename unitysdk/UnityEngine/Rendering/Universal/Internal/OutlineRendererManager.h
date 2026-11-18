#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/BattleOutlineRendererConfig.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/EOutlineRenderType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/OutlineRendererConfig.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ForwardRenderer_ReadonlyRenderState.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class IOutlineObjectRenderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_CHECKREQUIREBATTLEOUTLINEPASS_OFFSET UNITYSDK_OFFSET(0x1C87C900)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_CHECKREQUIREOUTLINEPASS_OFFSET UNITYSDK_OFFSET(0x1C84D780)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_DRAWBATTLEOUTLINERENDERERS_OFFSET UNITYSDK_OFFSET(0x1C87C390)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_DRAWOUTLINEOBJECTRENDERERS_OFFSET UNITYSDK_OFFSET(0x1C87BC10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_GETOUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x1C87A520)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1C855C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_REQUIRECAMERADEPTHFOROUTLINEOBJECTPASS_OFFSET UNITYSDK_OFFSET(0x1C87CA90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_RESETGLOBALOUTLINEPARAMS_OFFSET UNITYSDK_OFFSET(0x1C87BB70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETOUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x1C87A490)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETUPSCREENSPACEOUTLINEETHEREYE_OFFSET UNITYSDK_OFFSET(0x1C87B490)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETUPSCREENSPACEOUTLINENORMAL_OFFSET UNITYSDK_OFFSET(0x1C87A5A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETUPSCREENSPACEOUTLINE_OFFSET UNITYSDK_OFFSET(0x1C85A090)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_TRYBLITSCREENSPACEOUTLINE_OFFSET UNITYSDK_OFFSET(0x1C85D2A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1C856AB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C87CF50)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int OutlineRendererManager_TypeDefinitionIndex = 27335;

	class OutlineRendererManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::Internal::OutlineRendererConfig>*>** StaticGet_s_OutlineObjRendererMaterials()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::Internal::OutlineRendererConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x24AE0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::Internal::BattleOutlineRendererConfig>*>** StaticGet_s_BattleOutlineRendererMaterials()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::Internal::BattleOutlineRendererConfig>*>**)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x24AE8);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer*>** StaticGet_s_OutlineRenderers()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x24AF0);
		}
		static ::System::Single* StaticGet_s_OutlineThickness()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7670);
		}
		static ::System::Int32* StaticGet__OutlineParamsPartA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7674);
		}
		static ::System::Int32* StaticGet__BaseMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7678);
		}
		static ::System::Int32* StaticGet__OutlineTextureTiling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x767C);
		}
		static ::System::Int32* StaticGet__OutlineTextureOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7680);
		}
		static ::System::Single* StaticGet_s_InnerColorIntensity()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7684);
		}
		static ::System::Int32* StaticGet__WindParam2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7688);
		}
		static ::System::Int32* StaticGet__FadeAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x768C);
		}
		static ::System::Boolean* StaticGet_s_FillInner()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7690);
		}
		static ::System::Boolean* StaticGet_s_EnableFlicker()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7691);
		}
		static ::System::Boolean* StaticGet_s_OutlineFlicker()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7692);
		}
		static ::System::Boolean* StaticGet_s_DisableOutline()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7693);
		}
		static ::System::Boolean* StaticGet_s_RequireOutlineBlit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7694);
		}
		static ::System::Boolean* StaticGet_s_OccludedByDepth()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7695);
		}
		static ::System::Boolean* StaticGet_s_FillInnerBehindScene()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7696);
		}
		static ::System::Boolean* StaticGet_s_OccludedByCharacters()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7697);
		}
		static ::System::Single* StaticGet_s_FlickerSpeed()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x7698);
		}
		static ::System::Int32* StaticGet_s_UiCameraOutlineCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x769C);
		}
		static ::System::Int32* StaticGet__InnerColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x76A0);
		}
		static ::UnityEngine::Color* StaticGet_s_InnerColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x76A4);
		}
		static ::System::Int32* StaticGet__WindParam4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x76B4);
		}
		static ::System::Int32* StaticGet__IsAvatarUI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x76B8);
		}
		static ::System::Int32* StaticGet__Cutoff()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x76BC);
		}
		static ::System::Int32* StaticGet__OutlineTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x76C0);
		}
		static ::System::Int32* StaticGet__BaseColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x76C4);
		}
		static ::System::Int32* StaticGet__WindParam1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x76C8);
		}
		static ::UnityEngine::Rendering::Universal::Internal::EOutlineRenderType* StaticGet_s_LastActiveOutlineRenderType()
		{
			return (::UnityEngine::Rendering::Universal::Internal::EOutlineRenderType*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x76CC);
		}
		static ::System::Int32* StaticGet__WindParam3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererManager_TypeDefinitionIndex)->GetStaticField(0x76D0);
		}
		// static const ::System::String* kDepthOcclusionPerObjectKeyword; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void SetOutlineThickness(::System::Single thickness)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETOUTLINETHICKNESS_OFFSET))(thickness);
		}

		static ::System::Single GetOutlineThickness()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_GETOUTLINETHICKNESS_OFFSET))();
		}

		static ::System::Void Register(::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer* outlineObjectRenderer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_REGISTER_OFFSET))(outlineObjectRenderer);
		}

		static ::System::Void Unregister(::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer* outlineObjectRenderer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_UNREGISTER_OFFSET))(outlineObjectRenderer);
		}

		static ::System::Boolean CheckRequireOutlinePass(::UnityEngine::Rendering::Universal::ForwardRenderer_ReadonlyRenderState& renderState)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::Universal::ForwardRenderer_ReadonlyRenderState&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_CHECKREQUIREOUTLINEPASS_OFFSET))(renderState);
		}

		static ::System::Void SetupScreenSpaceOutline(::System::Boolean& outlineActive, ::System::Boolean& outlineBeforeTransparent)
		{
			return ((::System::Void(*)(::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETUPSCREENSPACEOUTLINE_OFFSET))(outlineActive, outlineBeforeTransparent);
		}

		static ::System::Void SetupScreenSpaceOutlineNormal(::System::Boolean& outlineActive, ::System::Boolean& outlineBeforeTransparent)
		{
			return ((::System::Void(*)(::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETUPSCREENSPACEOUTLINENORMAL_OFFSET))(outlineActive, outlineBeforeTransparent);
		}

		static ::System::Void SetupScreenSpaceOutlineEtherEye(::System::Boolean& outlineActive, ::System::Boolean& outlineBeforeTransparent)
		{
			return ((::System::Void(*)(::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_SETUPSCREENSPACEOUTLINEETHEREYE_OFFSET))(outlineActive, outlineBeforeTransparent);
		}

		static ::System::Void ResetGlobalOutlineParams()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_RESETGLOBALOUTLINEPARAMS_OFFSET))();
		}

		static ::System::Void DrawOutlineObjectRenderers(::System::Int32 cullingMask, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_DRAWOUTLINEOBJECTRENDERERS_OFFSET))(cullingMask, cmd);
		}

		static ::System::Void DrawBattleOutlineRenderers(::System::Int32 cullingMask, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_DRAWBATTLEOUTLINERENDERERS_OFFSET))(cullingMask, cmd);
		}

		static ::System::Boolean CheckRequireBattleOutlinePass()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_CHECKREQUIREBATTLEOUTLINEPASS_OFFSET))();
		}

		static ::System::Boolean RequireCameraDepthForOutlineObjectPass()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_REQUIRECAMERADEPTHFOROUTLINEOBJECTPASS_OFFSET))();
		}

		static ::System::Void TryBlitScreenSpaceOutline(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDERERMANAGER_TRYBLITSCREENSPACEOUTLINE_OFFSET))(cmd);
		}
	};
}
