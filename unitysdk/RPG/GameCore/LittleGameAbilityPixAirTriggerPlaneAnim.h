#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirTriggerPlaneAnim; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRTRIGGERPLANEANIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DA070)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRTRIGGERPLANEANIM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DA080)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRTRIGGERPLANEANIM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DA040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirTriggerPlaneAnim_TypeDefinitionIndex = 21400;

	class LittleGameAbilityPixAirTriggerPlaneAnim : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* TargetSelector; // 0x18
		::System::String* TriggerName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRTRIGGERPLANEANIM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirTriggerPlaneAnim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirTriggerPlaneAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRTRIGGERPLANEANIM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirTriggerPlaneAnim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirTriggerPlaneAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIRTRIGGERPLANEANIM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
