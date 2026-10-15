#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvTrackNpcSoundTrigger; }

#define RPG_GAMECORE_ADVTRACKNPCSOUNDTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B3780)
#define RPG_GAMECORE_ADVTRACKNPCSOUNDTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B3790)
#define RPG_GAMECORE_ADVTRACKNPCSOUNDTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B3750)

namespace RPG::GameCore
{
	class AdvTrackNpcSoundTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single AddPerceiveValue; // 0x18
		::System::Single AddAlertValue; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCSOUNDTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvTrackNpcSoundTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvTrackNpcSoundTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCSOUNDTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvTrackNpcSoundTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvTrackNpcSoundTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCSOUNDTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
