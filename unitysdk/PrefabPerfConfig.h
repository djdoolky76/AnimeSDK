#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define PREFABPERFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C18C0)

inline static constexpr unsigned int PrefabPerfConfig_TypeDefinitionIndex = 48507;

	class PrefabPerfConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* PerfPrefabs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PREFABPERFCONFIG_CTOR_OFFSET))(this);
		}

	};
