#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ForceKillMarkType.h"
#include "unitysdk/RPG/GameCore/ForceKillShowType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class DefaultForceKillMarkData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_CLIENT_DEFAULTFORCEKILLMARKDATA___C__DISPLAYCLASS21_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD5626F0)
#define RPG_CLIENT_DEFAULTFORCEKILLMARKDATA___C__DISPLAYCLASS21_0___CACULATEFROMMODIFIERS_B__0_OFFSET UNITYSDK_OFFSET(0xD562700)

namespace RPG::Client
{
	inline static constexpr unsigned int DefaultForceKillMarkData___c__DisplayClass21_0_TypeDefinitionIndex = 73660;

	class DefaultForceKillMarkData___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::RPG::Client::DefaultForceKillMarkData* __4__this; // 0x10
		::RPG::GameCore::GameEntity* entity; // 0x18
		::System::Nullable_1<::RPG::GameCore::ForceKillShowType> forceKillShowType; // 0x20
		::System::Nullable_1<::RPG::GameCore::ForceKillMarkType> forceKillMarkType; // 0x28
		::System::Single maxRatio; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFAULTFORCEKILLMARKDATA___C__DISPLAYCLASS21_0_CTOR_OFFSET))(this);
		}

		::System::Void __CaculateFromModifiers_b__0(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFAULTFORCEKILLMARKDATA___C__DISPLAYCLASS21_0___CACULATEFROMMODIFIERS_B__0_OFFSET))(this, a1);
		}

	};
}
