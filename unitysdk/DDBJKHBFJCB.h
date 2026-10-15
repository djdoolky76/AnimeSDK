#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMCNDLNONMO;
namespace RPG::Client { class IRogueTournPersonaModifier; }

#define DDBJKHBFJCB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE25C070)

	class DDBJKHBFJCB : public ::System::Object
	{
	public:
		static ::RPG::Client::IRogueTournPersonaModifier* BPLPBPMEODA(::BMCNDLNONMO* a1)
		{
			return ((::RPG::Client::IRogueTournPersonaModifier*(*)(::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + DDBJKHBFJCB_BPLPBPMEODA_OFFSET))(a1);
		}

	};
