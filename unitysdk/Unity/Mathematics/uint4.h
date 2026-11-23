#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class EAE43032A3C5FAE8;
namespace System { class Object; }
namespace System { class String; }

#define UNITY_MATHEMATICS_UINT4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x244F2C0)
#define UNITY_MATHEMATICS_UINT4_EQUALS_OFFSET UNITYSDK_OFFSET(0x402E610)
#define UNITY_MATHEMATICS_UINT4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x402E6C0)
#define UNITY_MATHEMATICS_UINT4_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x402EBC0)
#define UNITY_MATHEMATICS_UINT4_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x402EBF0)
#define UNITY_MATHEMATICS_UINT4_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x402EC20)
#define UNITY_MATHEMATICS_UINT4_OP_EXCLUSIVEOR_OFFSET UNITYSDK_OFFSET(0x402EC50)
#define UNITY_MATHEMATICS_UINT4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x402EC80)
#define UNITY_MATHEMATICS_UINT4_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x402ECB0)
#define UNITY_MATHEMATICS_UINT4_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x402E960)
#define UNITY_MATHEMATICS_UINT4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x402E710)
#define UNITY_MATHEMATICS_UINT4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x402EBB0)
#define UNITY_MATHEMATICS_UINT4__CTOR_OFFSET UNITYSDK_OFFSET(0x21F6330)

namespace Unity::Mathematics
{
	inline static constexpr unsigned int uint4_TypeDefinitionIndex = 21248;

	struct alignas(4) uint4
	{
		::System::UInt32 x; // 0x10
		::System::UInt32 y; // 0x14
		::System::UInt32 z; // 0x18
		::System::UInt32 w; // 0x1C

		/*
		static ::Unity::Mathematics::uint4 op_OnesComplement(::Unity::Mathematics::uint4 E6A305882BEE348D)
		{
			return ((::Unity::Mathematics::uint4(*)(::Unity::Mathematics::uint4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_OP_ONESCOMPLEMENT_OFFSET))(E6A305882BEE348D);
		}
		*/

		::System::String* ToString(::System::String* F1B74DA73881CF9B, ::EAE43032A3C5FAE8* F8DAD9E0E63F5FE9)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::EAE43032A3C5FAE8*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_TOSTRING_OFFSET))(this, F1B74DA73881CF9B, F8DAD9E0E63F5FE9);
		}

		::System::Boolean Equals(::System::Object* E1B624472530B0E4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_EQUALS_OFFSET))(this, E1B624472530B0E4);
		}

		/*
		static ::Unity::Mathematics::uint4 op_Addition(::Unity::Mathematics::uint4 B689A73377154515, ::Unity::Mathematics::uint4 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::uint4(*)(::Unity::Mathematics::uint4, ::Unity::Mathematics::uint4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_OP_ADDITION_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		::System::Void _ctor(::System::UInt32 BB8C609F76620E45, ::System::UInt32 A0A0D02932F12CFD, ::System::UInt32 EFD6B3862CDDD176, ::System::UInt32 B5F62894A37965D9)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4__CTOR_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD, EFD6B3862CDDD176, B5F62894A37965D9);
		}

		/*
		static ::Unity::Mathematics::uint4 op_Multiply(::Unity::Mathematics::uint4 B689A73377154515, ::Unity::Mathematics::uint4 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::uint4(*)(::Unity::Mathematics::uint4, ::Unity::Mathematics::uint4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_OP_MULTIPLY_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		::System::Void _ctor_1(::System::Int32 F5006C45C2B93A1C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4__CTOR_1_OFFSET))(this, F5006C45C2B93A1C);
		}

		::System::String* ToString_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_TOSTRING_1_OFFSET))(this);
		}

		/*
		::System::Boolean Equals_1(::Unity::Mathematics::uint4 F2B1B9B0CD5BC286)
		{
			return ((::System::Boolean(*)(::PVOID, ::Unity::Mathematics::uint4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_EQUALS_1_OFFSET))(this, F2B1B9B0CD5BC286);
		}
		*/

		/*
		static ::Unity::Mathematics::uint4 op_BitwiseAnd(::Unity::Mathematics::uint4 B689A73377154515, ::Unity::Mathematics::uint4 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::uint4(*)(::Unity::Mathematics::uint4, ::Unity::Mathematics::uint4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_OP_BITWISEAND_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::Unity::Mathematics::uint4 op_BitwiseOr(::Unity::Mathematics::uint4 B689A73377154515, ::Unity::Mathematics::uint4 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::uint4(*)(::Unity::Mathematics::uint4, ::Unity::Mathematics::uint4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_OP_BITWISEOR_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/

		/*
		static ::Unity::Mathematics::uint4 op_ExclusiveOr(::Unity::Mathematics::uint4 B689A73377154515, ::Unity::Mathematics::uint4 F2B1B9B0CD5BC286)
		{
			return ((::Unity::Mathematics::uint4(*)(::Unity::Mathematics::uint4, ::Unity::Mathematics::uint4))((::PBYTE)hIl2Cpp + UNITY_MATHEMATICS_UINT4_OP_EXCLUSIVEOR_OFFSET))(B689A73377154515, F2B1B9B0CD5BC286);
		}
		*/
	};
}
