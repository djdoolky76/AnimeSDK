#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_CONSOLEINPUTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE413D0)

namespace MiHoYo::SDK
{
	class ConsoleInputParam : public ::System::Object
	{
	public:
		// static const ::System::String* CONSOLE_INPUT_TYPE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLEINPUTPARAM_CTOR_OFFSET))(this);
		}

	};
}
