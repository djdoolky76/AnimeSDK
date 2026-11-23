#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class ECA5C6F217FDB844;
namespace System { class Object; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_A418A54D266C6697_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_A418A54D266C6697__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BB30)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int A418A54D266C6697_TypeDefinitionIndex = 10982;

	class A418A54D266C6697 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_A418A54D266C6697__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Object* Invoke(::Il2CppArray<::ECA5C6F217FDB844*>* E734BA46CBA523FB)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::ECA5C6F217FDB844*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_A418A54D266C6697_INVOKE_OFFSET))(this, E734BA46CBA523FB);
		}
	};
}
