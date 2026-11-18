#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Renderer.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_MESHRENDERER_DONTSTRIPMESHRENDERER_OFFSET UNITYSDK_OFFSET(0x1F0D6460)
#define UNITYENGINE_MESHRENDERER_GET_ADDITIONALVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1F0D6470)
#define UNITYENGINE_MESHRENDERER_GET_BOUNDSSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0D6510)
#define UNITYENGINE_MESHRENDERER_GET_BOUNDSSCALE_OFFSET UNITYSDK_OFFSET(0x1F0D64C0)
#define UNITYENGINE_MESHRENDERER_GET_SORTINGFUDGE_OFFSET UNITYSDK_OFFSET(0x1F0D64A0)
#define UNITYENGINE_MESHRENDERER_GET_SUBMESHSTARTINDEX_OFFSET UNITYSDK_OFFSET(0x1F0D6490)
#define UNITYENGINE_MESHRENDERER_RESETVISIBLEEFFECTPREFABSQUERY_OFFSET UNITYSDK_OFFSET(0x1F0D6540)
#define UNITYENGINE_MESHRENDERER_SET_ADDITIONALVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1F0D6480)
#define UNITYENGINE_MESHRENDERER_SET_BOUNDSSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F0D6530)
#define UNITYENGINE_MESHRENDERER_SET_BOUNDSSCALE_OFFSET UNITYSDK_OFFSET(0x1F0D6520)
#define UNITYENGINE_MESHRENDERER_SET_SORTINGFUDGE_OFFSET UNITYSDK_OFFSET(0x1F0D64B0)
#define UNITYENGINE_MESHRENDERER_VISIBLEEFFECTPREFABSQUERY_OFFSET UNITYSDK_OFFSET(0x1F0D6550)
#define UNITYENGINE_MESHRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0D6560)

namespace UnityEngine
{
	inline static constexpr unsigned int MeshRenderer_TypeDefinitionIndex = 5257;

	class MeshRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void DontStripMeshRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_DONTSTRIPMESHRENDERER_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_additionalVertexStreams()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_GET_ADDITIONALVERTEXSTREAMS_OFFSET))(this);
		}

		::System::Void set_additionalVertexStreams(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_SET_ADDITIONALVERTEXSTREAMS_OFFSET))(this, value);
		}

		::System::Int32 get_subMeshStartIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_GET_SUBMESHSTARTINDEX_OFFSET))(this);
		}

		::System::Single get_sortingFudge()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_GET_SORTINGFUDGE_OFFSET))(this);
		}

		::System::Void set_sortingFudge(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_SET_SORTINGFUDGE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_boundsScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_GET_BOUNDSSCALE_OFFSET))(this);
		}

		::System::Void set_boundsScale(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_SET_BOUNDSSCALE_OFFSET))(this, value);
		}

		static ::System::Void ResetVisibleEffectPrefabsQuery()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_RESETVISIBLEEFFECTPREFABSQUERY_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* VisibleEffectPrefabsQuery()
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_VISIBLEEFFECTPREFABSQUERY_OFFSET))();
		}

		::System::Void get_boundsScale_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_GET_BOUNDSSCALE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_boundsScale_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_SET_BOUNDSSCALE_INJECTED_OFFSET))(this, value);
		}
	};
}
