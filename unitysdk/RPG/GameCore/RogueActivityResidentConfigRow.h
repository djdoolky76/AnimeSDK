#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RogueActivityResidentConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEACTIVITYRESIDENTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEBDE0)
#define RPG_GAMECORE_ROGUEACTIVITYRESIDENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EBEB840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActivityResidentConfigRow_TypeDefinitionIndex = 14859;

	class RogueActivityResidentConfigRow : public ::System::Object
	{
	public:
		::System::String* IntroGuideImg; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x18
		::Il2CppArray<::System::UInt32>* ActivityTagList; // 0x20
		::System::String* TitleIconPath; // 0x28
		::RPG::Client::TextID ResidentBrief; // 0x30
		::System::UInt32 UnlockID; // 0x40
		::System::UInt32 IntroID; // 0x44
		::System::UInt32 ActivityID; // 0x48
		::System::UInt32 SortWeight; // 0x4C
		::RPG::Client::TextID ResidentName; // 0x50
		::RPG::GameCore::RogueSubMode SubMode; // 0x60
		::System::Boolean IsShowRemainTime; // 0x64
		::System::Byte _padding0[0x3];
		::System::UInt32 RelatedActivityPanelID; // 0x68
		::System::UInt32 ActivityModuleID; // 0x6C
		::RPG::Client::TextID ResidentDesc; // 0x70
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
