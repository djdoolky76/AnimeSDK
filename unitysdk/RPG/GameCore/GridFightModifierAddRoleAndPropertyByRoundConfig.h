#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddRoleAndPropertyByRoundConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEANDPROPERTYBYROUNDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7330F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEANDPROPERTYBYROUNDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D733100)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEANDPROPERTYBYROUNDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7330B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddRoleAndPropertyByRoundConfig_TypeDefinitionIndex = 19386;

	class GridFightModifierAddRoleAndPropertyByRoundConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEANDPROPERTYBYROUNDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddRoleAndPropertyByRoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddRoleAndPropertyByRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEANDPROPERTYBYROUNDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddRoleAndPropertyByRoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddRoleAndPropertyByRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEANDPROPERTYBYROUNDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
