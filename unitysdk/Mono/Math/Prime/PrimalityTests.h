#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/Prime/ConfidenceFactor.h"
#include "unitysdk/System/Object.h"
namespace Mono::Math { class BigInteger; }

#define MONO_MATH_PRIME_PRIMALITYTESTS_GETSPPROUNDS_OFFSET UNITYSDK_OFFSET(0x1C06BED0)
#define MONO_MATH_PRIME_PRIMALITYTESTS_RABINMILLERTEST_OFFSET UNITYSDK_OFFSET(0x1C06C540)
#define MONO_MATH_PRIME_PRIMALITYTESTS_SMALLPRIMESPPTEST_OFFSET UNITYSDK_OFFSET(0x1C06C070)
#define MONO_MATH_PRIME_PRIMALITYTESTS_TEST_OFFSET UNITYSDK_OFFSET(0x1C069F40)

namespace Mono::Math::Prime
{
	class PrimalityTests : public ::System::Object
	{
	public:
		static ::System::Int32 GetSPPRounds(::Mono::Math::BigInteger* a1, ::Mono::Math::Prime::ConfidenceFactor a2)
		{
			return ((::System::Int32(*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_GETSPPROUNDS_OFFSET))(a1, a2);
		}

		static ::System::Boolean Test(::Mono::Math::BigInteger* a1, ::Mono::Math::Prime::ConfidenceFactor a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_TEST_OFFSET))(a1, a2);
		}

		static ::System::Boolean RabinMillerTest(::Mono::Math::BigInteger* a1, ::Mono::Math::Prime::ConfidenceFactor a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_RABINMILLERTEST_OFFSET))(a1, a2);
		}

		static ::System::Boolean SmallPrimeSppTest(::Mono::Math::BigInteger* a1, ::Mono::Math::Prime::ConfidenceFactor a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_SMALLPRIMESPPTEST_OFFSET))(a1, a2);
		}

	};
}
