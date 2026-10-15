#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemConfig; }

#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPGETITEMEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD2BD670)

namespace RPG::Client
{
	class GridFightTraitEquipGetItemEvent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipItemConfig* Config; // 0x10
		::System::UInt32 UID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPGETITEMEVENT_CTOR_OFFSET))(this);
		}

	};
}
