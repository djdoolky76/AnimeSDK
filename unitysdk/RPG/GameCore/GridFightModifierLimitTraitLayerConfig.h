#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierLimitTraitLayerConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERLIMITTRAITLAYERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D734CB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLIMITTRAITLAYERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D734CC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLIMITTRAITLAYERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D734C70)

namespace RPG::GameCore
{
	class GridFightModifierLimitTraitLayerConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLIMITTRAITLAYERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierLimitTraitLayerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierLimitTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLIMITTRAITLAYERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierLimitTraitLayerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierLimitTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLIMITTRAITLAYERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
