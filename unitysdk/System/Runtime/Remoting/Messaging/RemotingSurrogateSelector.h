#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
namespace System { class Type; }
namespace System::Runtime::Remoting::Messaging { class ObjRefSurrogate; }
namespace System::Runtime::Remoting::Messaging { class RemotingSurrogate; }
namespace System::Runtime::Serialization { class ISerializationSurrogate; }
namespace System::Runtime::Serialization { class ISurrogateSelector; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2F5C50)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2F5920)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR_GETSURROGATE_OFFSET UNITYSDK_OFFSET(0x1C2F5930)

namespace System::Runtime::Remoting::Messaging
{
	class RemotingSurrogateSelector : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::ISurrogateSelector* _next; // 0x10
		static ::System::Runtime::Remoting::Messaging::RemotingSurrogate** StaticGet__objRemotingSurrogate()
		{
			return (::System::Runtime::Remoting::Messaging::RemotingSurrogate**)UnitySDK::FromName("System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector")->GetStaticField(0x18700);
		}

		static ::System::Runtime::Remoting::Messaging::ObjRefSurrogate** StaticGet__objRefSurrogate()
		{
			return (::System::Runtime::Remoting::Messaging::ObjRefSurrogate**)UnitySDK::FromName("System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector")->GetStaticField(0x18708);
		}

		static ::System::Type** StaticGet_s_cachedTypeObjRef()
		{
			return (::System::Type**)UnitySDK::FromName("System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector")->GetStaticField(0x18710);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR_CCTOR_OFFSET))();
		}

		::System::Runtime::Serialization::ISerializationSurrogate* GetSurrogate(::System::Type* a1, ::System::Runtime::Serialization::StreamingContext a2, ::System::Runtime::Serialization::ISurrogateSelector* a3)
		{
			return ((::System::Runtime::Serialization::ISerializationSurrogate*(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::ISurrogateSelector*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_REMOTINGSURROGATESELECTOR_GETSURROGATE_OFFSET))(this, a1, a2, a3);
		}

	};
}
