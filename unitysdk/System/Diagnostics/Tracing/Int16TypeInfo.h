#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_INT16TYPEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1F8BC0)
#define SYSTEM_DIAGNOSTICS_TRACING_INT16TYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x1C1F8AB0)
#define SYSTEM_DIAGNOSTICS_TRACING_INT16TYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x1C1F8A20)

namespace System::Diagnostics::Tracing
{
	class Int16TypeInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_INT16TYPEINFO_CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* a1, ::System::String* a2, ::System::Diagnostics::Tracing::EventFieldFormat a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_INT16TYPEINFO_WRITEMETADATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* a1, ::System::Int16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_INT16TYPEINFO_WRITEDATA_OFFSET))(this, a1, a2);
		}

	};
}
