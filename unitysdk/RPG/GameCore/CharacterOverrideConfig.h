#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterConfig.h"
#include "unitysdk/RPG/GameCore/CharacterOverrideConfig_OverrideSkillConfigContext.h"
class ENEIHJJPNPI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterOverrideConfig; }
namespace RPG::GameCore { class SkillAbilityConfig; }
namespace RPG::GameCore { class SkillConfig; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_BJLINDIMFHM_OFFSET UNITYSDK_OFFSET(0x1E785AA0)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E77E700)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_EFJHJJKLPHB_OFFSET UNITYSDK_OFFSET(0x1E786470)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_MEDFPCFFEDI_1_OFFSET UNITYSDK_OFFSET(0x1E786D20)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_MEDFPCFFEDI_OFFSET UNITYSDK_OFFSET(0x1E786C50)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E77E7F0)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E785990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOverrideConfig_TypeDefinitionIndex = 16682;

	class CharacterOverrideConfig : public ::RPG::GameCore::CharacterConfig
	{
	public:
		::System::String* ParentConfigPath; // 0x238
		::Il2CppArray<::System::String*>* DLCPathList; // 0x240
		::Il2CppArray<::System::String*>* InheritSkillList; // 0x248
		::Il2CppArray<::System::String*>* ReplacedSkillList; // 0x250
		::ENEIHJJPNPI* AdditiveDynamicValues; // 0x258
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROVERRIDECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterOverrideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROVERRIDECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterOverrideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterOverrideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROVERRIDECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void BJLINDIMFHM(::RPG::GameCore::CharacterOverrideConfig_OverrideSkillConfigContext a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::CharacterOverrideConfig_OverrideSkillConfigContext, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROVERRIDECONFIG_BJLINDIMFHM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EFJHJJKLPHB(::RPG::GameCore::CharacterOverrideConfig_OverrideSkillConfigContext a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::CharacterOverrideConfig_OverrideSkillConfigContext, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROVERRIDECONFIG_EFJHJJKLPHB_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 MEDFPCFFEDI(::Il2CppArray<::RPG::GameCore::SkillConfig*>* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::RPG::GameCore::SkillConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROVERRIDECONFIG_MEDFPCFFEDI_OFFSET))(a1, a2);
		}

		static ::System::Int32 MEDFPCFFEDI_1(::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROVERRIDECONFIG_MEDFPCFFEDI_1_OFFSET))(a1, a2);
		}

	};
}
