#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightTraitActiveEffect; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS44_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB6B30)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS44_0__PLAYTRAITACTIVEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xDAB6B40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass44_0_TypeDefinitionIndex = 65974;

	class GridFightEffectController___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::RPG::Client::GridFightTraitActiveEffect* effect; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS44_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayTraitActiveEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS44_0__PLAYTRAITACTIVEEFFECT_B__0_OFFSET))(this);
		}

	};
}
