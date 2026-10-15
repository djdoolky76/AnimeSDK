#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionMergeRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONMERGEROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7344D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONMERGEROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7344E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONMERGEROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D734490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionMergeRoleConfig_TypeDefinitionIndex = 19369;

	class GridFightModifierExecActionMergeRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONMERGEROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionMergeRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionMergeRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONMERGEROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionMergeRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionMergeRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONMERGEROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
