#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class EAE43032A3C5FAE8;
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_UINT3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x402E380)
#define UNITY_MATHEMATICS_UINT3_EQUALS_OFFSET UNITYSDK_OFFSET(0x402E430)
#define UNITY_MATHEMATICS_UINT3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x402B970)
#define UNITY_MATHEMATICS_UINT3_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x402E5C0)
#define UNITY_MATHEMATICS_UINT3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x402E5E0)
#define UNITY_MATHEMATICS_UINT3_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x402E510)
#define UNITY_MATHEMATICS_UINT3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x402E450)
#define UNITY_MATHEMATICS_UINT3__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE75B0)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int uint3_TypeDefinitionIndex = 21252;

	struct alignas(4) uint3
	{
		::System::UInt32 x; // 0x10
		::System::UInt32 y; // 0x14
		::System::UInt32 z; // 0x18

		::System::Void _ctor(::System::UInt32 BB8C609F76620E45, ::System::UInt32 A0A0D02932F12CFD, ::System::UInt32 EFD6B3862CDDD176)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3__CTOR_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD, EFD6B3862CDDD176);
		}

		/*
		::System::Boolean Equals(::Unity::Mathematics::uint3 F2B1B9B0CD5BC286)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Mathematics::uint3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_EQUALS_OFFSET))(this, F2B1B9B0CD5BC286);
		}
		*/

		/*
		static ::Unity::Mathematics::uint3 op_Multiply(::Unity::Mathematics::uint3 B689A73377154515, ::Unity::Mathematics::uint3 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::uint3(*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_OP_MULTIPLY_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		::System::String* ToString(::System::String* F1B74DA73881CF9B, ::EAE43032A3C5FAE8* F8DAD9E0E63F5FE9)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::EAE43032A3C5FAE8*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_TOSTRING_OFFSET))(this, F1B74DA73881CF9B, F8DAD9E0E63F5FE9);
		}

		/*
		static ::Unity::Mathematics::uint3 op_Addition(::Unity::Mathematics::uint3 B689A73377154515, ::Unity::Mathematics::uint3 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::uint3(*)(::Unity::Mathematics::uint3, ::Unity::Mathematics::uint3))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_OP_ADDITION_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		::System::String* ToString_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_TOSTRING_1_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* E1B624472530B0E4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT3_EQUALS_1_OFFSET))(this, E1B624472530B0E4);
		}
	};
}
