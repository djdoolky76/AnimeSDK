#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Math { class BigInteger_195A9C52A7AD8B6F; }

#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_MODULUSRING_BARRETTREDUCTION_OFFSET UNITYSDK_OFFSET(0x1FDA9EC0)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_MODULUSRING_DIFFERENCE_OFFSET UNITYSDK_OFFSET(0x1FDAA610)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_MODULUSRING_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1FDAA3E0)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_MODULUSRING_POW_1_OFFSET UNITYSDK_OFFSET(0x1FDAA9D0)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_MODULUSRING_POW_OFFSET UNITYSDK_OFFSET(0x1FDAA810)
#define MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_MODULUSRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDA9D90)

namespace Mono::Math
{
	inline static constexpr unsigned int BigInteger_195A9C52A7AD8B6F_ModulusRing_TypeDefinitionIndex = 2481;

	class BigInteger_195A9C52A7AD8B6F_ModulusRing : public ::System::Object
	{
	public:
		::Mono::Math::BigInteger_195A9C52A7AD8B6F* constant; // 0x10
		::Mono::Math::BigInteger_195A9C52A7AD8B6F* mod; // 0x18

		::System::Void _ctor(::Mono::Math::BigInteger_195A9C52A7AD8B6F* modulus)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_MODULUSRING__CTOR_OFFSET))(this, modulus);
		}

		::System::Void BarrettReduction(::Mono::Math::BigInteger_195A9C52A7AD8B6F* x)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_MODULUSRING_BARRETTREDUCTION_OFFSET))(this, x);
		}

		::Mono::Math::BigInteger_195A9C52A7AD8B6F* Multiply(::Mono::Math::BigInteger_195A9C52A7AD8B6F* a, ::Mono::Math::BigInteger_195A9C52A7AD8B6F* b)
		{
			return ((::Mono::Math::BigInteger_195A9C52A7AD8B6F*(*)(::PVOID, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_MODULUSRING_MULTIPLY_OFFSET))(this, a, b);
		}

		::Mono::Math::BigInteger_195A9C52A7AD8B6F* Difference(::Mono::Math::BigInteger_195A9C52A7AD8B6F* a, ::Mono::Math::BigInteger_195A9C52A7AD8B6F* b)
		{
			return ((::Mono::Math::BigInteger_195A9C52A7AD8B6F*(*)(::PVOID, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_MODULUSRING_DIFFERENCE_OFFSET))(this, a, b);
		}

		::Mono::Math::BigInteger_195A9C52A7AD8B6F* Pow(::Mono::Math::BigInteger_195A9C52A7AD8B6F* a, ::Mono::Math::BigInteger_195A9C52A7AD8B6F* k)
		{
			return ((::Mono::Math::BigInteger_195A9C52A7AD8B6F*(*)(::PVOID, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_MODULUSRING_POW_OFFSET))(this, a, k);
		}

		::Mono::Math::BigInteger_195A9C52A7AD8B6F* Pow_1(::System::UInt32 b, ::Mono::Math::BigInteger_195A9C52A7AD8B6F* exp)
		{
			return ((::Mono::Math::BigInteger_195A9C52A7AD8B6F*(*)(::PVOID, ::System::UInt32, ::Mono::Math::BigInteger_195A9C52A7AD8B6F*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_195A9C52A7AD8B6F_MODULUSRING_POW_1_OFFSET))(this, b, exp);
		}
	};
}
