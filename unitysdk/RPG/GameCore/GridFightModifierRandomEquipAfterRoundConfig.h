#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierRandomEquipAfterRoundConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMEQUIPAFTERROUNDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BAB30)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMEQUIPAFTERROUNDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BAB40)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMEQUIPAFTERROUNDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BAAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierRandomEquipAfterRoundConfig_TypeDefinitionIndex = 19765;

	class GridFightModifierRandomEquipAfterRoundConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMEQUIPAFTERROUNDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRandomEquipAfterRoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRandomEquipAfterRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMEQUIPAFTERROUNDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRandomEquipAfterRoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRandomEquipAfterRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRANDOMEQUIPAFTERROUNDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
