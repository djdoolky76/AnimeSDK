#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/Prime/ConfidenceFactor_BC2964F1B0FE5128.h"
#include "unitysdk/System/Object.h"
namespace Mono::Math { class BigInteger_B63D07FB4865BEA1; }

#define MONO_MATH_PRIME_PRIMALITYTESTS_94E29AC1828D8D2C_GETSPPROUNDS_OFFSET UNITYSDK_OFFSET(0x1C028F00)
#define MONO_MATH_PRIME_PRIMALITYTESTS_94E29AC1828D8D2C_RABINMILLERTEST_OFFSET UNITYSDK_OFFSET(0x1C0290A0)

namespace Mono::Math::Prime
{
	class PrimalityTests_94E29AC1828D8D2C : public ::System::Object
	{
	public:
		static ::System::Int32 GetSPPRounds(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::Prime::ConfidenceFactor_BC2964F1B0FE5128 a2)
		{
			return ((::System::Int32(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::Prime::ConfidenceFactor_BC2964F1B0FE5128))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_94E29AC1828D8D2C_GETSPPROUNDS_OFFSET))(a1, a2);
		}

		static ::System::Boolean RabinMillerTest(::Mono::Math::BigInteger_B63D07FB4865BEA1* a1, ::Mono::Math::Prime::ConfidenceFactor_BC2964F1B0FE5128 a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger_B63D07FB4865BEA1*, ::Mono::Math::Prime::ConfidenceFactor_BC2964F1B0FE5128))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_94E29AC1828D8D2C_RABINMILLERTEST_OFFSET))(a1, a2);
		}

	};
}
