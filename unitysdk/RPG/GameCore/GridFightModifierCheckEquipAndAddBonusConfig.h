#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierCheckEquipAndAddBonusConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHECKEQUIPANDADDBONUSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D705CB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHECKEQUIPANDADDBONUSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D705CC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHECKEQUIPANDADDBONUSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D705C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierCheckEquipAndAddBonusConfig_TypeDefinitionIndex = 19398;

	class GridFightModifierCheckEquipAndAddBonusConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHECKEQUIPANDADDBONUSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierCheckEquipAndAddBonusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierCheckEquipAndAddBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHECKEQUIPANDADDBONUSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierCheckEquipAndAddBonusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierCheckEquipAndAddBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHECKEQUIPANDADDBONUSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
