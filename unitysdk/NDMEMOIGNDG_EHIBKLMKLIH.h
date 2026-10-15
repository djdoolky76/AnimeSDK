#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDMEMOIGNDG_MAOEAMNMIBM;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define NDMEMOIGNDG_EHIBKLMKLIH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB50D30)
#define NDMEMOIGNDG_EHIBKLMKLIH_GET_CALLBACKS_OFFSET UNITYSDK_OFFSET(0xBB51050)
#define NDMEMOIGNDG_EHIBKLMKLIH_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xBB51040)
#define NDMEMOIGNDG_EHIBKLMKLIH_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0xBB51420)
#define NDMEMOIGNDG_EHIBKLMKLIH_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0xBB51060)
#define NDMEMOIGNDG_EHIBKLMKLIH_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0xBB51490)

inline static constexpr unsigned int NDMEMOIGNDG_EHIBKLMKLIH_TypeDefinitionIndex = 69268;

	class NDMEMOIGNDG_EHIBKLMKLIH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _Callbacks_k__BackingField; // 0x10
		::System::String* _PrefabPath_k__BackingField; // 0x18
		::System::Void _ctor(::System::String* a1, ::NDMEMOIGNDG_MAOEAMNMIBM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::NDMEMOIGNDG_MAOEAMNMIBM*))((::PBYTE)hIl2Cpp + NDMEMOIGNDG_EHIBKLMKLIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMEMOIGNDG_EHIBKLMKLIH_GET_PREFABPATH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_Callbacks()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMEMOIGNDG_EHIBKLMKLIH_GET_CALLBACKS_OFFSET))(this);
		}

		::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NDMEMOIGNDG_EHIBKLMKLIH_ONSPAWNASYNC_OFFSET))(this, a1);
		}

		::System::Void OnCancelSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMEMOIGNDG_EHIBKLMKLIH_ONCANCELSPAWN_OFFSET))(this);
		}

		::System::Boolean UseLightWeightDeactive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMEMOIGNDG_EHIBKLMKLIH_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

	};
