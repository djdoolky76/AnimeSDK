#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace B2F70F41B9C3250D { class B063E2D7E3479104; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class PersistentCall; }
namespace UnityEngine::Events { class UnityEventBase; }

#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x4151200)
#define UNITYENGINE_EVENTS_PERSISTENTCALLGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x4151450)

namespace UnityEngine::Events
{
	inline static constexpr unsigned int PersistentCallGroup_TypeDefinitionIndex = 17367;

	class PersistentCallGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Events::PersistentCall*>* m_Calls; // 0x10

		::System::Void Initialize(::B2F70F41B9C3250D::B063E2D7E3479104* E1C692BBF838DA35, ::UnityEngine::Events::UnityEventBase* FF840F098B9001D6)
		{
			return ((::System::Void(*)(::PVOID, ::B2F70F41B9C3250D::B063E2D7E3479104*, ::UnityEngine::Events::UnityEventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP_INITIALIZE_OFFSET))(this, E1C692BBF838DA35, FF840F098B9001D6);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTS_PERSISTENTCALLGROUP__CTOR_OFFSET))(this);
		}
	};
}
