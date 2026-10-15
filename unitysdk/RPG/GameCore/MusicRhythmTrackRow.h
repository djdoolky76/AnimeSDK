#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmTrackRow; }
namespace System { class String; }

#define RPG_GAMECORE_MUSICRHYTHMTRACKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8CF6B0)
#define RPG_GAMECORE_MUSICRHYTHMTRACKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8CF450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmTrackRow_TypeDefinitionIndex = 14271;

	class MusicRhythmTrackRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* EmptyGridList; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 UnlockSubMissionID; // 0x24
		::RPG::Client::TextID TrackName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMTRACKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MusicRhythmTrackRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MusicRhythmTrackRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMTRACKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
