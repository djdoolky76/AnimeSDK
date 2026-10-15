#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

#define SYSTEM_DIAGNOSTICS_TRACING_BYTEARRAYTYPEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D8800)
#define SYSTEM_DIAGNOSTICS_TRACING_BYTEARRAYTYPEINFO_WRITEDATA_OFFSET UNITYSDK_OFFSET(0x1C1D8650)
#define SYSTEM_DIAGNOSTICS_TRACING_BYTEARRAYTYPEINFO_WRITEMETADATA_OFFSET UNITYSDK_OFFSET(0x1C1D8330)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ByteArrayTypeInfo_TypeDefinitionIndex = 1629;

	class ByteArrayTypeInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_BYTEARRAYTYPEINFO_CTOR_OFFSET))(this);
		}

		::System::Void WriteMetadata(::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* a1, ::System::String* a2, ::System::Diagnostics::Tracing::EventFieldFormat a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, ::System::String*, ::System::Diagnostics::Tracing::EventFieldFormat))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_BYTEARRAYTYPEINFO_WRITEMETADATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteData(::System::Diagnostics::Tracing::TraceLoggingDataCollector* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::TraceLoggingDataCollector*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_BYTEARRAYTYPEINFO_WRITEDATA_OFFSET))(this, a1, a2);
		}

	};
}
