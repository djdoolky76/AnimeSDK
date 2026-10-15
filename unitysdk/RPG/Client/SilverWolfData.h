#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_SILVERWOLFDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE0C49F0)

namespace RPG::Client
{
	class SilverWolfData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFDATA_CTOR_OFFSET))(this);
		}

	};
}
