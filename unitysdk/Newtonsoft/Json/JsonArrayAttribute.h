#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonContainerAttribute.h"

#define NEWTONSOFT_JSON_JSONARRAYATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51CDC0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int JsonArrayAttribute_TypeDefinitionIndex = 9606;

	class JsonArrayAttribute : public ::Newtonsoft::Json::JsonContainerAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_JSONARRAYATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
