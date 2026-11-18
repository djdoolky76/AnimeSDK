#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DEST_MATH_POLYNOMIAL_CALCDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x1FEE5580)
#define DEST_MATH_POLYNOMIAL_CALCINVERSION_OFFSET UNITYSDK_OFFSET(0x1FEE5720)
#define DEST_MATH_POLYNOMIAL_COMPRESS_OFFSET UNITYSDK_OFFSET(0x1FEE58F0)
#define DEST_MATH_POLYNOMIAL_DEEPCOPY_OFFSET UNITYSDK_OFFSET(0x1FEE5480)
#define DEST_MATH_POLYNOMIAL_EVAL_OFFSET UNITYSDK_OFFSET(0x1FEE5A60)
#define DEST_MATH_POLYNOMIAL_GET_DEGREE_OFFSET UNITYSDK_OFFSET(0x1FEE5350)
#define DEST_MATH_POLYNOMIAL_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1FEE53B0)
#define DEST_MATH_POLYNOMIAL_SET_DEGREE_OFFSET UNITYSDK_OFFSET(0x1FEE5360)
#define DEST_MATH_POLYNOMIAL_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1FEE53F0)
#define DEST_MATH_POLYNOMIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEE5430)

namespace Dest::Math
{
	inline static constexpr unsigned int Polynomial_TypeDefinitionIndex = 34893;

	class Polynomial : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* _coeffs; // 0x10
		::System::Int32 _degree; // 0x18

		::System::Void _ctor(::System::Int32 degree)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_POLYNOMIAL__CTOR_OFFSET))(this, degree);
		}

		::System::Int32 get_Degree()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYNOMIAL_GET_DEGREE_OFFSET))(this);
		}

		::System::Void set_Degree(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_POLYNOMIAL_SET_DEGREE_OFFSET))(this, value);
		}

		::System::Single get_Item(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_POLYNOMIAL_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_POLYNOMIAL_SET_ITEM_OFFSET))(this, index, value);
		}

		::Dest::Math::Polynomial* DeepCopy()
		{
			return ((::Dest::Math::Polynomial*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYNOMIAL_DEEPCOPY_OFFSET))(this);
		}

		::Dest::Math::Polynomial* CalcDerivative()
		{
			return ((::Dest::Math::Polynomial*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYNOMIAL_CALCDERIVATIVE_OFFSET))(this);
		}

		::Dest::Math::Polynomial* CalcInversion()
		{
			return ((::Dest::Math::Polynomial*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_POLYNOMIAL_CALCINVERSION_OFFSET))(this);
		}

		::System::Void Compress(::System::Single epsilon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_POLYNOMIAL_COMPRESS_OFFSET))(this, epsilon);
		}

		::System::Single Eval(::System::Single t)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_POLYNOMIAL_EVAL_OFFSET))(this, t);
		}
	};
}
