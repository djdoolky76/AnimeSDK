#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitMusicRhythmEvent; }

#define RPG_GAMECORE_WAITMUSICRHYTHMEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9C490)
#define RPG_GAMECORE_WAITMUSICRHYTHMEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9C4A0)
#define RPG_GAMECORE_WAITMUSICRHYTHMEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9C460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMusicRhythmEvent_TypeDefinitionIndex = 22057;

	class WaitMusicRhythmEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 LevelId; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICRHYTHMEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMusicRhythmEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMusicRhythmEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICRHYTHMEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMusicRhythmEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMusicRhythmEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICRHYTHMEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
