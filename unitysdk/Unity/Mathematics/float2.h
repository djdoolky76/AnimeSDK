#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class EAE43032A3C5FAE8;
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_FLOAT2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x4027310)
#define UNITY_MATHEMATICS_FLOAT2_EQUALS_OFFSET UNITYSDK_OFFSET(0x4027340)
#define UNITY_MATHEMATICS_FLOAT2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x40273E0)
#define UNITY_MATHEMATICS_FLOAT2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x4027580)
#define UNITY_MATHEMATICS_FLOAT2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x40275C0)
#define UNITY_MATHEMATICS_FLOAT2_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x4027610)
#define UNITY_MATHEMATICS_FLOAT2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x40275E0)
#define UNITY_MATHEMATICS_FLOAT2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x4027640)
#define UNITY_MATHEMATICS_FLOAT2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x4027460)
#define UNITY_MATHEMATICS_FLOAT2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x40274F0)
#define UNITY_MATHEMATICS_FLOAT2__CTOR_OFFSET UNITYSDK_OFFSET(0x2748A90)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int float2_TypeDefinitionIndex = 21255;

	struct alignas(4) float2
	{
		static ::Unity::Mathematics::float2* StaticGet_zero()
		{
			return (::Unity::Mathematics::float2*)Il2CppClass::FromTypeDefinitionIndex(float2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Single x; // 0x10
		::System::Single y; // 0x14

		::System::Void _ctor(::System::Single BB8C609F76620E45, ::System::Single A0A0D02932F12CFD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2__CTOR_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_TOSTRING_OFFSET))(this);
		}

		/*
		static ::Unity::Mathematics::float2 op_Addition(::Unity::Mathematics::float2 B689A73377154515, ::Unity::Mathematics::float2 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::float2(*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_OP_ADDITION_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		/*
		static ::Unity::Mathematics::float2 op_Multiply(::Unity::Mathematics::float2 B689A73377154515, ::System::Single F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::float2(*)(::Unity::Mathematics::float2, ::System::Single))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_OP_MULTIPLY_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		::System::Boolean Equals(::System::Object* E1B624472530B0E4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_EQUALS_OFFSET))(this, E1B624472530B0E4);
		}

		/*
		static ::Unity::Mathematics::float2 op_Multiply_1(::System::Single B689A73377154515, ::Unity::Mathematics::float2 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::float2(*)(::System::Single, ::Unity::Mathematics::float2))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_OP_MULTIPLY_1_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		/*
		::System::Boolean Equals_1(::Unity::Mathematics::float2 F2B1B9B0CD5BC286)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Mathematics::float2))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_EQUALS_1_OFFSET))(this, F2B1B9B0CD5BC286);
		}
		*/

		/*
		static ::UnityEngine::Vector2 op_Implicit(::Unity::Mathematics::float2 F5006C45C2B93A1C)
		{
			return ((::UnityEngine::Vector2(*)(::Unity::Mathematics::float2))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_OP_IMPLICIT_OFFSET))(F5006C45C2B93A1C);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* F1B74DA73881CF9B, ::EAE43032A3C5FAE8* F8DAD9E0E63F5FE9)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::EAE43032A3C5FAE8*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_TOSTRING_1_OFFSET))(this, F1B74DA73881CF9B, F8DAD9E0E63F5FE9);
		}

		/*
		static ::Unity::Mathematics::float2 op_Subtraction(::Unity::Mathematics::float2 B689A73377154515, ::Unity::Mathematics::float2 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::float2(*)(::Unity::Mathematics::float2, ::Unity::Mathematics::float2))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_FLOAT2_OP_SUBTRACTION_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/
	};
}
