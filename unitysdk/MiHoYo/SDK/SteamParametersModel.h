#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_STEAMPARAMETERSMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFE1D80)

namespace MiHoYo::SDK
{
	class SteamParametersModel : public ::System::Object
	{
	public:
		::System::String* steam_appid; // 0x10
		::System::Boolean enable_legacy_steam; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMPARAMETERSMODEL_CTOR_OFFSET))(this);
		}

	};
}
