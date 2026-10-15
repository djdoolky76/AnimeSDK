#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierUIPosition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifierForceKillConfig; }
namespace RPG::GameCore { class ModifierHint; }
namespace RPG::GameCore { class ModifierMonsterHPMarkConfig; }
namespace RPG::GameCore { class TurnBasedModifierUIConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TURNBASEDMODIFIERUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC63C90)
#define RPG_GAMECORE_TURNBASEDMODIFIERUICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC63290)

namespace RPG::GameCore
{
	class TurnBasedModifierUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UIEffectPath; // 0x10
		::System::String* UIMiniEffectPath; // 0x18
		::RPG::GameCore::ModifierUIPosition UIPosition; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* ModifierUIPriority; // 0x28
		::System::Boolean IsShowInAvatarPanel; // 0x30
		::System::Boolean IsShowNumInAvatarPanel; // 0x31
		::System::Boolean IsShowInHUD; // 0x32
		::System::Byte _padding1[0x5];
		::System::String* TextPath; // 0x38
		::Il2CppArray<::RPG::GameCore::ModifierHint*>* Hints; // 0x40
		::RPG::GameCore::ModifierForceKillConfig* ForceKillConfig; // 0x48
		::RPG::GameCore::ModifierMonsterHPMarkConfig* MonsterHPMarkConfig; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TurnBasedModifierUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TurnBasedModifierUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERUICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
