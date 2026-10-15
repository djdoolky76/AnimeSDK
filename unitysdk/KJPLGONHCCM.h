#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNKPPLPLFOM;
namespace RPG::Client { class WolfBroGunPlayTarget; }
namespace RPG::Client { class WolfBroGunPlayTargetActionConfig; }

#define KJPLGONHCCM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB4605D0)

	class KJPLGONHCCM : public ::System::Object
	{
	public:
		static ::JNKPPLPLFOM* BPLPBPMEODA(::RPG::Client::WolfBroGunPlayTargetActionConfig* a1, ::RPG::Client::WolfBroGunPlayTarget* a2)
		{
			return ((::JNKPPLPLFOM*(*)(::RPG::Client::WolfBroGunPlayTargetActionConfig*, ::RPG::Client::WolfBroGunPlayTarget*))((::PBYTE)hIl2Cpp + KJPLGONHCCM_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
