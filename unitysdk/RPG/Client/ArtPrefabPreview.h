#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_ARTPREFABPREVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xC69A270)
#define RPG_CLIENT_ARTPREFABPREVIEW_GET_MESHLOD_OFFSET UNITYSDK_OFFSET(0xC699C30)
#define RPG_CLIENT_ARTPREFABPREVIEW_LOADMESH_OFFSET UNITYSDK_OFFSET(0xC699F50)
#define RPG_CLIENT_ARTPREFABPREVIEW_MJEGHECJDHO_OFFSET UNITYSDK_OFFSET(0xC699E90)
#define RPG_CLIENT_ARTPREFABPREVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC699C50)
#define RPG_CLIENT_ARTPREFABPREVIEW_SET_MESHLOD_OFFSET UNITYSDK_OFFSET(0xC699C40)
#define RPG_CLIENT_ARTPREFABPREVIEW_UNLOADMESH_OFFSET UNITYSDK_OFFSET(0xC699CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ArtPrefabPreview_TypeDefinitionIndex = 68357;

	class ArtPrefabPreview : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::String*>* MaterialVariantKeys; // 0x18
		::Il2CppArray<::System::Object*>* MeshParts; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* IGKKDEPNHIJ; // 0x28
		::System::Int32 _MeshLod_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTPREFABPREVIEW_CTOR_OFFSET))(this);
		}

		::System::Int32 get_MeshLod()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTPREFABPREVIEW_GET_MESHLOD_OFFSET))(this);
		}

		::System::Void set_MeshLod(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTPREFABPREVIEW_SET_MESHLOD_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTPREFABPREVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void UnloadMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTPREFABPREVIEW_UNLOADMESH_OFFSET))(this);
		}

		::System::Void MJEGHECJDHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTPREFABPREVIEW_MJEGHECJDHO_OFFSET))(this);
		}

		::System::Boolean LoadMesh(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTPREFABPREVIEW_LOADMESH_OFFSET))(this, a1);
		}

	};
}
