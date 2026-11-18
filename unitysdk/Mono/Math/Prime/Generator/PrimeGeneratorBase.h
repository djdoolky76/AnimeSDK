#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Math::Prime { class PrimalityTest; }

#define MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE_GET_PRIMALITYTEST_OFFSET UNITYSDK_OFFSET(0x1CC14300)
#define MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC14350)

namespace Mono::Math::Prime::Generator
{
	inline static constexpr unsigned int PrimeGeneratorBase_TypeDefinitionIndex = 87;

	class PrimeGeneratorBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE__CTOR_OFFSET))(this);
		}

		::Mono::Math::Prime::PrimalityTest* get_PrimalityTest()
		{
			return ((::Mono::Math::Prime::PrimalityTest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE_GET_PRIMALITYTEST_OFFSET))(this);
		}
	};
}
