#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExtraVictoryBonusConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRAVICTORYBONUSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7346B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRAVICTORYBONUSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7346C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRAVICTORYBONUSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D734670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExtraVictoryBonusConfig_TypeDefinitionIndex = 19448;

	class GridFightModifierExtraVictoryBonusConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRAVICTORYBONUSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExtraVictoryBonusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExtraVictoryBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRAVICTORYBONUSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExtraVictoryBonusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExtraVictoryBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRAVICTORYBONUSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
