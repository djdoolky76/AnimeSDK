#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering::Universal::Internal { class DecalProjector; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COMBINEDDECALPROJECTOR_OFFPREVIEWCOMBINE_OFFSET UNITYSDK_OFFSET(0x1CED1DC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COMBINEDDECALPROJECTOR_OFFPREVIEW_OFFSET UNITYSDK_OFFSET(0x1CED1CD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COMBINEDDECALPROJECTOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CED1BB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COMBINEDDECALPROJECTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CED1A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COMBINEDDECALPROJECTOR_PREVIEWBAKE_OFFSET UNITYSDK_OFFSET(0x1CED1C50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COMBINEDDECALPROJECTOR_PREVIEWCOMBINE_OFFSET UNITYSDK_OFFSET(0x1CED1D50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COMBINEDDECALPROJECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED1E30)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int CombinedDecalProjector_TypeDefinitionIndex = 27241;

	class CombinedDecalProjector : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rendering::Universal::Internal::DecalProjector* baseDecalProjector; // 0x18
		::System::Boolean isCombinedQuadDecal; // 0x20
		::System::Byte _padding0[0x7];
		::UnityEngine::Material* m_CachedMaterial; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COMBINEDDECALPROJECTOR__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COMBINEDDECALPROJECTOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COMBINEDDECALPROJECTOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void PreviewBake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COMBINEDDECALPROJECTOR_PREVIEWBAKE_OFFSET))(this);
		}

		::System::Void OffPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COMBINEDDECALPROJECTOR_OFFPREVIEW_OFFSET))(this);
		}

		::System::Void PreviewCombine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COMBINEDDECALPROJECTOR_PREVIEWCOMBINE_OFFSET))(this);
		}

		::System::Void OffPreviewCombine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_COMBINEDDECALPROJECTOR_OFFPREVIEWCOMBINE_OFFSET))(this);
		}
	};
}
