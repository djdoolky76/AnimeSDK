#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class AIBOPLOBAFN;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PREFABCACHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x19BE3CF0)
#define RPG_CLIENT_PREFABCACHE_CTOR_OFFSET UNITYSDK_OFFSET(0x19BE3CE0)
#define RPG_CLIENT_PREFABCACHE_GETPOOL_OFFSET UNITYSDK_OFFSET(0x19BE3710)
#define RPG_CLIENT_PREFABCACHE_GET_MPREFAB_OFFSET UNITYSDK_OFFSET(0x19BE3580)
#define RPG_CLIENT_PREFABCACHE_LDNMLDJEOHG_OFFSET UNITYSDK_OFFSET(0x19BE3610)
#define RPG_CLIENT_PREFABCACHE_PREFABDESPAWNCHECK_OFFSET UNITYSDK_OFFSET(0x19BE3AC0)
#define RPG_CLIENT_PREFABCACHE_SET_MPREFAB_OFFSET UNITYSDK_OFFSET(0x19BE35C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PrefabCache_TypeDefinitionIndex = 74710;

	class PrefabCache : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* mPrefabPath; // 0x18
		::UnityEngine::GameObject* OIBJBILPJHB; // 0x20
		static ::System::Boolean* StaticGet_PrefabCacheEnable()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "PrefabCache")->GetStaticField(0x11650);
		}

		static ::System::Boolean* StaticGet_PrefabCacheCheckEnable()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "PrefabCache")->GetStaticField(0x11651);
		}

		// static const ::System::String* JMFOAIMENHE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABCACHE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABCACHE_CCTOR_OFFSET))();
		}

		::UnityEngine::GameObject* get_mPrefab()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABCACHE_GET_MPREFAB_OFFSET))(this);
		}

		::System::Void set_mPrefab(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABCACHE_SET_MPREFAB_OFFSET))(this, a1);
		}

		::System::Boolean LDNMLDJEOHG(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABCACHE_LDNMLDJEOHG_OFFSET))(this, a1, a2);
		}

		::AIBOPLOBAFN* GetPool(::System::String* a1)
		{
			return ((::AIBOPLOBAFN*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABCACHE_GETPOOL_OFFSET))(this, a1);
		}

		::System::Boolean PrefabDespawnCheck(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABCACHE_PREFABDESPAWNCHECK_OFFSET))(this, a1, a2);
		}

	};
}
