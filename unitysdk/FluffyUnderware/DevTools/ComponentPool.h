#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneMode.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

namespace FluffyUnderware::DevTools { class PoolSettings; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL_CREATEOBJECT_OFFSET UNITYSDK_OFFSET(0x1ED52450)
#define FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL_GETITEMGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1ED52590)
#define FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1ED521E0)
#define FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1ED52240)
#define FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ED523C0)
#define FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1ED525D0)
#define FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1ED525C0)
#define FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL_ONSCENELOADED_OFFSET UNITYSDK_OFFSET(0x1ED525B0)
#define FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1ED521F0)
#define FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED52E60)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int ComponentPool_TypeDefinitionIndex = 28427;

	class ComponentPool
	{
	public:
		::System::String* m_Identifier; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL__CTOR_OFFSET))(this);
		}

		::System::String* get_Identifier()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL_SET_IDENTIFIER_OFFSET))(this, value);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL_GET_TYPE_OFFSET))(this);
		}

		::System::Void Initialize(::System::Type* type, ::FluffyUnderware::DevTools::PoolSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::FluffyUnderware::DevTools::PoolSettings*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL_INITIALIZE_OFFSET))(this, type, settings);
		}

		::UnityEngine::Component* CreateObject()
		{
			return ((::UnityEngine::Component*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL_CREATEOBJECT_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetItemGameObject(::UnityEngine::Component* item)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL_GETITEMGAMEOBJECT_OFFSET))(this, item);
		}

		::System::Void OnSceneLoaded(::UnityEngine::SceneManagement::Scene scn, ::UnityEngine::SceneManagement::LoadSceneMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL_ONSCENELOADED_OFFSET))(this, scn, mode);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_COMPONENTPOOL_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
