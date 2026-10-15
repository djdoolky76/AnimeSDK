#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvGameplayTrackNpcEnd; }

#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A0C80)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A0C90)
#define RPG_GAMECORE_ADVGAMEPLAYTRACKNPCEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A0BC0)

namespace RPG::GameCore
{
	class AdvGameplayTrackNpcEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvGameplayTrackNpcEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvGameplayTrackNpcEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvGameplayTrackNpcEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvGameplayTrackNpcEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGAMEPLAYTRACKNPCEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
