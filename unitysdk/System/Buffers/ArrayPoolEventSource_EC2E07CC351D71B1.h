#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ArrayPoolEventSource_EC2E07CC351D71B1_BufferAllocatedReason.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource.h"

#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_EC2E07CC351D71B1_BUFFERALLOCATED_OFFSET UNITYSDK_OFFSET(0x200708A0)
#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_EC2E07CC351D71B1_BUFFERRENTED_OFFSET UNITYSDK_OFFSET(0x20070890)
#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_EC2E07CC351D71B1_BUFFERRETURNED_OFFSET UNITYSDK_OFFSET(0x200708B0)
#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_EC2E07CC351D71B1__CCTOR_OFFSET UNITYSDK_OFFSET(0x20070910)
#define SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_EC2E07CC351D71B1__CTOR_OFFSET UNITYSDK_OFFSET(0x200708C0)

namespace System::Buffers
{
	inline static constexpr unsigned int ArrayPoolEventSource_EC2E07CC351D71B1_TypeDefinitionIndex = 6532;

	class ArrayPoolEventSource_EC2E07CC351D71B1 : public ::System::Diagnostics::Tracing::EventSource
	{
	public:
		static ::System::Buffers::ArrayPoolEventSource_EC2E07CC351D71B1** StaticGet_Log()
		{
			return (::System::Buffers::ArrayPoolEventSource_EC2E07CC351D71B1**)Il2CppClass::FromTypeDefinitionIndex(ArrayPoolEventSource_EC2E07CC351D71B1_TypeDefinitionIndex)->GetStaticField(0x5980);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_EC2E07CC351D71B1__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_EC2E07CC351D71B1__CCTOR_OFFSET))();
		}

		::System::Void BufferRented(::System::Int32 bufferId, ::System::Int32 bufferSize, ::System::Int32 poolId, ::System::Int32 bucketId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_EC2E07CC351D71B1_BUFFERRENTED_OFFSET))(this, bufferId, bufferSize, poolId, bucketId);
		}

		::System::Void BufferAllocated(::System::Int32 bufferId, ::System::Int32 bufferSize, ::System::Int32 poolId, ::System::Int32 bucketId, ::System::Buffers::ArrayPoolEventSource_EC2E07CC351D71B1_BufferAllocatedReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Buffers::ArrayPoolEventSource_EC2E07CC351D71B1_BufferAllocatedReason))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_EC2E07CC351D71B1_BUFFERALLOCATED_OFFSET))(this, bufferId, bufferSize, poolId, bucketId, reason);
		}

		::System::Void BufferReturned(::System::Int32 bufferId, ::System::Int32 bufferSize, ::System::Int32 poolId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_ARRAYPOOLEVENTSOURCE_EC2E07CC351D71B1_BUFFERRETURNED_OFFSET))(this, bufferId, bufferSize, poolId);
		}
	};
}
