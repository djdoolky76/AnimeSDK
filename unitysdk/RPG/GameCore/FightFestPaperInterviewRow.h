#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FightFestPaperInterviewRow; }
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTPAPERINTERVIEWROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A3DC0)
#define RPG_GAMECORE_FIGHTFESTPAPERINTERVIEWROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6A39F0)

namespace RPG::GameCore
{
	class FightFestPaperInterviewRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID Comment; // 0x18
		::System::UInt32 PaperID; // 0x28
		::System::UInt32 TextJoinItemID; // 0x2C
		::System::UInt32 SortWeight; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x38
		::RPG::Client::TextID Detail; // 0x48
		::RPG::Client::TextID Info; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPAPERINTERVIEWROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FightFestPaperInterviewRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FightFestPaperInterviewRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPAPERINTERVIEWROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
