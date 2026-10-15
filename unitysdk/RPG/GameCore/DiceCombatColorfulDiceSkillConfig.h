#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatColorfulDiceSkillConfig; }
namespace RPG::GameCore { class DiceCombatNotAvatarPreviewConfig; }

#define RPG_GAMECORE_DICECOMBATCOLORFULDICESKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D96E0)
#define RPG_GAMECORE_DICECOMBATCOLORFULDICESKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D9590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatColorfulDiceSkillConfig_TypeDefinitionIndex = 16127;

	class DiceCombatColorfulDiceSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ModifierID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::DiceCombatNotAvatarPreviewConfig*>* PreviewConfigs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCOLORFULDICESKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatColorfulDiceSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatColorfulDiceSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCOLORFULDICESKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
