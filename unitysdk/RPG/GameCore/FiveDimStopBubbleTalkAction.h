#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimStopBubbleTalkAction; }

#define RPG_GAMECORE_FIVEDIMSTOPBUBBLETALKACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B1500)
#define RPG_GAMECORE_FIVEDIMSTOPBUBBLETALKACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B1510)
#define RPG_GAMECORE_FIVEDIMSTOPBUBBLETALKACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B1490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStopBubbleTalkAction_TypeDefinitionIndex = 18776;

	class FiveDimStopBubbleTalkAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPBUBBLETALKACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStopBubbleTalkAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStopBubbleTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPBUBBLETALKACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStopBubbleTalkAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStopBubbleTalkAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTOPBUBBLETALKACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
