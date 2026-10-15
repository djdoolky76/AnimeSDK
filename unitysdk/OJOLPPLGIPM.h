#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCOKLOGEKEL;
namespace RPG::Client { class IRogueTournGameSettleResultComposition; }

#define OJOLPPLGIPM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBECFD90)
#define OJOLPPLGIPM_CTOR_OFFSET UNITYSDK_OFFSET(0xBECFE70)

	class OJOLPPLGIPM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOLPPLGIPM_CTOR_OFFSET))(this);
		}

		::RPG::Client::IRogueTournGameSettleResultComposition* BPLPBPMEODA(::LCOKLOGEKEL* a1)
		{
			return ((::RPG::Client::IRogueTournGameSettleResultComposition*(*)(::PVOID, ::LCOKLOGEKEL*))((::PBYTE)hIl2Cpp + OJOLPPLGIPM_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
