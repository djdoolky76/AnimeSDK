#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WeakAssetReference.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DYNAMICPREFABLOADER_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xCD02D80)
#define RPG_CLIENT_DYNAMICPREFABLOADER_CTOR_OFFSET UNITYSDK_OFFSET(0xCD02E30)
#define RPG_CLIENT_DYNAMICPREFABLOADER_DGBNOCDMBIH_OFFSET UNITYSDK_OFFSET(0xCD02960)
#define RPG_CLIENT_DYNAMICPREFABLOADER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xCD02840)
#define RPG_CLIENT_DYNAMICPREFABLOADER_GET_MOUNTPOINT_OFFSET UNITYSDK_OFFSET(0xCD028D0)
#define RPG_CLIENT_DYNAMICPREFABLOADER_GET_PREFABREFERENCES_OFFSET UNITYSDK_OFFSET(0xCD02890)
#define RPG_CLIENT_DYNAMICPREFABLOADER_HOKJHAIOHPO_1_OFFSET UNITYSDK_OFFSET(0xCD02C40)
#define RPG_CLIENT_DYNAMICPREFABLOADER_HOKJHAIOHPO_OFFSET UNITYSDK_OFFSET(0xCD02BC0)
#define RPG_CLIENT_DYNAMICPREFABLOADER_KFEGGNMICEN_OFFSET UNITYSDK_OFFSET(0xCD02910)

namespace RPG::Client
{
	inline static constexpr unsigned int DynamicPrefabLoader_TypeDefinitionIndex = 72764;

	class DynamicPrefabLoader : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::WeakAssetReference>* _PrefabReferences; // 0x10
		::UnityEngine::Transform* _MountPoint; // 0x18
		::Il2CppArray<::UnityEngine::GameObject*>* _LoadedPrefabs; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPREFABLOADER_CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPREFABLOADER_GET_COUNT_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::WeakAssetReference>* get_PrefabReferences()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::WeakAssetReference>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPREFABLOADER_GET_PREFABREFERENCES_OFFSET))(this);
		}

		::UnityEngine::Transform* get_MountPoint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPREFABLOADER_GET_MOUNTPOINT_OFFSET))(this);
		}

		::System::Void KFEGGNMICEN(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPREFABLOADER_KFEGGNMICEN_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* DGBNOCDMBIH(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPREFABLOADER_DGBNOCDMBIH_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* HOKJHAIOHPO(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPREFABLOADER_HOKJHAIOHPO_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* HOKJHAIOHPO_1(::System::Int32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPREFABLOADER_HOKJHAIOHPO_1_OFFSET))(this, a1, a2);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DYNAMICPREFABLOADER_ABKBOGIGAEH_OFFSET))(this);
		}

	};
}
