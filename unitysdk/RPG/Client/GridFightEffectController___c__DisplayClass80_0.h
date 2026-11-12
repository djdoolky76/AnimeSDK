#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightRoleTraitEffect; }
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS80_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB7670)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS80_0__PLAYMOONGAMEGOLDTRAITEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xDAB7680)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass80_0_TypeDefinitionIndex = 65996;

	class GridFightEffectController___c__DisplayClass80_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::RPG::Client::GridFightRoleTraitEffect* effect; // 0x18
		::System::Action* onFinish; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS80_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayMoonGameGoldTraitEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS80_0__PLAYMOONGAMEGOLDTRAITEFFECT_B__0_OFFSET))(this);
		}

	};
}
