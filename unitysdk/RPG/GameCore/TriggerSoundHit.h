#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerSoundHit; }

#define RPG_GAMECORE_TRIGGERSOUNDHIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5E7F0)
#define RPG_GAMECORE_TRIGGERSOUNDHIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC5E800)
#define RPG_GAMECORE_TRIGGERSOUNDHIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC5E730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerSoundHit_TypeDefinitionIndex = 22381;

	class TriggerSoundHit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUNDHIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerSoundHit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerSoundHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUNDHIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerSoundHit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerSoundHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSOUNDHIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
