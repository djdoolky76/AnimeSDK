#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_VECTOR2_ANGLE_OFFSET UNITYSDK_OFFSET(0x20747610)
#define UNITYENGINE_VECTOR2_CCTOR_OFFSET UNITYSDK_OFFSET(0x2084B230)
#define UNITYENGINE_VECTOR2_CLAMPMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x20747870)
#define UNITYENGINE_VECTOR2_CTOR_OFFSET UNITYSDK_OFFSET(0x652930)
#define UNITYENGINE_VECTOR2_DISTANCE_OFFSET UNITYSDK_OFFSET(0x20747830)
#define UNITYENGINE_VECTOR2_DOT_OFFSET UNITYSDK_OFFSET(0x207475B0)
#define UNITYENGINE_VECTOR2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3F56D20)
#define UNITYENGINE_VECTOR2_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F725E0)
#define UNITYENGINE_VECTOR2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3DD0CE0)
#define UNITYENGINE_VECTOR2_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x2084B1E0)
#define UNITYENGINE_VECTOR2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3F72430)
#define UNITYENGINE_VECTOR2_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x2084B1F0)
#define UNITYENGINE_VECTOR2_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3DD0DA0)
#define UNITYENGINE_VECTOR2_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x2084B220)
#define UNITYENGINE_VECTOR2_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x3F72540)
#define UNITYENGINE_VECTOR2_GET_ONE_OFFSET UNITYSDK_OFFSET(0x2084B1C0)
#define UNITYENGINE_VECTOR2_GET_POSITIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x2084B210)
#define UNITYENGINE_VECTOR2_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x2084B200)
#define UNITYENGINE_VECTOR2_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x3DD0DD0)
#define UNITYENGINE_VECTOR2_GET_UP_OFFSET UNITYSDK_OFFSET(0x2084B1D0)
#define UNITYENGINE_VECTOR2_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x2084B1B0)
#define UNITYENGINE_VECTOR2_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x20746E80)
#define UNITYENGINE_VECTOR2_LERP_OFFSET UNITYSDK_OFFSET(0x20746E10)
#define UNITYENGINE_VECTOR2_MAX_OFFSET UNITYSDK_OFFSET(0x20747970)
#define UNITYENGINE_VECTOR2_MIN_OFFSET UNITYSDK_OFFSET(0x20747940)
#define UNITYENGINE_VECTOR2_MOVETOWARDS_OFFSET UNITYSDK_OFFSET(0x20746EC0)
#define UNITYENGINE_VECTOR2_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x3F724D0)
#define UNITYENGINE_VECTOR2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x20747C00)
#define UNITYENGINE_VECTOR2_OP_DIVISION_1_OFFSET UNITYSDK_OFFSET(0x2084B0C0)
#define UNITYENGINE_VECTOR2_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x20747C90)
#define UNITYENGINE_VECTOR2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x2084B0F0)
#define UNITYENGINE_VECTOR2_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x2084B180)
#define UNITYENGINE_VECTOR2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x2084B170)
#define UNITYENGINE_VECTOR2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x2084B130)
#define UNITYENGINE_VECTOR2_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x2084B060)
#define UNITYENGINE_VECTOR2_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x2084B090)
#define UNITYENGINE_VECTOR2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x20747C60)
#define UNITYENGINE_VECTOR2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x20747C30)
#define UNITYENGINE_VECTOR2_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x20747CC0)
#define UNITYENGINE_VECTOR2_PERPENDICULAR_OFFSET UNITYSDK_OFFSET(0x207475E0)
#define UNITYENGINE_VECTOR2_REFLECT_OFFSET UNITYSDK_OFFSET(0x20747550)
#define UNITYENGINE_VECTOR2_SCALE_1_OFFSET UNITYSDK_OFFSET(0x3DD0A70)
#define UNITYENGINE_VECTOR2_SCALE_OFFSET UNITYSDK_OFFSET(0x20746F80)
#define UNITYENGINE_VECTOR2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x3F72480)
#define UNITYENGINE_VECTOR2_SET_OFFSET UNITYSDK_OFFSET(0x652930)
#define UNITYENGINE_VECTOR2_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x20747700)
#define UNITYENGINE_VECTOR2_SMOOTHDAMP_1_OFFSET UNITYSDK_OFFSET(0x20747BB0)
#define UNITYENGINE_VECTOR2_SMOOTHDAMP_2_OFFSET UNITYSDK_OFFSET(0x20747A00)
#define UNITYENGINE_VECTOR2_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0x207479A0)
#define UNITYENGINE_VECTOR2_SQRMAGNITUDE_1_OFFSET UNITYSDK_OFFSET(0x3DD0DD0)
#define UNITYENGINE_VECTOR2_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x20747910)
#define UNITYENGINE_VECTOR2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3F725D0)
#define UNITYENGINE_VECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3F725C0)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector2_TypeDefinitionIndex = 4229;

	struct alignas(4) Vector2
	{
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		static ::UnityEngine::Vector2* StaticGet_oneVector()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("UnityEngine", "Vector2")->GetStaticField(0x4B80);
		}

		static ::UnityEngine::Vector2* StaticGet_upVector()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("UnityEngine", "Vector2")->GetStaticField(0x4B88);
		}

		static ::UnityEngine::Vector2* StaticGet_leftVector()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("UnityEngine", "Vector2")->GetStaticField(0x4B90);
		}

		static ::UnityEngine::Vector2* StaticGet_rightVector()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("UnityEngine", "Vector2")->GetStaticField(0x4B98);
		}

		static ::UnityEngine::Vector2* StaticGet_negativeInfinityVector()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("UnityEngine", "Vector2")->GetStaticField(0x4BA0);
		}

		static ::UnityEngine::Vector2* StaticGet_positiveInfinityVector()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("UnityEngine", "Vector2")->GetStaticField(0x4BA8);
		}

		static ::UnityEngine::Vector2* StaticGet_downVector()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("UnityEngine", "Vector2")->GetStaticField(0x4BB0);
		}

		static ::UnityEngine::Vector2* StaticGet_zeroVector()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("UnityEngine", "Vector2")->GetStaticField(0x4BB8);
		}

		// static const ::System::Object kEpsilon; // 0x0
		// static const ::System::Object kEpsilonNormalSqrt; // 0x0
		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_CCTOR_OFFSET))();
		}

		::System::Single get_Item(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Set(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SET_OFFSET))(this, a1, a2);
		}

		/*
		static ::UnityEngine::Vector2 Lerp(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_LERP_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::UnityEngine::Vector2 LerpUnclamped(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_LERPUNCLAMPED_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::UnityEngine::Vector2 MoveTowards(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_MOVETOWARDS_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::UnityEngine::Vector2 Scale(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SCALE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Void Scale_1(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SCALE_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Normalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_NORMALIZE_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector2 get_normalized()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_NORMALIZED_OFFSET))(this);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		/*
		static ::UnityEngine::Vector2 Reflect(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_REFLECT_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Vector2 Perpendicular(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_PERPENDICULAR_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Single Dot(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_DOT_OFFSET))(a1, a2);
		}
		*/

		::System::Single get_magnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_MAGNITUDE_OFFSET))(this);
		}

		::System::Single get_sqrMagnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		/*
		static ::System::Single Angle(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_ANGLE_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single SignedAngle(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SIGNEDANGLE_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single Distance(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_DISTANCE_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Vector2 ClampMagnitude(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_CLAMPMAGNITUDE_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single SqrMagnitude(::UnityEngine::Vector2 a1)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SQRMAGNITUDE_OFFSET))(a1);
		}
		*/

		::System::Single SqrMagnitude_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SQRMAGNITUDE_1_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Vector2 Min(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_MIN_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Vector2 Max(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_MAX_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Vector2 SmoothDamp(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SMOOTHDAMP_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::UnityEngine::Vector2 SmoothDamp_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SMOOTHDAMP_1_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::UnityEngine::Vector2 SmoothDamp_2(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SMOOTHDAMP_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_Addition(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_ADDITION_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_Subtraction(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_SUBTRACTION_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_Multiply(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_MULTIPLY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_Division(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_DIVISION_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_UnaryNegation(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_UNARYNEGATION_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_Multiply_1(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_MULTIPLY_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_Multiply_2(::System::Single a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_MULTIPLY_2_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_Division_1(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_DIVISION_1_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_Implicit(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Vector3 op_Implicit_1(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_IMPLICIT_1_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Vector2 get_zero()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_ZERO_OFFSET))();
		}
		*/

		/*
		static ::UnityEngine::Vector2 get_one()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_ONE_OFFSET))();
		}
		*/

		/*
		static ::UnityEngine::Vector2 get_up()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_UP_OFFSET))();
		}
		*/

		/*
		static ::UnityEngine::Vector2 get_down()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_DOWN_OFFSET))();
		}
		*/

		/*
		static ::UnityEngine::Vector2 get_left()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_LEFT_OFFSET))();
		}
		*/

		/*
		static ::UnityEngine::Vector2 get_right()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_RIGHT_OFFSET))();
		}
		*/

		/*
		static ::UnityEngine::Vector2 get_positiveInfinity()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_POSITIVEINFINITY_OFFSET))();
		}
		*/

		/*
		static ::UnityEngine::Vector2 get_negativeInfinity()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_NEGATIVEINFINITY_OFFSET))();
		}
		*/

	};
}
