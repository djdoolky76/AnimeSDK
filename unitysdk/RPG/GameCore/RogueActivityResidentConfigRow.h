#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RogueActivityResidentConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEACTIVITYRESIDENTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A2E20)
#define RPG_GAMECORE_ROGUEACTIVITYRESIDENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9A2880)

namespace RPG::GameCore
{
	class RogueActivityResidentConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ActivityTagList; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x18
		::System::String* TitleIconPath; // 0x20
		::System::String* IntroGuideImg; // 0x28
		::RPG::Client::TextID ResidentDesc; // 0x30
		::System::UInt32 RelatedActivityPanelID; // 0x40
		::System::Boolean IsShowRemainTime; // 0x44
		::System::Byte _padding0[0x3];
		::System::UInt32 ActivityID; // 0x48
		::System::UInt32 IntroID; // 0x4C
		::RPG::Client::TextID ResidentBrief; // 0x50
		::RPG::GameCore::RogueSubMode SubMode; // 0x60
		::System::UInt32 UnlockID; // 0x64
		::RPG::Client::TextID ResidentName; // 0x68
		::System::UInt32 ActivityModuleID; // 0x78
		::System::UInt32 SortWeight; // 0x7C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIVITYRESIDENTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActivityResidentConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActivityResidentConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIVITYRESIDENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
