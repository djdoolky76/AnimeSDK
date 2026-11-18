#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/Common/StorageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Data/SqlTypes/SqlBinary.h"
#include "unitysdk/System/Data/SqlTypes/SqlBoolean.h"
#include "unitysdk/System/Data/SqlTypes/SqlByte.h"
#include "unitysdk/System/Data/SqlTypes/SqlDateTime.h"
#include "unitysdk/System/Data/SqlTypes/SqlDecimal.h"
#include "unitysdk/System/Data/SqlTypes/SqlDouble.h"
#include "unitysdk/System/Data/SqlTypes/SqlGuid.h"
#include "unitysdk/System/Data/SqlTypes/SqlInt16.h"
#include "unitysdk/System/Data/SqlTypes/SqlInt32.h"
#include "unitysdk/System/Data/SqlTypes/SqlInt64.h"
#include "unitysdk/System/Data/SqlTypes/SqlMoney.h"
#include "unitysdk/System/Data/SqlTypes/SqlSingle.h"
#include "unitysdk/System/Data/SqlTypes/SqlString.h"
#include "unitysdk/System/DateTimeOffset.h"

namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Data::SqlTypes { class SqlBytes; }
namespace System::Data::SqlTypes { class SqlChars; }

#define SYSTEM_DATA_COMMON_SQLCONVERT_CHANGETYPE2_OFFSET UNITYSDK_OFFSET(0x1F59E3E0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CHANGETYPEFORDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1F59E270)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CHANGETYPEFORXML_OFFSET UNITYSDK_OFFSET(0x1F59F0A0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTSTRINGTODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1F59E1B0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBINARY_OFFSET UNITYSDK_OFFSET(0x1F59DA00)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1F59D5C0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBYTES_OFFSET UNITYSDK_OFFSET(0x1F59E030)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBYTE_OFFSET UNITYSDK_OFFSET(0x1F598E00)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLCHARS_OFFSET UNITYSDK_OFFSET(0x1F59DEB0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLDATETIME_OFFSET UNITYSDK_OFFSET(0x1F59D380)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLDECIMAL_OFFSET UNITYSDK_OFFSET(0x1F59B240)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLDOUBLE_OFFSET UNITYSDK_OFFSET(0x1F59A490)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLGUID_OFFSET UNITYSDK_OFFSET(0x1F59D7D0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLINT16_OFFSET UNITYSDK_OFFSET(0x1F599010)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLINT32_OFFSET UNITYSDK_OFFSET(0x1F5993C0)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLINT64_OFFSET UNITYSDK_OFFSET(0x1F599980)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLMONEY_OFFSET UNITYSDK_OFFSET(0x1F59CA80)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLSINGLE_OFFSET UNITYSDK_OFFSET(0x1F59BE00)
#define SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLSTRING_OFFSET UNITYSDK_OFFSET(0x1F59DC20)

namespace System::Data::Common
{
	inline static constexpr unsigned int SqlConvert_TypeDefinitionIndex = 37413;

	class SqlConvert : public ::System::Object
	{
	public:
		static ::System::Data::SqlTypes::SqlByte ConvertToSqlByte(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlByte(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBYTE_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlInt16 ConvertToSqlInt16(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlInt16(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLINT16_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlInt32 ConvertToSqlInt32(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlInt32(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLINT32_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlInt64 ConvertToSqlInt64(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlInt64(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLINT64_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlDouble ConvertToSqlDouble(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlDouble(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLDOUBLE_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlDecimal ConvertToSqlDecimal(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlDecimal(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLDECIMAL_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlSingle ConvertToSqlSingle(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlSingle(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLSINGLE_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlMoney ConvertToSqlMoney(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlMoney(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLMONEY_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlDateTime ConvertToSqlDateTime(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlDateTime(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLDATETIME_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlBoolean ConvertToSqlBoolean(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlBoolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBOOLEAN_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlGuid ConvertToSqlGuid(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlGuid(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLGUID_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlBinary ConvertToSqlBinary(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlBinary(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBINARY_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlString ConvertToSqlString(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlString(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLSTRING_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlChars* ConvertToSqlChars(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlChars*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLCHARS_OFFSET))(value);
		}

		static ::System::Data::SqlTypes::SqlBytes* ConvertToSqlBytes(::System::Object* value)
		{
			return ((::System::Data::SqlTypes::SqlBytes*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTTOSQLBYTES_OFFSET))(value);
		}

		static ::System::DateTimeOffset ConvertStringToDateTimeOffset(::System::String* value, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::DateTimeOffset(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CONVERTSTRINGTODATETIMEOFFSET_OFFSET))(value, formatProvider);
		}

		static ::System::Object* ChangeTypeForDefaultValue(::System::Object* value, ::System::Type* type, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CHANGETYPEFORDEFAULTVALUE_OFFSET))(value, type, formatProvider);
		}

		static ::System::Object* ChangeType2(::System::Object* value, ::System::Data::Common::StorageType stype, ::System::Type* type, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Data::Common::StorageType, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CHANGETYPE2_OFFSET))(value, stype, type, formatProvider);
		}

		static ::System::Object* ChangeTypeForXML(::System::Object* value, ::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_SQLCONVERT_CHANGETYPEFORXML_OFFSET))(value, type);
		}
	};
}
