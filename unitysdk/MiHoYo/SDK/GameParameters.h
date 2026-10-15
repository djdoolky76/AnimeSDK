#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_GAMEPARAMETERS_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE43D30)

namespace MiHoYo::SDK
{
	class GameParameters : public ::System::Object
	{
	public:
		// static const ::System::String* GAME_BIZ; // 0x0
		// static const ::System::String* GAME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GAMEPARAMETERS_CTOR_OFFSET))(this);
		}

	};
}
