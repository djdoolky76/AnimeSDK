#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MESHDECIMATOR_MATH_VECTOR3I_CLAMP_OFFSET UNITYSDK_OFFSET(0x902F60)
#define MESHDECIMATOR_MATH_VECTOR3I_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x903020)
#define MESHDECIMATOR_MATH_VECTOR3I_EQUALS_OFFSET UNITYSDK_OFFSET(0x902FC0)
#define MESHDECIMATOR_MATH_VECTOR3I_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x902FA0)
#define MESHDECIMATOR_MATH_VECTOR3I_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x902E20)
#define MESHDECIMATOR_MATH_VECTOR3I_GET_MAGNITUDESQR_OFFSET UNITYSDK_OFFSET(0x902E00)
#define MESHDECIMATOR_MATH_VECTOR3I_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x902DB0)
#define MESHDECIMATOR_MATH_VECTOR3I_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1E4F2E30)
#define MESHDECIMATOR_MATH_VECTOR3I_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1E4F2EC0)
#define MESHDECIMATOR_MATH_VECTOR3I_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E4F2F10)
#define MESHDECIMATOR_MATH_VECTOR3I_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1E4F2F70)
#define MESHDECIMATOR_MATH_VECTOR3I_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E4F2F50)
#define MESHDECIMATOR_MATH_VECTOR3I_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E4F2F30)
#define MESHDECIMATOR_MATH_VECTOR3I_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1E4F2EA0)
#define MESHDECIMATOR_MATH_VECTOR3I_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1E4F2E70)
#define MESHDECIMATOR_MATH_VECTOR3I_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1E4F2E50)
#define MESHDECIMATOR_MATH_VECTOR3I_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1E4F2EF0)
#define MESHDECIMATOR_MATH_VECTOR3I_SCALE_1_OFFSET UNITYSDK_OFFSET(0x1E4F3100)
#define MESHDECIMATOR_MATH_VECTOR3I_SCALE_OFFSET UNITYSDK_OFFSET(0x902F40)
#define MESHDECIMATOR_MATH_VECTOR3I_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x902EA0)
#define MESHDECIMATOR_MATH_VECTOR3I_SET_OFFSET UNITYSDK_OFFSET(0x3D9940)
#define MESHDECIMATOR_MATH_VECTOR3I_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x903070)
#define MESHDECIMATOR_MATH_VECTOR3I_TOSTRING_OFFSET UNITYSDK_OFFSET(0x903040)
#define MESHDECIMATOR_MATH_VECTOR3I__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F3130)
#define MESHDECIMATOR_MATH_VECTOR3I__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3D9940)
#define MESHDECIMATOR_MATH_VECTOR3I__CTOR_OFFSET UNITYSDK_OFFSET(0x902F30)

namespace MeshDecimator::Math
{
	inline static constexpr unsigned int Vector3i_TypeDefinitionIndex = 35057;

	struct alignas(4) Vector3i
	{
		static ::MeshDecimator::Math::Vector3i* StaticGet_zero()
		{
			return (::MeshDecimator::Math::Vector3i*)Il2CppClass::FromTypeDefinitionIndex(Vector3i_TypeDefinitionIndex)->GetStaticField(0x8BD0);
		}
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 z; // 0x18

		::System::Void _ctor(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Int32 x, ::System::Int32 y, ::System::Int32 z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I__CTOR_1_OFFSET))(this, x, y, z);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I__CCTOR_OFFSET))();
		}

		::System::Int32 get_Magnitude()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_GET_MAGNITUDE_OFFSET))(this);
		}

		::System::Int32 get_MagnitudeSqr()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_GET_MAGNITUDESQR_OFFSET))(this);
		}

		::System::Int32 get_Item(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_SET_ITEM_OFFSET))(this, index, value);
		}

		/*
		static ::MeshDecimator::Math::Vector3i op_Addition(::MeshDecimator::Math::Vector3i a, ::MeshDecimator::Math::Vector3i b)
		{
			return ((::MeshDecimator::Math::Vector3i(*)(::MeshDecimator::Math::Vector3i, ::MeshDecimator::Math::Vector3i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_OP_ADDITION_OFFSET))(a, b);
		}
		*/

		/*
		static ::MeshDecimator::Math::Vector3i op_Subtraction(::MeshDecimator::Math::Vector3i a, ::MeshDecimator::Math::Vector3i b)
		{
			return ((::MeshDecimator::Math::Vector3i(*)(::MeshDecimator::Math::Vector3i, ::MeshDecimator::Math::Vector3i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_OP_SUBTRACTION_OFFSET))(a, b);
		}
		*/

		/*
		static ::MeshDecimator::Math::Vector3i op_Multiply(::MeshDecimator::Math::Vector3i a, ::System::Int32 d)
		{
			return ((::MeshDecimator::Math::Vector3i(*)(::MeshDecimator::Math::Vector3i, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_OP_MULTIPLY_OFFSET))(a, d);
		}
		*/

		/*
		static ::MeshDecimator::Math::Vector3i op_Multiply_1(::System::Int32 d, ::MeshDecimator::Math::Vector3i a)
		{
			return ((::MeshDecimator::Math::Vector3i(*)(::System::Int32, ::MeshDecimator::Math::Vector3i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_OP_MULTIPLY_1_OFFSET))(d, a);
		}
		*/

		/*
		static ::MeshDecimator::Math::Vector3i op_Division(::MeshDecimator::Math::Vector3i a, ::System::Int32 d)
		{
			return ((::MeshDecimator::Math::Vector3i(*)(::MeshDecimator::Math::Vector3i, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_OP_DIVISION_OFFSET))(a, d);
		}
		*/

		/*
		static ::MeshDecimator::Math::Vector3i op_UnaryNegation(::MeshDecimator::Math::Vector3i a)
		{
			return ((::MeshDecimator::Math::Vector3i(*)(::MeshDecimator::Math::Vector3i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_OP_UNARYNEGATION_OFFSET))(a);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::MeshDecimator::Math::Vector3i lhs, ::MeshDecimator::Math::Vector3i rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::Math::Vector3i, ::MeshDecimator::Math::Vector3i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_OP_EQUALITY_OFFSET))(lhs, rhs);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::MeshDecimator::Math::Vector3i lhs, ::MeshDecimator::Math::Vector3i rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::Math::Vector3i, ::MeshDecimator::Math::Vector3i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}
		*/

		/*
		static ::MeshDecimator::Math::Vector3i op_Implicit(::MeshDecimator::Math::Vector3 v)
		{
			return ((::MeshDecimator::Math::Vector3i(*)(::MeshDecimator::Math::Vector3))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_OP_IMPLICIT_OFFSET))(v);
		}
		*/

		/*
		static ::MeshDecimator::Math::Vector3i op_Explicit(::MeshDecimator::Math::Vector3d v)
		{
			return ((::MeshDecimator::Math::Vector3i(*)(::MeshDecimator::Math::Vector3d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_OP_EXPLICIT_OFFSET))(v);
		}
		*/

		::System::Void Set(::System::Int32 x, ::System::Int32 y, ::System::Int32 z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_SET_OFFSET))(this, x, y, z);
		}

		/*
		::System::Void Scale(::MeshDecimator::Math::Vector3i& scale)
		{
			return ((::System::Void(*)(::PVOID, ::MeshDecimator::Math::Vector3i&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_SCALE_OFFSET))(this, scale);
		}
		*/

		::System::Void Clamp(::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_CLAMP_OFFSET))(this, min, max);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_EQUALS_OFFSET))(this, other);
		}

		/*
		::System::Boolean Equals_1(::MeshDecimator::Math::Vector3i other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MeshDecimator::Math::Vector3i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_EQUALS_1_OFFSET))(this, other);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_TOSTRING_1_OFFSET))(this, format);
		}

		/*
		static ::System::Void Scale_1(::MeshDecimator::Math::Vector3i& a, ::MeshDecimator::Math::Vector3i& b, ::MeshDecimator::Math::Vector3i& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector3i&, ::MeshDecimator::Math::Vector3i&, ::MeshDecimator::Math::Vector3i&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3I_SCALE_1_OFFSET))(a, b, result);
		}
		*/
	};
}
