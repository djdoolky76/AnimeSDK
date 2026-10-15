#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimStopWindowStageAction; }

#define RPG_GAMECORE_FIVEDIMSTOPWINDOWSTAGEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DF380)
#define RPG_GAMECORE_FIVEDIMSTOPWINDOWSTAGEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DF390)
#define RPG_GAMECORE_FIVEDIMSTOPWINDOWSTAGEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DF310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStopWindowStageAction_TypeDefinitionIndex = 18723;

	class FiveDimStopWindowStageAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPWINDOWSTAGEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStopWindowStageAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStopWindowStageAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPWINDOWSTAGEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStopWindowStageAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStopWindowStageAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPWINDOWSTAGEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
