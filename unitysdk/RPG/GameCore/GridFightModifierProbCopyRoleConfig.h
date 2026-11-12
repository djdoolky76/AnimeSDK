#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierProbCopyRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERPROBCOPYROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E942D20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERPROBCOPYROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E942D30)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERPROBCOPYROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E942CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierProbCopyRoleConfig_TypeDefinitionIndex = 19747;

	class GridFightModifierProbCopyRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERPROBCOPYROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierProbCopyRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierProbCopyRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERPROBCOPYROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierProbCopyRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierProbCopyRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERPROBCOPYROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
