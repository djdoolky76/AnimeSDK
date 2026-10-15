#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MissionChapterType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionChapterConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MISSIONCHAPTERCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D884440)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D883AC0)

namespace RPG::GameCore
{
	class MissionChapterConfigRow : public ::System::Object
	{
	public:
		::System::String* ChapterIconPath; // 0x10
		::System::String* ChapterFigureIconPath; // 0x18
		::Il2CppArray<::System::UInt32>* LinkChapterList; // 0x20
		::System::UInt32 OriginMainMission; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ChapterSequence; // 0x30
		::System::UInt32 ChapterDisplayPriority; // 0x40
		::System::UInt32 FinalMainMission; // 0x44
		::RPG::GameCore::MissionChapterType ChapterType; // 0x48
		::System::UInt32 ID; // 0x4C
		::RPG::Client::TextID ChapterName; // 0x50
		::RPG::Client::TextID ChapterDesc; // 0x60
		::RPG::Client::TextID StageName; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionChapterConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionChapterConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
