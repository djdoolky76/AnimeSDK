#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadTask/AssetLoadTaskStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }

#define FOUNDATION_ASSETLOADTASK_ASSETLOADRUNEXCEPTIONS_FAILEDWITHOUTEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D72F710)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADRUNEXCEPTIONS_FORMATNAME_OFFSET UNITYSDK_OFFSET(0x1D72F180)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADRUNEXCEPTIONS_INVALIDTRACKEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1D72F200)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADRUNEXCEPTIONS_RUNALREADYSTARTED_OFFSET UNITYSDK_OFFSET(0x1D72ED10)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADRUNEXCEPTIONS_STARTTASKISNULL_OFFSET UNITYSDK_OFFSET(0x1D72EBF0)

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadRunExceptions_TypeDefinitionIndex = 8664;

	class AssetLoadRunExceptions : public ::System::Object
	{
	public:
		static ::System::Exception* StartTaskIsNull()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADRUNEXCEPTIONS_STARTTASKISNULL_OFFSET))();
		}

		static ::System::Exception* RunAlreadyStarted(::System::Int32 runId, ::System::String* runName, ::Foundation::AssetLoadTask::AssetLoadTaskStatus status, ::System::Boolean isDisposed)
		{
			return ((::System::Exception*(*)(::System::Int32, ::System::String*, ::Foundation::AssetLoadTask::AssetLoadTaskStatus, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADRUNEXCEPTIONS_RUNALREADYSTARTED_OFFSET))(runId, runName, status, isDisposed);
		}

		static ::System::Exception* InvalidTrackedHandle(::System::Int32 runId, ::System::String* runName, ::Foundation::AssetLoadTask::AssetLoadTaskStatus status, ::System::Boolean isDisposed, ::System::Int32 trackedHandleCount)
		{
			return ((::System::Exception*(*)(::System::Int32, ::System::String*, ::Foundation::AssetLoadTask::AssetLoadTaskStatus, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADRUNEXCEPTIONS_INVALIDTRACKEDHANDLE_OFFSET))(runId, runName, status, isDisposed, trackedHandleCount);
		}

		static ::System::Exception* FailedWithoutException(::System::Int32 runId, ::System::String* runName, ::Foundation::AssetLoadTask::AssetLoadTaskStatus status, ::System::Boolean isDisposed)
		{
			return ((::System::Exception*(*)(::System::Int32, ::System::String*, ::Foundation::AssetLoadTask::AssetLoadTaskStatus, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADRUNEXCEPTIONS_FAILEDWITHOUTEXCEPTION_OFFSET))(runId, runName, status, isDisposed);
		}

		static ::System::String* FormatName(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADRUNEXCEPTIONS_FORMATNAME_OFFSET))(name);
		}
	};
}
