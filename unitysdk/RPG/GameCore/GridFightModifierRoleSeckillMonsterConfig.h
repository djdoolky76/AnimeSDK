#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierRoleSeckillMonsterConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERROLESECKILLMONSTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E943500)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERROLESECKILLMONSTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E943510)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERROLESECKILLMONSTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9434C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierRoleSeckillMonsterConfig_TypeDefinitionIndex = 19752;

	class GridFightModifierRoleSeckillMonsterConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERROLESECKILLMONSTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRoleSeckillMonsterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRoleSeckillMonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERROLESECKILLMONSTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRoleSeckillMonsterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRoleSeckillMonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERROLESECKILLMONSTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
