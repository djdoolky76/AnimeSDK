#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBaseTargetSelectorConfig.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/RPG/GameCore/DynamicRadiusType.h"
#include "unitysdk/RPG/GameCore/SelectEntityType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceCircleTargetSelectorConfig; }

#define RPG_GAMECORE_CAKERACECIRCLETARGETSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51E3F0)
#define RPG_GAMECORE_CAKERACECIRCLETARGETSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51E400)
#define RPG_GAMECORE_CAKERACECIRCLETARGETSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D520A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCircleTargetSelectorConfig_TypeDefinitionIndex = 18389;

	class CakeRaceCircleTargetSelectorConfig : public ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig
	{
	public:
		::System::Int32 Radius; // 0x10
		::RPG::GameCore::CakeRaceProperty DynamicRadiusProperty; // 0x14
		::RPG::GameCore::DynamicRadiusType DynamicRadiusSetType; // 0x18
		::RPG::GameCore::SelectEntityType EntityType; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECIRCLETARGETSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceCircleTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceCircleTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECIRCLETARGETSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceCircleTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceCircleTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECIRCLETARGETSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
