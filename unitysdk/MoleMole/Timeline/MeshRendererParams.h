#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RayTracingMode.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"
#include "unitysdk/UnityEngine/SkinQuality.h"

namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define MOLEMOLE_TIMELINE_MESHRENDERERPARAMS_LAYERMASHSELECT_OFFSET UNITYSDK_OFFSET(0x1FF31070)
#define MOLEMOLE_TIMELINE_MESHRENDERERPARAMS_LAYERSELECT_OFFSET UNITYSDK_OFFSET(0x1FF30F50)
#define MOLEMOLE_TIMELINE_MESHRENDERERPARAMS_SETSKINNEDMESHRENDERER_OFFSET UNITYSDK_OFFSET(0x1FF316E0)
#define MOLEMOLE_TIMELINE_MESHRENDERERPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF31460)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MeshRendererParams_TypeDefinitionIndex = 32299;

	class MeshRendererParams : public ::System::Object
	{
	public:
		::UnityEngine::SkinQuality quality; // 0x10
		::System::Boolean updateWhenOffscreen; // 0x14
		::System::Byte _padding0[0x3];
		::UnityEngine::Rendering::ShadowCastingMode castShadows; // 0x18
		::System::Boolean highShadingRate; // 0x1C
		::System::Boolean skinnedMotionVectors; // 0x1D
		::System::Boolean allowOcclusionWhenDynamic; // 0x1E
		::System::Byte _padding1[0x1];
		::System::Collections::Generic::List_1<::System::Int32>* renderingLayers; // 0x20
		::UnityEngine::Experimental::Rendering::RayTracingMode rayTracingMode; // 0x28
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* rayTracingLayerMasks; // 0x30

		::System::Void _ctor(::UnityEngine::SkinnedMeshRenderer* meshRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHRENDERERPARAMS__CTOR_OFFSET))(this, meshRenderer);
		}

		::System::Collections::IEnumerable* LayerSelect()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHRENDERERPARAMS_LAYERSELECT_OFFSET))(this);
		}

		::System::Collections::IEnumerable* LayerMashSelect()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHRENDERERPARAMS_LAYERMASHSELECT_OFFSET))(this);
		}

		::System::Void SetSkinnedMeshRenderer(::UnityEngine::SkinnedMeshRenderer* meshRenderer, ::System::Boolean isAuthoredApply)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MESHRENDERERPARAMS_SETSKINNEDMESHRENDERER_OFFSET))(this, meshRenderer, isAuthoredApply);
		}
	};
}
