#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_JSONCONVERTER_CTOR_OFFSET UNITYSDK_OFFSET(0x18F2DD60)
#define NEWTONSOFT_JSON_JSONCONVERTER_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x18F4ADD0)
#define NEWTONSOFT_JSON_JSONCONVERTER_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x18F4ADE0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonConverter_TypeDefinitionIndex = 9622;

	class JsonConverter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTER_CTOR_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTER_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTER_GET_CANWRITE_OFFSET))(this);
		}

	};
}
