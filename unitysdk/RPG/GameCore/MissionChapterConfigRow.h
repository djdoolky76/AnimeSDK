#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MissionChapterType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionChapterConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MISSIONCHAPTERCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E9050)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E6E86D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionChapterConfigRow_TypeDefinitionIndex = 14311;

	class MissionChapterConfigRow : public ::System::Object
	{
	public:
		::System::String* ChapterFigureIconPath; // 0x10
		::Il2CppArray<::System::UInt32>* LinkChapterList; // 0x18
		::System::String* ChapterIconPath; // 0x20
		::RPG::Client::TextID ChapterSequence; // 0x28
		::RPG::GameCore::MissionChapterType ChapterType; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::UInt32 OriginMainMission; // 0x40
		::System::UInt32 ChapterDisplayPriority; // 0x44
		::System::UInt32 FinalMainMission; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ChapterDesc; // 0x50
		::RPG::Client::TextID ChapterName; // 0x60
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
