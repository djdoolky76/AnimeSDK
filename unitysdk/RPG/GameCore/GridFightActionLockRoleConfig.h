#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionLockRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONLOCKROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x205F9D00)
#define RPG_GAMECORE_GRIDFIGHTACTIONLOCKROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x205F9D10)
#define RPG_GAMECORE_GRIDFIGHTACTIONLOCKROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x205F9CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionLockRoleConfig_TypeDefinitionIndex = 19503;

	class GridFightActionLockRoleConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONLOCKROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionLockRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionLockRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONLOCKROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionLockRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionLockRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONLOCKROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
