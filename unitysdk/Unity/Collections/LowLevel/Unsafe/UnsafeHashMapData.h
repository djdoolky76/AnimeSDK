#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/LowLevel/Unsafe/UnsafeHashMapData__firstFreeTLS_e__FixedBuffer.h"
#include "unitysdk/Unity/Collections/Allocator.h"

#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEHASHMAPDATA_DEALLOCATEHASHMAP_OFFSET UNITYSDK_OFFSET(0x2000DEA0)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEHASHMAPDATA_GETBUCKETSIZE_OFFSET UNITYSDK_OFFSET(0x2000DE80)
#define UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEHASHMAPDATA_GROWCAPACITY_OFFSET UNITYSDK_OFFSET(0x2000DE90)

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int UnsafeHashMapData_TypeDefinitionIndex = 18031;

	struct alignas(8) UnsafeHashMapData
	{
		::PVOID values; // 0x10
		::PVOID keys; // 0x18
		::PVOID next; // 0x20
		::PVOID buckets; // 0x28
		::System::Int32 keyCapacity; // 0x30
		::System::Int32 bucketCapacityMask; // 0x34
		::System::Int32 allocatedIndexLength; // 0x38
		::System::Byte _padding0[0x14];
		::Unity::Collections::LowLevel::Unsafe::UnsafeHashMapData__firstFreeTLS_e__FixedBuffer firstFreeTLS; // 0x50

		static ::System::Int32 GetBucketSize(::System::Int32 capacity)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEHASHMAPDATA_GETBUCKETSIZE_OFFSET))(capacity);
		}

		static ::System::Int32 GrowCapacity(::System::Int32 capacity)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEHASHMAPDATA_GROWCAPACITY_OFFSET))(capacity);
		}

		static ::System::Void DeallocateHashMap(::PVOID data, ::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_LOWLEVEL_UNSAFE_UNSAFEHASHMAPDATA_DEALLOCATEHASHMAP_OFFSET))(data, allocator);
		}
	};
}
