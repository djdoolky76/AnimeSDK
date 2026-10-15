#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHMJHLGKLHP.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipTrack; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD126A60)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0__GETEQUIPTRACK_B__0_OFFSET UNITYSDK_OFFSET(0xD12A2D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0__GETEQUIPTRACK_B__1_OFFSET UNITYSDK_OFFSET(0xD12A2F0)

namespace RPG::Client
{
	class GridFightEquipTrackData___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::UInt32 targetID; // 0x10
		::IHMJHLGKLHP trackSource; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipTrack_b__0(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0__GETEQUIPTRACK_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _GetEquipTrack_b__1(::RPG::Client::GridFightEquipTrack* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__DISPLAYCLASS23_0__GETEQUIPTRACK_B__1_OFFSET))(this, a1);
		}

	};
}
