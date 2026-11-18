#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadTask/AssetLoadTaskStatus.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }

#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKOPERATIONINFO_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x7D2810)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKOPERATIONINFO_GET_KIND_OFFSET UNITYSDK_OFFSET(0x7D27B0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKOPERATIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7D28D0)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKOPERATIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x7D2770)
#define FOUNDATION_ASSETLOADTASK_ASSETLOADTASKOPERATIONINFO___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7D2980)

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadTaskOperationInfo_TypeDefinitionIndex = 8647;

	struct alignas(8) AssetLoadTaskOperationInfo
	{
		::System::Int32 RunId; // 0x10
		::System::Int32 OperationId; // 0x14
		::System::String* Name; // 0x18
		::System::Type* OperationType; // 0x20
		::Foundation::AssetLoadTask::AssetLoadTaskStatus Status; // 0x28
		::System::Byte _padding0[0x4];
		::System::Double ElapsedMilliseconds; // 0x30
		::System::Exception* Error; // 0x38
		::System::Boolean WasStarted; // 0x40

		::System::Void _ctor(::System::Int32 runId, ::System::Int32 operationId, ::System::String* name, ::System::Type* operationType, ::Foundation::AssetLoadTask::AssetLoadTaskStatus status, ::System::Double elapsedMilliseconds, ::System::Exception* error, ::System::Boolean wasStarted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Type*, ::Foundation::AssetLoadTask::AssetLoadTaskStatus, ::System::Double, ::System::Exception*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKOPERATIONINFO__CTOR_OFFSET))(this, runId, operationId, name, operationType, status, elapsedMilliseconds, error, wasStarted);
		}

		::System::String* get_Kind()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKOPERATIONINFO_GET_KIND_OFFSET))(this);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKOPERATIONINFO_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKOPERATIONINFO_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADTASKOPERATIONINFO___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
