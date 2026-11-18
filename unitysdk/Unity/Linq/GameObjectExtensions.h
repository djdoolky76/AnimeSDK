#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Linq/GameObjectExtensions_ChildrenEnumerable.h"

namespace UnityEngine { class GameObject; }

#define UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDREN_OFFSET UNITYSDK_OFFSET(0x20069010)
#define UNITY_LINQ_GAMEOBJECTEXTENSIONS_PARENT_OFFSET UNITYSDK_OFFSET(0x20068DD0)

namespace Unity::Linq
{
	inline static constexpr unsigned int GameObjectExtensions_TypeDefinitionIndex = 34879;

	class GameObjectExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::GameObject* Parent(::UnityEngine::GameObject* origin)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITY_LINQ_GAMEOBJECTEXTENSIONS_PARENT_OFFSET))(origin);
		}

		static ::Unity::Linq::GameObjectExtensions_ChildrenEnumerable Children(::UnityEngine::GameObject* origin)
		{
			return ((::Unity::Linq::GameObjectExtensions_ChildrenEnumerable(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITY_LINQ_GAMEOBJECTEXTENSIONS_CHILDREN_OFFSET))(origin);
		}
	};
}
