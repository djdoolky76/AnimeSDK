#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadTask/AssetLoadTaskStatus.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }

#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKRUNINFO_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1F9C6DF0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKRUNINFO_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x7D2810)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKRUNINFO_GET_KIND_OFFSET UNITYSDK_OFFSET(0x9908B0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKRUNINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x990910)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKRUNINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x990880)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKRUNINFO___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9909C0)

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTaskRunInfo_TypeDefinitionIndex = 8067;

	struct alignas(8) AssetLoadTaskRunInfo
	{
		::System::Int32 RunId; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Name; // 0x18
		::System::Type* TaskType; // 0x20
		::Foundation::AssetLoadTask::AssetLoadTaskStatus Status; // 0x28
		::System::Byte _padding1[0x4];
		::System::Double ElapsedMilliseconds; // 0x30
		::System::Exception* Error; // 0x38
		::System::Int32 TrackedHandleCount; // 0x40

		::System::Void _ctor(::System::Int32 runId, ::System::String* name, ::System::Type* taskType, ::Foundation::AssetLoadTask::AssetLoadTaskStatus status, ::System::Double elapsedMilliseconds, ::System::Exception* error, ::System::Int32 trackedHandleCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Type*, ::Foundation::AssetLoadTask::AssetLoadTaskStatus, ::System::Double, ::System::Exception*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKRUNINFO__CTOR_OFFSET))(this, runId, name, taskType, status, elapsedMilliseconds, error, trackedHandleCount);
		}

		::System::String* get_Kind()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKRUNINFO_GET_KIND_OFFSET))(this);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKRUNINFO_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKRUNINFO_TOSTRING_OFFSET))(this);
		}

		static ::System::String* GetDisplayName(::System::String* name, ::System::Type* type)
		{
			return ((::System::String*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKRUNINFO_GETDISPLAYNAME_OFFSET))(name, type);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKRUNINFO___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
