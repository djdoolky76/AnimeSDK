#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Uri; }

#define SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_1_OFFSET UNITYSDK_OFFSET(0x1F01FE20)
#define SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_OFFSET UNITYSDK_OFFSET(0x1F01FE10)

namespace System::Net
{
	class AutoWebProxyScriptEngine : public ::System::Object
	{
	public:
		::System::Boolean GetProxies(::System::Uri* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetProxies_1(::System::Uri* a1, ::System::Object* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_1_OFFSET))(this, a1, a2, a3);
		}

	};
}
