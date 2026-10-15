#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerWaveEffect; }

#define RPG_GAMECORE_TRIGGERWAVEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC32D60)
#define RPG_GAMECORE_TRIGGERWAVEEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC32D70)
#define RPG_GAMECORE_TRIGGERWAVEEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC32D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerWaveEffect_TypeDefinitionIndex = 23432;

	class TriggerWaveEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ForceTrigger; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWAVEEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerWaveEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerWaveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWAVEEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerWaveEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerWaveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERWAVEEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
