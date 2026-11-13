#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightUpgradeFlyEffect; }
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS88_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1580A0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS88_0__PLAYUPGRADEFLYEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1D1580B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass88_0_TypeDefinitionIndex = 66000;

	class GridFightEffectController___c__DisplayClass88_0 : public ::System::Object
	{
	public:
		::System::Action* onFinished; // 0x10
		::RPG::Client::GridFightUpgradeFlyEffect* fly; // 0x18
		::RPG::Client::GridFightEffectController* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS88_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayUpgradeFlyEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS88_0__PLAYUPGRADEFLYEFFECT_B__0_OFFSET))(this);
		}

	};
}
