#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define LARGEVECTOR_CREATEZEROVECTOR_OFFSET UNITYSDK_OFFSET(0x125A53D0)
#define LARGEVECTOR_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x6DFCC0)
#define LARGEVECTOR_GET_VECTORS_OFFSET UNITYSDK_OFFSET(0x6DFC70)
#define LARGEVECTOR_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x125A49E0)
#define LARGEVECTOR_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x125A5370)
#define LARGEVECTOR_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x125A5140)
#define LARGEVECTOR_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x125A4D90)
#define LARGEVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int LargeVector_TypeDefinitionIndex = 82644;

struct alignas(8) LargeVector
{
	::Il2CppArray<::UnityEngine::Vector2>* _vectors; // 0x10

	::System::Void _ctor(::Il2CppArray<::UnityEngine::Vector2>* vectors)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + LARGEVECTOR__CTOR_OFFSET))(this, vectors);
	}

	::Il2CppArray<::UnityEngine::Vector2>* get_Vectors()
	{
		return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LARGEVECTOR_GET_VECTORS_OFFSET))(this);
	}

	::System::Int32 get_Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LARGEVECTOR_GET_COUNT_OFFSET))(this);
	}

	/*
	static ::LargeVector op_Addition(::LargeVector a, ::LargeVector b)
	{
		return ((::LargeVector(*)(::LargeVector, ::LargeVector))((::PBYTE)hIl2Cpp + LARGEVECTOR_OP_ADDITION_OFFSET))(a, b);
	}
	*/

	/*
	static ::LargeVector op_Subtraction(::LargeVector a, ::LargeVector b)
	{
		return ((::LargeVector(*)(::LargeVector, ::LargeVector))((::PBYTE)hIl2Cpp + LARGEVECTOR_OP_SUBTRACTION_OFFSET))(a, b);
	}
	*/

	/*
	static ::LargeVector op_Multiply(::LargeVector a, ::System::Single scalar)
	{
		return ((::LargeVector(*)(::LargeVector, ::System::Single))((::PBYTE)hIl2Cpp + LARGEVECTOR_OP_MULTIPLY_OFFSET))(a, scalar);
	}
	*/

	/*
	static ::LargeVector op_Multiply_1(::System::Single scalar, ::LargeVector a)
	{
		return ((::LargeVector(*)(::System::Single, ::LargeVector))((::PBYTE)hIl2Cpp + LARGEVECTOR_OP_MULTIPLY_1_OFFSET))(scalar, a);
	}
	*/

	/*
	static ::LargeVector CreateZeroVector(::System::Int32 size)
	{
		return ((::LargeVector(*)(::System::Int32))((::PBYTE)hIl2Cpp + LARGEVECTOR_CREATEZEROVECTOR_OFFSET))(size);
	}
	*/
};
