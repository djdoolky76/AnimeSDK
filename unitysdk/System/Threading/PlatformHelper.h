#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING_PLATFORMHELPER_GET_ISSINGLEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1D2CEE60)
#define SYSTEM_THREADING_PLATFORMHELPER_GET_PROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x1D2CBA20)

namespace System::Threading
{
	inline static constexpr unsigned int PlatformHelper_TypeDefinitionIndex = 814;

	class PlatformHelper : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_processorCount()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Threading", "PlatformHelper")->GetStaticField(0x7BE0);
		}

		static ::System::Int32* StaticGet_s_lastProcessorCountRefreshTicks()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Threading", "PlatformHelper")->GetStaticField(0x7BE4);
		}

		static ::System::Int32 get_ProcessorCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_PLATFORMHELPER_GET_PROCESSORCOUNT_OFFSET))();
		}

		static ::System::Boolean get_IsSingleProcessor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_PLATFORMHELPER_GET_ISSINGLEPROCESSOR_OFFSET))();
		}

	};
}
