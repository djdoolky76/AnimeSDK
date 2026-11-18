#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetLoadTask/AssetLoadTaskOperationInfo.h"
#include "unitysdk/Foundation/AssetLoadTask/AssetLoadTaskResourceInfo.h"
#include "unitysdk/Foundation/AssetLoadTask/AssetLoadTaskRunInfo.h"

#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKLOGOBSERVER_ONOPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F3EA7F0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKLOGOBSERVER_ONOPERATIONSTARTED_OFFSET UNITYSDK_OFFSET(0x1F3EA780)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKLOGOBSERVER_ONRESOURCEHANDLETRACKED_OFFSET UNITYSDK_OFFSET(0x1F3EA860)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKLOGOBSERVER_ONRUNCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F3EA710)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKLOGOBSERVER_ONRUNSTARTED_OFFSET UNITYSDK_OFFSET(0x1F3EA6A0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKLOGOBSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3EA8C0)

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTaskLogObserver_TypeDefinitionIndex = 8484;

	class AssetLoadTaskLogObserver : public ::System::Object
	{
	public:
		::System::Double SlowOperationThresholdMilliseconds; // 0x10
		::System::Boolean LogOperations; // 0x18
		::System::Boolean LogResourceHandles; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKLOGOBSERVER__CTOR_OFFSET))(this);
		}

		::System::Void OnRunStarted(::Foundation::AssetLoadTask::AssetLoadTaskRunInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadTask::AssetLoadTaskRunInfo))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKLOGOBSERVER_ONRUNSTARTED_OFFSET))(this, info);
		}

		::System::Void OnRunCompleted(::Foundation::AssetLoadTask::AssetLoadTaskRunInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadTask::AssetLoadTaskRunInfo))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKLOGOBSERVER_ONRUNCOMPLETED_OFFSET))(this, info);
		}

		::System::Void OnOperationStarted(::Foundation::AssetLoadTask::AssetLoadTaskOperationInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadTask::AssetLoadTaskOperationInfo))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKLOGOBSERVER_ONOPERATIONSTARTED_OFFSET))(this, info);
		}

		::System::Void OnOperationCompleted(::Foundation::AssetLoadTask::AssetLoadTaskOperationInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadTask::AssetLoadTaskOperationInfo))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKLOGOBSERVER_ONOPERATIONCOMPLETED_OFFSET))(this, info);
		}

		::System::Void OnResourceHandleTracked(::Foundation::AssetLoadTask::AssetLoadTaskResourceInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadTask::AssetLoadTaskResourceInfo))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKLOGOBSERVER_ONRESOURCEHANDLETRACKED_OFFSET))(this, info);
		}
	};
}
