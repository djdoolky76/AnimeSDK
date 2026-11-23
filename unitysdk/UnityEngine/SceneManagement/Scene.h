#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_SCENEMANAGEMENT_SCENE_EQUALS_OFFSET UNITYSDK_OFFSET(0x413EDA0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x40E9E70)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETISLOADEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x413EE20)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETNAMEINTERNAL_OFFSET UNITYSDK_OFFSET(0x413EE60)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x413EEA0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTCOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0x413EEE0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTGAMEOBJECTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x413EF20)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x413EF60)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x40E9E70)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x413F270)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x413F2B0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_PATH_OFFSET UNITYSDK_OFFSET(0x413F2F0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_ROOTCOUNT_OFFSET UNITYSDK_OFFSET(0x413F330)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_ISVALIDINTERNAL_OFFSET UNITYSDK_OFFSET(0x413F1F0)
#define UNITYENGINE_SCENEMANAGEMENT_SCENE_ISVALID_OFFSET UNITYSDK_OFFSET(0x413F230)

namespace UnityEngine::SceneManagement
{
	inline static constexpr unsigned int Scene_TypeDefinitionIndex = 17148;

	struct alignas(4) Scene
	{
		::System::Int32 m_Handle; // 0x10

		static ::System::String* GetPathInternal(::System::Int32 B7E1CA01E54A5BA6)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETPATHINTERNAL_OFFSET))(B7E1CA01E54A5BA6);
		}

		::System::String* get_path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_PATH_OFFSET))(this);
		}

		static ::System::Boolean GetIsLoadedInternal(::System::Int32 B7E1CA01E54A5BA6)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETISLOADEDINTERNAL_OFFSET))(B7E1CA01E54A5BA6);
		}

		static ::System::Boolean IsValidInternal(::System::Int32 B7E1CA01E54A5BA6)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_ISVALIDINTERNAL_OFFSET))(B7E1CA01E54A5BA6);
		}

		::System::Void GetRootGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* A1D64C709CABA09F)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTGAMEOBJECTS_OFFSET))(this, A1D64C709CABA09F);
		}

		::System::Boolean Equals(::System::Object* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_EQUALS_OFFSET))(this, BEEE7A5A60941632);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_handle()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_HANDLE_OFFSET))(this);
		}

		static ::System::Void GetRootGameObjectsInternal(::System::Int32 B7E1CA01E54A5BA6, ::System::Object* AD800C979374E8D5)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTGAMEOBJECTSINTERNAL_OFFSET))(B7E1CA01E54A5BA6, AD800C979374E8D5);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_ISVALID_OFFSET))(this);
		}

		static ::System::String* GetNameInternal(::System::Int32 B7E1CA01E54A5BA6)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETNAMEINTERNAL_OFFSET))(B7E1CA01E54A5BA6);
		}

		::System::Boolean get_isLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_ISLOADED_OFFSET))(this);
		}

		::System::Int32 get_rootCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GET_ROOTCOUNT_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Int32 GetRootCountInternal(::System::Int32 B7E1CA01E54A5BA6)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SCENEMANAGEMENT_SCENE_GETROOTCOUNTINTERNAL_OFFSET))(B7E1CA01E54A5BA6);
		}
	};
}
