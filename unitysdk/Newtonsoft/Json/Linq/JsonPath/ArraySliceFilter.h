#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JsonPath/PathFilter.h"

#define NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D07E0)

namespace Newtonsoft::Json::Linq::JsonPath
{
	class ArraySliceFilter : public ::Newtonsoft::Json::Linq::JsonPath::PathFilter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_ARRAYSLICEFILTER_CTOR_OFFSET))(this);
		}

	};
}
