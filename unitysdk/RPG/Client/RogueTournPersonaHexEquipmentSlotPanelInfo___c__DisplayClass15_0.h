#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournHex; }

#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__DISPLAYCLASS15_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE020470)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__DISPLAYCLASS15_0___REMOVEINVALIDHEXES_B__0_OFFSET UNITYSDK_OFFSET(0xE020590)

namespace RPG::Client
{
	class RogueTournPersonaHexEquipmentSlotPanelInfo___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::UInt32 hexID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__DISPLAYCLASS15_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __RemoveInvalidHexes_b__0(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTPANELINFO___C__DISPLAYCLASS15_0___REMOVEINVALIDHEXES_B__0_OFFSET))(this, a1);
		}

	};
}
