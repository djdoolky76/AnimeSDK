#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MissionChapterType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionChapterConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MISSIONCHAPTERCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA9E7F0)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA9DE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionChapterConfigRow_TypeDefinitionIndex = 14311;

	class MissionChapterConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LinkChapterList; // 0x10
		::System::String* ChapterIconPath; // 0x18
		::System::String* ChapterFigureIconPath; // 0x20
		::System::UInt32 ChapterDisplayPriority; // 0x28
		::System::UInt32 OriginMainMission; // 0x2C
		::RPG::GameCore::MissionChapterType ChapterType; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID StageName; // 0x38
		::RPG::Client::TextID ChapterSequence; // 0x48
		::System::UInt32 FinalMainMission; // 0x58
		::System::UInt32 ID; // 0x5C
		::RPG::Client::TextID ChapterName; // 0x60
		::RPG::Client::TextID ChapterDesc; // 0x70
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
