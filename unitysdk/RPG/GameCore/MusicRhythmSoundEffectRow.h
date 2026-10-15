#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmSoundEffectRow; }
namespace System { class String; }

#define RPG_GAMECORE_MUSICRHYTHMSOUNDEFFECTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A10F0)
#define RPG_GAMECORE_MUSICRHYTHMSOUNDEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8A0FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmSoundEffectRow_TypeDefinitionIndex = 14269;

	class MusicRhythmSoundEffectRow : public ::System::Object
	{
	public:
		::System::String* SoundEffectIconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMSOUNDEFFECTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MusicRhythmSoundEffectRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MusicRhythmSoundEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMSOUNDEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
