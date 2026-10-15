#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterUseOrbConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERUSEORBCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7342F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERUSEORBCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D734300)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERUSEORBCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7342B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterUseOrbConfig_TypeDefinitionIndex = 19462;

	class GridFightModifierExecActionAfterUseOrbConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERUSEORBCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterUseOrbConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterUseOrbConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERUSEORBCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterUseOrbConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterUseOrbConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERUSEORBCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
