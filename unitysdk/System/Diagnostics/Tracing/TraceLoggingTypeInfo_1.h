#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_PluginStorage_DataType.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo.h"
namespace System::Diagnostics::Tracing { template <typename T> class TraceLoggingTypeInfo_1; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int TraceLoggingTypeInfo_1_TypeDefinitionIndex = 1672;

	template <typename T>
	class TraceLoggingTypeInfo_1 : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo
	{
	public:
		static ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::HoudiniEngineUnity::HEU_PluginStorage_DataType>** StaticGet_instance()
		{
			return (::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::HoudiniEngineUnity::HEU_PluginStorage_DataType>**)UnitySDK::FromName("System.Diagnostics.Tracing", "TraceLoggingTypeInfo`1")->GetStaticField(0x0);
		}

	};
}
