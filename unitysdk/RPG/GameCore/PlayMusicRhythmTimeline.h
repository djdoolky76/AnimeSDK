#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayMusicRhythmTimeline; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYMUSICRHYTHMTIMELINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D900F80)
#define RPG_GAMECORE_PLAYMUSICRHYTHMTIMELINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D900F90)
#define RPG_GAMECORE_PLAYMUSICRHYTHMTIMELINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D900F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayMusicRhythmTimeline_TypeDefinitionIndex = 22061;

	class PlayMusicRhythmTimeline : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TimelinePath; // 0x18
		::System::Boolean ShowHint; // 0x20
		::System::Boolean ShowLine; // 0x21
		::System::Boolean IsTutorial; // 0x22
		::System::Byte _padding0[0x1];
		::System::UInt32 CountDown; // 0x24
		::System::UInt32 FailSkip; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICRHYTHMTIMELINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayMusicRhythmTimeline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayMusicRhythmTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICRHYTHMTIMELINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayMusicRhythmTimeline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayMusicRhythmTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYMUSICRHYTHMTIMELINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
