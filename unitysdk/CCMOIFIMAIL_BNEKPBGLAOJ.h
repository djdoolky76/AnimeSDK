#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCMOIFIMAIL_OverrideAspect.h"
#include "unitysdk/RPG/Client/OpenWorld/ItemOverrideReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"

#define CCMOIFIMAIL_BNEKPBGLAOJ_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xE2430)
#define CCMOIFIMAIL_BNEKPBGLAOJ_NDDIDDOMAKN_OFFSET UNITYSDK_OFFSET(0xE2370)
#define CCMOIFIMAIL_BNEKPBGLAOJ_OAMEIMOJGHN_OFFSET UNITYSDK_OFFSET(0xE23D0)

	struct alignas(8) CCMOIFIMAIL_BNEKPBGLAOJ
	{
		::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::ItemOverrideReason> BMKKFCDAFEA; // 0x10
		::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::ItemOverrideReason> DKELEJNLELI; // 0x18
		::System::Boolean NDDIDDOMAKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_BNEKPBGLAOJ_NDDIDDOMAKN_OFFSET))(this);
		}

		::System::Boolean OAMEIMOJGHN(::CCMOIFIMAIL_OverrideAspect a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CCMOIFIMAIL_OverrideAspect))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_BNEKPBGLAOJ_OAMEIMOJGHN_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::CCMOIFIMAIL_OverrideAspect a1, ::System::Boolean a2, ::RPG::Client::OpenWorld::ItemOverrideReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::CCMOIFIMAIL_OverrideAspect, ::System::Boolean, ::RPG::Client::OpenWorld::ItemOverrideReason))((::PBYTE)hIl2Cpp + CCMOIFIMAIL_BNEKPBGLAOJ_BLILDBCEGFH_OFFSET))(this, a1, a2, a3);
		}

	};
