#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_BITARRAY8_BITAND_OFFSET UNITYSDK_OFFSET(0x8AE180)
#define UNITYENGINE_RENDERING_BITARRAY8_BITNOT_OFFSET UNITYSDK_OFFSET(0x8AE1A0)
#define UNITYENGINE_RENDERING_BITARRAY8_BITOR_OFFSET UNITYSDK_OFFSET(0x8AE190)
#define UNITYENGINE_RENDERING_BITARRAY8_EQUALS_OFFSET UNITYSDK_OFFSET(0x8AE1B0)
#define UNITYENGINE_RENDERING_BITARRAY8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8AE290)
#define UNITYENGINE_RENDERING_BITARRAY8_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x75E7A0)
#define UNITYENGINE_RENDERING_BITARRAY8_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x8AE040)
#define UNITYENGINE_RENDERING_BITARRAY8_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x52C240)
#define UNITYENGINE_RENDERING_BITARRAY8_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x8AE050)
#define UNITYENGINE_RENDERING_BITARRAY8_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x8AE060)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x1D0683A0)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x1D068350)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D068720)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D068770)
#define UNITYENGINE_RENDERING_BITARRAY8_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1D068310)
#define UNITYENGINE_RENDERING_BITARRAY8_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x8AE100)
#define UNITYENGINE_RENDERING_BITARRAY8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8AE110)
#define UNITYENGINE_RENDERING_BITARRAY8__CTOR_OFFSET UNITYSDK_OFFSET(0x3BCD30)
#define UNITYENGINE_RENDERING_BITARRAY8___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x8AE330)
#define UNITYENGINE_RENDERING_BITARRAY8___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8AE390)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray8_TypeDefinitionIndex = 17873;

	struct alignas(4) BitArray8
	{
		::System::Byte data; // 0x10

		::System::Void _ctor(::System::Byte initValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8__CTOR_OFFSET))(this, initValue);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* bitIndexTrue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8__CTOR_1_OFFSET))(this, bitIndexTrue);
		}

		::System::UInt32 get_capacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_CAPACITY_OFFSET))(this);
		}

		::System::Boolean get_allFalse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_ALLFALSE_OFFSET))(this);
		}

		::System::Boolean get_allTrue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_ALLTRUE_OFFSET))(this);
		}

		::System::String* get_humanizedData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_HUMANIZEDDATA_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::UInt32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::UInt32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_SET_ITEM_OFFSET))(this, index, value);
		}

		/*
		static ::UnityEngine::Rendering::BitArray8 op_OnesComplement(::UnityEngine::Rendering::BitArray8 a)
		{
			return ((::UnityEngine::Rendering::BitArray8(*)(::UnityEngine::Rendering::BitArray8))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_ONESCOMPLEMENT_OFFSET))(a);
		}
		*/

		/*
		static ::UnityEngine::Rendering::BitArray8 op_BitwiseOr(::UnityEngine::Rendering::BitArray8 a, ::UnityEngine::Rendering::BitArray8 b)
		{
			return ((::UnityEngine::Rendering::BitArray8(*)(::UnityEngine::Rendering::BitArray8, ::UnityEngine::Rendering::BitArray8))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_BITWISEOR_OFFSET))(a, b);
		}
		*/

		/*
		static ::UnityEngine::Rendering::BitArray8 op_BitwiseAnd(::UnityEngine::Rendering::BitArray8 a, ::UnityEngine::Rendering::BitArray8 b)
		{
			return ((::UnityEngine::Rendering::BitArray8(*)(::UnityEngine::Rendering::BitArray8, ::UnityEngine::Rendering::BitArray8))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_BITWISEAND_OFFSET))(a, b);
		}
		*/

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* other)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_BITAND_OFFSET))(this, other);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* other)
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID, ::UnityEngine::Rendering::IBitArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_BITOR_OFFSET))(this, other);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return ((::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_BITNOT_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray8 a, ::UnityEngine::Rendering::BitArray8 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray8, ::UnityEngine::Rendering::BitArray8))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_EQUALITY_OFFSET))(a, b);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray8 a, ::UnityEngine::Rendering::BitArray8 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::BitArray8, ::UnityEngine::Rendering::BitArray8))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_OP_INEQUALITY_OFFSET))(a, b);
		}
		*/

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY8___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
