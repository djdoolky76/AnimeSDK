#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightEquipActiveEffect; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS95_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB7C00)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS95_0__PLAYEQUIPACTIVEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xDAB7C10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass95_0_TypeDefinitionIndex = 66005;

	class GridFightEffectController___c__DisplayClass95_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::RPG::Client::GridFightEquipActiveEffect* equipEffect; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS95_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayEquipActiveEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS95_0__PLAYEQUIPACTIVEEFFECT_B__0_OFFSET))(this);
		}

	};
}
