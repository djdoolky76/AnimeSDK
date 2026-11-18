#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_LAZYASYNCRESULT_THREADCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC1680)

namespace System::Net
{
	inline static constexpr unsigned int LazyAsyncResult_ThreadContext_TypeDefinitionIndex = 3377;

	class LazyAsyncResult_ThreadContext : public ::System::Object
	{
	public:
		::System::Int32 m_NestedIOCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LAZYASYNCRESULT_THREADCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
