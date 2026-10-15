#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPGTools::Timeline { class CameraShakeConfig; }
namespace System { class String; }

#define RPG_CLIENT_CONVINCESHAKECONFIG_CONVINCESHAKEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCBC6B30)

namespace RPG::Client
{
	class ConvinceShakeConfig_ConvinceShakeData : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::RPGTools::Timeline::CameraShakeConfig* ShakeConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCESHAKECONFIG_CONVINCESHAKEDATA_CTOR_OFFSET))(this);
		}

	};
}
