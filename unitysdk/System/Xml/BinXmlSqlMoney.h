#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Decimal.h"

namespace System { class String; }

#define SYSTEM_XML_BINXMLSQLMONEY_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x97E130)
#define SYSTEM_XML_BINXMLSQLMONEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x97E1A0)
#define SYSTEM_XML_BINXMLSQLMONEY__CTOR_OFFSET UNITYSDK_OFFSET(0x8D6310)

namespace System::Xml
{
	inline static constexpr unsigned int BinXmlSqlMoney_TypeDefinitionIndex = 1667;

	struct alignas(4) BinXmlSqlMoney
	{
		::System::Int64 data; // 0x10

		::System::Void _ctor(::System::Int32 v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLMONEY__CTOR_OFFSET))(this, v);
		}

		::System::Decimal ToDecimal()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLMONEY_TODECIMAL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BINXMLSQLMONEY_TOSTRING_OFFSET))(this);
		}
	};
}
