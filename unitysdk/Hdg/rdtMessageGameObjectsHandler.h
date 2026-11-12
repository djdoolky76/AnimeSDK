#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Hdg { class RemoteDebugServer; }
namespace Hdg { class rdtTcpMessage; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ADDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xB5A1790)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_CTOR_OFFSET UNITYSDK_OFFSET(0xB58E340)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_FINDCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB59CDB0)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_FINDGAMEOBJECT_1_OFFSET UNITYSDK_OFFSET(0xB5A1AA0)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_FINDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xB59C5F0)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONDELETEGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0xB59F040)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONREQUESTGAMEOBJECTCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xB59F170)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONREQUESTGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0xB5A1150)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONSETARRAYSIZE_OFFSET UNITYSDK_OFFSET(0xB59E2B0)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONUPDATECOMPONENTPROPERTIES_OFFSET UNITYSDK_OFFSET(0xB59C8B0)
#define HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONUPDATEGAMEOBJECTPROPERTIES_OFFSET UNITYSDK_OFFSET(0xB59C4C0)

namespace Hdg
{
	inline static constexpr unsigned int rdtMessageGameObjectsHandler_TypeDefinitionIndex = 47980;

	class rdtMessageGameObjectsHandler : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* m_allGobs; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Component*>* m_unityComponents; // 0x18
		::Hdg::RemoteDebugServer* m_server; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* m_gameObjects; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* m_components; // 0x30
		::System::Boolean m_dontDestroyOnLoadBadObject; // 0x38
		::System::Void _ctor(::Hdg::RemoteDebugServer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::RemoteDebugServer*))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_CTOR_OFFSET))(this, a1);
		}

		::System::Void OnUpdateGameObjectProperties(::Hdg::rdtTcpMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::rdtTcpMessage*))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONUPDATEGAMEOBJECTPROPERTIES_OFFSET))(this, a1);
		}

		::System::Void OnUpdateComponentProperties(::Hdg::rdtTcpMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::rdtTcpMessage*))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONUPDATECOMPONENTPROPERTIES_OFFSET))(this, a1);
		}

		::System::Void OnSetArraySize(::Hdg::rdtTcpMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::rdtTcpMessage*))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONSETARRAYSIZE_OFFSET))(this, a1);
		}

		::System::Void OnDeleteGameObjects(::Hdg::rdtTcpMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::rdtTcpMessage*))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONDELETEGAMEOBJECTS_OFFSET))(this, a1);
		}

		::System::Void OnRequestGameObjectComponents(::Hdg::rdtTcpMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::rdtTcpMessage*))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONREQUESTGAMEOBJECTCOMPONENTS_OFFSET))(this, a1);
		}

		::System::Void OnRequestGameObjects(::Hdg::rdtTcpMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::rdtTcpMessage*))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ONREQUESTGAMEOBJECTS_OFFSET))(this, a1);
		}

		::System::Void AddGameObject(::UnityEngine::GameObject* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_ADDGAMEOBJECT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* FindGameObject(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_FINDGAMEOBJECT_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* FindGameObject_1(::System::Int32 a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_FINDGAMEOBJECT_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Component* FindComponent(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Component*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + HDG_RDTMESSAGEGAMEOBJECTSHANDLER_FINDCOMPONENT_OFFSET))(this, a1, a2);
		}

	};
}
