#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UFightServerConnectionType.h"

class JMKAMCIHBJK;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UFIGHTSERVERCONNECTIONEVENTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F35EFC0)
#define UFIGHTSERVERCONNECTIONEVENTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F35F040)
#define UFIGHTSERVERCONNECTIONEVENTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F35ECB0)
#define UFIGHTSERVERCONNECTIONEVENTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F35ECA0)

inline static constexpr unsigned int UFightServerConnectionEventCallback_TypeDefinitionIndex = 28847;

class UFightServerConnectionEventCallback : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UFIGHTSERVERCONNECTIONEVENTCALLBACK__CTOR_OFFSET))(this, object, method);
	}

	::System::Void Invoke(::UFightServerConnectionType type, ::JMKAMCIHBJK* rsp)
	{
		return ((::System::Void(*)(::PVOID, ::UFightServerConnectionType, ::JMKAMCIHBJK*))((::PBYTE)hIl2Cpp + UFIGHTSERVERCONNECTIONEVENTCALLBACK_INVOKE_OFFSET))(this, type, rsp);
	}

	::System::IAsyncResult* BeginInvoke(::UFightServerConnectionType type, ::JMKAMCIHBJK* rsp, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UFightServerConnectionType, ::JMKAMCIHBJK*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UFIGHTSERVERCONNECTIONEVENTCALLBACK_BEGININVOKE_OFFSET))(this, type, rsp, callback, object);
	}

	::System::Void EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UFIGHTSERVERCONNECTIONEVENTCALLBACK_ENDINVOKE_OFFSET))(this, result);
	}
};
