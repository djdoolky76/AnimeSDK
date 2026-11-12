#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/StartMusicRhythmTask_Phase.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class StartMusicRhythm; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_CTOR_OFFSET UNITYSDK_OFFSET(0xF26A840)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF26AE90)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONPUZZLEEVENT_OFFSET UNITYSDK_OFFSET(0xF26B880)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF26A9B0)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF26AE40)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_SHOWMAINPAGE_OFFSET UNITYSDK_OFFSET(0xF26B550)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_TICK_OFFSET UNITYSDK_OFFSET(0xF26B180)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONCHOOSELEVELPAGEEXIT_OFFSET UNITYSDK_OFFSET(0xF26AD60)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONMAINPAGEENTER_OFFSET UNITYSDK_OFFSET(0xF26BA80)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONMUSICREADYPAGECLOSE_OFFSET UNITYSDK_OFFSET(0xF26BA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartMusicRhythmTask_TypeDefinitionIndex = 54451;

	class StartMusicRhythmTask : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* _Context; // 0x18
		::KFELGAIGHAP* _OnShowUi; // 0x20
		::RPG::Client::MusicRhythmBoard* _MusicBoard; // 0x28
		::KFELGAIGHAP* _TutorialFlow; // 0x30
		::RPG::GameCore::StartMusicRhythm* _Config; // 0x38
		::KFELGAIGHAP* _FormalFlow; // 0x40
		::RPG::Client::LuaUIController* _MainPage; // 0x48
		::RPG::GameCore::StartMusicRhythmTask_Phase _Phase; // 0x50
		::System::Single _TransitionDuration; // 0x54
		::System::Boolean _AddListener; // 0x58
		::System::Byte _padding0[0x3];
		::System::Single _TransitionTimer; // 0x5C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartMusicRhythm* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartMusicRhythm*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_TICK_OFFSET))(this, a1);
		}

		::System::Void ShowMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_SHOWMAINPAGE_OFFSET))(this);
		}

		::System::Void OnPuzzleEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONPUZZLEEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnMusicReadyPageClose(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONMUSICREADYPAGECLOSE_OFFSET))(this, a1);
		}

		::System::Void _OnMainPageEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONMAINPAGEENTER_OFFSET))(this);
		}

		::System::Void _OnChooseLevelPageExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONCHOOSELEVELPAGEEXIT_OFFSET))(this);
		}

	};
}
