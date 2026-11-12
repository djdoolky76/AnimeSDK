#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightGrowUpEffect; }
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS51_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB6EA0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS51_0__PLAYSPOTLIGHTINFECTIONEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xDAB6EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass51_0_TypeDefinitionIndex = 65981;

	class GridFightEffectController___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10
		::RPG::Client::GridFightEffectController* __4__this; // 0x18
		::RPG::Client::GridFightGrowUpEffect* effect; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS51_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlaySpotLightInfectionEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS51_0__PLAYSPOTLIGHTINFECTIONEFFECT_B__0_OFFSET))(this);
		}

	};
}
