#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_LAZYASYNCRESULT_THREADCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F068E40)

namespace System::Net
{
	class LazyAsyncResult_ThreadContext : public ::System::Object
	{
	public:
		::System::Int32 m_NestedIOCount; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_THREADCONTEXT_CTOR_OFFSET))(this);
		}

	};
}
