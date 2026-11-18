#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/BigInteger_195A9C52A7AD8B6F_Sign.h"
#include "unitysdk/System/Object.h"

namespace Mono::Math { class BigInteger; }
namespace Mono::Math { class BigInteger_195A9C52A7AD8B6F; }

#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_ADDSAMESIGN_OFFSET UNITYSDK_OFFSET(0x1F7F6BE0)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_COMPARE_OFFSET UNITYSDK_OFFSET(0x1F7F77C0)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_DWORDDIVMOD_OFFSET UNITYSDK_OFFSET(0x1F7F7D80)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_DWORDDIV_OFFSET UNITYSDK_OFFSET(0x1F7F7BD0)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_DWORDMOD_OFFSET UNITYSDK_OFFSET(0x1F7F7AC0)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_GCD_OFFSET UNITYSDK_OFFSET(0x1F7F95B0)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1F7F8940)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_MINUSEQ_OFFSET UNITYSDK_OFFSET(0x1F7F72F0)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_MODINVERSE_1_OFFSET UNITYSDK_OFFSET(0x1F7F9A40)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_MODINVERSE_OFFSET UNITYSDK_OFFSET(0x1F7F9860)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_MULTIBYTEDIVIDE_OFFSET UNITYSDK_OFFSET(0x1F7F8050)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_MULTIPLYBYDWORD_OFFSET UNITYSDK_OFFSET(0x1F7F8EA0)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_MULTIPLYMOD2P32PMOD_OFFSET UNITYSDK_OFFSET(0x1F7F9170)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1F7F9040)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_PLUSEQ_OFFSET UNITYSDK_OFFSET(0x1F7F7440)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x1F7F8C40)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_SINGLEBYTEDIVIDEINPLACE_OFFSET UNITYSDK_OFFSET(0x1F7F79C0)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_SQUAREPOSITIVE_OFFSET UNITYSDK_OFFSET(0x1F7F92B0)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1F7F6FD0)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7FA5E0)

namespace Mono::Math
{
	inline static constexpr unsigned int BigInteger_195A9C52A7AD8B6F_Kernel_TypeDefinitionIndex = 2482;

	class BigInteger_195A9C52A7AD8B6F_Kernel : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL__CTOR_OFFSET))(this);
		}

		static ::Mono::Math::BigInteger_195A9C52A7AD8B6F* AddSameSign(::Mono::Math::BigInteger_195A9C52A7AD8B6F* bi1, ::Mono::Math::BigInteger_195A9C52A7AD8B6F* bi2)
		{
			return ((::Mono::Math::BigInteger_195A9C52A7AD8B6F*(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_ADDSAMESIGN_OFFSET))(bi1, bi2);
		}

		static ::Mono::Math::BigInteger_195A9C52A7AD8B6F* Subtract(::Mono::Math::BigInteger_195A9C52A7AD8B6F* big, ::Mono::Math::BigInteger_195A9C52A7AD8B6F* small)
		{
			return ((::Mono::Math::BigInteger_195A9C52A7AD8B6F*(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_SUBTRACT_OFFSET))(big, small);
		}

		static ::System::Void MinusEq(::Mono::Math::BigInteger_195A9C52A7AD8B6F* big, ::Mono::Math::BigInteger_195A9C52A7AD8B6F* small)
		{
			return ((::System::Void(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_MINUSEQ_OFFSET))(big, small);
		}

		static ::System::Void PlusEq(::Mono::Math::BigInteger_195A9C52A7AD8B6F* bi1, ::Mono::Math::BigInteger_195A9C52A7AD8B6F* bi2)
		{
			return ((::System::Void(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_PLUSEQ_OFFSET))(bi1, bi2);
		}

		static ::Mono::Math::BigInteger_195A9C52A7AD8B6F_Sign Compare(::Mono::Math::BigInteger_195A9C52A7AD8B6F* bi1, ::Mono::Math::BigInteger_195A9C52A7AD8B6F* bi2)
		{
			return ((::Mono::Math::BigInteger_195A9C52A7AD8B6F_Sign(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_COMPARE_OFFSET))(bi1, bi2);
		}

		static ::System::UInt32 SingleByteDivideInPlace(::Mono::Math::BigInteger_195A9C52A7AD8B6F* n, ::System::UInt32 d)
		{
			return ((::System::UInt32(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_SINGLEBYTEDIVIDEINPLACE_OFFSET))(n, d);
		}

		static ::System::UInt32 DwordMod(::Mono::Math::BigInteger_195A9C52A7AD8B6F* n, ::System::UInt32 d)
		{
			return ((::System::UInt32(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_DWORDMOD_OFFSET))(n, d);
		}

		static ::Mono::Math::BigInteger_195A9C52A7AD8B6F* DwordDiv(::Mono::Math::BigInteger_195A9C52A7AD8B6F* n, ::System::UInt32 d)
		{
			return ((::Mono::Math::BigInteger_195A9C52A7AD8B6F*(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_DWORDDIV_OFFSET))(n, d);
		}

		static ::Il2CppArray<::Mono::Math::BigInteger*>* DwordDivMod(::Mono::Math::BigInteger_195A9C52A7AD8B6F* n, ::System::UInt32 d)
		{
			return ((::Il2CppArray<::Mono::Math::BigInteger*>*(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_DWORDDIVMOD_OFFSET))(n, d);
		}

		static ::Il2CppArray<::Mono::Math::BigInteger*>* multiByteDivide(::Mono::Math::BigInteger_195A9C52A7AD8B6F* bi1, ::Mono::Math::BigInteger_195A9C52A7AD8B6F* bi2)
		{
			return ((::Il2CppArray<::Mono::Math::BigInteger*>*(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_MULTIBYTEDIVIDE_OFFSET))(bi1, bi2);
		}

		static ::Mono::Math::BigInteger_195A9C52A7AD8B6F* LeftShift(::Mono::Math::BigInteger_195A9C52A7AD8B6F* bi, ::System::Int32 n)
		{
			return ((::Mono::Math::BigInteger_195A9C52A7AD8B6F*(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_LEFTSHIFT_OFFSET))(bi, n);
		}

		static ::Mono::Math::BigInteger_195A9C52A7AD8B6F* RightShift(::Mono::Math::BigInteger_195A9C52A7AD8B6F* bi, ::System::Int32 n)
		{
			return ((::Mono::Math::BigInteger_195A9C52A7AD8B6F*(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_RIGHTSHIFT_OFFSET))(bi, n);
		}

		static ::Mono::Math::BigInteger_195A9C52A7AD8B6F* MultiplyByDword(::Mono::Math::BigInteger_195A9C52A7AD8B6F* n, ::System::UInt32 f)
		{
			return ((::Mono::Math::BigInteger_195A9C52A7AD8B6F*(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_MULTIPLYBYDWORD_OFFSET))(n, f);
		}

		static ::System::Void Multiply(::Il2CppArray<::System::UInt32>* x, ::System::UInt32 xOffset, ::System::UInt32 xLen, ::Il2CppArray<::System::UInt32>* y, ::System::UInt32 yOffset, ::System::UInt32 yLen, ::Il2CppArray<::System::UInt32>* d, ::System::UInt32 dOffset)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_MULTIPLY_OFFSET))(x, xOffset, xLen, y, yOffset, yLen, d, dOffset);
		}

		static ::System::Void MultiplyMod2p32pmod(::Il2CppArray<::System::UInt32>* x, ::System::Int32 xOffset, ::System::Int32 xLen, ::Il2CppArray<::System::UInt32>* y, ::System::Int32 yOffest, ::System::Int32 yLen, ::Il2CppArray<::System::UInt32>* d, ::System::Int32 dOffset, ::System::Int32 mod)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_MULTIPLYMOD2P32PMOD_OFFSET))(x, xOffset, xLen, y, yOffest, yLen, d, dOffset, mod);
		}

		static ::System::Void SquarePositive(::Mono::Math::BigInteger_195A9C52A7AD8B6F* bi, ::Il2CppArray<::System::UInt32>*& wkSpace)
		{
			return ((::System::Void(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::Il2CppArray<::System::UInt32>*&))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_SQUAREPOSITIVE_OFFSET))(bi, wkSpace);
		}

		static ::Mono::Math::BigInteger_195A9C52A7AD8B6F* gcd(::Mono::Math::BigInteger_195A9C52A7AD8B6F* a, ::Mono::Math::BigInteger_195A9C52A7AD8B6F* b)
		{
			return ((::Mono::Math::BigInteger_195A9C52A7AD8B6F*(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_GCD_OFFSET))(a, b);
		}

		static ::System::UInt32 modInverse(::Mono::Math::BigInteger_195A9C52A7AD8B6F* bi, ::System::UInt32 modulus)
		{
			return ((::System::UInt32(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_MODINVERSE_OFFSET))(bi, modulus);
		}

		static ::Mono::Math::BigInteger_195A9C52A7AD8B6F* modInverse_1(::Mono::Math::BigInteger_195A9C52A7AD8B6F* bi, ::Mono::Math::BigInteger_195A9C52A7AD8B6F* modulus)
		{
			return ((::Mono::Math::BigInteger_195A9C52A7AD8B6F*(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_KERNEL_MODINVERSE_1_OFFSET))(bi, modulus);
		}
	};
}
