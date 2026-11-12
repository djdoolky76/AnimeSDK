#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"
class CNCHEGIMEJM;
class FCOEMCEDLNL;
class KFGPEAIMBJK;
namespace RPG::GameCore { class EvolveBuildStageRow; }
namespace System { class String; }

#define RPG_GAMECORE_EVOLVEBUILDSTAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E895260)
#define RPG_GAMECORE_EVOLVEBUILDSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E8931E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildStageRow_TypeDefinitionIndex = 11461;

	class EvolveBuildStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StagePeriod4; // 0x10
		::System::String* TeamBonusIconPath; // 0x18
		::Il2CppArray<::System::UInt32>* StagePeriod1; // 0x20
		::Il2CppArray<::CNCHEGIMEJM*>* RecommendList; // 0x28
		::Il2CppArray<::System::UInt32>* GearRecommendList; // 0x30
		::Il2CppArray<::KFGPEAIMBJK*>* RankList; // 0x38
		::Il2CppArray<::System::UInt32>* StagePeriod2; // 0x40
		::Il2CppArray<::System::UInt32>* TrialAvatar; // 0x48
		::Il2CppArray<::System::UInt32>* StagePeriod3; // 0x50
		::Il2CppArray<::System::UInt32>* InitialWeapon; // 0x58
		::Il2CppArray<::System::UInt32>* FirstWinQuest; // 0x60
		::System::Int32 Difficulty; // 0x68
		::System::UInt32 StageMergedID; // 0x6C
		::System::UInt32 IntroID; // 0x70
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Desc; // 0x78
		::RPG::Client::TextID BuffTextFormat; // 0x88
		::RPG::Client::TextID PreName; // 0x98
		::System::UInt32 UnlockQuest; // 0xA8
		::RPG::GameCore::EvolveBuildSeason Season; // 0xAC
		::System::UInt32 TeamBonusMazeBuffID; // 0xB0
		::System::Boolean WeaponSelectable; // 0xB4
		::System::Byte _padding1[0x3];
		::RPG::Client::TextID TeamBonusShortDesc; // 0xB8
		::RPG::Client::TextID Name; // 0xC8
		::RPG::Client::TextID DevilDesc; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EvolveBuildStageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EvolveBuildStageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
