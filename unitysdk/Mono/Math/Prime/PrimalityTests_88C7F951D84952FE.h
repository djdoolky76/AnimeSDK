#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/Prime/ConfidenceFactor_E982AD35DD688AA9.h"
#include "unitysdk/System/Object.h"

namespace Mono::Math { class BigInteger_195A9C52A7AD8B6F; }

#define MONO_MATH_PRIME_PRIMALITYTESTS_88C7F951D84952FE_GETSPPROUNDS_OFFSET UNITYSDK_OFFSET(0x1F2B9780)
#define MONO_MATH_PRIME_PRIMALITYTESTS_88C7F951D84952FE_RABINMILLERTEST_OFFSET UNITYSDK_OFFSET(0x1F2B9CF0)
#define MONO_MATH_PRIME_PRIMALITYTESTS_88C7F951D84952FE_SMALLPRIMESPPTEST_OFFSET UNITYSDK_OFFSET(0x1F2B9950)
#define MONO_MATH_PRIME_PRIMALITYTESTS_88C7F951D84952FE_TEST_OFFSET UNITYSDK_OFFSET(0x1F2B9910)
#define MONO_MATH_PRIME_PRIMALITYTESTS_88C7F951D84952FE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2B9770)

namespace Mono::Math::Prime
{
	inline static constexpr unsigned int PrimalityTests_88C7F951D84952FE_TypeDefinitionIndex = 2485;

	class PrimalityTests_88C7F951D84952FE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_88C7F951D84952FE__CTOR_OFFSET))(this);
		}

		static ::System::Int32 GetSPPRounds(::Mono::Math::BigInteger_195A9C52A7AD8B6F* bi, ::Mono::Math::Prime::ConfidenceFactor_E982AD35DD688AA9 confidence)
		{
			return ((::System::Int32(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::Mono::Math::Prime::ConfidenceFactor_E982AD35DD688AA9))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_88C7F951D84952FE_GETSPPROUNDS_OFFSET))(bi, confidence);
		}

		static ::System::Boolean Test(::Mono::Math::BigInteger_195A9C52A7AD8B6F* n, ::Mono::Math::Prime::ConfidenceFactor_E982AD35DD688AA9 confidence)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::Mono::Math::Prime::ConfidenceFactor_E982AD35DD688AA9))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_88C7F951D84952FE_TEST_OFFSET))(n, confidence);
		}

		static ::System::Boolean RabinMillerTest(::Mono::Math::BigInteger_195A9C52A7AD8B6F* n, ::Mono::Math::Prime::ConfidenceFactor_E982AD35DD688AA9 confidence)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::Mono::Math::Prime::ConfidenceFactor_E982AD35DD688AA9))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_88C7F951D84952FE_RABINMILLERTEST_OFFSET))(n, confidence);
		}

		static ::System::Boolean SmallPrimeSppTest(::Mono::Math::BigInteger_195A9C52A7AD8B6F* bi, ::Mono::Math::Prime::ConfidenceFactor_E982AD35DD688AA9 confidence)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::Mono::Math::Prime::ConfidenceFactor_E982AD35DD688AA9))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_88C7F951D84952FE_SMALLPRIMESPPTEST_OFFSET))(bi, confidence);
		}
	};
}
