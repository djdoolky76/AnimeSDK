#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimTriggerRandomPlay; }
namespace RPG::GameCore { class AnimWeighted; }

#define RPG_GAMECORE_ANIMTRIGGERRANDOMPLAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F3120)
#define RPG_GAMECORE_ANIMTRIGGERRANDOMPLAY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3F3130)
#define RPG_GAMECORE_ANIMTRIGGERRANDOMPLAY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F30F0)

namespace RPG::GameCore
{
	class AnimTriggerRandomPlay : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single ActiveDelay; // 0x18
		::System::Single ActiveDelayRange; // 0x1C
		::Il2CppArray<::RPG::GameCore::AnimWeighted*>* AnimList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMTRIGGERRANDOMPLAY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimTriggerRandomPlay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimTriggerRandomPlay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMTRIGGERRANDOMPLAY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimTriggerRandomPlay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimTriggerRandomPlay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMTRIGGERRANDOMPLAY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
