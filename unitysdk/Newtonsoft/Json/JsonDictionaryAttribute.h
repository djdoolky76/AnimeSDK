#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonContainerAttribute.h"

#define NEWTONSOFT_JSON_JSONDICTIONARYATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C397E20)

namespace Newtonsoft::Json
{
	class JsonDictionaryAttribute : public ::Newtonsoft::Json::JsonContainerAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONDICTIONARYATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
