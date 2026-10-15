#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerSoundMusicRhythmStageBGM; }
namespace System { class String; }

#define KLDBLJPHCMK_CTOR_OFFSET UNITYSDK_OFFSET(0xB4E6080)
#define KLDBLJPHCMK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4E60B0)
#define KLDBLJPHCMK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4E60F0)

inline static constexpr unsigned int KLDBLJPHCMK_TypeDefinitionIndex = 56475;

	class KLDBLJPHCMK
	{
	public:
		::System::String* CBBKMNEHIMB; // 0x28
		::RPG::GameCore::GameEntity* ONIACPBDNMH; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerSoundMusicRhythmStageBGM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerSoundMusicRhythmStageBGM*))((::PBYTE)hIl2Cpp + KLDBLJPHCMK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDBLJPHCMK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDBLJPHCMK_ONTASKBEGIN_OFFSET))(this);
		}

	};
