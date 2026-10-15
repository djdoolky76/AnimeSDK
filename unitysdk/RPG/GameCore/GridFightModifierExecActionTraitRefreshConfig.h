#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionTraitRefreshConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONTRAITREFRESHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D706B60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONTRAITREFRESHCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D706B70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONTRAITREFRESHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D706B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionTraitRefreshConfig_TypeDefinitionIndex = 19461;

	class GridFightModifierExecActionTraitRefreshConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONTRAITREFRESHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionTraitRefreshConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionTraitRefreshConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONTRAITREFRESHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionTraitRefreshConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionTraitRefreshConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONTRAITREFRESHCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
