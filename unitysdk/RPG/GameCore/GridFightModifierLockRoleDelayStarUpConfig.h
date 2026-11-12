#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierLockRoleDelayStarUpConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKROLEDELAYSTARUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E942780)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKROLEDELAYSTARUPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E942790)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKROLEDELAYSTARUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E942740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierLockRoleDelayStarUpConfig_TypeDefinitionIndex = 19718;

	class GridFightModifierLockRoleDelayStarUpConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKROLEDELAYSTARUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierLockRoleDelayStarUpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierLockRoleDelayStarUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKROLEDELAYSTARUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierLockRoleDelayStarUpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierLockRoleDelayStarUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKROLEDELAYSTARUPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
