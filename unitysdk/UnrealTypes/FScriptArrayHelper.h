#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FPropertyHandle.h"

namespace UnrealTypes { class ArrayProperty; }

#define UNREALTYPES_FSCRIPTARRAYHELPER_ADDUNINITIALIZEDVALUES_OFFSET UNITYSDK_OFFSET(0x8EE0E0)
#define UNREALTYPES_FSCRIPTARRAYHELPER_ADDVALUES_OFFSET UNITYSDK_OFFSET(0x8EE020)
#define UNREALTYPES_FSCRIPTARRAYHELPER_CLEARANDADDUNINITIALIZEDVALUES_OFFSET UNITYSDK_OFFSET(0x8EDF60)
#define UNREALTYPES_FSCRIPTARRAYHELPER_CLEARANDADDVALUES_OFFSET UNITYSDK_OFFSET(0x8EDE80)
#define UNREALTYPES_FSCRIPTARRAYHELPER_CLEAR_OFFSET UNITYSDK_OFFSET(0x8EDE40)
#define UNREALTYPES_FSCRIPTARRAYHELPER_CONSTRUCTITEMS_OFFSET UNITYSDK_OFFSET(0x8EE190)
#define UNREALTYPES_FSCRIPTARRAYHELPER_DESTRUCTITEMS_OFFSET UNITYSDK_OFFSET(0x8EE1A0)
#define UNREALTYPES_FSCRIPTARRAYHELPER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EDDE0)
#define UNREALTYPES_FSCRIPTARRAYHELPER_GETRAWPTR_OFFSET UNITYSDK_OFFSET(0x8EDD60)
#define UNREALTYPES_FSCRIPTARRAYHELPER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x8EDCC0)
#define UNREALTYPES_FSCRIPTARRAYHELPER_ISVALIDINDEX_OFFSET UNITYSDK_OFFSET(0x8EDD40)
#define UNREALTYPES_FSCRIPTARRAYHELPER_RESET_OFFSET UNITYSDK_OFFSET(0x8EDD80)
#define UNREALTYPES_FSCRIPTARRAYHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x8EDCD0)

namespace UnrealTypes
{
	inline static constexpr unsigned int FScriptArrayHelper_TypeDefinitionIndex = 27717;

	struct alignas(8) FScriptArrayHelper
	{
		::UnrealTypes::FPropertyHandle _innerProperty; // 0x10
		::System::Byte _padding0[0x4];
		::PVOID _array; // 0x18
		::System::Int32 _elementSize; // 0x20
		::System::Int32 _elementAlignment; // 0x24

		::System::Void _ctor(::UnrealTypes::ArrayProperty* arrayProperty, ::PVOID array)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::ArrayProperty*, ::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAYHELPER__CTOR_OFFSET))(this, arrayProperty, array);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAYHELPER_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean IsValidIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAYHELPER_ISVALIDINDEX_OFFSET))(this, index);
		}

		::PVOID GetRawPtr(::System::Int32 index)
		{
			return ((::PVOID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAYHELPER_GETRAWPTR_OFFSET))(this, index);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAYHELPER_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAYHELPER_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAYHELPER_CLEAR_OFFSET))(this);
		}

		::System::Void ClearAndAddValues(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAYHELPER_CLEARANDADDVALUES_OFFSET))(this, count);
		}

		::System::Void ClearAndAddUninitializedValues(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAYHELPER_CLEARANDADDUNINITIALIZEDVALUES_OFFSET))(this, count);
		}

		::System::Int32 AddValues(::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAYHELPER_ADDVALUES_OFFSET))(this, count);
		}

		::System::Int32 AddUninitializedValues(::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAYHELPER_ADDUNINITIALIZEDVALUES_OFFSET))(this, count);
		}

		::System::Void ConstructItems(::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAYHELPER_CONSTRUCTITEMS_OFFSET))(this, index, count);
		}

		::System::Void DestructItems(::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FSCRIPTARRAYHELPER_DESTRUCTITEMS_OFFSET))(this, index, count);
		}
	};
}
