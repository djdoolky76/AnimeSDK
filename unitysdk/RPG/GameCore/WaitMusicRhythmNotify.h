#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitMusicRhythmNotify; }
namespace System { class String; }

#define RPG_GAMECORE_WAITMUSICRHYTHMNOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9C640)
#define RPG_GAMECORE_WAITMUSICRHYTHMNOTIFY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9C650)
#define RPG_GAMECORE_WAITMUSICRHYTHMNOTIFY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9C610)

namespace RPG::GameCore
{
	class WaitMusicRhythmNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NotifyName; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotify; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICRHYTHMNOTIFY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMusicRhythmNotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMusicRhythmNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICRHYTHMNOTIFY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMusicRhythmNotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMusicRhythmNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICRHYTHMNOTIFY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
