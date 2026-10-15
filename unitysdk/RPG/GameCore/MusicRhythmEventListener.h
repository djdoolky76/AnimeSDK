#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MusicRhythmEventListener; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_MUSICRHYTHMEVENTLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8CB420)
#define RPG_GAMECORE_MUSICRHYTHMEVENTLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8CB430)
#define RPG_GAMECORE_MUSICRHYTHMEVENTLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8CB3F0)

namespace RPG::GameCore
{
	class MusicRhythmEventListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinish; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUnlockSkipTutorial; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnRestart; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMEVENTLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MusicRhythmEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MusicRhythmEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMEVENTLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MusicRhythmEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MusicRhythmEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMEVENTLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
