#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHIMERADUELGAMESHOPSTALLLOCKDTO_CTOR_OFFSET UNITYSDK_OFFSET(0xCB323F0)

namespace RPG::Client
{
	class ChimeraDuelGameShopStallLockDto : public ::System::Object
	{
	public:
		::System::Boolean IsLocked; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 UniqueID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESHOPSTALLLOCKDTO_CTOR_OFFSET))(this);
		}

	};
}
