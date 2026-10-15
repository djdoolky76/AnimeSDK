#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmOpticalRow; }

#define RPG_GAMECORE_MUSICRHYTHMOPTICALROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8CDEB0)
#define RPG_GAMECORE_MUSICRHYTHMOPTICALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8CDC10)

namespace RPG::GameCore
{
	class MusicRhythmOpticalRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Progress; // 0x10
		::System::UInt32 QuestID; // 0x20
		::System::UInt32 GotoConfig; // 0x24
		::System::UInt32 ActivityModuleID; // 0x28
		::System::UInt32 RealProgress; // 0x2C
		::System::UInt32 MainMissionID; // 0x30
		::System::UInt32 Type; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMOPTICALROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MusicRhythmOpticalRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MusicRhythmOpticalRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMOPTICALROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
