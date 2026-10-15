#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBaseTargetSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceCurAbilityCacheTargetsConfig; }

#define RPG_GAMECORE_CAKERACECURABILITYCACHETARGETSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51E790)
#define RPG_GAMECORE_CAKERACECURABILITYCACHETARGETSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51E7A0)
#define RPG_GAMECORE_CAKERACECURABILITYCACHETARGETSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D520A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCurAbilityCacheTargetsConfig_TypeDefinitionIndex = 18394;

	class CakeRaceCurAbilityCacheTargetsConfig : public ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECURABILITYCACHETARGETSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceCurAbilityCacheTargetsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceCurAbilityCacheTargetsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECURABILITYCACHETARGETSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceCurAbilityCacheTargetsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceCurAbilityCacheTargetsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECURABILITYCACHETARGETSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
