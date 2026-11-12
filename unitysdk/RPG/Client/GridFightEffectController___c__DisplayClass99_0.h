#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightRoleTraitEffect; }
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS99_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB7D30)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS99_0__PLAYROLETRAITEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xDAB7D40)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS99_0__PLAYROLETRAITEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0xDAB7D80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass99_0_TypeDefinitionIndex = 66008;

	class GridFightEffectController___c__DisplayClass99_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::RPG::Client::GridFightRoleTraitEffect* effect; // 0x18
		::System::Action* callback; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS99_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayRoleTraitEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS99_0__PLAYROLETRAITEFFECT_B__0_OFFSET))(this);
		}

		::System::Void _PlayRoleTraitEffect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS99_0__PLAYROLETRAITEFFECT_B__1_OFFSET))(this);
		}

	};
}
