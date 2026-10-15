#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphHideEntityConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PHOTOGRAPHHIDEENTITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D911400)
#define RPG_GAMECORE_PHOTOGRAPHHIDEENTITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D911050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphHideEntityConfig_TypeDefinitionIndex = 21628;

	class PhotoGraphHideEntityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HideEntity; // 0x10
		::System::Boolean HideNPC; // 0x18
		::System::Boolean HideMunicipalCrowd; // 0x19
		::System::Boolean HideMunicipalPedestrian; // 0x1A
		::System::Boolean HideMunicipalOther; // 0x1B
		::System::Boolean HideMonster; // 0x1C
		::System::Boolean HideProp; // 0x1D
		::System::Boolean HidePet; // 0x1E
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHHIDEENTITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphHideEntityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphHideEntityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHHIDEENTITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
