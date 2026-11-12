#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FightFestStageInfoRow; }

#define RPG_GAMECORE_FIGHTFESTSTAGEINFOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B3B20)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E8B3190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestStageInfoRow_TypeDefinitionIndex = 13355;

	class FightFestStageInfoRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* RecommadNature; // 0x10
		::Il2CppArray<::System::UInt32>* SpecialAvatarList; // 0x18
		::Il2CppArray<::System::UInt32>* RecommadCoachID; // 0x20
		::Il2CppArray<::System::UInt32>* PreviewMonsterList; // 0x28
		::RPG::Client::TextID ChallengeName; // 0x30
		::System::UInt32 UIEnterBattleAreaID; // 0x40
		::System::UInt32 EnvironmentBuffID; // 0x44
		::RPG::Client::TextID EnvironmentBuffName; // 0x48
		::RPG::Client::TextID HighLightDesc; // 0x58
		::System::UInt32 EventID; // 0x68
		::System::UInt32 TutorialID; // 0x6C
		::RPG::Client::TextID EnvironmentBuffDes; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FightFestStageInfoRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FightFestStageInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
