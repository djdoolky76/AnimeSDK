#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityPanelFinishType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityPanelRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYPANELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E57E390)
#define RPG_GAMECORE_ACTIVITYPANELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E57DB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPanelRow_TypeDefinitionIndex = 11254;

	class ActivityPanelRow : public ::System::Object
	{
	public:
		::System::String* TabIcon; // 0x10
		::Il2CppArray<::System::UInt32>* ActivityTagList; // 0x18
		::System::String* UIPrefab; // 0x20
		::System::String* FinishConditions; // 0x28
		::System::String* UnlockConditions; // 0x30
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x38
		::System::UInt32 PanelID; // 0x40
		::System::UInt32 ActivityThemeID; // 0x44
		::RPG::Client::TextID TagDesc; // 0x48
		::System::UInt32 SortWeight; // 0x58
		::System::UInt32 GuideVideoID; // 0x5C
		::RPG::GameCore::ActivityPanelFinishType FinishType; // 0x60
		::System::Boolean DailyHint; // 0x64
		::System::Boolean DisplayItemManualSort; // 0x65
		::System::Boolean IsSkipSwitchStoryLine; // 0x66
		::System::Byte _padding0[0x1];
		::RPG::Client::TextID PanelDesc; // 0x68
		::RPG::Client::TextID IntroDesc; // 0x78
		::RPG::Client::TextID PanelBrief; // 0x88
		::System::UInt32 IsSocialShow; // 0x98
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID TitleName; // 0xA0
		::RPG::Client::TextID TabName; // 0xB0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityPanelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityPanelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
