#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingTrackRow; }
namespace System { class String; }

#define RPG_GAMECORE_B51RACINGTRACKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6562C0)
#define RPG_GAMECORE_B51RACINGTRACKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E655F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingTrackRow_TypeDefinitionIndex = 10976;

	class B51RacingTrackRow : public ::System::Object
	{
	public:
		::System::String* RecordDriverIconPath; // 0x10
		::System::String* MinimapPath; // 0x18
		::System::String* LittleGameConfig; // 0x20
		::System::String* MinimapPath_Dark; // 0x28
		::System::UInt32 ID; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID RecordDriverName; // 0x38
		::System::Single RecordTime; // 0x48
		::System::UInt32 TotalLap; // 0x4C
		::RPG::Client::TextID Name; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGTRACKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::B51RacingTrackRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::B51RacingTrackRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGTRACKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
