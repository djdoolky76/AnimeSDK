#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlanetFesFloatingController; }
namespace RPG::Client { class PlanetFesFloatingItem; }
namespace System { class Action; }

#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS24_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE62D390)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS24_0___DOFLYITEMEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xE62EA70)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesFloatingController___c__DisplayClass24_0_TypeDefinitionIndex = 68428;

	class PlanetFesFloatingController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesFloatingItem* floatEffect; // 0x10
		::System::Action* onFinish; // 0x18
		::RPG::Client::PlanetFesFloatingController* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS24_0_CTOR_OFFSET))(this);
		}

		::System::Void __DoFlyItemEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS24_0___DOFLYITEMEFFECT_B__0_OFFSET))(this);
		}

	};
}
