#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WeakAssetReference.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROP_CHIMERADUELBATTLEPREFABCONFIG_MASTER_CTOR_OFFSET UNITYSDK_OFFSET(0xDC559B0)

namespace RPG::Client::Prop
{
	class ChimeraDuelBattlePrefabConfig_Master : public ::System::Object
	{
	public:
		::System::UInt32 MasterID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::WeakAssetReference Prefab; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBATTLEPREFABCONFIG_MASTER_CTOR_OFFSET))(this);
		}

	};
}
