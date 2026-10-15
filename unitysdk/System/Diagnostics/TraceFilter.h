#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/TraceEventType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Diagnostics { class TraceEventCache; }

#define SYSTEM_DIAGNOSTICS_TRACEFILTER_SHOULDTRACE_1_OFFSET UNITYSDK_OFFSET(0x1F0115F0)

namespace System::Diagnostics
{
	class TraceFilter : public ::System::Object
	{
	public:
		::System::Boolean ShouldTrace_1(::System::Diagnostics::TraceEventCache* a1, ::System::String* a2, ::System::Diagnostics::TraceEventType a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::TraceEventCache*, ::System::String*, ::System::Diagnostics::TraceEventType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEFILTER_SHOULDTRACE_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
}
