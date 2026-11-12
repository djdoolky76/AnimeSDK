#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/BattleEventButtonSlotType.h"
#include "unitysdk/RPG/GameCore/BattleEventButtonType.h"
#include "unitysdk/RPG/GameCore/BattleEventLifeBinding.h"
#include "unitysdk/RPG/GameCore/CharacterConfig.h"
#include "unitysdk/RPG/GameCore/CharacterFormationType.h"
#include "unitysdk/RPG/GameCore/CharacterResourceLoadOption.h"
#include "unitysdk/RPG/GameCore/TeamLocationType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleEventConfig; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E667C40)
#define RPG_GAMECORE_BATTLEEVENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E667D50)
#define RPG_GAMECORE_BATTLEEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E667B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventConfig_TypeDefinitionIndex = 16691;

	class BattleEventConfig : public ::RPG::GameCore::CharacterConfig
	{
	public:
		::System::String* ActionIconPath; // 0x238
		::System::Boolean AllowTriggerEffectWithoutModel; // 0x240
		::System::Boolean HaveActionDelay; // 0x241
		::System::Byte _padding0[0x2];
		::RPG::GameCore::BattleEventLifeBinding LifeBinding; // 0x244
		::RPG::GameCore::CharacterFormationType FormationType; // 0x248
		::RPG::GameCore::TeamLocationType LocationType; // 0x24C
		::RPG::GameCore::AttackDamageType DamageType; // 0x250
		::System::Boolean IsPlayerControlled; // 0x254
		::System::Byte _padding1[0x3];
		::System::String* AIPath; // 0x258
		::System::Int32 MaxSP; // 0x260
		::RPG::GameCore::BattleEventButtonType BattleEventButtonID; // 0x264
		::RPG::GameCore::BattleEventButtonSlotType ButtonSlotType; // 0x268
		::System::UInt32 ButtonSlotIndex; // 0x26C
		::RPG::GameCore::CharacterResourceLoadOption ResourceLoadOption; // 0x270
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x274
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
