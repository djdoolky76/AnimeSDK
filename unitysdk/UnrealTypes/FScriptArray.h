#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

#define UNREALTYPES_FSCRIPTARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x8EDB20)
#define UNREALTYPES_FSCRIPTARRAY_CLEAR_OFFSET UNITYSDK_OFFSET(0x3B8E60)
#define UNREALTYPES_FSCRIPTARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3B8E20)
#define UNREALTYPES_FSCRIPTARRAY_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x8EDBD0)
#define UNREALTYPES_FSCRIPTARRAY_GET_ALLOCATOR_OFFSET UNITYSDK_OFFSET(0x359320)
#define UNREALTYPES_FSCRIPTARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x3581C0)
#define UNREALTYPES_FSCRIPTARRAY_GET_MEMORY_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define UNREALTYPES_FSCRIPTARRAY_GROW_OFFSET UNITYSDK_OFFSET(0x8EDC60)
#define UNREALTYPES_FSCRIPTARRAY_RESET_OFFSET UNITYSDK_OFFSET(0x3B8DE0)
#define UNREALTYPES_FSCRIPTARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x3B8BD0)

namespace UnrealTypes
{
	inline static constexpr unsigned int FScriptArray_TypeDefinitionIndex = 27716;

	struct alignas(8) FScriptArray
	{
		::Unity::Collections::Allocator _allocator; // 0x10
		::System::Byte _padding0[0x4];
		::PVOID _storage; // 0x18
		::System::Int32 _capacity; // 0x20
		::System::Int32 _size; // 0x24

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAY__CTOR_OFFSET))(this, allocator);
		}

		::Unity::Collections::Allocator get_Allocator()
		{
			return ((::Unity::Collections::Allocator(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAY_GET_ALLOCATOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAY_GET_COUNT_OFFSET))(this);
		}

		::PVOID get_Memory()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAY_GET_MEMORY_OFFSET))(this);
		}

		::System::Int32 Add(::System::Int32 count, ::System::Int32 elementSize, ::System::Int32 elementAlignment)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAY_ADD_OFFSET))(this, count, elementSize, elementAlignment);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAY_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAY_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAY_CLEAR_OFFSET))(this);
		}

		::System::Void EnsureCapacity(::System::Int32 capacity, ::System::Int32 elementSize, ::System::Int32 elementAlignment)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAY_ENSURECAPACITY_OFFSET))(this, capacity, elementSize, elementAlignment);
		}

		::System::Void Grow(::System::Int32 capacity, ::System::Int32 elementSize, ::System::Int32 elementAlignment)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAY_GROW_OFFSET))(this, capacity, elementSize, elementAlignment);
		}
	};
}
