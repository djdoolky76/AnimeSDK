#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Mono::Math { class BigInteger; }

#define MONO_MATH_BIGINTEGER_MODULUSRING_BARRETTREDUCTION_OFFSET UNITYSDK_OFFSET(0x1C06AD50)
#define MONO_MATH_BIGINTEGER_MODULUSRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1C069830)
#define MONO_MATH_BIGINTEGER_MODULUSRING_DIFFERENCE_OFFSET UNITYSDK_OFFSET(0x1C06AAF0)
#define MONO_MATH_BIGINTEGER_MODULUSRING_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1C06B260)
#define MONO_MATH_BIGINTEGER_MODULUSRING_POW_1_OFFSET UNITYSDK_OFFSET(0x1C06B4C0)
#define MONO_MATH_BIGINTEGER_MODULUSRING_POW_OFFSET UNITYSDK_OFFSET(0x1C069920)

namespace Mono::Math
{
	class BigInteger_ModulusRing : public ::System::Object
	{
	public:
		::Mono::Math::BigInteger* mod; // 0x10
		::Mono::Math::BigInteger* constant; // 0x18
		::System::Void _ctor(::Mono::Math::BigInteger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUSRING_CTOR_OFFSET))(this, a1);
		}

		::System::Void BarrettReduction(::Mono::Math::BigInteger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUSRING_BARRETTREDUCTION_OFFSET))(this, a1);
		}

		::Mono::Math::BigInteger* Multiply(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUSRING_MULTIPLY_OFFSET))(this, a1, a2);
		}

		::Mono::Math::BigInteger* Difference(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUSRING_DIFFERENCE_OFFSET))(this, a1, a2);
		}

		::Mono::Math::BigInteger* Pow(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUSRING_POW_OFFSET))(this, a1, a2);
		}

		::Mono::Math::BigInteger* Pow_1(::System::UInt32 a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::System::UInt32, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUSRING_POW_1_OFFSET))(this, a1, a2);
		}

	};
}
