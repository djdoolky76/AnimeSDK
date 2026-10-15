#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KICPDGKGGHO;
namespace RPG::Client { class PlanetFesActiveBuff; }

#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS47_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDBC3A80)
#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS47_0___SYNCREMOVEBUFF_B__0_OFFSET UNITYSDK_OFFSET(0xDBC3A90)

namespace RPG::Client
{
	class PlanetFesModule___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::KICPDGKGGHO* effect; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS47_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncRemoveBuff_b__0(::RPG::Client::PlanetFesActiveBuff* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesActiveBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS47_0___SYNCREMOVEBUFF_B__0_OFFSET))(this, a1);
		}

	};
}
