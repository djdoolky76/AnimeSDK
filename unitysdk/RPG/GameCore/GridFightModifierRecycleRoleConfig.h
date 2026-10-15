#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierRecycleRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERRECYCLEROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D735300)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRECYCLEROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D735310)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERRECYCLEROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7352C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierRecycleRoleConfig_TypeDefinitionIndex = 19453;

	class GridFightModifierRecycleRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRECYCLEROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRecycleRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRecycleRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRECYCLEROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRecycleRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRecycleRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERRECYCLEROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
