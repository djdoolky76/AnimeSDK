#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEWTONSOFT_JSON_LINQ_JSONPATH_PATHFILTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D07C0)

namespace Newtonsoft::Json::Linq::JsonPath
{
	class PathFilter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JSONPATH_PATHFILTER_CTOR_OFFSET))(this);
		}

	};
}
