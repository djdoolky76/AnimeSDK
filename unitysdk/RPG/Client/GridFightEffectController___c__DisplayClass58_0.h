#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightRoleChangeEffect; }
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS58_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1578D0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS58_0___PLAYAVATARUNLOCKUPGRADEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1D1578E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass58_0_TypeDefinitionIndex = 65988;

	class GridFightEffectController___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::System::Action* onFinish; // 0x18
		::RPG::Client::GridFightRoleChangeEffect* effect; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS58_0_CTOR_OFFSET))(this);
		}

		::System::Void __PlayAvatarUnlockUpgradeEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS58_0___PLAYAVATARUNLOCKUPGRADEEFFECT_B__0_OFFSET))(this);
		}

	};
}
