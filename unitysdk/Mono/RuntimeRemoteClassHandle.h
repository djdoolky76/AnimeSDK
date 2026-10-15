#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/RuntimeClassHandle.h"

#define MONO_RUNTIMEREMOTECLASSHANDLE_GET_PROXYCLASS_OFFSET UNITYSDK_OFFSET(0x3C146E0)

namespace Mono
{
	struct alignas(8) RuntimeRemoteClassHandle
	{
		::PVOID value; // 0x10
		::Mono::RuntimeClassHandle get_ProxyClass()
		{
			return ((::Mono::RuntimeClassHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEREMOTECLASSHANDLE_GET_PROXYCLASS_OFFSET))(this);
		}

	};
}
