#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TravelBrochureType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class TravelBrochureConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TRAVELBROCHURECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE4DB60)
#define RPG_GAMECORE_TRAVELBROCHURECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE4C5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TravelBrochureConfigRow_TypeDefinitionIndex = 15526;

	class TravelBrochureConfigRow : public ::System::Object
	{
	public:
		::System::String* PicPath; // 0x10
		::System::String* PasterAchievementPic; // 0x18
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* Conditions; // 0x20
		::System::String* FrontPrefab; // 0x28
		::System::String* BackgroundPrefab; // 0x30
		::RPG::Client::TextID DirectoryName; // 0x38
		::RPG::GameCore::TravelBrochureType Type; // 0x48
		::System::UInt32 Sort; // 0x4C
		::System::UInt32 FinishQuestID; // 0x50
		::System::UInt32 ID; // 0x54
		::System::Boolean ShowUnlockToast; // 0x58
		::System::Boolean ShowInDirectory; // 0x59
		::System::Byte _padding0[0x2];
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
