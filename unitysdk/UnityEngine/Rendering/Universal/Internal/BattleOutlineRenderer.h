#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/EOutlineRenderType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/BattleOutlineRendererConfig.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_GETOUTLINERENDERTYPE_OFFSET UNITYSDK_OFFSET(0x1C8553D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_HASPARTICLESMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C855D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C8562C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C855480)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_SETALPHA_OFFSET UNITYSDK_OFFSET(0x1C855410)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_START_OFFSET UNITYSDK_OFFSET(0x1C856120)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_TRYFRESHRENDERER_OFFSET UNITYSDK_OFFSET(0x1C857740)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_TRYINITMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C857B20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_TRYREFRESHSINGLERENDER_OFFSET UNITYSDK_OFFSET(0x1C857FA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C856B60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8584B0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int BattleOutlineRenderer_TypeDefinitionIndex = 27053;

	class BattleOutlineRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Gradient* OutlineColorGradient; // 0x18
		::System::Single OutlineColorIntensity; // 0x20
		::System::Single OutlineAnimLifetime; // 0x24
		::System::Single Alpha; // 0x28
		::System::Single OutlineThickness; // 0x2C
		::System::Boolean OccludedByDepth; // 0x30
		::System::Boolean OccludedByCharacters; // 0x31
		::System::Boolean UseLODGroup; // 0x32
		::System::Byte _padding0[0x5];
		::UnityEngine::Renderer* cachedRenderer; // 0x38
		::UnityEngine::Material* material; // 0x40
		::System::Boolean needInitMaterial; // 0x48
		::System::Byte _padding1[0x3];
		::System::Single timer; // 0x4C
		::System::Int32 layerMask; // 0x50
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* renderers; // 0x58
		::System::Boolean rendererNeedHizCulling; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::Internal::EOutlineRenderType GetOutlineRenderType()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::EOutlineRenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_GETOUTLINERENDERTYPE_OFFSET))(this);
		}

		::System::Void SetAlpha(::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_SETALPHA_OFFSET))(this, alpha);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_ONENABLE_OFFSET))(this);
		}

		static ::System::Boolean HasParticlesMaterial(::UnityEngine::Renderer* rend)
		{
			return ((::System::Boolean(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_HASPARTICLESMATERIAL_OFFSET))(rend);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void TryInitMaterial(::UnityEngine::Material* sourceMat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_TRYINITMATERIAL_OFFSET))(this, sourceMat);
		}

		::System::Void TryFreshRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_TRYFRESHRENDERER_OFFSET))(this);
		}

		::System::Void TryRefreshSingleRender(::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::Internal::BattleOutlineRendererConfig>* rendererMaterial, ::UnityEngine::Renderer* rend, ::System::Int32 passIndex, ::System::Boolean allowDrawWhenInvisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::UnityEngine::Rendering::Universal::Internal::BattleOutlineRendererConfig>*, ::UnityEngine::Renderer*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BATTLEOUTLINERENDERER_TRYREFRESHSINGLERENDER_OFFSET))(this, rendererMaterial, rend, passIndex, allowDrawWhenInvisible);
		}
	};
}
