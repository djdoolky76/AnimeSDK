#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define RPG_CLIENT_DATETIMEPRO_DATETIMEAMBIGUITYEXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC46B40)

namespace RPG::Client
{
	class DateTimePro_DateTimeAmbiguityException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DATETIMEPRO_DATETIMEAMBIGUITYEXCEPTION_CTOR_OFFSET))(this);
		}

	};
}
