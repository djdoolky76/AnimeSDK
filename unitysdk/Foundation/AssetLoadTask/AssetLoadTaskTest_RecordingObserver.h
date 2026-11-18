#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetLoadTask/AssetLoadTaskOperationInfo.h"
#include "unitysdk/Foundation/AssetLoadTask/AssetLoadTaskResourceInfo.h"
#include "unitysdk/Foundation/AssetLoadTask/AssetLoadTaskRunInfo.h"

#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_RECORDINGOBSERVER_ONOPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F374FA0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_RECORDINGOBSERVER_ONOPERATIONSTARTED_OFFSET UNITYSDK_OFFSET(0x1F374F30)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_RECORDINGOBSERVER_ONRESOURCEHANDLETRACKED_OFFSET UNITYSDK_OFFSET(0x1F375070)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_RECORDINGOBSERVER_ONRUNCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F374EC0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_RECORDINGOBSERVER_ONRUNSTARTED_OFFSET UNITYSDK_OFFSET(0x1F374E50)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_RECORDINGOBSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3750D0)

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTaskTest_RecordingObserver_TypeDefinitionIndex = 8129;

	class AssetLoadTaskTest_RecordingObserver : public ::System::Object
	{
	public:
		::System::Int32 RunStartedCount; // 0x10
		::System::Boolean SawNamedStage; // 0x14
		::System::Byte _padding0[0x3];
		::System::Int32 OperationCompletedCount; // 0x18
		::System::Int32 RunCompletedCount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_RECORDINGOBSERVER__CTOR_OFFSET))(this);
		}

		::System::Void OnRunStarted(::Foundation::AssetLoadTask::AssetLoadTaskRunInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadTask::AssetLoadTaskRunInfo))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_RECORDINGOBSERVER_ONRUNSTARTED_OFFSET))(this, info);
		}

		::System::Void OnRunCompleted(::Foundation::AssetLoadTask::AssetLoadTaskRunInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadTask::AssetLoadTaskRunInfo))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_RECORDINGOBSERVER_ONRUNCOMPLETED_OFFSET))(this, info);
		}

		::System::Void OnOperationStarted(::Foundation::AssetLoadTask::AssetLoadTaskOperationInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadTask::AssetLoadTaskOperationInfo))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_RECORDINGOBSERVER_ONOPERATIONSTARTED_OFFSET))(this, info);
		}

		::System::Void OnOperationCompleted(::Foundation::AssetLoadTask::AssetLoadTaskOperationInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadTask::AssetLoadTaskOperationInfo))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_RECORDINGOBSERVER_ONOPERATIONCOMPLETED_OFFSET))(this, info);
		}

		::System::Void OnResourceHandleTracked(::Foundation::AssetLoadTask::AssetLoadTaskResourceInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadTask::AssetLoadTaskResourceInfo))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKTEST_RECORDINGOBSERVER_ONRESOURCEHANDLETRACKED_OFFSET))(this, info);
		}
	};
}
