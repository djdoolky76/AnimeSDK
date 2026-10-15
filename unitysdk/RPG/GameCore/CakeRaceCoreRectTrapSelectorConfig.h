#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBaseTargetSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceCoreRectTrapSelectorConfig; }

#define RPG_GAMECORE_CAKERACECORERECTTRAPSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51E5F0)
#define RPG_GAMECORE_CAKERACECORERECTTRAPSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51E600)
#define RPG_GAMECORE_CAKERACECORERECTTRAPSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D520A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCoreRectTrapSelectorConfig_TypeDefinitionIndex = 18392;

	class CakeRaceCoreRectTrapSelectorConfig : public ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig
	{
	public:
		::System::Int32 FrontRange; // 0x10
		::System::Int32 BehindRange; // 0x14
		::System::Int32 LateralRange; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECORERECTTRAPSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceCoreRectTrapSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceCoreRectTrapSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECORERECTTRAPSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceCoreRectTrapSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceCoreRectTrapSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECORERECTTRAPSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
