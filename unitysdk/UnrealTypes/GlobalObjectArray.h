#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnrealTypes { class FixedChunkObjectArray; }
namespace UnrealTypes { class ObjectItem; }

#define UNREALTYPES_GLOBALOBJECTARRAY_ALLOCATEOBJECTINDEX_OFFSET UNITYSDK_OFFSET(0x1E2ADA10)
#define UNREALTYPES_GLOBALOBJECTARRAY_FREEOBJECTINDEX_OFFSET UNITYSDK_OFFSET(0x1E2AD7F0)
#define UNREALTYPES_GLOBALOBJECTARRAY_INDEXTOOBJECT_OFFSET UNITYSDK_OFFSET(0x1E2ADB30)
#define UNREALTYPES_GLOBALOBJECTARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AD930)

namespace UnrealTypes
{
	inline static constexpr unsigned int GlobalObjectArray_TypeDefinitionIndex = 27765;

	class GlobalObjectArray : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::System::Int32>* _freeIndices; // 0x10
		::System::Object* _objectsLock; // 0x18
		::UnrealTypes::FixedChunkObjectArray* _objects; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_GLOBALOBJECTARRAY__CTOR_OFFSET))(this);
		}

		::System::Int32 AllocateObjectIndex(::System::Object* obj, ::System::Int32 serialNumber)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_GLOBALOBJECTARRAY_ALLOCATEOBJECTINDEX_OFFSET))(this, obj, serialNumber);
		}

		::System::Void FreeObjectIndex(::System::Object* obj, ::System::Int32 objectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_GLOBALOBJECTARRAY_FREEOBJECTINDEX_OFFSET))(this, obj, objectIndex);
		}

		::UnrealTypes::ObjectItem* IndexToObject(::System::Int32 index)
		{
			return ((::UnrealTypes::ObjectItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_GLOBALOBJECTARRAY_INDEXTOOBJECT_OFFSET))(this, index);
		}
	};
}
