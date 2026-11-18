#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_BITARRAY128_BITAND_OFFSET UNITYSDK_OFFSET(0x8ACE60)
#define UNITYENGINE_RENDERING_BITARRAY128_BITNOT_OFFSET UNITYSDK_OFFSET(0x8ACE80)
#define UNITYENGINE_RENDERING_BITARRAY128_BITOR_OFFSET UNITYSDK_OFFSET(0x8ACE70)
#define UNITYENGINE_RENDERING_BITARRAY128_EQUALS_OFFSET UNITYSDK_OFFSET(0x8ACE90)
#define UNITYENGINE_RENDERING_BITARRAY128_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8ACEA0)
#define UNITYENGINE_RENDERING_BITARRAY128_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x8ACC60)
#define UNITYENGINE_RENDERING_BITARRAY128_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x8ACD00)
#define UNITYENGINE_RENDERING_BITARRAY128_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x8ACC50)
#define UNITYENGINE_RENDERING_BITARRAY128_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x8ACDA0)
#define UNITYENGINE_RENDERING_BITARRAY128_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x8ACDB0)
#define UNITYENGINE_RENDERING_BITARRAY128_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1D063D70)
#define UNITYENGINE_RENDERING_BITARRAY128_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1D063CF0)
#define UNITYENGINE_RENDERING_BITARRAY128_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D0641D0)
#define UNITYENGINE_RENDERING_BITARRAY128_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D064240)
#define UNITYENGINE_RENDERING_BITARRAY128_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1D063C80)
#define UNITYENGINE_RENDERING_BITARRAY128_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x8ACDC0)
#define UNITYENGINE_RENDERING_BITARRAY128__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8ACDD0)
#define UNITYENGINE_RENDERING_BITARRAY128__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)
#define UNITYENGINE_RENDERING_BITARRAY128___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x8ACF50)
#define UNITYENGINE_RENDERING_BITARRAY128___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8ACFC0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray128_TypeDefinitionIndex = 17877;

	struct alignas(4) BitArray128
	{
		::System::UInt64 data1; // 0x10
		::System::UInt64 data2; // 0x18

		::System::Void _ctor(::System::UInt64 initValue1, ::System::UInt64 initValue2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128__CTOR_OFFSET))(this, initValue1, initValue2);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* bitIndexTrue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128__CTOR_1_OFFSET))(this, bitIndexTrue);
		}

		::System::UInt32 get_capacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_GET_CAPACITY_OFFSET))(this);
		}

		::System::Boolean get_allFalse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_GET_ALLFALSE_OFFSET))(this);
		}

		::System::Boolean get_allTrue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_GET_ALLTRUE_OFFSET))(this);
		}

		::System::String* get_humanizedData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_GET_HUMANIZEDDATA_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::UInt32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::UInt32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_SET_ITEM_OFFSET))(this, index, value);
		}

		/*
		static ::UnityEngine::Rendering::BitArray128 op_OnesComplement(::UnityEngine::Rendering::BitArray128 a)
		{
			return ((::UnityEngine::Rendering::BitArray128(*)(::UnityEngine::Rendering::BitArray128))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_OP_ONESCOMPLEMENT_OFFSET))(a);
		}
		*/

		/*
		static ::UnityEngine::Rendering::BitArray128 op_BitwiseOr(::UnityEngine::Rendering::BitArray128 a, ::UnityEngine::Rendering::BitArray128 b)
		{
			return ((::UnityEngine::Rendering::BitArray128(*)(::UnityEngine::Rendering::BitArray128, ::UnityEngine::Rendering::BitArray128))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_OP_BITWISEOR_OFFSET))(a, b);
		}
		*/

		/*
		static ::UnityEngine::Rendering::BitArray128 op_BitwiseAnd(::UnityEngine::Rendering::BitArray128 a, ::UnityEngine::Rendering::BitArray128 b)
		{
			return ((::UnityEngine::Rendering::BitArray128(*)(::UnityEngine::Rendering::BitArray128, ::UnityEngine::Rendering::BitArray128))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_OP_BITWISEAND_OFFSET))(a, b);
		}
		*/

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* other)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_BITAND_OFFSET))(this, other);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* other)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_BITOR_OFFSET))(this, other);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_BITNOT_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray128 a, ::UnityEngine::Rendering::BitArray128 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray128, ::UnityEngine::Rendering::BitArray128))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_OP_EQUALITY_OFFSET))(a, b);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray128 a, ::UnityEngine::Rendering::BitArray128 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray128, ::UnityEngine::Rendering::BitArray128))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_OP_INEQUALITY_OFFSET))(a, b);
		}
		*/

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
