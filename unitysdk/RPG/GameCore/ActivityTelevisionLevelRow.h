#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityTelevisionLevelRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYTELEVISIONLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E591CC0)
#define RPG_GAMECORE_ACTIVITYTELEVISIONLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E591240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityTelevisionLevelRow_TypeDefinitionIndex = 12571;

	class ActivityTelevisionLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AvailableBuffList; // 0x10
		::Il2CppArray<::RPG::Client::TextID>* TargetTextList; // 0x18
		::Il2CppArray<::System::Single>* MonsterParmList; // 0x20
		::Il2CppArray<::System::UInt32>* ExtraInfoMonsterIDList; // 0x28
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x30
		::System::String* MonsterPic; // 0x38
		::Il2CppArray<::System::UInt32>* SpecialAvatarList; // 0x40
		::Il2CppArray<::System::UInt32>* AllMonsterList; // 0x48
		::Il2CppArray<::System::UInt32>* BuffShowLevelList; // 0x50
		::Il2CppArray<::System::Single>* ParmList; // 0x58
		::Il2CppArray<::System::UInt32>* MazeBuffMulList; // 0x60
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* RecommadNature; // 0x68
		::Il2CppArray<::System::UInt32>* PreTelevisionList; // 0x70
		::RPG::Client::TextID MonsterBuffDesc; // 0x78
		::System::UInt32 ExtraInfoMonsterWave; // 0x88
		::System::UInt32 FirstMonsterWave; // 0x8C
		::RPG::Client::TextID MonsterBuffTips; // 0x90
		::RPG::Client::TextID BuffDesc; // 0xA0
		::System::UInt32 MazeBuffID; // 0xB0
		::System::UInt32 UIEnterBattleAreaID; // 0xB4
		::RPG::Client::TextID MonsterBuffShortDesc; // 0xB8
		::System::UInt32 BuffCount; // 0xC8
		::System::UInt32 TelevisionID; // 0xCC
		::RPG::Client::TextID BuffShortDesc; // 0xD0
		::System::UInt32 EventID; // 0xE0
		::System::UInt32 ExtraEffectID; // 0xE4
		::RPG::Client::TextID BuffTips; // 0xE8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityTelevisionLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityTelevisionLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
