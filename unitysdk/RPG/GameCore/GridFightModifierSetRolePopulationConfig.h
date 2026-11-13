#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetRolePopulationConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETROLEPOPULATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BB610)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETROLEPOPULATIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BB620)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETROLEPOPULATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BB5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetRolePopulationConfig_TypeDefinitionIndex = 19732;

	class GridFightModifierSetRolePopulationConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETROLEPOPULATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetRolePopulationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetRolePopulationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETROLEPOPULATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetRolePopulationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetRolePopulationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETROLEPOPULATIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
