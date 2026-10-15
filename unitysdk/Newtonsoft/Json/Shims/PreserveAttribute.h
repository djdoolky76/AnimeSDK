#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NEWTONSOFT_JSON_SHIMS_PRESERVEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C405D90)

namespace Newtonsoft::Json::Shims
{
	class PreserveAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SHIMS_PRESERVEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
