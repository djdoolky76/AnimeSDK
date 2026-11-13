#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_ADD_OFFSET UNITYSDK_OFFSET(0x20976F80)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_AREEQUAL_OFFSET UNITYSDK_OFFSET(0x20976F30)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_COMPARE_OFFSET UNITYSDK_OFFSET(0x20976EE0)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_CTOR_OFFSET UNITYSDK_OFFSET(0x20977020)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_DISTANCESQUAREDBETWEENPOINTS_OFFSET UNITYSDK_OFFSET(0x20976FB0)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x20976F40)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x20976F60)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_POSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x20976F70)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x20976F50)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x20976FA0)
#define UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x20976F90)

namespace UnityEngine::ProBuilder::KdTree::Math
{
	inline static constexpr unsigned int FloatMath_TypeDefinitionIndex = 39659;

	class FloatMath
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Boolean AreEqual(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_AREEQUAL_OFFSET))(this, a1, a2);
		}

		::System::Single get_MinValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_MINVALUE_OFFSET))(this);
		}

		::System::Single get_Zero()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_ZERO_OFFSET))(this);
		}

		::System::Single get_NegativeInfinity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_NEGATIVEINFINITY_OFFSET))(this);
		}

		::System::Single get_PositiveInfinity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_GET_POSITIVEINFINITY_OFFSET))(this);
		}

		::System::Single Add(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_ADD_OFFSET))(this, a1, a2);
		}

		::System::Single Subtract(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_SUBTRACT_OFFSET))(this, a1, a2);
		}

		::System::Single Multiply(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_MULTIPLY_OFFSET))(this, a1, a2);
		}

		::System::Single DistanceSquaredBetweenPoints(::Il2CppArray<::System::Single>* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Single(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_MATH_FLOATMATH_DISTANCESQUAREDBETWEENPOINTS_OFFSET))(this, a1, a2);
		}

	};
}
