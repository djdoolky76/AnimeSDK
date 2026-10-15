#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::Client { class PlanetFesActiveBuff; }

#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS153_1_CTOR_OFFSET UNITYSDK_OFFSET(0xDBC3690)
#define RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS153_1__CALCINCOMEAFTERSWITCHAVATAR_B__2_OFFSET UNITYSDK_OFFSET(0xDBC36A0)

namespace RPG::Client
{
	template <typename T>
	class PlanetFesModule___c__DisplayClass153_1 : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesActiveBuff* x; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS153_1_CTOR_OFFSET))(this);
		}

		::System::Boolean _CalcIncomeAfterSwitchAvatar_b__2(::RPG::Client::IPlanetFesBuff* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__DISPLAYCLASS153_1__CALCINCOMEAFTERSWITCHAVATAR_B__2_OFFSET))(this, a1);
		}

	};
}
