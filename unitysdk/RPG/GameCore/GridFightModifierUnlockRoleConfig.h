#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierUnlockRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7085F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D708600)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7085B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierUnlockRoleConfig_TypeDefinitionIndex = 19478;

	class GridFightModifierUnlockRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUnlockRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUnlockRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUnlockRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUnlockRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
