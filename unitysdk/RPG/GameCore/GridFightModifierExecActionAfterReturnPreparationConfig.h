#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterReturnPreparationConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERRETURNPREPARATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7341D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERRETURNPREPARATIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7341E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERRETURNPREPARATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D734190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterReturnPreparationConfig_TypeDefinitionIndex = 19347;

	class GridFightModifierExecActionAfterReturnPreparationConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERRETURNPREPARATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterReturnPreparationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterReturnPreparationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERRETURNPREPARATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterReturnPreparationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterReturnPreparationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERRETURNPREPARATIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
