#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_PROTOCOLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFBD4C0)

namespace MiHoYo::SDK
{
	class ProtocolManager_NativeProtocol_ProtocolConfig : public ::System::Object
	{
	public:
		::System::String* config_key; // 0x10
		::System::String* config_value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NATIVEPROTOCOL_PROTOCOLCONFIG_CTOR_OFFSET))(this);
		}

	};
}
