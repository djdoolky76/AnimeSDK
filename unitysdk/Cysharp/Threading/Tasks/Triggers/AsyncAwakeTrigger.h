#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AA2A61A7920B77D2.h"

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAWAKETRIGGER_A214412DB057A2A2_OFFSET UNITYSDK_OFFSET(0x3F120A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAWAKETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x3F12200)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncAwakeTrigger_TypeDefinitionIndex = 20021;

	class AsyncAwakeTrigger
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAWAKETRIGGER__CTOR_OFFSET))(this);
		}

		::AA2A61A7920B77D2 A214412DB057A2A2()
		{
			return ((::AA2A61A7920B77D2(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCAWAKETRIGGER_A214412DB057A2A2_OFFSET))(this);
		}
	};
}
