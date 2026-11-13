#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ComputeShaderAsset.h"
#include "unitysdk/UnityEngine/AstraFXRenderItem.h"
#include "unitysdk/UnityEngine/AstraFXResource.h"
namespace System { class String; }
namespace UnityEngine { class AstraFXAsset; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_ASTRAFXASSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9C5290)
#define UNITYENGINE_ASTRAFXASSET_FINDMESHINDEXBYNAME_OFFSET UNITYSDK_OFFSET(0x1F9C5350)
#define UNITYENGINE_ASTRAFXASSET_FINDPASSINDEXBYNAME_OFFSET UNITYSDK_OFFSET(0x1F9C5360)
#define UNITYENGINE_ASTRAFXASSET_FINDRESOURCEINDEXBYNAME_OFFSET UNITYSDK_OFFSET(0x1F9C5330)
#define UNITYENGINE_ASTRAFXASSET_GETMESHATINDEX_OFFSET UNITYSDK_OFFSET(0x1F9C5340)
#define UNITYENGINE_ASTRAFXASSET_GETRESOURCEATINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F9C5320)
#define UNITYENGINE_ASTRAFXASSET_GETRESOURCEATINDEX_OFFSET UNITYSDK_OFFSET(0x1F9C52B0)
#define UNITYENGINE_ASTRAFXASSET_GET_NUMRESOURCES_OFFSET UNITYSDK_OFFSET(0x1F9C5280)
#define UNITYENGINE_ASTRAFXASSET_GET_RENDERITEMS_OFFSET UNITYSDK_OFFSET(0x1F9C5270)
#define UNITYENGINE_ASTRAFXASSET_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1F9C52A0)

namespace UnityEngine
{
	inline static constexpr unsigned int AstraFXAsset_TypeDefinitionIndex = 4092;

	class AstraFXAsset : public ::UnityEngine::ComputeShaderAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::AstraFXRenderItem>* get_renderItems()
		{
			return ((::Il2CppArray<::UnityEngine::AstraFXRenderItem>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_GET_RENDERITEMS_OFFSET))(this);
		}

		::System::Int32 get_numResources()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_GET_NUMRESOURCES_OFFSET))(this);
		}

		::UnityEngine::AstraFXResource GetResourceAtIndex(::System::Int32 a1)
		{
			return ((::UnityEngine::AstraFXResource(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_GETRESOURCEATINDEX_OFFSET))(this, a1);
		}

		::System::Int32 FindResourceIndexByName(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_FINDRESOURCEINDEXBYNAME_OFFSET))(this, a1);
		}

		::UnityEngine::Mesh* GetMeshAtIndex(::System::Int32 a1)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_GETMESHATINDEX_OFFSET))(this, a1);
		}

		::System::Int32 FindMeshIndexByName(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_FINDMESHINDEXBYNAME_OFFSET))(this, a1);
		}

		::System::Int32 FindPassIndexByName(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_FINDPASSINDEXBYNAME_OFFSET))(this, a1);
		}

		static ::System::Void Internal_Create(::UnityEngine::AstraFXAsset* a1)
		{
			return ((::System::Void(*)(::UnityEngine::AstraFXAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_INTERNAL_CREATE_OFFSET))(a1);
		}

		::System::Void GetResourceAtIndex_Injected(::System::Int32 a1, ::UnityEngine::AstraFXResource a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AstraFXResource))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_GETRESOURCEATINDEX_INJECTED_OFFSET))(this, a1, a2);
		}

	};
}
