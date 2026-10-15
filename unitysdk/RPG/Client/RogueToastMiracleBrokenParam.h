#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUETOASTMIRACLEBROKENPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xDF74230)

namespace RPG::Client
{
	class RogueToastMiracleBrokenParam : public ::System::Object
	{
	public:
		::System::UInt32 BrokenChangeMiracleID; // 0x10
		::System::UInt32 MiracleID; // 0x14
		::System::UInt32 HintID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOASTMIRACLEBROKENPARAM_CTOR_OFFSET))(this);
		}

	};
}
