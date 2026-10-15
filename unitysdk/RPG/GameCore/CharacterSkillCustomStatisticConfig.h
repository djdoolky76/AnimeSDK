#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterSkillCustomStatisticConfig; }
namespace RPG::GameCore { class SkillMaxHitConfigList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERSKILLCUSTOMSTATISTICCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54B660)
#define RPG_GAMECORE_CHARACTERSKILLCUSTOMSTATISTICCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54B460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterSkillCustomStatisticConfig_TypeDefinitionIndex = 16532;

	class CharacterSkillCustomStatisticConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* AvatarSkillID2PerformTime; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* MonsterSkillID2PerformTime; // 0x18
		::Il2CppArray<::System::UInt32>* SkillMinPerformTimeCheckWhiteList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::SkillMaxHitConfigList*>* SkillMaxHitStatistic; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSKILLCUSTOMSTATISTICCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterSkillCustomStatisticConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterSkillCustomStatisticConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSKILLCUSTOMSTATISTICCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
