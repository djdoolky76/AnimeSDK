#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitMusicCompositionStageStartEvent; }

#define RPG_GAMECORE_WAITMUSICCOMPOSITIONSTAGESTARTEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9C330)
#define RPG_GAMECORE_WAITMUSICCOMPOSITIONSTAGESTARTEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9C340)
#define RPG_GAMECORE_WAITMUSICCOMPOSITIONSTAGESTARTEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9C300)

namespace RPG::GameCore
{
	class WaitMusicCompositionStageStartEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICCOMPOSITIONSTAGESTARTEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMusicCompositionStageStartEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMusicCompositionStageStartEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICCOMPOSITIONSTAGESTARTEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitMusicCompositionStageStartEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitMusicCompositionStageStartEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMUSICCOMPOSITIONSTAGESTARTEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
