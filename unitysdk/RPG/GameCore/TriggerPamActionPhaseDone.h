#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerPamActionPhaseDone; }

#define RPG_GAMECORE_TRIGGERPAMACTIONPHASEDONE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC562B0)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASEDONE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC562C0)
#define RPG_GAMECORE_TRIGGERPAMACTIONPHASEDONE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC561F0)

namespace RPG::GameCore
{
	class TriggerPamActionPhaseDone : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASEDONE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPamActionPhaseDone* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPamActionPhaseDone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASEDONE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPamActionPhaseDone* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPamActionPhaseDone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMACTIONPHASEDONE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
