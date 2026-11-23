#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EAE43032A3C5FAE8;
namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_VECTOR2_ANGLE_OFFSET UNITYSDK_OFFSET(0x41762E0)
#define UNITYENGINE_VECTOR2_CLAMPMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x4176440)
#define UNITYENGINE_VECTOR2_DISTANCE_OFFSET UNITYSDK_OFFSET(0x4176540)
#define UNITYENGINE_VECTOR2_DOT_OFFSET UNITYSDK_OFFSET(0x41765F0)
#define UNITYENGINE_VECTOR2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x4176620)
#define UNITYENGINE_VECTOR2_EQUALS_OFFSET UNITYSDK_OFFSET(0x4027310)
#define UNITYENGINE_VECTOR2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x41766C0)
#define UNITYENGINE_VECTOR2_GET_DOWN_OFFSET UNITYSDK_OFFSET(0x41773B0)
#define UNITYENGINE_VECTOR2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x4177330)
#define UNITYENGINE_VECTOR2_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x4177400)
#define UNITYENGINE_VECTOR2_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x4177450)
#define UNITYENGINE_VECTOR2_GET_NEGATIVEINFINITY_OFFSET UNITYSDK_OFFSET(0x4177500)
#define UNITYENGINE_VECTOR2_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x4177550)
#define UNITYENGINE_VECTOR2_GET_ONE_OFFSET UNITYSDK_OFFSET(0x4177630)
#define UNITYENGINE_VECTOR2_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x4177680)
#define UNITYENGINE_VECTOR2_GET_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x41776D0)
#define UNITYENGINE_VECTOR2_GET_UP_OFFSET UNITYSDK_OFFSET(0x41776F0)
#define UNITYENGINE_VECTOR2_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x4177740)
#define UNITYENGINE_VECTOR2_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x4176700)
#define UNITYENGINE_VECTOR2_LERP_OFFSET UNITYSDK_OFFSET(0x4176750)
#define UNITYENGINE_VECTOR2_MAX_OFFSET UNITYSDK_OFFSET(0x41767C0)
#define UNITYENGINE_VECTOR2_MIN_OFFSET UNITYSDK_OFFSET(0x4176800)
#define UNITYENGINE_VECTOR2_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x4176840)
#define UNITYENGINE_VECTOR2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x4027580)
#define UNITYENGINE_VECTOR2_OP_DIVISION_1_OFFSET UNITYSDK_OFFSET(0x41777C0)
#define UNITYENGINE_VECTOR2_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x4177790)
#define UNITYENGINE_VECTOR2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x4177800)
#define UNITYENGINE_VECTOR2_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x4117970)
#define UNITYENGINE_VECTOR2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x4177850)
#define UNITYENGINE_VECTOR2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x4177880)
#define UNITYENGINE_VECTOR2_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x40275E0)
#define UNITYENGINE_VECTOR2_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x4027610)
#define UNITYENGINE_VECTOR2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x4176950)
#define UNITYENGINE_VECTOR2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x4027640)
#define UNITYENGINE_VECTOR2_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x41778D0)
#define UNITYENGINE_VECTOR2_SCALE_OFFSET UNITYSDK_OFFSET(0x4176950)
#define UNITYENGINE_VECTOR2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x4177900)
#define UNITYENGINE_VECTOR2_SET_OFFSET UNITYSDK_OFFSET(0x2748A90)
#define UNITYENGINE_VECTOR2_SIGNEDANGLE_OFFSET UNITYSDK_OFFSET(0x4176990)
#define UNITYENGINE_VECTOR2_SMOOTHDAMP_1_OFFSET UNITYSDK_OFFSET(0x4176B50)
#define UNITYENGINE_VECTOR2_SMOOTHDAMP_OFFSET UNITYSDK_OFFSET(0x4176BD0)
#define UNITYENGINE_VECTOR2_SQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x4176E80)
#define UNITYENGINE_VECTOR2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x4177070)
#define UNITYENGINE_VECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4176EA0)
#define UNITYENGINE_VECTOR2__CCTOR_OFFSET UNITYSDK_OFFSET(0x4177250)
#define UNITYENGINE_VECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x2748A90)

namespace UnityEngine
{
	inline static constexpr unsigned int Vector2_TypeDefinitionIndex = 17454;

	struct alignas(4) Vector2
	{
		static ::UnityEngine::Vector2* StaticGet_zeroVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::UnityEngine::Vector2* StaticGet_oneVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::UnityEngine::Vector2* StaticGet_upVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::UnityEngine::Vector2* StaticGet_downVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::UnityEngine::Vector2* StaticGet_leftVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::UnityEngine::Vector2* StaticGet_rightVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x28);
		}
		static ::UnityEngine::Vector2* StaticGet_positiveInfinityVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x30);
		}
		static ::UnityEngine::Vector2* StaticGet_negativeInfinityVector()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x38);
		}
		::System::Single x; // 0x10
		::System::Single y; // 0x14

		/*
		static ::UnityEngine::Vector2 get_zero()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_ZERO_OFFSET))();
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_Multiply(::UnityEngine::Vector2 B35BBBE7E39341A2, ::UnityEngine::Vector2 AE40CAA6BBFEAD2C)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_MULTIPLY_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
		}
		*/

		/*
		static ::UnityEngine::Vector2 SmoothDamp(::UnityEngine::Vector2 A0973CE93A72DED1, ::UnityEngine::Vector2 F249A74E7BFBE1A7, ::UnityEngine::Vector2& E6B6DE85A9CF0A19, ::System::Single AA3C2110D4C43D32, ::System::Single EA8C49437BBE6303, ::System::Single EB5670302F34D4B7)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SMOOTHDAMP_OFFSET))(A0973CE93A72DED1, F249A74E7BFBE1A7, E6B6DE85A9CF0A19, AA3C2110D4C43D32, EA8C49437BBE6303, EB5670302F34D4B7);
		}
		*/

		/*
		::System::Boolean Equals(::UnityEngine::Vector2 BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_EQUALS_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		/*
		static ::UnityEngine::Vector2 get_right()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_RIGHT_OFFSET))();
		}
		*/

		/*
		static ::System::Single SqrMagnitude(::UnityEngine::Vector2 B35BBBE7E39341A2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SQRMAGNITUDE_OFFSET))(B35BBBE7E39341A2);
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_Division(::UnityEngine::Vector2 B35BBBE7E39341A2, ::System::Single E9CAEB929DE1EB8F)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_DIVISION_OFFSET))(B35BBBE7E39341A2, E9CAEB929DE1EB8F);
		}
		*/

		/*
		static ::UnityEngine::Vector2 get_negativeInfinity()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_NEGATIVEINFINITY_OFFSET))();
		}
		*/

		::System::Single get_magnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_MAGNITUDE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Vector2 LerpUnclamped(::UnityEngine::Vector2 B35BBBE7E39341A2, ::UnityEngine::Vector2 AE40CAA6BBFEAD2C, ::System::Single BBCFEC7DB309E927)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_LERPUNCLAMPED_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C, BBCFEC7DB309E927);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::UnityEngine::Vector2 B689A73377154515, ::UnityEngine::Vector2 F2B1B9B0CD5BC286)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_EQUALITY_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		/*
		::UnityEngine::Vector2 get_normalized()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_NORMALIZED_OFFSET))(this);
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_Multiply_1(::UnityEngine::Vector2 B35BBBE7E39341A2, ::System::Single E9CAEB929DE1EB8F)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_MULTIPLY_1_OFFSET))(B35BBBE7E39341A2, E9CAEB929DE1EB8F);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_EQUALS_1_OFFSET))(this, BEEE7A5A60941632);
		}

		/*
		static ::UnityEngine::Vector2 op_Subtraction(::UnityEngine::Vector2 B35BBBE7E39341A2, ::UnityEngine::Vector2 AE40CAA6BBFEAD2C)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_SUBTRACTION_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
		}
		*/

		/*
		static ::UnityEngine::Vector2 get_down()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_DOWN_OFFSET))();
		}
		*/

		/*
		static ::UnityEngine::Vector2 get_up()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_UP_OFFSET))();
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GETHASHCODE_OFFSET))(this);
		}

		::System::Void _ctor(::System::Single BB8C609F76620E45, ::System::Single A0A0D02932F12CFD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2__CTOR_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
		}

		/*
		static ::UnityEngine::Vector2 Scale(::UnityEngine::Vector2 B35BBBE7E39341A2, ::UnityEngine::Vector2 AE40CAA6BBFEAD2C)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SCALE_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
		}
		*/

		/*
		static ::UnityEngine::Vector3 op_Implicit(::UnityEngine::Vector2 F5006C45C2B93A1C)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_IMPLICIT_OFFSET))(F5006C45C2B93A1C);
		}
		*/

		::System::String* ToString_1(::System::String* F1B74DA73881CF9B, ::EAE43032A3C5FAE8* F8DAD9E0E63F5FE9)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::EAE43032A3C5FAE8*))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_TOSTRING_1_OFFSET))(this, F1B74DA73881CF9B, F8DAD9E0E63F5FE9);
		}

		::System::Single get_sqrMagnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_SQRMAGNITUDE_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Vector2 Min(::UnityEngine::Vector2 B689A73377154515, ::UnityEngine::Vector2 F2B1B9B0CD5BC286)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_MIN_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		/*
		static ::UnityEngine::Vector2 SmoothDamp_1(::UnityEngine::Vector2 A0973CE93A72DED1, ::UnityEngine::Vector2 F249A74E7BFBE1A7, ::UnityEngine::Vector2& E6B6DE85A9CF0A19, ::System::Single AA3C2110D4C43D32)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SMOOTHDAMP_1_OFFSET))(A0973CE93A72DED1, F249A74E7BFBE1A7, E6B6DE85A9CF0A19, AA3C2110D4C43D32);
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_Division_1(::UnityEngine::Vector2 B35BBBE7E39341A2, ::UnityEngine::Vector2 AE40CAA6BBFEAD2C)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_DIVISION_1_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
		}
		*/

		/*
		static ::UnityEngine::Vector2 get_one()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_ONE_OFFSET))();
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_Multiply_2(::System::Single E9CAEB929DE1EB8F, ::UnityEngine::Vector2 B35BBBE7E39341A2)
		{
			return ((::UnityEngine::Vector2(*)(::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_MULTIPLY_2_OFFSET))(E9CAEB929DE1EB8F, B35BBBE7E39341A2);
		}
		*/

		::System::Void Set(::System::Single F5897B09C338B938, ::System::Single A3A38457672CBF39)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SET_OFFSET))(this, F5897B09C338B938, A3A38457672CBF39);
		}

		/*
		static ::UnityEngine::Vector2 ClampMagnitude(::UnityEngine::Vector2 EAB6A87D088A15E7, ::System::Single A05F840C1B0AB2C1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_CLAMPMAGNITUDE_OFFSET))(EAB6A87D088A15E7, A05F840C1B0AB2C1);
		}
		*/

		/*
		static ::UnityEngine::Vector2 Max(::UnityEngine::Vector2 B689A73377154515, ::UnityEngine::Vector2 F2B1B9B0CD5BC286)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_MAX_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::UnityEngine::Vector2 B689A73377154515, ::UnityEngine::Vector2 F2B1B9B0CD5BC286)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_INEQUALITY_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		/*
		static ::System::Single Distance(::UnityEngine::Vector2 B35BBBE7E39341A2, ::UnityEngine::Vector2 AE40CAA6BBFEAD2C)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_DISTANCE_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2__CCTOR_OFFSET))();
		}

		/*
		static ::System::Single SignedAngle(::UnityEngine::Vector2 BC546FFFB0A5B7A6, ::UnityEngine::Vector2 A41067CFE0E0FB08)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SIGNEDANGLE_OFFSET))(BC546FFFB0A5B7A6, A41067CFE0E0FB08);
		}
		*/

		::System::Single get_Item(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_ITEM_OFFSET))(this, B48C66E5FB2449C6);
		}

		/*
		static ::UnityEngine::Vector2 op_Implicit_1(::UnityEngine::Vector3 F5006C45C2B93A1C)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_IMPLICIT_1_OFFSET))(F5006C45C2B93A1C);
		}
		*/

		/*
		static ::System::Single Dot(::UnityEngine::Vector2 B689A73377154515, ::UnityEngine::Vector2 F2B1B9B0CD5BC286)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_DOT_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		/*
		static ::System::Single Angle(::UnityEngine::Vector2 BC546FFFB0A5B7A6, ::UnityEngine::Vector2 A41067CFE0E0FB08)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_ANGLE_OFFSET))(BC546FFFB0A5B7A6, A41067CFE0E0FB08);
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_UnaryNegation(::UnityEngine::Vector2 B35BBBE7E39341A2)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_UNARYNEGATION_OFFSET))(B35BBBE7E39341A2);
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_Addition(::UnityEngine::Vector2 B35BBBE7E39341A2, ::UnityEngine::Vector2 AE40CAA6BBFEAD2C)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_OP_ADDITION_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
		}
		*/

		::System::Void Normalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_NORMALIZE_OFFSET))(this);
		}

		::System::Void set_Item(::System::Int32 B48C66E5FB2449C6, ::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_SET_ITEM_OFFSET))(this, B48C66E5FB2449C6, E937D4885DAA1AE8);
		}

		/*
		static ::UnityEngine::Vector2 Lerp(::UnityEngine::Vector2 B35BBBE7E39341A2, ::UnityEngine::Vector2 AE40CAA6BBFEAD2C, ::System::Single BBCFEC7DB309E927)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_LERP_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C, BBCFEC7DB309E927);
		}
		*/

		/*
		static ::UnityEngine::Vector2 get_left()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VECTOR2_GET_LEFT_OFFSET))();
		}
		*/
	};
}
