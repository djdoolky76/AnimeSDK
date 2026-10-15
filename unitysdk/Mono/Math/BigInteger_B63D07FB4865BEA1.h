#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/BigInteger_B63D07FB4865BEA1_Sign.h"
#include "unitysdk/System/Object.h"
namespace Mono::Math { class BigInteger_B63D07FB4865BEA1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_BITCOUNT_OFFSET UNITYSDK_OFFSET(0x1BFF6CD0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFF8790)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BFF47E0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BFF48F0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BFF49A0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_CTOR_4_OFFSET UNITYSDK_OFFSET(0x1BFF4C70)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFF47B0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BFF7AA0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_GENERATEPSEUDOPRIME_OFFSET UNITYSDK_OFFSET(0x1BFF85B0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_GENERATERANDOM_1_OFFSET UNITYSDK_OFFSET(0x1BFF6C70)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_GENERATERANDOM_OFFSET UNITYSDK_OFFSET(0x1BFF6AE0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1BFF6FA0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BFF7900)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_GET_RNG_OFFSET UNITYSDK_OFFSET(0x1BFF69F0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_INCR2_OFFSET UNITYSDK_OFFSET(0x1BFF8720)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_LOWESTSETBIT_OFFSET UNITYSDK_OFFSET(0x1BFF6F10)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_MODINVERSE_OFFSET UNITYSDK_OFFSET(0x1BFF7C20)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1BFF4C10)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1BFF5FE0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1BFF72D0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BFF50F0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1BFF7450)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1BFF7410)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1BFF4D40)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BFF4CC0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1BFF7370)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1BFF7220)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1BFF6460)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1BFF7470)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1BFF7430)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_MODULUS_1_OFFSET UNITYSDK_OFFSET(0x1BFF56F0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x1BFF5540)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1BFF6000)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x1BFF66F0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1BFF4DF0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_SETBIT_1_OFFSET UNITYSDK_OFFSET(0x1BFF6EA0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_SETBIT_OFFSET UNITYSDK_OFFSET(0x1BFF6E50)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_TESTBIT_OFFSET UNITYSDK_OFFSET(0x1BFF6DC0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1BFF74D0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1BFF7A60)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BFF7490)

namespace Mono::Math
{
	inline static constexpr unsigned int BigInteger_B63D07FB4865BEA1_TypeDefinitionIndex = 2314;

	class BigInteger_B63D07FB4865BEA1 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* data; // 0x10
		::System::UInt32 length; // 0x18
		static ::Il2CppArray<::System::UInt32>** StaticGet_smallPrimes()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("Mono.Math", "BigInteger")->GetStaticField(0x24DA0);
		}

		static ::System::Security::Cryptography::RandomNumberGenerator** StaticGet_rng()
		{
			return (::System::Security::Cryptography::RandomNumberGenerator**)UnitySDK::FromName("Mono.Math", "BigInteger")->GetStaticField(0x24DA8);
		}

		::System::Void _ctor(::Mono::Math::BigInteger_B63D07FB4865BEA1_Sign a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger_B63D07FB4865BEA1_Sign, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_CTOR_4_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_CCTOR_OFFSET))();
		}

		static ::Mono::Math::BigInteger_B63D07FB4865BEA1* op_Implicit(::System::UInt32 a1)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::Mono::Math::BigInteger_B63D07FB4865BEA1* op_Implicit_1(::System::Int32 a1)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::Mono::Math::BigInteger_B63D07FB4865BEA1* op_Subtraction(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::System::UInt32 op_Modulus(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_MODULUS_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger_B63D07FB4865BEA1* op_Modulus_1(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_MODULUS_1_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger_B63D07FB4865BEA1* op_Division(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_DIVISION_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger_B63D07FB4865BEA1* op_Multiply(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger_B63D07FB4865BEA1* op_LeftShift(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::System::Int32 a2)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_LEFTSHIFT_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger_B63D07FB4865BEA1* op_RightShift(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::System::Int32 a2)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_RIGHTSHIFT_OFFSET))(a1, a2);
		}

		static ::System::Security::Cryptography::RandomNumberGenerator* get_Rng()
		{
			return ((::System::Security::Cryptography::RandomNumberGenerator*(*)())((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_GET_RNG_OFFSET))();
		}

		static ::Mono::Math::BigInteger_B63D07FB4865BEA1* GenerateRandom(::System::Int32 a1, ::System::Security::Cryptography::RandomNumberGenerator* a2)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::System::Int32, ::System::Security::Cryptography::RandomNumberGenerator*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_GENERATERANDOM_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger_B63D07FB4865BEA1* GenerateRandom_1(::System::Int32 a1)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_GENERATERANDOM_1_OFFSET))(a1);
		}

		::System::Int32 BitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_BITCOUNT_OFFSET))(this);
		}

		::System::Boolean TestBit(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_TESTBIT_OFFSET))(this, a1);
		}

		::System::Void SetBit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_SETBIT_OFFSET))(this, a1);
		}

		::System::Void SetBit_1(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_SETBIT_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 LowestSetBit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_LOWESTSETBIT_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_GETBYTES_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality_1(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_EQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality_1(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_INEQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}

		::System::String* ToString(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_TOSTRING_OFFSET))(this, a1);
		}

		::System::String* ToString_1(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_TOSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::Void Normalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_NORMALIZE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_TOSTRING_2_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_EQUALS_OFFSET))(this, a1);
		}

		::Mono::Math::BigInteger_B63D07FB4865BEA1* ModInverse(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::PVOID, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_MODINVERSE_OFFSET))(this, a1);
		}

		static ::Mono::Math::BigInteger_B63D07FB4865BEA1* GeneratePseudoPrime(::System::Int32 a1)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_GENERATEPSEUDOPRIME_OFFSET))(a1);
		}

		::System::Void Incr2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_INCR2_OFFSET))(this);
		}

	};
}
