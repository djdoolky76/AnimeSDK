#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/EventWaitHandle.h"

#define SYSTEM_THREADING_MANUALRESETEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1471C0)

namespace System::Threading
{
	class ManualResetEvent : public ::System::Threading::EventWaitHandle
	{
	public:
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_MANUALRESETEVENT_CTOR_OFFSET))(this, a1);
		}

	};
}
