#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OHIAJFJDKAO;
namespace RPG::GameCore { class DiceCombatCampaignConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D9420)
#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5D8800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatCampaignConfigRow_TypeDefinitionIndex = 11279;

	class DiceCombatCampaignConfigRow : public ::System::Object
	{
	public:
		::System::String* ProgressIMGPath; // 0x10
		::System::String* MainPageIMGPath; // 0x18
		::System::String* IMGPath; // 0x20
		::Il2CppArray<::OHIAJFJDKAO*>* RuleGroupMapList; // 0x28
		::Il2CppArray<::System::UInt32>* DisplayProgress; // 0x30
		::System::String* MainPageSilhouettePath; // 0x38
		::RPG::Client::TextID Name; // 0x40
		::RPG::Client::TextID LoseBattle; // 0x50
		::RPG::Client::TextID ProgressTitle; // 0x60
		::System::UInt32 Progress; // 0x70
		::System::UInt32 GroupEntityID; // 0x74
		::RPG::Client::TextID ExitProgress; // 0x78
		::RPG::Client::TextID EnterProgress; // 0x88
		::System::UInt32 DiceCampaignID; // 0x98
		::System::UInt32 SubMissonID; // 0x9C
		::System::Boolean ExitMainPage; // 0xA0
		::System::Boolean MustLose; // 0xA1
		::System::Byte _padding0[0x6];
		::RPG::Client::TextID WinBattle; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatCampaignConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatCampaignConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
