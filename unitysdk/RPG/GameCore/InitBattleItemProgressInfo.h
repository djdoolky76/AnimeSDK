#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleItemProgressPrefabType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class InitBattleItemProgressInfo; }
namespace System { class String; }

#define RPG_GAMECORE_INITBATTLEITEMPROGRESSINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7877B0)
#define RPG_GAMECORE_INITBATTLEITEMPROGRESSINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7877C0)
#define RPG_GAMECORE_INITBATTLEITEMPROGRESSINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D787780)

namespace RPG::GameCore
{
	class InitBattleItemProgressInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BuffIcon; // 0x18
		::RPG::Client::TextID DescText; // 0x20
		::RPG::GameCore::DynamicFloat* InitCount; // 0x30
		::RPG::Client::TextID InitCountTextID; // 0x38
		::RPG::GameCore::DynamicFloat* InitProgress; // 0x48
		::RPG::GameCore::BattleItemProgressPrefabType PrefabType; // 0x50
		::System::UInt32 TutorialGroupID; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITBATTLEITEMPROGRESSINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::InitBattleItemProgressInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InitBattleItemProgressInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITBATTLEITEMPROGRESSINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::InitBattleItemProgressInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InitBattleItemProgressInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITBATTLEITEMPROGRESSINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
