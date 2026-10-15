#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Mono::Math { class BigInteger_B63D07FB4865BEA1; }

#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_MODULUSRING_BARRETTREDUCTION_OFFSET UNITYSDK_OFFSET(0x1BFF9470)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_MODULUSRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFF9120)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_MODULUSRING_DIFFERENCE_OFFSET UNITYSDK_OFFSET(0x1BFF9210)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_MODULUSRING_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1BFF9980)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_MODULUSRING_POW_1_OFFSET UNITYSDK_OFFSET(0x1BFF9D70)
#define MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_MODULUSRING_POW_OFFSET UNITYSDK_OFFSET(0x1BFF9BE0)

namespace Mono::Math
{
	inline static constexpr unsigned int BigInteger_B63D07FB4865BEA1_ModulusRing_TypeDefinitionIndex = 2316;

	class BigInteger_B63D07FB4865BEA1_ModulusRing : public ::System::Object
	{
	public:
		::Mono::Math::BigInteger_B63D07FB4865BEA1* mod; // 0x10
		::Mono::Math::BigInteger_B63D07FB4865BEA1* constant; // 0x18
		::System::Void _ctor(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_MODULUSRING_CTOR_OFFSET))(this, a1);
		}

		::System::Void BarrettReduction(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_MODULUSRING_BARRETTREDUCTION_OFFSET))(this, a1);
		}

		::Mono::Math::BigInteger_B63D07FB4865BEA1* Multiply(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::PVOID, ::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_MODULUSRING_MULTIPLY_OFFSET))(this, a1, a2);
		}

		::Mono::Math::BigInteger_B63D07FB4865BEA1* Difference(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::PVOID, ::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_MODULUSRING_DIFFERENCE_OFFSET))(this, a1, a2);
		}

		::Mono::Math::BigInteger_B63D07FB4865BEA1* Pow(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::PVOID, ::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_MODULUSRING_POW_OFFSET))(this, a1, a2);
		}

		::Mono::Math::BigInteger_B63D07FB4865BEA1* Pow_1(::System::UInt32 a1, ::Mono::Math::BigInteger_B63D07FB4865BEA1* a2)
		{
			return ((::Mono::Math::BigInteger_B63D07FB4865BEA1*(*)(::PVOID, ::System::UInt32, ::Mono::Math::BigInteger_B63D07FB4865BEA1*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_B63D07FB4865BEA1_MODULUSRING_POW_1_OFFSET))(this, a1, a2);
		}

	};
}
