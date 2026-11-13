#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightUpgradeFlyEffect; }
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS86_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1D157FE0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS86_1__PLAYUPGRADEEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0x1D157FF0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS86_1__PLAYUPGRADEEFFECT_B__2_OFFSET UNITYSDK_OFFSET(0x1D158060)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass86_1_TypeDefinitionIndex = 65999;

	template <typename T>
	class GridFightEffectController___c__DisplayClass86_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::RPG::Client::GridFightUpgradeFlyEffect* fly; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS86_1_CTOR_OFFSET))(this);
		}

		::System::Void _PlayUpgradeEffect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS86_1__PLAYUPGRADEEFFECT_B__1_OFFSET))(this);
		}

		::System::Void _PlayUpgradeEffect_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS86_1__PLAYUPGRADEEFFECT_B__2_OFFSET))(this);
		}

	};
}
