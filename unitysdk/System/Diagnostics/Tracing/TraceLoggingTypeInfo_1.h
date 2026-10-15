#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_PluginStorage_DataType.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo.h"
namespace System::Diagnostics::Tracing { class TraceLoggingTypeInfo; }

namespace System::Diagnostics::Tracing
{
	template <typename T>
	class TraceLoggingTypeInfo_1 : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo
	{
	public:
		static ::System::Diagnostics::Tracing::TraceLoggingTypeInfo** StaticGet_instance()
		{
			return (::System::Diagnostics::Tracing::TraceLoggingTypeInfo**)UnitySDK::FromName("System.Diagnostics.Tracing", "TraceLoggingTypeInfo`1")->GetStaticField(0x0);
		}

	};
}
