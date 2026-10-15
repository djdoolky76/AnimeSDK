#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RPGCINEMACHINEZOOM_GGKDJILKLIK_CTOR_OFFSET UNITYSDK_OFFSET(0xDE1C610)

namespace RPG::Client
{
	class RPGCinemachineZoom_GGKDJILKLIK : public ::System::Object
	{
	public:
		::System::Single KPFEBGGMFPA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_GGKDJILKLIK_CTOR_OFFSET))(this);
		}

	};
}
