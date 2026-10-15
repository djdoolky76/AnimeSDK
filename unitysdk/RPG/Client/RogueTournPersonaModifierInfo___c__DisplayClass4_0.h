#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMEIKAGDIFC.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournPersonaModifier; }

#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE026C60)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO___C__DISPLAYCLASS4_0__GETMODIFIERSBYSOURCETYPE_B__0_OFFSET UNITYSDK_OFFSET(0xE026DD0)

namespace RPG::Client
{
	class RogueTournPersonaModifierInfo___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::AMEIKAGDIFC type; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetModifiersBySourceType_b__0(::RPG::Client::IRogueTournPersonaModifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournPersonaModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO___C__DISPLAYCLASS4_0__GETMODIFIERSBYSOURCETYPE_B__0_OFFSET))(this, a1);
		}

	};
}
