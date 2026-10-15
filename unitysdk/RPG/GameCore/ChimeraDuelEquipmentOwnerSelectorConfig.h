#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelEquipmentOwnerSelectorConfig; }

#define RPG_GAMECORE_CHIMERADUELEQUIPMENTOWNERSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A0740)
#define RPG_GAMECORE_CHIMERADUELEQUIPMENTOWNERSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A0750)
#define RPG_GAMECORE_CHIMERADUELEQUIPMENTOWNERSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A06B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEquipmentOwnerSelectorConfig_TypeDefinitionIndex = 15914;

	class ChimeraDuelEquipmentOwnerSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEQUIPMENTOWNERSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEquipmentOwnerSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEquipmentOwnerSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEQUIPMENTOWNERSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEquipmentOwnerSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEquipmentOwnerSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEQUIPMENTOWNERSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
