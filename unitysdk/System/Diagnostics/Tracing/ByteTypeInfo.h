#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_BYTETYPEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D8A30)
#define SYSTEM_DIAGNOSTICS_TRACING_BYTETYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x1C1D8920)
#define SYSTEM_DIAGNOSTICS_TRACING_BYTETYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x1C1D8890)

namespace System::Diagnostics::Tracing
{
	class ByteTypeInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_BYTETYPEINFO_CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* a1, ::System::String* a2, ::System::Diagnostics::Tracing::EventFieldFormat a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_BYTETYPEINFO_WRITEMETADATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_BYTETYPEINFO_WRITEDATA_OFFSET))(this, a1, a2);
		}

	};
}
