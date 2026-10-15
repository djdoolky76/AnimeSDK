#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerPamActionPhaseMove; }

#define RPG_GAMECORE_TRIGGERPAMACTIONPHASEMOVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC56440)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASEMOVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC56450)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASEMOVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC56380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPamActionPhaseMove_TypeDefinitionIndex = 20030;

	class TriggerPamActionPhaseMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASEMOVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPamActionPhaseMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPamActionPhaseMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASEMOVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPamActionPhaseMove* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPamActionPhaseMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASEMOVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
