#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionUnlockRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONUNLOCKROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E92EA30)
#define RPG_GAMECORE_GRIDFIGHTACTIONUNLOCKROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E92EA40)
#define RPG_GAMECORE_GRIDFIGHTACTIONUNLOCKROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E92E9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionUnlockRoleConfig_TypeDefinitionIndex = 19504;

	class GridFightActionUnlockRoleConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONUNLOCKROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionUnlockRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionUnlockRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONUNLOCKROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionUnlockRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionUnlockRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONUNLOCKROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
