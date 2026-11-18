#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ObjectItem; }

#define UNREALTYPES_FIXEDCHUNKOBJECTARRAY_ADDSINGLE_OFFSET UNITYSDK_OFFSET(0x1E2AD4A0)
#define UNREALTYPES_FIXEDCHUNKOBJECTARRAY_EXPANDCHUNKSTOINDEX_OFFSET UNITYSDK_OFFSET(0x1E2AD5E0)
#define UNREALTYPES_FIXEDCHUNKOBJECTARRAY_GETITEM_OFFSET UNITYSDK_OFFSET(0x1E2AD3A0)
#define UNREALTYPES_FIXEDCHUNKOBJECTARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E2AD310)
#define UNREALTYPES_FIXEDCHUNKOBJECTARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E2AD320)
#define UNREALTYPES_FIXEDCHUNKOBJECTARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E2AD420)
#define UNREALTYPES_FIXEDCHUNKOBJECTARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AD6C0)

namespace UnrealTypes
{
	inline static constexpr unsigned int FixedChunkObjectArray_TypeDefinitionIndex = 27764;

	class FixedChunkObjectArray : public ::System::Object
	{
	public:
		::Il2CppArray<::Il2CppArray<::UnrealTypes::ObjectItem*>*>* _chunks; // 0x10
		::System::Int32 _elementCount; // 0x18
		::System::Int32 _chunkCount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FIXEDCHUNKOBJECTARRAY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FIXEDCHUNKOBJECTARRAY_GET_COUNT_OFFSET))(this);
		}

		::UnrealTypes::ObjectItem* get_Item(::System::Int32 index)
		{
			return ((::UnrealTypes::ObjectItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FIXEDCHUNKOBJECTARRAY_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::UnrealTypes::ObjectItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnrealTypes::ObjectItem*))((::PBYTE)hIl2Cpp + UNREALTYPES_FIXEDCHUNKOBJECTARRAY_SET_ITEM_OFFSET))(this, index, value);
		}

		::UnrealTypes::ObjectItem*& GetItem(::System::Int32 index)
		{
			return ((::UnrealTypes::ObjectItem*&(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FIXEDCHUNKOBJECTARRAY_GETITEM_OFFSET))(this, index);
		}

		::System::Int32 AddSingle()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FIXEDCHUNKOBJECTARRAY_ADDSINGLE_OFFSET))(this);
		}

		::System::Void ExpandChunksToIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FIXEDCHUNKOBJECTARRAY_EXPANDCHUNKSTOINDEX_OFFSET))(this, index);
		}
	};
}
