#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMusicRhythmCamera; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SETMUSICRHYTHMCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABD380)
#define RPG_GAMECORE_SETMUSICRHYTHMCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DABD390)
#define RPG_GAMECORE_SETMUSICRHYTHMCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DABD350)

namespace RPG::GameCore
{
	class SetMusicRhythmCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ForNormal; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ForPad; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSICRHYTHMCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMusicRhythmCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMusicRhythmCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSICRHYTHMCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMusicRhythmCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMusicRhythmCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSICRHYTHMCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
