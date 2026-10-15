#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimStopMusicAction; }

#define RPG_GAMECORE_FIVEDIMSTOPMUSICACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DF1C0)
#define RPG_GAMECORE_FIVEDIMSTOPMUSICACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DF1D0)
#define RPG_GAMECORE_FIVEDIMSTOPMUSICACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DF150)

namespace RPG::GameCore
{
	class FiveDimStopMusicAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPMUSICACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStopMusicAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStopMusicAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPMUSICACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStopMusicAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStopMusicAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPMUSICACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
