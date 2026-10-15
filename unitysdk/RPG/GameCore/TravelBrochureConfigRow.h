#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TravelBrochureType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class TravelBrochureConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TRAVELBROCHURECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC3A8A0)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC39310)

namespace RPG::GameCore
{
	class TravelBrochureConfigRow : public ::System::Object
	{
	public:
		::System::String* PasterAchievementPic; // 0x10
		::System::String* PicPath; // 0x18
		::System::String* BackgroundPrefab; // 0x20
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* Conditions; // 0x28
		::System::String* FrontPrefab; // 0x30
		::System::Boolean ShowUnlockToast; // 0x38
		::System::Boolean ShowInDirectory; // 0x39
		::System::Byte _padding0[0x2];
		::System::UInt32 ID; // 0x3C
		::System::UInt32 Sort; // 0x40
		::RPG::GameCore::TravelBrochureType Type; // 0x44
		::RPG::Client::TextID DirectoryName; // 0x48
		::System::UInt32 FinishQuestID; // 0x58
		::System::UInt32 DiaryGroupID; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TravelBrochureConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TravelBrochureConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAVELBROCHURECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
