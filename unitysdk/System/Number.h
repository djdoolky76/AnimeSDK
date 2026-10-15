#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/NumberStyles.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Number_NumberBuffer.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Globalization { class NumberFormatInfo; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_NUMBER_FORMATDECIMAL_OFFSET UNITYSDK_OFFSET(0x1C252F40)
#define SYSTEM_NUMBER_FORMATDOUBLE_OFFSET UNITYSDK_OFFSET(0x1C253060)
#define SYSTEM_NUMBER_FORMATINT32_OFFSET UNITYSDK_OFFSET(0x1C2531F0)
#define SYSTEM_NUMBER_FORMATINT64_OFFSET UNITYSDK_OFFSET(0x1C253450)
#define SYSTEM_NUMBER_FORMATSINGLE_OFFSET UNITYSDK_OFFSET(0x1C2536D0)
#define SYSTEM_NUMBER_FORMATUINT32_OFFSET UNITYSDK_OFFSET(0x1C253320)
#define SYSTEM_NUMBER_FORMATUINT64_OFFSET UNITYSDK_OFFSET(0x1C253590)
#define SYSTEM_NUMBER_HEXNUMBERTOINT32_OFFSET UNITYSDK_OFFSET(0x1C253860)
#define SYSTEM_NUMBER_HEXNUMBERTOINT64_OFFSET UNITYSDK_OFFSET(0x1C253990)
#define SYSTEM_NUMBER_HEXNUMBERTOUINT32_OFFSET UNITYSDK_OFFSET(0x1C253900)
#define SYSTEM_NUMBER_HEXNUMBERTOUINT64_OFFSET UNITYSDK_OFFSET(0x1C253A30)
#define SYSTEM_NUMBER_ISWHITE_OFFSET UNITYSDK_OFFSET(0x1C253AC0)
#define SYSTEM_NUMBER_MATCHCHARS_1_OFFSET UNITYSDK_OFFSET(0x1C253D10)
#define SYSTEM_NUMBER_MATCHCHARS_OFFSET UNITYSDK_OFFSET(0x1C253CB0)
#define SYSTEM_NUMBER_NUMBERBUFFERTODECIMAL_OFFSET UNITYSDK_OFFSET(0x1C252F20)
#define SYSTEM_NUMBER_NUMBERBUFFERTODOUBLE_OFFSET UNITYSDK_OFFSET(0x1C252F30)
#define SYSTEM_NUMBER_NUMBERTOINT32_OFFSET UNITYSDK_OFFSET(0x1C253AE0)
#define SYSTEM_NUMBER_NUMBERTOINT64_OFFSET UNITYSDK_OFFSET(0x1C253B50)
#define SYSTEM_NUMBER_NUMBERTOUINT32_OFFSET UNITYSDK_OFFSET(0x1C253BD0)
#define SYSTEM_NUMBER_NUMBERTOUINT64_OFFSET UNITYSDK_OFFSET(0x1C253C40)
#define SYSTEM_NUMBER_PARSEDECIMAL_OFFSET UNITYSDK_OFFSET(0x1C253D60)
#define SYSTEM_NUMBER_PARSEDOUBLE_OFFSET UNITYSDK_OFFSET(0x1C254200)
#define SYSTEM_NUMBER_PARSEINT32_OFFSET UNITYSDK_OFFSET(0x1C254790)
#define SYSTEM_NUMBER_PARSEINT64_OFFSET UNITYSDK_OFFSET(0x1C254B20)
#define SYSTEM_NUMBER_PARSENUMBER_OFFSET UNITYSDK_OFFSET(0x1C254ED0)
#define SYSTEM_NUMBER_PARSESINGLE_OFFSET UNITYSDK_OFFSET(0x1C255A30)
#define SYSTEM_NUMBER_PARSEUINT32_OFFSET UNITYSDK_OFFSET(0x1C255F10)
#define SYSTEM_NUMBER_PARSEUINT64_OFFSET UNITYSDK_OFFSET(0x1C256290)
#define SYSTEM_NUMBER_STRINGTONUMBER_OFFSET UNITYSDK_OFFSET(0x1C254060)
#define SYSTEM_NUMBER_TRAILINGZEROS_OFFSET UNITYSDK_OFFSET(0x1C256640)
#define SYSTEM_NUMBER_TRYPARSEDECIMAL_OFFSET UNITYSDK_OFFSET(0x1C2566C0)
#define SYSTEM_NUMBER_TRYPARSEDOUBLE_OFFSET UNITYSDK_OFFSET(0x1C2569E0)
#define SYSTEM_NUMBER_TRYPARSEINT32_OFFSET UNITYSDK_OFFSET(0x1C256D00)
#define SYSTEM_NUMBER_TRYPARSEINT64_OFFSET UNITYSDK_OFFSET(0x1C2570F0)
#define SYSTEM_NUMBER_TRYPARSESINGLE_OFFSET UNITYSDK_OFFSET(0x1C2574F0)
#define SYSTEM_NUMBER_TRYPARSEUINT32_OFFSET UNITYSDK_OFFSET(0x1C257830)
#define SYSTEM_NUMBER_TRYPARSEUINT64_OFFSET UNITYSDK_OFFSET(0x1C257C20)
#define SYSTEM_NUMBER_TRYSTRINGTONUMBER_1_OFFSET UNITYSDK_OFFSET(0x1C258020)
#define SYSTEM_NUMBER_TRYSTRINGTONUMBER_OFFSET UNITYSDK_OFFSET(0x1C2546C0)

namespace System
{
	inline static constexpr unsigned int Number_TypeDefinitionIndex = 307;

	class Number : public ::System::Object
	{
	public:
		static ::System::Boolean NumberBufferToDecimal(::PVOID a1, ::System::Decimal a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERBUFFERTODECIMAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean NumberBufferToDouble(::PVOID a1, ::System::Double a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERBUFFERTODOUBLE_OFFSET))(a1, a2);
		}

		static ::System::String* FormatDecimal(::System::Decimal a1, ::System::String* a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::String*(*)(::System::Decimal, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_FORMATDECIMAL_OFFSET))(a1, a2, a3);
		}

		static ::System::String* FormatDouble(::System::Double a1, ::System::String* a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::String*(*)(::System::Double, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_FORMATDOUBLE_OFFSET))(a1, a2, a3);
		}

		static ::System::String* FormatInt32(::System::Int32 a1, ::System::String* a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::String*(*)(::System::Int32, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_FORMATINT32_OFFSET))(a1, a2, a3);
		}

		static ::System::String* FormatUInt32(::System::UInt32 a1, ::System::String* a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_FORMATUINT32_OFFSET))(a1, a2, a3);
		}

		static ::System::String* FormatInt64(::System::Int64 a1, ::System::String* a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::String*(*)(::System::Int64, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_FORMATINT64_OFFSET))(a1, a2, a3);
		}

		static ::System::String* FormatUInt64(::System::UInt64 a1, ::System::String* a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::String*(*)(::System::UInt64, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_FORMATUINT64_OFFSET))(a1, a2, a3);
		}

		static ::System::String* FormatSingle(::System::Single a1, ::System::String* a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::String*(*)(::System::Single, ::System::String*, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_FORMATSINGLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HexNumberToInt32(::System::Number_NumberBuffer a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Number_NumberBuffer, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_HEXNUMBERTOINT32_OFFSET))(a1, a2);
		}

		static ::System::Boolean HexNumberToInt64(::System::Number_NumberBuffer a1, ::System::Int64 a2)
		{
			return ((::System::Boolean(*)(::System::Number_NumberBuffer, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_HEXNUMBERTOINT64_OFFSET))(a1, a2);
		}

		static ::System::Boolean HexNumberToUInt32(::System::Number_NumberBuffer a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::Number_NumberBuffer, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_HEXNUMBERTOUINT32_OFFSET))(a1, a2);
		}

		static ::System::Boolean HexNumberToUInt64(::System::Number_NumberBuffer a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::System::Number_NumberBuffer, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_HEXNUMBERTOUINT64_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsWhite(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_ISWHITE_OFFSET))(a1);
		}

		static ::System::Boolean NumberToInt32(::System::Number_NumberBuffer a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Number_NumberBuffer, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERTOINT32_OFFSET))(a1, a2);
		}

		static ::System::Boolean NumberToInt64(::System::Number_NumberBuffer a1, ::System::Int64 a2)
		{
			return ((::System::Boolean(*)(::System::Number_NumberBuffer, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERTOINT64_OFFSET))(a1, a2);
		}

		static ::System::Boolean NumberToUInt32(::System::Number_NumberBuffer a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::Number_NumberBuffer, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERTOUINT32_OFFSET))(a1, a2);
		}

		static ::System::Boolean NumberToUInt64(::System::Number_NumberBuffer a1, ::System::UInt64 a2)
		{
			return ((::System::Boolean(*)(::System::Number_NumberBuffer, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERTOUINT64_OFFSET))(a1, a2);
		}

		static ::PVOID MatchChars(::PVOID a1, ::System::String* a2)
		{
			return ((::PVOID(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_MATCHCHARS_OFFSET))(a1, a2);
		}

		static ::PVOID MatchChars_1(::PVOID a1, ::PVOID a2)
		{
			return ((::PVOID(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_MATCHCHARS_1_OFFSET))(a1, a2);
		}

		static ::System::Decimal ParseDecimal(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::Decimal(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_PARSEDECIMAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Double ParseDouble(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::Double(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_PARSEDOUBLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 ParseInt32(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_PARSEINT32_OFFSET))(a1, a2, a3);
		}

		static ::System::Int64 ParseInt64(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::Int64(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_PARSEINT64_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ParseNumber(::System::Object* a1, ::System::Globalization::NumberStyles a2, ::System::Number_NumberBuffer a3, ::System::Text::StringBuilder* a4, ::System::Globalization::NumberFormatInfo* a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Globalization::NumberStyles, ::System::Number_NumberBuffer, ::System::Text::StringBuilder*, ::System::Globalization::NumberFormatInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_PARSENUMBER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Single ParseSingle(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::Single(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_PARSESINGLE_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 ParseUInt32(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::UInt32(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_PARSEUINT32_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt64 ParseUInt64(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3)
		{
			return ((::System::UInt64(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_PARSEUINT64_OFFSET))(a1, a2, a3);
		}

		static ::System::Void StringToNumber(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Number_NumberBuffer a3, ::System::Globalization::NumberFormatInfo* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Number_NumberBuffer, ::System::Globalization::NumberFormatInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_STRINGTONUMBER_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TrailingZeros(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRAILINGZEROS_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParseDecimal(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3, ::System::Decimal a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRYPARSEDECIMAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParseDouble(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3, ::System::Double a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRYPARSEDOUBLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParseInt32(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRYPARSEINT32_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParseInt64(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3, ::System::Int64 a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRYPARSEINT64_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParseSingle(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRYPARSESINGLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParseUInt32(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRYPARSEUINT32_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParseUInt64(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Globalization::NumberFormatInfo* a3, ::System::UInt64 a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRYPARSEUINT64_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryStringToNumber(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Number_NumberBuffer a3, ::System::Globalization::NumberFormatInfo* a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Number_NumberBuffer, ::System::Globalization::NumberFormatInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRYSTRINGTONUMBER_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TryStringToNumber_1(::System::String* a1, ::System::Globalization::NumberStyles a2, ::System::Number_NumberBuffer a3, ::System::Text::StringBuilder* a4, ::System::Globalization::NumberFormatInfo* a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Globalization::NumberStyles, ::System::Number_NumberBuffer, ::System::Text::StringBuilder*, ::System::Globalization::NumberFormatInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_TRYSTRINGTONUMBER_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

	};
}
