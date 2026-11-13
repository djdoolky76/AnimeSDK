#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Runtime::Remoting::Messaging { class IllogicalCallContext; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_CREATECOPY_OFFSET UNITYSDK_OFFSET(0x1A710400)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7109B0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_FREENAMEDDATASLOT_OFFSET UNITYSDK_OFFSET(0x1A70BFF0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_DATASTORE_OFFSET UNITYSDK_OFFSET(0x1A7102E0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_HASUSERDATA_OFFSET UNITYSDK_OFFSET(0x1A710370)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_HOSTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A710350)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_SET_HOSTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A710360)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int IllogicalCallContext_TypeDefinitionIndex = 1291;

	class IllogicalCallContext : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* m_Datastore; // 0x10
		::System::Object* m_HostContext; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_CTOR_OFFSET))(this);
		}

		::System::Collections::Hashtable* get_Datastore()
		{
			return ((::System::Collections::Hashtable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_DATASTORE_OFFSET))(this);
		}

		::System::Object* get_HostContext()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_HOSTCONTEXT_OFFSET))(this);
		}

		::System::Void set_HostContext(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_SET_HOSTCONTEXT_OFFSET))(this, a1);
		}

		::System::Boolean get_HasUserData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_GET_HASUSERDATA_OFFSET))(this);
		}

		::System::Void FreeNamedDataSlot(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_FREENAMEDDATASLOT_OFFSET))(this, a1);
		}

		::System::Runtime::Remoting::Messaging::IllogicalCallContext* CreateCopy()
		{
			return ((::System::Runtime::Remoting::Messaging::IllogicalCallContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_ILLOGICALCALLCONTEXT_CREATECOPY_OFFSET))(this);
		}

	};
}
