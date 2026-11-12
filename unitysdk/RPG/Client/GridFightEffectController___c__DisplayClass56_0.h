#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightFlyEffect; }
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS56_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB70B0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS56_0__PLAYAVATARUNLOCKEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xDAB70C0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS56_0__PLAYAVATARUNLOCKEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0xDAB70F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass56_0_TypeDefinitionIndex = 65987;

	class GridFightEffectController___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::System::Action* onChangeRole; // 0x10
		::RPG::Client::GridFightFlyEffect* trail; // 0x18
		::RPG::Client::GridFightEffectController* __4__this; // 0x20
		::System::Action* onFinish; // 0x28
		::System::UInt32 uid; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS56_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayAvatarUnlockEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS56_0__PLAYAVATARUNLOCKEFFECT_B__0_OFFSET))(this);
		}

		::System::Void _PlayAvatarUnlockEffect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS56_0__PLAYAVATARUNLOCKEFFECT_B__1_OFFSET))(this);
		}

	};
}
