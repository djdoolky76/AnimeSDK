#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionRemoveRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7249B0)
#define RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7249C0)
#define RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D724D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionRemoveRoleConfig_TypeDefinitionIndex = 19312;

	class GridFightActionRemoveRoleConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionRemoveRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionRemoveRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionRemoveRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionRemoveRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
