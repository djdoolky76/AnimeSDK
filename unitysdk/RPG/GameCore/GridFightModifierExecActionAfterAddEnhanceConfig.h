#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterAddEnhanceConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDENHANCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7061A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDENHANCECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7061B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDENHANCECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D706160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterAddEnhanceConfig_TypeDefinitionIndex = 19413;

	class GridFightModifierExecActionAfterAddEnhanceConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDENHANCECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterAddEnhanceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterAddEnhanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDENHANCECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterAddEnhanceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterAddEnhanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDENHANCECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
