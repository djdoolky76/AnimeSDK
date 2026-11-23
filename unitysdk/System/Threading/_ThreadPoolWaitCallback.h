#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING__THREADPOOLWAITCALLBACK_FD3180A46A1F5C21_OFFSET UNITYSDK_OFFSET(0x3BA3EE0)

namespace System::Threading
{
	inline static constexpr unsigned int _ThreadPoolWaitCallback_TypeDefinitionIndex = 11132;

	class _ThreadPoolWaitCallback : public ::System::Object
	{
	public:
		static ::System::Boolean FD3180A46A1F5C21()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING__THREADPOOLWAITCALLBACK_FD3180A46A1F5C21_OFFSET))();
		}
	};
}
