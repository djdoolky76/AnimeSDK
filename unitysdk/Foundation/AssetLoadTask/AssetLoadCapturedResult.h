#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadTask/AssetLoadTaskStatus.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class Object; }

#define FOUNDATION_ASSETLOADTASK_ASSETLOADCAPTUREDRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x4971C0)

namespace Foundation::AssetLoadTask
{
	inline static constexpr unsigned int AssetLoadCapturedResult_TypeDefinitionIndex = 8246;

	struct alignas(8) AssetLoadCapturedResult
	{
		::Foundation::AssetLoadTask::AssetLoadTaskStatus Status; // 0x10
		::System::Byte _padding0[0x4];
		::System::Object* Value; // 0x18
		::System::Exception* Error; // 0x20

		::System::Void _ctor(::Foundation::AssetLoadTask::AssetLoadTaskStatus status, ::System::Object* value, ::System::Exception* error)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetLoadTask::AssetLoadTaskStatus, ::System::Object*, ::System::Exception*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETLOADTASK_ASSETLOADCAPTUREDRESULT__CTOR_OFFSET))(this, status, value, error);
		}
	};
}
