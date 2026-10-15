#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterSkillStatisticConfig; }
namespace RPG::GameCore { class SkillMaxHitConfigList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERSKILLSTATISTICCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5791A0)
#define RPG_GAMECORE_CHARACTERSKILLSTATISTICCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5790C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterSkillStatisticConfig_TypeDefinitionIndex = 16531;

	class CharacterSkillStatisticConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SkillMaxHitConfigList*>* SkillMaxHitStatistic; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSKILLSTATISTICCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterSkillStatisticConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterSkillStatisticConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSKILLSTATISTICCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
