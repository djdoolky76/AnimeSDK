#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/NumberStyles.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Numerics/BigNumber_BigNumberBuffer.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
namespace System { class ArgumentException; }
namespace System { class String; }
namespace System::Globalization { class NumberFormatInfo; }

#define SYSTEM_NUMERICS_BIGNUMBER_ASREADONLYSPAN_OFFSET UNITYSDK_OFFSET(0x1FC1A560)
#define SYSTEM_NUMERICS_BIGNUMBER_FORMATBIGINTEGERTOHEXSTRING_OFFSET UNITYSDK_OFFSET(0x1FC1ABB0)
#define SYSTEM_NUMERICS_BIGNUMBER_FORMATBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1FC10B80)
#define SYSTEM_NUMERICS_BIGNUMBER_HEXNUMBERTOBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1FC1A6C0)
#define SYSTEM_NUMERICS_BIGNUMBER_NUMBERTOBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1FC1A850)
#define SYSTEM_NUMERICS_BIGNUMBER_PARSEBIGINTEGER_1_OFFSET UNITYSDK_OFFSET(0x1FC0C180)
#define SYSTEM_NUMERICS_BIGNUMBER_PARSEBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1FC0BC60)
#define SYSTEM_NUMERICS_BIGNUMBER_PARSEFORMATSPECIFIER_OFFSET UNITYSDK_OFFSET(0x1FC1AAC0)
#define SYSTEM_NUMERICS_BIGNUMBER_TRYPARSEBIGINTEGER_1_OFFSET UNITYSDK_OFFSET(0x1FC0C2D0)
#define SYSTEM_NUMERICS_BIGNUMBER_TRYPARSEBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1FC0C030)
#define SYSTEM_NUMERICS_BIGNUMBER_TRYVALIDATEPARSESTYLEINTEGER_OFFSET UNITYSDK_OFFSET(0x1FC1A460)

namespace System::Numerics
{
	inline static constexpr unsigned int BigNumber_TypeDefinitionIndex = 3840;

	class BigNumber : public ::System::Object
	{
	public:
		static ::System::Boolean TryValidateParseStyleInteger(::System::Globalization::NumberStyles a1, ::System::ArgumentException* a2)
		{
			return ((::System::Boolean(*)(::System::Globalization::NumberStyles, ::System::ArgumentException*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_TRYVALIDATEPARSESTYLEINTEGER_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParseBigInteger(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3, ::System::Numerics::BigInteger a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_TRYPARSEBIGINTEGER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParseBigInteger_1(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3, ::System::Numerics::BigInteger a4)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_TRYPARSEBIGINTEGER_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Numerics::BigInteger ParseBigInteger(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::Numerics::BigInteger(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_PARSEBIGINTEGER_OFFSET))(a1, a2, a3);
		}

		static ::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> AsReadOnlySpan(::System::String* a1)
		{
			return ((::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_ASREADONLYSPAN_OFFSET))(a1);
		}

		static ::System::Numerics::BigInteger ParseBigInteger_1(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char> a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::Numerics::BigInteger(*)(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Char>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_PARSEBIGINTEGER_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HexNumberToBigInteger(::System::Numerics::BigNumber_BigNumberBuffer a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigNumber_BigNumberBuffer, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_HEXNUMBERTOBIGINTEGER_OFFSET))(a1, a2);
		}

		static ::System::Boolean NumberToBigInteger(::System::Numerics::BigNumber_BigNumberBuffer a1, ::System::Numerics::BigInteger a2)
		{
			return ((::System::Boolean(*)(::System::Numerics::BigNumber_BigNumberBuffer, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_NUMBERTOBIGINTEGER_OFFSET))(a1, a2);
		}

		static ::System::Char ParseFormatSpecifier(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Char(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_PARSEFORMATSPECIFIER_OFFSET))(a1, a2);
		}

		static ::System::String* FormatBigIntegerToHexString(::System::Numerics::BigInteger a1, ::System::Char a2, ::System::Int32 a3, ::System::Globalization::NumberFormatInfo* a4)
		{
			return ((::System::String*(*)(::System::Numerics::BigInteger, ::System::Char, ::System::Int32, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_FORMATBIGINTEGERTOHEXSTRING_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* FormatBigInteger(::System::Numerics::BigInteger a1, ::System::String* a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::String*(*)(::System::Numerics::BigInteger, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_FORMATBIGINTEGER_OFFSET))(a1, a2, a3);
		}

	};
}
