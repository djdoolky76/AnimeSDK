#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityPanelFinishType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityPanelRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYPANELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA889C0)
#define RPG_GAMECORE_ACTIVITYPANELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA88130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPanelRow_TypeDefinitionIndex = 11254;

	class ActivityPanelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ActivityTagList; // 0x10
		::System::String* UIPrefab; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x20
		::System::String* TabIcon; // 0x28
		::System::String* UnlockConditions; // 0x30
		::System::String* FinishConditions; // 0x38
		::RPG::Client::TextID TitleName; // 0x40
		::RPG::Client::TextID PanelBrief; // 0x50
		::System::UInt32 IsSocialShow; // 0x60
		::System::UInt32 SortWeight; // 0x64
		::RPG::Client::TextID IntroDesc; // 0x68
		::System::Boolean DailyHint; // 0x78
		::System::Boolean DisplayItemManualSort; // 0x79
		::System::Boolean IsSkipSwitchStoryLine; // 0x7A
		::System::Byte _padding0[0x1];
		::System::UInt32 ActivityThemeID; // 0x7C
		::RPG::GameCore::ActivityPanelFinishType FinishType; // 0x80
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID TabName; // 0x88
		::RPG::Client::TextID PanelDesc; // 0x98
		::RPG::Client::TextID TagDesc; // 0xA8
		::System::UInt32 PanelID; // 0xB8
		::System::UInt32 GuideVideoID; // 0xBC
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
