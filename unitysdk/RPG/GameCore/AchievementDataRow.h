#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RecordType.h"
#include "unitysdk/RPG/GameCore/ShowType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AchievementDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACHIEVEMENTDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E54F4E0)
#define RPG_GAMECORE_ACHIEVEMENTDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E54ED90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AchievementDataRow_TypeDefinitionIndex = 10905;

	class AchievementDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::String* Rarity; // 0x18
		::System::String* PSTrophyID; // 0x20
		::RPG::GameCore::ShowType ShowType; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID RecordText; // 0x30
		::System::UInt32 QuestID; // 0x40
		::System::UInt32 ShowParamInt1; // 0x44
		::RPG::Client::TextID AchievementDescPS; // 0x48
		::RPG::Client::TextID AchievementTitlePS; // 0x58
		::System::UInt32 LinearQuestID; // 0x68
		::System::UInt32 SeriesID; // 0x6C
		::RPG::Client::TextID AchievementTitle; // 0x70
		::RPG::GameCore::RecordType RecordType; // 0x80
		::System::UInt32 Priority; // 0x84
		::RPG::Client::TextID HideAchievementDesc; // 0x88
		::RPG::Client::TextID AchievementDesc; // 0x98
		::System::UInt32 AchievementID; // 0xA8
		::System::UInt32 Advance; // 0xAC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AchievementDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AchievementDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACHIEVEMENTDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
