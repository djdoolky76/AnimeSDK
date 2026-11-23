#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class EAE43032A3C5FAE8;
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_UINT2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x402E120)
#define UNITY_MATHEMATICS_UINT2_EQUALS_OFFSET UNITYSDK_OFFSET(0x402E140)
#define UNITY_MATHEMATICS_UINT2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x402E1D0)
#define UNITY_MATHEMATICS_UINT2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x402E340)
#define UNITY_MATHEMATICS_UINT2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x402E360)
#define UNITY_MATHEMATICS_UINT2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x402E2B0)
#define UNITY_MATHEMATICS_UINT2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x402E220)
#define UNITY_MATHEMATICS_UINT2__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCB750)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int uint2_TypeDefinitionIndex = 21249;

	struct alignas(4) uint2
	{
		::System::UInt32 x; // 0x10
		::System::UInt32 y; // 0x14

		/*
		static ::Unity::Mathematics::uint2 op_Addition(::Unity::Mathematics::uint2 B689A73377154515, ::Unity::Mathematics::uint2 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::uint2(*)(::Unity::Mathematics::uint2, ::Unity::Mathematics::uint2))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_OP_ADDITION_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		::System::Boolean Equals(::System::Object* E1B624472530B0E4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_EQUALS_OFFSET))(this, E1B624472530B0E4);
		}

		::System::Void _ctor(::System::UInt32 BB8C609F76620E45, ::System::UInt32 A0A0D02932F12CFD)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2__CTOR_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
		}

		::System::String* ToString(::System::String* F1B74DA73881CF9B, ::EAE43032A3C5FAE8* F8DAD9E0E63F5FE9)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::EAE43032A3C5FAE8*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_TOSTRING_OFFSET))(this, F1B74DA73881CF9B, F8DAD9E0E63F5FE9);
		}

		/*
		::System::Boolean Equals_1(::Unity::Mathematics::uint2 F2B1B9B0CD5BC286)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Mathematics::uint2))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_EQUALS_1_OFFSET))(this, F2B1B9B0CD5BC286);
		}
		*/

		/*
		static ::Unity::Mathematics::uint2 op_Multiply(::Unity::Mathematics::uint2 B689A73377154515, ::Unity::Mathematics::uint2 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::uint2(*)(::Unity::Mathematics::uint2, ::Unity::Mathematics::uint2))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_OP_MULTIPLY_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT2_TOSTRING_1_OFFSET))(this);
		}
	};
}
