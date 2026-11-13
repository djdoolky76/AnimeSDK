#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlanetFesFloatingController; }
namespace RPG::Client { class PlanetFesTimedEffect; }
namespace System { class Action; }

#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS26_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C2D20)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS26_0__DOADDITEMEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1D1C37C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesFloatingController___c__DisplayClass26_0_TypeDefinitionIndex = 68430;

	class PlanetFesFloatingController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10
		::RPG::Client::PlanetFesTimedEffect* addEffect; // 0x18
		::RPG::Client::PlanetFesFloatingController* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS26_0_CTOR_OFFSET))(this);
		}

		::System::Void _DoAddItemEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER___C__DISPLAYCLASS26_0__DOADDITEMEFFECT_B__0_OFFSET))(this);
		}

	};
}
