#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/UIEventType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitUIEvent; }

#define RPG_GAMECORE_WAITUIEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC76FC0)
#define RPG_GAMECORE_WAITUIEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC76FD0)
#define RPG_GAMECORE_WAITUIEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC76F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitUIEvent_TypeDefinitionIndex = 21705;

	class WaitUIEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::UIEventType UIEventType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitUIEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitUIEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitUIEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitUIEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
