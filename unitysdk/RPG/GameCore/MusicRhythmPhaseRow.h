#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmPhaseRow; }
namespace System { class String; }

#define RPG_GAMECORE_MUSICRHYTHMPHASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8CE140)
#define RPG_GAMECORE_MUSICRHYTHMPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8CDEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmPhaseRow_TypeDefinitionIndex = 14265;

	class MusicRhythmPhaseRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TrackIDList; // 0x10
		::System::String* PostImgPath; // 0x18
		::System::UInt32 Phase; // 0x20
		::System::UInt32 SongID; // 0x24
		::RPG::Client::TextID LiveName; // 0x28
		::System::UInt32 FinishMissionID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMPHASEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MusicRhythmPhaseRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MusicRhythmPhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMPHASEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
