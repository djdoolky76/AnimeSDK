#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCondHasAnyRoleDressEquipMatchListConfig; }

#define RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x205FF220)
#define RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x205FF230)
#define RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x205FF1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondHasAnyRoleDressEquipMatchListConfig_TypeDefinitionIndex = 19541;

	class GridFightCondHasAnyRoleDressEquipMatchListConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondHasAnyRoleDressEquipMatchListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondHasAnyRoleDressEquipMatchListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondHasAnyRoleDressEquipMatchListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondHasAnyRoleDressEquipMatchListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
