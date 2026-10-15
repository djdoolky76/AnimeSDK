#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmTimelineConfig; }
namespace RPG::GameCore { class NoteGroupConfig; }
namespace RPG::GameCore { class NoteNotifyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_MUSICRHYTHMTIMELINECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A1A80)
#define RPG_GAMECORE_MUSICRHYTHMTIMELINECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8A1440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmTimelineConfig_TypeDefinitionIndex = 16947;

	class MusicRhythmTimelineConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* MusicName; // 0x10
		::System::Single DelayTime; // 0x18
		::System::Int32 BeatCount; // 0x1C
		::System::Single TotalTime; // 0x20
		::System::Single LoopStartBeat; // 0x24
		::System::Single LoopEndBeat; // 0x28
		::System::Single BPM; // 0x2C
		::System::String* BeatSound; // 0x30
		::System::Boolean IsNotifyGlobal; // 0x38
		::System::Boolean IsPuMan; // 0x39
		::System::Boolean IsHanu; // 0x3A
		::System::Boolean ShowCircle; // 0x3B
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* InputNotifyList; // 0x40
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* InputUpNotifyList; // 0x48
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* ShortInputUpNotifyList; // 0x50
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* ExitNotifyList; // 0x58
		::Il2CppArray<::RPG::GameCore::NoteGroupConfig*>* NoteGroupList; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMTIMELINECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MusicRhythmTimelineConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MusicRhythmTimelineConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMTIMELINECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
