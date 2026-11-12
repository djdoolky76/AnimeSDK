#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmOpticalRow; }

#define RPG_GAMECORE_MUSICRHYTHMOPTICALROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE7C10)
#define RPG_GAMECORE_MUSICRHYTHMOPTICALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EAE7970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmOpticalRow_TypeDefinitionIndex = 14430;

	class MusicRhythmOpticalRow : public ::System::Object
	{
	public:
		::System::UInt32 ActivityModuleID; // 0x10
		::System::UInt32 Type; // 0x14
		::System::UInt32 GotoConfig; // 0x18
		::System::UInt32 RealProgress; // 0x1C
		::RPG::Client::TextID Progress; // 0x20
		::System::UInt32 MainMissionID; // 0x30
		::System::UInt32 QuestID; // 0x34
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
