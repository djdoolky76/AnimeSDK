#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatSkillPreviewConfig; }
namespace RPG::GameCore { class DiceCombatTaskConfig; }

#define RPG_GAMECORE_DICECOMBATSKILLPREVIEWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E2C60)
#define RPG_GAMECORE_DICECOMBATSKILLPREVIEWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E2B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatSkillPreviewConfig_TypeDefinitionIndex = 16123;

	class DiceCombatSkillPreviewConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnStart; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATSKILLPREVIEWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatSkillPreviewConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatSkillPreviewConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATSKILLPREVIEWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
