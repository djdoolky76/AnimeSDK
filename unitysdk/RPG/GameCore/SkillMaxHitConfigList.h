#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SkillMaxHitConfig; }
namespace RPG::GameCore { class SkillMaxHitConfigList; }

#define RPG_GAMECORE_SKILLMAXHITCONFIGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC21F0)
#define RPG_GAMECORE_SKILLMAXHITCONFIGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC2130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillMaxHitConfigList_TypeDefinitionIndex = 16530;

	class SkillMaxHitConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SkillMaxHitConfig*>* SkillMaxHitList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLMAXHITCONFIGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillMaxHitConfigList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillMaxHitConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLMAXHITCONFIGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
