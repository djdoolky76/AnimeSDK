#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerRogueEnterNextRoom; }

#define RPG_GAMECORE_TRIGGERROGUEENTERNEXTROOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2ACE0)
#define RPG_GAMECORE_TRIGGERROGUEENTERNEXTROOM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC2ACF0)
#define RPG_GAMECORE_TRIGGERROGUEENTERNEXTROOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2AC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerRogueEnterNextRoom_TypeDefinitionIndex = 22266;

	class TriggerRogueEnterNextRoom : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEENTERNEXTROOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerRogueEnterNextRoom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerRogueEnterNextRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEENTERNEXTROOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerRogueEnterNextRoom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerRogueEnterNextRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEENTERNEXTROOM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
