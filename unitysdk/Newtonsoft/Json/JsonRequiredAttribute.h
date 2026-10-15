#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NEWTONSOFT_JSON_JSONREQUIREDATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C39DD50)

namespace Newtonsoft::Json
{
	class JsonRequiredAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONREQUIREDATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
