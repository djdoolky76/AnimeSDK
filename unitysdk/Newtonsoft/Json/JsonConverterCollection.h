#pragma once
#include "unitysdk/unitysdk.h"

#define NEWTONSOFT_JSON_JSONCONVERTERCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1C397E10)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonConverterCollection_TypeDefinitionIndex = 9615;

	class JsonConverterCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONCONVERTERCOLLECTION_CTOR_OFFSET))(this);
		}

	};
}
