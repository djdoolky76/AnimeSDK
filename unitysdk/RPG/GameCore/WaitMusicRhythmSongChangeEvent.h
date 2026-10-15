#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitMusicRhythmSongChangeEvent; }

#define RPG_GAMECORE_WAITMUSICRHYTHMSONGCHANGEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9C7F0)
#define RPG_GAMECORE_WAITMUSICRHYTHMSONGCHANGEEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9C800)
#define RPG_GAMECORE_WAITMUSICRHYTHMSONGCHANGEEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9C7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMusicRhythmSongChangeEvent_TypeDefinitionIndex = 22058;

	class WaitMusicRhythmSongChangeEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICRHYTHMSONGCHANGEEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMusicRhythmSongChangeEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMusicRhythmSongChangeEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICRHYTHMSONGCHANGEEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMusicRhythmSongChangeEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMusicRhythmSongChangeEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICRHYTHMSONGCHANGEEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
