#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerPamOnlineFirst; }

#define RPG_GAMECORE_TRIGGERPAMONLINEFIRST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC29360)
#define RPG_GAMECORE_TRIGGERPAMONLINEFIRST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC29370)
#define RPG_GAMECORE_TRIGGERPAMONLINEFIRST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC292A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPamOnlineFirst_TypeDefinitionIndex = 20026;

	class TriggerPamOnlineFirst : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMONLINEFIRST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPamOnlineFirst* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPamOnlineFirst*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMONLINEFIRST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPamOnlineFirst* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPamOnlineFirst*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMONLINEFIRST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
