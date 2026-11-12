#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightGrowUpEffect; }
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS49_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB6DE0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS49_0__PLAYGROWUPEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xDAB6DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass49_0_TypeDefinitionIndex = 65979;

	class GridFightEffectController___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::RPG::Client::GridFightGrowUpEffect* effect; // 0x18
		::System::Action* onFinish; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS49_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayGrowupEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS49_0__PLAYGROWUPEFFECT_B__0_OFFSET))(this);
		}

	};
}
