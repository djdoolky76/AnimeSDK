#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SilverWolfSubTabType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SilverWolfSubTabRow; }

#define RPG_GAMECORE_SILVERWOLFSUBTABROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE9400)
#define RPG_GAMECORE_SILVERWOLFSUBTABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAE90F0)

namespace RPG::GameCore
{
	class SilverWolfSubTabRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::RPG::GameCore::SilverWolfSubTabType TabType; // 0x18
		::System::UInt32 FinalQuest; // 0x1C
		::RPG::Client::TextID Title; // 0x20
		::System::UInt32 EntranceID; // 0x30
		::System::UInt32 UnlockMission; // 0x34
		::System::UInt32 GroupID; // 0x38
		::System::UInt32 MappingInfoID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFSUBTABROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SilverWolfSubTabRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SilverWolfSubTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFSUBTABROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
