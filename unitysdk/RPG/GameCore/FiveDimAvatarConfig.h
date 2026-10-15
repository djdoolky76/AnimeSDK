#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimAvatarConfig; }
namespace RPG::GameCore { class FiveDimAvatarMoveAbilityConfig; }
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class FiveDimBaseEventCondition; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMAVATARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AFE70)
#define RPG_GAMECORE_FIVEDIMAVATARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AFB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAvatarConfig_TypeDefinitionIndex = 16709;

	class FiveDimAvatarConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* CharacterConfigPath; // 0x18
		::RPG::GameCore::FiveDimAvatarMoveAbilityConfig* MoveAbilityConfig; // 0x20
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* InitActions; // 0x28
		::System::Boolean HasSkill; // 0x30
		::System::Byte _padding1[0x3];
		::System::UInt32 SkillPanelConfigID; // 0x34
		::System::Single SkillCoolDown; // 0x38
		::System::Byte _padding2[0x4];
		::RPG::GameCore::FiveDimBaseEventCondition* SkillCondition; // 0x40
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* SkillActions; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAVATARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAvatarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAVATARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
