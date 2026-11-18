#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/EOutlineRenderType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/OutlineRendererConfig.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_CLEARBOXCLIPBOUNDS_OFFSET UNITYSDK_OFFSET(0x108C8E90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ENABLECUSTOMOUTLINECOLOR_OFFSET UNITYSDK_OFFSET(0x108C8AD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GETOUTLINEPASS_OFFSET UNITYSDK_OFFSET(0x108C7A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GETOUTLINERENDERTYPE_OFFSET UNITYSDK_OFFSET(0x108C8ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GETRENDERERMESHNAME_OFFSET UNITYSDK_OFFSET(0x108C9440)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_DISABLEOUTLINE_OFFSET UNITYSDK_OFFSET(0x108C76F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_FILLINNERBEHINDSCENE_OFFSET UNITYSDK_OFFSET(0x108C77B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_FILLINNER_OFFSET UNITYSDK_OFFSET(0x108C7750)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_INNERCOLORINTENSITY_OFFSET UNITYSDK_OFFSET(0x108C7870)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_INNERCOLOR_OFFSET UNITYSDK_OFFSET(0x108C7810)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_OUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x108C7690)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x108C8F10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_MARKDESTROYED_OFFSET UNITYSDK_OFFSET(0x108C8F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x108C6C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x108C6320)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x108C75D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x108C7630)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x108C6CE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x108C63E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_REFRESHPEROBJECTDEPTHOCCLUSIONKEYWORD_OFFSET UNITYSDK_OFFSET(0x108C8BE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SETBOXCLIPBOUNDS_OFFSET UNITYSDK_OFFSET(0x108C8E10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SETCUSTOMOUTLINECOLOR_OFFSET UNITYSDK_OFFSET(0x108C8B20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SETOCCLUDEDBYDEPTHPEROBJECTANDREFRESH_OFFSET UNITYSDK_OFFSET(0x108C8B80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SETOUTLINEPEROBJECTANDREFRESH_OFFSET UNITYSDK_OFFSET(0x108C8DB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SHOULDSKIPOUTLINERENDERER_OFFSET UNITYSDK_OFFSET(0x108C9770)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_START_OFFSET UNITYSDK_OFFSET(0x108C78D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_TRYFRESHRENDERER_OFFSET UNITYSDK_OFFSET(0x108C8690)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_TRYINITMATERIAL_OFFSET UNITYSDK_OFFSET(0x1F91BB10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_TRYREFRESHSINGLERENDER_OFFSET UNITYSDK_OFFSET(0x108C8F90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x108C7AB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F91C100)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int OutlineObjectRenderer_TypeDefinitionIndex = 26913;

	class OutlineObjectRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* kSkipOutlineMeshNameToken; // 0x0
		::UnityEngine::Gradient* OutlineColorGradient; // 0x18
		::System::Single OutlineColorIntensity; // 0x20
		::System::Single OutlineAnimLifetime; // 0x24
		::System::Boolean OccludedByDepth; // 0x28
		::System::Boolean OutlinePerObject; // 0x29
		::System::Boolean OccludedByDepthPerObject; // 0x2A
		::System::Boolean OccludedByCharacters; // 0x2B
		::System::Boolean enableMultiOutline; // 0x2C
		::System::Boolean enableAvatarUI; // 0x2D
		::System::Boolean forceVisible; // 0x2E
		::System::Boolean outlineInUICamera; // 0x2F
		::System::Boolean UseLODGroup; // 0x30
		::System::Boolean useCustomColor; // 0x31
		::System::Byte _padding0[0x2];
		::UnityEngine::Color customColor; // 0x34
		::System::Byte _padding1[0x4];
		::UnityEngine::Renderer* renderer; // 0x48
		::UnityEngine::Material* material; // 0x50
		::System::Boolean needInitMaterial; // 0x58
		::System::Byte _padding2[0x3];
		::System::Single timer; // 0x5C
		::System::Int32 layerMask; // 0x60
		::System::Byte _padding3[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* renderers; // 0x68
		::System::Boolean rendererNeedHizCulling; // 0x70
		::System::Boolean isDestroyed; // 0x71
		::System::Boolean m_Is3DMap; // 0x72
		::System::Boolean m_EnableBoxClip; // 0x73
		::UnityEngine::Vector4 m_LayerCenterAndHeight; // 0x74
		::UnityEngine::Vector4 m_LayerSize; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Single get_OutlineThickness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_OUTLINETHICKNESS_OFFSET))(this);
		}

		static ::System::Boolean get_DisableOutline()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_DISABLEOUTLINE_OFFSET))();
		}

		static ::System::Boolean get_FillInner()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_FILLINNER_OFFSET))();
		}

		static ::System::Boolean get_FillInnerBehindScene()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_FILLINNERBEHINDSCENE_OFFSET))();
		}

		static ::UnityEngine::Color get_InnerColor()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_INNERCOLOR_OFFSET))();
		}

		static ::System::Single get_InnerColorIntensity()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GET_INNERCOLORINTENSITY_OFFSET))();
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONREALENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_START_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ONREALDISABLE_OFFSET))(this);
		}

		::System::Int32 GetOutlinePass()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GETOUTLINEPASS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void EnableCustomOutlineColor(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ENABLECUSTOMOUTLINECOLOR_OFFSET))(this, enable);
		}

		::System::Void SetCustomOutlineColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SETCUSTOMOUTLINECOLOR_OFFSET))(this, color);
		}

		::System::Void SetOccludedByDepthPerObjectAndRefresh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SETOCCLUDEDBYDEPTHPEROBJECTANDREFRESH_OFFSET))(this, value);
		}

		::System::Void SetOutlinePerObjectAndRefresh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SETOUTLINEPEROBJECTANDREFRESH_OFFSET))(this, value);
		}

		::System::Void RefreshPerObjectDepthOcclusionKeyword()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_REFRESHPEROBJECTDEPTHOCCLUSIONKEYWORD_OFFSET))(this);
		}

		::System::Void SetBoxClipBounds(::UnityEngine::Vector4 layerCenterAndHeight, ::UnityEngine::Vector4 layerSize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SETBOXCLIPBOUNDS_OFFSET))(this, layerCenterAndHeight, layerSize);
		}

		::System::Void ClearBoxClipBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_CLEARBOXCLIPBOUNDS_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::Internal::EOutlineRenderType GetOutlineRenderType()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::EOutlineRenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GETOUTLINERENDERTYPE_OFFSET))(this);
		}

		::System::Boolean IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_ISDESTROYED_OFFSET))(this);
		}

		::System::Void MarkDestroyed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_MARKDESTROYED_OFFSET))(this);
		}

		::System::Void TryFreshRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_TRYFRESHRENDERER_OFFSET))(this);
		}

		static ::System::String* GetRendererMeshName(::UnityEngine::Renderer* renderer)
		{
			return ((::System::String*(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_GETRENDERERMESHNAME_OFFSET))(renderer);
		}

		static ::System::Boolean ShouldSkipOutlineRenderer(::UnityEngine::Renderer* renderer)
		{
			return ((::System::Boolean(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_SHOULDSKIPOUTLINERENDERER_OFFSET))(renderer);
		}

		::System::Void TryRefreshSingleRender(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::Internal::OutlineRendererConfig>* rendererMaterial, ::UnityEngine::Renderer* rend, ::System::Int32 passIndex, ::System::Boolean allowDrawWhenInvisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::Internal::OutlineRendererConfig>*, ::UnityEngine::Renderer*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_TRYREFRESHSINGLERENDER_OFFSET))(this, rendererMaterial, rend, passIndex, allowDrawWhenInvisible);
		}

		::System::Void TryInitMaterial(::UnityEngine::Material* sourceMat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER_TRYINITMATERIAL_OFFSET))(this, sourceMat);
		}
	};
}
