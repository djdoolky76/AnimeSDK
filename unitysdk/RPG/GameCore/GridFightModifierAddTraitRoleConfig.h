#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddTraitRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D733330)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D733340)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7332F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddTraitRoleConfig_TypeDefinitionIndex = 19433;

	class GridFightModifierAddTraitRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddTraitRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddTraitRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddTraitRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddTraitRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
