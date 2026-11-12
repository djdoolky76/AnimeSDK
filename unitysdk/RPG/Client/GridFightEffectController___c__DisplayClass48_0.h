#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightTraitActiveEffect; }
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS48_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB6D80)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS48_0__PLAYASTROPOLISLVUPEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xDAB6D90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass48_0_TypeDefinitionIndex = 65978;

	class GridFightEffectController___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitActiveEffect* effect; // 0x10
		::System::Action* onFinish; // 0x18
		::RPG::Client::GridFightEffectController* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS48_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayAstropolisLvUpEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS48_0__PLAYASTROPOLISLVUPEFFECT_B__0_OFFSET))(this);
		}

	};
}
