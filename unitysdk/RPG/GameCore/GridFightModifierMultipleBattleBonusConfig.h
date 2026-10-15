#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierMultipleBattleBonusConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERMULTIPLEBATTLEBONUSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D735000)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMULTIPLEBATTLEBONUSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D735010)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMULTIPLEBATTLEBONUSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D734FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierMultipleBattleBonusConfig_TypeDefinitionIndex = 19403;

	class GridFightModifierMultipleBattleBonusConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMULTIPLEBATTLEBONUSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierMultipleBattleBonusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierMultipleBattleBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMULTIPLEBATTLEBONUSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierMultipleBattleBonusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierMultipleBattleBonusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMULTIPLEBATTLEBONUSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
