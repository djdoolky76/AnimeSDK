#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmPresetSongRow; }

#define RPG_GAMECORE_MUSICRHYTHMPRESETSONGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8CE390)
#define RPG_GAMECORE_MUSICRHYTHMPRESETSONGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8CE150)

namespace RPG::GameCore
{
	class MusicRhythmPresetSongRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PresetGridConfig; // 0x10
		::RPG::Client::TextID PresetName; // 0x18
		::RPG::Client::TextID PresetDesc; // 0x28
		::System::UInt32 ID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMPRESETSONGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MusicRhythmPresetSongRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MusicRhythmPresetSongRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMPRESETSONGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
