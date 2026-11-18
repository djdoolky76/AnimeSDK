#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryAllocation.h"
#include "unitysdk/Foundation/NativeMemoryRequest.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Foundation/NativeMemoryView_1.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

namespace System::Collections::Generic { template <typename T> class Comparer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_NATIVEMEMORY_ALLOCATESTORAGE_OFFSET UNITYSDK_OFFSET(0x1FFA8DD0)
#define FOUNDATION_NATIVEMEMORY_CREATE_OFFSET UNITYSDK_OFFSET(0x1FFA8C00)
#define FOUNDATION_NATIVEMEMORY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FFA91D0)
#define FOUNDATION_NATIVEMEMORY_RESOLVEREQUESTBYBINARYSEARCH_OFFSET UNITYSDK_OFFSET(0x1FFA93B0)
#define FOUNDATION_NATIVEMEMORY_RESOLVEREQUESTSEQUENTIAL_OFFSET UNITYSDK_OFFSET(0x1FFA92F0)
#define FOUNDATION_NATIVEMEMORY_RESOLVEREQUEST_OFFSET UNITYSDK_OFFSET(0x1FFA9220)
#define FOUNDATION_NATIVEMEMORY_RESOLVE_1_OFFSET UNITYSDK_OFFSET(0x1FFA8F90)
#define FOUNDATION_NATIVEMEMORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFA9550)
#define FOUNDATION_NATIVEMEMORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFA8C80)

namespace Foundation
{
	inline static constexpr unsigned int NativeMemory_TypeDefinitionIndex = 8961;

	class NativeMemory : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Comparer_1<::Foundation::NativeMemoryRequest>** StaticGet_RequestComparer()
		{
			return (::System::Collections::Generic::Comparer_1<::Foundation::NativeMemoryRequest>**)Il2CppClass::FromTypeDefinitionIndex(NativeMemory_TypeDefinitionIndex)->GetStaticField(0x75E0);
		}
		static ::System::Collections::Generic::Comparer_1<::Foundation::NativeMemoryAllocation>** StaticGet_InstanceComparer()
		{
			return (::System::Collections::Generic::Comparer_1<::Foundation::NativeMemoryAllocation>**)Il2CppClass::FromTypeDefinitionIndex(NativeMemory_TypeDefinitionIndex)->GetStaticField(0x75E8);
		}
		::Il2CppArray<::Foundation::NativeMemoryAllocation>* _instances; // 0x10
		::Unity::Collections::NativeArray_1<::System::Byte> _storage; // 0x18
		::System::Byte _padding0[0x8];
		::System::UInt64 _allocatorId; // 0x28
		::System::Int32 _startOffset; // 0x30

		::System::Void _ctor(::System::UInt64 allocatorId, ::System::Collections::Generic::List_1<::Foundation::NativeMemoryRequest>* requests, ::System::Int32 alignment)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::Foundation::NativeMemoryRequest>*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORY__CTOR_OFFSET))(this, allocatorId, requests, alignment);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORY__CCTOR_OFFSET))();
		}

		static ::Foundation::NativeMemory* Create(::System::UInt64 allocatorId, ::System::Collections::Generic::List_1<::Foundation::NativeMemoryRequest>* requests, ::System::Int32 alignment)
		{
			return ((::Foundation::NativeMemory*(*)(::System::UInt64, ::System::Collections::Generic::List_1<::Foundation::NativeMemoryRequest>*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORY_CREATE_OFFSET))(allocatorId, requests, alignment);
		}

		static ::System::Void AllocateStorage(::System::Collections::Generic::List_1<::Foundation::NativeMemoryRequest>* requests, ::System::Int32 alignment, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryAllocation> instance, ::System::Int32& offset, ::Unity::Collections::NativeArray_1<::System::Byte>& storage)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Foundation::NativeMemoryRequest>*, ::System::Int32, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryAllocation>, ::System::Int32&, ::Unity::Collections::NativeArray_1<::System::Byte>&))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORY_ALLOCATESTORAGE_OFFSET))(requests, alignment, instance, offset, storage);
		}

		::Foundation::NativeMemoryView_1<::System::Byte> Resolve_1(::System::UInt64 allocationId, ::System::UInt64 requestId)
		{
			return ((::Foundation::NativeMemoryView_1<::System::Byte>(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORY_RESOLVE_1_OFFSET))(this, allocationId, requestId);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORY_DISPOSE_OFFSET))(this);
		}

		::Foundation::NativeMemoryAllocation ResolveRequest(::System::UInt64 request)
		{
			return ((::Foundation::NativeMemoryAllocation(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORY_RESOLVEREQUEST_OFFSET))(this, request);
		}

		::Foundation::NativeMemoryAllocation ResolveRequestSequential(::System::UInt64 request)
		{
			return ((::Foundation::NativeMemoryAllocation(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORY_RESOLVEREQUESTSEQUENTIAL_OFFSET))(this, request);
		}

		::Foundation::NativeMemoryAllocation ResolveRequestByBinarySearch(::System::UInt64 request)
		{
			return ((::Foundation::NativeMemoryAllocation(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_NATIVEMEMORY_RESOLVEREQUESTBYBINARYSEARCH_OFFSET))(this, request);
		}
	};
}
