#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/Prime/Generator/SequentialSearchPrimeGeneratorBase_59DF7C49845AB2A5.h"

namespace Mono::Math { class BigInteger_195A9C52A7AD8B6F; }
namespace System { class Object; }

#define MONO_MATH_PRIME_GENERATOR_NEXTPRIMEFINDER_GENERATESEARCHBASE_OFFSET UNITYSDK_OFFSET(0x1FFCC640)
#define MONO_MATH_PRIME_GENERATOR_NEXTPRIMEFINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFCC740)

namespace Mono::Math::Prime::Generator
{
	inline static constexpr unsigned int NextPrimeFinder_TypeDefinitionIndex = 2486;

	class NextPrimeFinder : public ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase_59DF7C49845AB2A5
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_NEXTPRIMEFINDER__CTOR_OFFSET))(this);
		}

		::Mono::Math::BigInteger_195A9C52A7AD8B6F* GenerateSearchBase(::System::Int32 bits, ::System::Object* Context)
		{
			return ((::Mono::Math::BigInteger_195A9C52A7AD8B6F*(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_NEXTPRIMEFINDER_GENERATESEARCHBASE_OFFSET))(this, bits, Context);
		}
	};
}
