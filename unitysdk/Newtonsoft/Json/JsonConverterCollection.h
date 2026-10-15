#pragma once
#include "unitysdk/unitysdk.h"

#define NEWTONSOFT_JSON_JSONCONVERTERCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1C397E10)

namespace Newtonsoft::Json
{
	class JsonConverterCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTERCOLLECTION_CTOR_OFFSET))(this);
		}

	};
}
