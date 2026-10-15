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

#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_BJLINDIMFHM_OFFSET UNITYSDK_OFFSET(0x1D574BA0)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56D180)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_EFJHJJKLPHB_OFFSET UNITYSDK_OFFSET(0x1D575570)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_MEDFPCFFEDI_1_OFFSET UNITYSDK_OFFSET(0x1D575E20)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_MEDFPCFFEDI_OFFSET UNITYSDK_OFFSET(0x1D575D50)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D56D270)
#define RPG_GAMECORE_CHARACTEROVERRIDECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D574A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOverrideConfig_TypeDefinitionIndex = 16518;

	class CharacterOverrideConfig : public ::RPG::GameCore::CharacterConfig
	{
	public:
		::System::String* ParentConfigPath; // 0x220
		::Il2CppArray<::System::String*>* DLCPathList; // 0x228
		::Il2CppArray<::System::String*>* InheritSkillList; // 0x230
		::Il2CppArray<::System::String*>* ReplacedSkillList; // 0x238
		::ENEIHJJPNPI* AdditiveDynamicValues; // 0x240
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
