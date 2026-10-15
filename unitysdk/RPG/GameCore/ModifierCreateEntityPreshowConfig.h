#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionDelayPreshowConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ModifierCreateEntityPreshowConfig; }
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_MODIFIERCREATEENTITYPRESHOWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D860230)
#define RPG_GAMECORE_MODIFIERCREATEENTITYPRESHOWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D860030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierCreateEntityPreshowConfig_TypeDefinitionIndex = 18182;

	class ModifierCreateEntityPreshowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SkillType>* SkillTypes; // 0x10
		::RPG::GameCore::PredicateConfig* Condition; // 0x18
		::RPG::GameCore::ActionDelayPreshowConfig* ActionDelayPreshowConfig; // 0x20
		::RPG::GameCore::EntityType CharacterType; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CharacterID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERCREATEENTITYPRESHOWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierCreateEntityPreshowConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierCreateEntityPreshowConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERCREATEENTITYPRESHOWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
