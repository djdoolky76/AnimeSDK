#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"
namespace System { class Type; }

#define NEWTONSOFT_JSON_CONVERTERS_DATETIMECONVERTERBASE_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x18F2E110)
#define NEWTONSOFT_JSON_CONVERTERS_DATETIMECONVERTERBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x18F2E1D0)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int DateTimeConverterBase_TypeDefinitionIndex = 9823;

	class DateTimeConverterBase : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DATETIMECONVERTERBASE_CTOR_OFFSET))(this);
		}

		::System::Boolean CanConvert(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_DATETIMECONVERTERBASE_CANCONVERT_OFFSET))(this, a1);
		}

	};
}
