#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightFlyEffect; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS93_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB7B30)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS93_0__PLAYEQUIPEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xDAB7B40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass93_0_TypeDefinitionIndex = 66004;

	class GridFightEffectController___c__DisplayClass93_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* itemTrans; // 0x10
		::UnityEngine::Transform* effectAddTrans; // 0x18
		::RPG::Client::GridFightFlyEffect* effect; // 0x20
		::RPG::Client::GridFightEffectController* __4__this; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS93_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayEquipEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS93_0__PLAYEQUIPEFFECT_B__0_OFFSET))(this);
		}

	};
}
