#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EAE43032A3C5FAE8;
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_FLOAT3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x4027DC0)
#define UNITY_MATHEMATICS_FLOAT3_EQUALS_OFFSET UNITYSDK_OFFSET(0x4027D90)
#define UNITY_MATHEMATICS_FLOAT3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x4027E70)
#define UNITY_MATHEMATICS_FLOAT3_GET_YZX_OFFSET UNITYSDK_OFFSET(0x4028050)
#define UNITY_MATHEMATICS_FLOAT3_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x4028070)
#define UNITY_MATHEMATICS_FLOAT3_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x40280B0)
#define UNITY_MATHEMATICS_FLOAT3_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x4028100)
#define UNITY_MATHEMATICS_FLOAT3_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x4028100)
#define UNITY_MATHEMATICS_FLOAT3_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x40280E0)
#define UNITY_MATHEMATICS_FLOAT3_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x4028190)
#define UNITY_MATHEMATICS_FLOAT3_OP_MULTIPLY_2_OFFSET UNITYSDK_OFFSET(0x4028120)
#define UNITY_MATHEMATICS_FLOAT3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x4028160)
#define UNITY_MATHEMATICS_FLOAT3_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x40281C0)
#define UNITY_MATHEMATICS_FLOAT3_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x4028200)
#define UNITY_MATHEMATICS_FLOAT3_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x4027F70)
#define UNITY_MATHEMATICS_FLOAT3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4027EB0)
#define UNITY_MATHEMATICS_FLOAT3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x254E7D0)
#define UNITY_MATHEMATICS_FLOAT3__CTOR_2_OFFSET UNITYSDK_OFFSET(0x4028030)
#define UNITY_MATHEMATICS_FLOAT3__CTOR_OFFSET UNITYSDK_OFFSET(0x4028040)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int float3_TypeDefinitionIndex = 21256;

	struct alignas(4) float3
	{
		static ::Unity::Mathematics::float3* StaticGet_zero()
		{
			return (::Unity::Mathematics::float3*)Il2CppClass::FromTypeDefinitionIndex(float3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18

		/*
		::Unity::Mathematics::float3 get_yzx()
		{
			return ((::Unity::Mathematics::float3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_GET_YZX_OFFSET))(this);
		}
		*/

		/*
		::System::Boolean Equals(::Unity::Mathematics::float3 F2B1B9B0CD5BC286)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_EQUALS_OFFSET))(this, F2B1B9B0CD5BC286);
		}
		*/

		::System::Void _ctor(::System::Single BB8C609F76620E45, ::System::Single A0A0D02932F12CFD, ::System::Single EFD6B3862CDDD176)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3__CTOR_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD, EFD6B3862CDDD176);
		}

		/*
		static ::Unity::Mathematics::float3 op_Addition(::Unity::Mathematics::float3 B689A73377154515, ::Unity::Mathematics::float3 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_ADDITION_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::Unity::Mathematics::float3 op_Implicit(::System::Single F5006C45C2B93A1C)
		{
			return ((::Unity::Mathematics::float3(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_IMPLICIT_OFFSET))(F5006C45C2B93A1C);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_TOSTRING_OFFSET))(this);
		}

		/*
		static ::Unity::Mathematics::float3 op_UnaryNegation(::Unity::Mathematics::float3 E6A305882BEE348D)
		{
			return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_UNARYNEGATION_OFFSET))(E6A305882BEE348D);
		}
		*/

		/*
		static ::Unity::Mathematics::float3 op_Implicit_1(::UnityEngine::Vector3 F5006C45C2B93A1C)
		{
			return ((::Unity::Mathematics::float3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_IMPLICIT_1_OFFSET))(F5006C45C2B93A1C);
		}
		*/

		/*
		static ::Unity::Mathematics::float3 op_Division(::Unity::Mathematics::float3 B689A73377154515, ::System::Single F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float3, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_DIVISION_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		/*
		static ::Unity::Mathematics::float3 op_Multiply(::System::Single B689A73377154515, ::Unity::Mathematics::float3 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::float3(*)(::System::Single, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_MULTIPLY_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		/*
		static ::Unity::Mathematics::float3 op_Multiply_1(::Unity::Mathematics::float3 B689A73377154515, ::System::Single F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float3, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_MULTIPLY_1_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		/*
		::System::Void _ctor_1(::Unity::Mathematics::float3 E5F02EB18FBA8F8F)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3__CTOR_1_OFFSET))(this, E5F02EB18FBA8F8F);
		}
		*/

		::System::Boolean Equals_1(::System::Object* E1B624472530B0E4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_EQUALS_1_OFFSET))(this, E1B624472530B0E4);
		}

		/*
		static ::Unity::Mathematics::float3 op_Multiply_2(::Unity::Mathematics::float3 B689A73377154515, ::Unity::Mathematics::float3 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_MULTIPLY_2_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		/*
		static ::Unity::Mathematics::float3 op_Subtraction(::Unity::Mathematics::float3 B689A73377154515, ::Unity::Mathematics::float3 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::float3(*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_SUBTRACTION_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		::System::Void _ctor_2(::System::Single F5006C45C2B93A1C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3__CTOR_2_OFFSET))(this, F5006C45C2B93A1C);
		}

		/*
		static ::UnityEngine::Vector3 op_Implicit_2(::Unity::Mathematics::float3 F5006C45C2B93A1C)
		{
			return ((::UnityEngine::Vector3(*)(::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_OP_IMPLICIT_2_OFFSET))(F5006C45C2B93A1C);
		}
		*/

		::System::String* ToString_1(::System::String* F1B74DA73881CF9B, ::EAE43032A3C5FAE8* F8DAD9E0E63F5FE9)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::EAE43032A3C5FAE8*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT3_TOSTRING_1_OFFSET))(this, F1B74DA73881CF9B, F8DAD9E0E63F5FE9);
		}
	};
}
