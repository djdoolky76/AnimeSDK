#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Security::Principal { class IPrincipal; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTSECURITYDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D46DD70)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTSECURITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D46DDD0)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTSECURITYDATA_GET_HASINFO_OFFSET UNITYSDK_OFFSET(0x1D46DD60)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CallContextSecurityData_TypeDefinitionIndex = 1294;

	class CallContextSecurityData : public ::System::Object
	{
	public:
		::System::Security::Principal::IPrincipal* _principal; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTSECURITYDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTSECURITYDATA_GET_HASINFO_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTSECURITYDATA_CLONE_OFFSET))(this);
		}

	};
}
