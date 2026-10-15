#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/BigInteger_B63D07FB4865BEA1_Sign.h"
#include "unitysdk/System/Object.h"
namespace Mono::Math { class BigInteger; }
namespace Mono::Math { class BigInteger_B63D07FB4865BEA1; }

#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_COMPARE_OFFSET UNITYSDK_OFFSET(0x1C023920)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_DWORDDIVMOD_OFFSET UNITYSDK_OFFSET(0x1C027310)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_DWORDMOD_OFFSET UNITYSDK_OFFSET(0x1C023DE0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1C024BF0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_MINUSEQ_OFFSET UNITYSDK_OFFSET(0x1C026FA0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_MODINVERSE_1_OFFSET UNITYSDK_OFFSET(0x1C0263B0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_MODINVERSE_OFFSET UNITYSDK_OFFSET(0x1C0276E0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_MULTIBYTEDIVIDE_OFFSET UNITYSDK_OFFSET(0x1C023EA0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_MULTIPLYMOD2P32PMOD_OFFSET UNITYSDK_OFFSET(0x1C0275E0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1C024AF0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_PLUSEQ_OFFSET UNITYSDK_OFFSET(0x1C0270F0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x1C024E80)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_SINGLEBYTEDIVIDEINPLACE_OFFSET UNITYSDK_OFFSET(0x1C025FA0)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1C023A90)

namespace Mono::Math
{
	class BigInteger_B63D07FB4865BEA1_Kernel : public ::System::Object
	{
	public:
		static ::Mono::Math::BigInteger_B63D07FB4865BEA1* Subtract(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_SUBTRACT_OFFSET))(a1, a2);
		}

		static ::System::Void MinusEq(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::System::Void(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_MINUSEQ_OFFSET))(a1, a2);
		}

		static ::System::Void PlusEq(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::System::Void(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_PLUSEQ_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger_B63D07FB4865BEA1_Sign Compare(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1_Sign(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_COMPARE_OFFSET))(a1, a2);
		}

		static ::System::UInt32 SingleByteDivideInPlace(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_SINGLEBYTEDIVIDEINPLACE_OFFSET))(a1, a2);
		}

		static ::System::UInt32 DwordMod(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_DWORDMOD_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::Mono::Math::BigInteger*>* DwordDivMod(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::Mono::Math::BigInteger*>*(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_DWORDDIVMOD_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::Mono::Math::BigInteger*>* multiByteDivide(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::Il2CppArray<::Mono::Math::BigInteger*>*(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_MULTIBYTEDIVIDE_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger_B63D07FB4865BEA1* LeftShift(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::System::Int32 a2)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_LEFTSHIFT_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger_B63D07FB4865BEA1* RightShift(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::System::Int32 a2)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_RIGHTSHIFT_OFFSET))(a1, a2);
		}

		static ::System::Void Multiply(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Il2CppArray<::System::UInt32>* a4, ::System::UInt32 a5, ::System::UInt32 a6, ::Il2CppArray<::System::UInt32>* a7, ::System::UInt32 a8)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_MULTIPLY_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void MultiplyMod2p32pmod(::Il2CppArray<::System::UInt32>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::UInt32>* a4, ::System::Int32 a5, ::System::Int32 a6, ::Il2CppArray<::System::UInt32>* a7, ::System::Int32 a8, ::System::Int32 a9)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_MULTIPLYMOD2P32PMOD_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::UInt32 modInverse(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_MODINVERSE_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger_B63D07FB4865BEA1* modInverse_1(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_KERNEL_MODINVERSE_1_OFFSET))(a1, a2);
		}

	};
}
