#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/NumberStyles.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Number_NumberBuffer.h"

namespace System { class String; }
namespace System::Globalization { class NumberFormatInfo; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_NUMBER_FORMATDECIMAL_OFFSET UNITYSDK_OFFSET(0x1E68F050)
#define SYSTEM_NUMBER_FORMATDOUBLE_OFFSET UNITYSDK_OFFSET(0x1E68F080)
#define SYSTEM_NUMBER_FORMATINT32_OFFSET UNITYSDK_OFFSET(0x1E68F090)
#define SYSTEM_NUMBER_FORMATINT64_OFFSET UNITYSDK_OFFSET(0x1E68F0B0)
#define SYSTEM_NUMBER_FORMATSINGLE_OFFSET UNITYSDK_OFFSET(0x1E68F0D0)
#define SYSTEM_NUMBER_FORMATUINT32_OFFSET UNITYSDK_OFFSET(0x1E68F0A0)
#define SYSTEM_NUMBER_FORMATUINT64_OFFSET UNITYSDK_OFFSET(0x1E68F0C0)
#define SYSTEM_NUMBER_HEXNUMBERTOINT32_OFFSET UNITYSDK_OFFSET(0x1E68F0E0)
#define SYSTEM_NUMBER_HEXNUMBERTOINT64_OFFSET UNITYSDK_OFFSET(0x1E68F210)
#define SYSTEM_NUMBER_HEXNUMBERTOUINT32_OFFSET UNITYSDK_OFFSET(0x1E68F180)
#define SYSTEM_NUMBER_HEXNUMBERTOUINT64_OFFSET UNITYSDK_OFFSET(0x1E68F2B0)
#define SYSTEM_NUMBER_ISWHITE_OFFSET UNITYSDK_OFFSET(0x1E68F340)
#define SYSTEM_NUMBER_MATCHCHARS_1_OFFSET UNITYSDK_OFFSET(0x1E68F590)
#define SYSTEM_NUMBER_MATCHCHARS_OFFSET UNITYSDK_OFFSET(0x1E68F530)
#define SYSTEM_NUMBER_NUMBERBUFFERTODECIMAL_OFFSET UNITYSDK_OFFSET(0x1E68F030)
#define SYSTEM_NUMBER_NUMBERBUFFERTODOUBLE_OFFSET UNITYSDK_OFFSET(0x1E68F040)
#define SYSTEM_NUMBER_NUMBERTOINT32_OFFSET UNITYSDK_OFFSET(0x1E68F360)
#define SYSTEM_NUMBER_NUMBERTOINT64_OFFSET UNITYSDK_OFFSET(0x1E68F3D0)
#define SYSTEM_NUMBER_NUMBERTOUINT32_OFFSET UNITYSDK_OFFSET(0x1E68F450)
#define SYSTEM_NUMBER_NUMBERTOUINT64_OFFSET UNITYSDK_OFFSET(0x1E68F4C0)
#define SYSTEM_NUMBER_PARSEDECIMAL_OFFSET UNITYSDK_OFFSET(0x1E68F5E0)
#define SYSTEM_NUMBER_PARSEDOUBLE_OFFSET UNITYSDK_OFFSET(0x1E68FA80)
#define SYSTEM_NUMBER_PARSEINT32_OFFSET UNITYSDK_OFFSET(0x1E6900E0)
#define SYSTEM_NUMBER_PARSEINT64_OFFSET UNITYSDK_OFFSET(0x1E690490)
#define SYSTEM_NUMBER_PARSENUMBER_OFFSET UNITYSDK_OFFSET(0x1E690850)
#define SYSTEM_NUMBER_PARSESINGLE_OFFSET UNITYSDK_OFFSET(0x1E691430)
#define SYSTEM_NUMBER_PARSEUINT32_OFFSET UNITYSDK_OFFSET(0x1E6919A0)
#define SYSTEM_NUMBER_PARSEUINT64_OFFSET UNITYSDK_OFFSET(0x1E691D40)
#define SYSTEM_NUMBER_STRINGTONUMBER_OFFSET UNITYSDK_OFFSET(0x1E68F8C0)
#define SYSTEM_NUMBER_TRAILINGZEROS_OFFSET UNITYSDK_OFFSET(0x1E692100)
#define SYSTEM_NUMBER_TRYPARSEDECIMAL_OFFSET UNITYSDK_OFFSET(0x1E6921F0)
#define SYSTEM_NUMBER_TRYPARSEDOUBLE_OFFSET UNITYSDK_OFFSET(0x1E692540)
#define SYSTEM_NUMBER_TRYPARSEINT32_OFFSET UNITYSDK_OFFSET(0x1E692890)
#define SYSTEM_NUMBER_TRYPARSEINT64_OFFSET UNITYSDK_OFFSET(0x1E692CD0)
#define SYSTEM_NUMBER_TRYPARSESINGLE_OFFSET UNITYSDK_OFFSET(0x1E693120)
#define SYSTEM_NUMBER_TRYPARSEUINT32_OFFSET UNITYSDK_OFFSET(0x1E6934B0)
#define SYSTEM_NUMBER_TRYPARSEUINT64_OFFSET UNITYSDK_OFFSET(0x1E6938F0)
#define SYSTEM_NUMBER_TRYSTRINGTONUMBER_1_OFFSET UNITYSDK_OFFSET(0x1E693D40)
#define SYSTEM_NUMBER_TRYSTRINGTONUMBER_OFFSET UNITYSDK_OFFSET(0x1E68FFB0)
#define SYSTEM_NUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E68F020)

namespace System
{
	inline static constexpr unsigned int Number_TypeDefinitionIndex = 295;

	class Number : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean NumberBufferToDecimal(::PVOID number, ::System::Decimal& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERBUFFERTODECIMAL_OFFSET))(number, value);
		}

		static ::System::Boolean NumberBufferToDouble(::PVOID number, ::System::Double& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERBUFFERTODOUBLE_OFFSET))(number, value);
		}

		static ::System::String* FormatDecimal(::System::Decimal value, ::System::String* format, ::System::Globalization::NumberFormatInfo* info)
		{
			return ((::System::String*(*)(::System::Decimal, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_FORMATDECIMAL_OFFSET))(value, format, info);
		}

		static ::System::String* FormatDouble(::System::Double value, ::System::String* format, ::System::Globalization::NumberFormatInfo* info)
		{
			return ((::System::String*(*)(::System::Double, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_FORMATDOUBLE_OFFSET))(value, format, info);
		}

		static ::System::String* FormatInt32(::System::Int32 value, ::System::String* format, ::System::Globalization::NumberFormatInfo* info)
		{
			return ((::System::String*(*)(::System::Int32, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_FORMATINT32_OFFSET))(value, format, info);
		}

		static ::System::String* FormatUInt32(::System::UInt32 value, ::System::String* format, ::System::Globalization::NumberFormatInfo* info)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_FORMATUINT32_OFFSET))(value, format, info);
		}

		static ::System::String* FormatInt64(::System::Int64 value, ::System::String* format, ::System::Globalization::NumberFormatInfo* info)
		{
			return ((::System::String*(*)(::System::Int64, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_FORMATINT64_OFFSET))(value, format, info);
		}

		static ::System::String* FormatUInt64(::System::UInt64 value, ::System::String* format, ::System::Globalization::NumberFormatInfo* info)
		{
			return ((::System::String*(*)(::System::UInt64, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_FORMATUINT64_OFFSET))(value, format, info);
		}

		static ::System::String* FormatSingle(::System::Single value, ::System::String* format, ::System::Globalization::NumberFormatInfo* info)
		{
			return ((::System::String*(*)(::System::Single, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_FORMATSINGLE_OFFSET))(value, format, info);
		}

		static ::System::Boolean HexNumberToInt32(::System::Number_NumberBuffer& number, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::System::Number_NumberBuffer&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_HEXNUMBERTOINT32_OFFSET))(number, value);
		}

		static ::System::Boolean HexNumberToInt64(::System::Number_NumberBuffer& number, ::System::Int64& value)
		{
			return ((::System::Boolean(*)(::System::Number_NumberBuffer&, ::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_HEXNUMBERTOINT64_OFFSET))(number, value);
		}

		static ::System::Boolean HexNumberToUInt32(::System::Number_NumberBuffer& number, ::System::UInt32& value)
		{
			return ((::System::Boolean(*)(::System::Number_NumberBuffer&, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_HEXNUMBERTOUINT32_OFFSET))(number, value);
		}

		static ::System::Boolean HexNumberToUInt64(::System::Number_NumberBuffer& number, ::System::UInt64& value)
		{
			return ((::System::Boolean(*)(::System::Number_NumberBuffer&, ::System::UInt64&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_HEXNUMBERTOUINT64_OFFSET))(number, value);
		}

		static ::System::Boolean IsWhite(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_ISWHITE_OFFSET))(ch);
		}

		static ::System::Boolean NumberToInt32(::System::Number_NumberBuffer& number, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::System::Number_NumberBuffer&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERTOINT32_OFFSET))(number, value);
		}

		static ::System::Boolean NumberToInt64(::System::Number_NumberBuffer& number, ::System::Int64& value)
		{
			return ((::System::Boolean(*)(::System::Number_NumberBuffer&, ::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERTOINT64_OFFSET))(number, value);
		}

		static ::System::Boolean NumberToUInt32(::System::Number_NumberBuffer& number, ::System::UInt32& value)
		{
			return ((::System::Boolean(*)(::System::Number_NumberBuffer&, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERTOUINT32_OFFSET))(number, value);
		}

		static ::System::Boolean NumberToUInt64(::System::Number_NumberBuffer& number, ::System::UInt64& value)
		{
			return ((::System::Boolean(*)(::System::Number_NumberBuffer&, ::System::UInt64&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERTOUINT64_OFFSET))(number, value);
		}

		static ::PVOID MatchChars(::PVOID p, ::System::String* str)
		{
			return ((::PVOID(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_MATCHCHARS_OFFSET))(p, str);
		}

		static ::PVOID MatchChars_1(::PVOID p, ::PVOID str)
		{
			return ((::PVOID(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_MATCHCHARS_1_OFFSET))(p, str);
		}

		static ::System::Decimal ParseDecimal(::System::String* value, ::System::Globalization::NumberStyles options, ::System::Globalization::NumberFormatInfo* numfmt)
		{
			return ((::System::Decimal(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_PARSEDECIMAL_OFFSET))(value, options, numfmt);
		}

		static ::System::Double ParseDouble(::System::String* value, ::System::Globalization::NumberStyles options, ::System::Globalization::NumberFormatInfo* numfmt)
		{
			return ((::System::Double(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_PARSEDOUBLE_OFFSET))(value, options, numfmt);
		}

		static ::System::Int32 ParseInt32(::System::String* s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_PARSEINT32_OFFSET))(s, style, info);
		}

		static ::System::Int64 ParseInt64(::System::String* value, ::System::Globalization::NumberStyles options, ::System::Globalization::NumberFormatInfo* numfmt)
		{
			return ((::System::Int64(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_PARSEINT64_OFFSET))(value, options, numfmt);
		}

		static ::System::Boolean ParseNumber(::PVOID& str, ::System::Globalization::NumberStyles options, ::System::Number_NumberBuffer& number, ::System::Text::StringBuilder* sb, ::System::Globalization::NumberFormatInfo* numfmt, ::System::Boolean parseDecimal)
		{
			return ((::System::Boolean(*)(::PVOID&, ::System::Globalization::NumberStyles, ::System::Number_NumberBuffer&, ::System::Text::StringBuilder*, ::System::Globalization::NumberFormatInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_PARSENUMBER_OFFSET))(str, options, number, sb, numfmt, parseDecimal);
		}

		static ::System::Single ParseSingle(::System::String* value, ::System::Globalization::NumberStyles options, ::System::Globalization::NumberFormatInfo* numfmt)
		{
			return ((::System::Single(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_PARSESINGLE_OFFSET))(value, options, numfmt);
		}

		static ::System::UInt32 ParseUInt32(::System::String* value, ::System::Globalization::NumberStyles options, ::System::Globalization::NumberFormatInfo* numfmt)
		{
			return ((::System::UInt32(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_PARSEUINT32_OFFSET))(value, options, numfmt);
		}

		static ::System::UInt64 ParseUInt64(::System::String* value, ::System::Globalization::NumberStyles options, ::System::Globalization::NumberFormatInfo* numfmt)
		{
			return ((::System::UInt64(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_PARSEUINT64_OFFSET))(value, options, numfmt);
		}

		static ::System::Void StringToNumber(::System::String* str, ::System::Globalization::NumberStyles options, ::System::Number_NumberBuffer& number, ::System::Globalization::NumberFormatInfo* info, ::System::Boolean parseDecimal)
		{
			return ((::System::Void(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Number_NumberBuffer&, ::System::Globalization::NumberFormatInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_STRINGTONUMBER_OFFSET))(str, options, number, info, parseDecimal);
		}

		static ::System::Boolean TrailingZeros(::System::String* s, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRAILINGZEROS_OFFSET))(s, index);
		}

		static ::System::Boolean TryParseDecimal(::System::String* value, ::System::Globalization::NumberStyles options, ::System::Globalization::NumberFormatInfo* numfmt, ::System::Decimal& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::Decimal&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRYPARSEDECIMAL_OFFSET))(value, options, numfmt, result);
		}

		static ::System::Boolean TryParseDouble(::System::String* value, ::System::Globalization::NumberStyles options, ::System::Globalization::NumberFormatInfo* numfmt, ::System::Double& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::Double&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRYPARSEDOUBLE_OFFSET))(value, options, numfmt, result);
		}

		static ::System::Boolean TryParseInt32(::System::String* s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info, ::System::Int32& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRYPARSEINT32_OFFSET))(s, style, info, result);
		}

		static ::System::Boolean TryParseInt64(::System::String* s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info, ::System::Int64& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRYPARSEINT64_OFFSET))(s, style, info, result);
		}

		static ::System::Boolean TryParseSingle(::System::String* value, ::System::Globalization::NumberStyles options, ::System::Globalization::NumberFormatInfo* numfmt, ::System::Single& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::Single&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRYPARSESINGLE_OFFSET))(value, options, numfmt, result);
		}

		static ::System::Boolean TryParseUInt32(::System::String* s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info, ::System::UInt32& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRYPARSEUINT32_OFFSET))(s, style, info, result);
		}

		static ::System::Boolean TryParseUInt64(::System::String* s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info, ::System::UInt64& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::UInt64&))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRYPARSEUINT64_OFFSET))(s, style, info, result);
		}

		static ::System::Boolean TryStringToNumber(::System::String* str, ::System::Globalization::NumberStyles options, ::System::Number_NumberBuffer& number, ::System::Globalization::NumberFormatInfo* numfmt, ::System::Boolean parseDecimal)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Number_NumberBuffer&, ::System::Globalization::NumberFormatInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRYSTRINGTONUMBER_OFFSET))(str, options, number, numfmt, parseDecimal);
		}

		static ::System::Boolean TryStringToNumber_1(::System::String* str, ::System::Globalization::NumberStyles options, ::System::Number_NumberBuffer& number, ::System::Text::StringBuilder* sb, ::System::Globalization::NumberFormatInfo* numfmt, ::System::Boolean parseDecimal)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Number_NumberBuffer&, ::System::Text::StringBuilder*, ::System::Globalization::NumberFormatInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRYSTRINGTONUMBER_1_OFFSET))(str, options, number, sb, numfmt, parseDecimal);
		}
	};
}
