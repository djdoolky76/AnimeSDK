#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddMonsterDropByProbabilityConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPBYPROBABILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7053C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPBYPROBABILITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7053D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPBYPROBABILITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D705380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddMonsterDropByProbabilityConfig_TypeDefinitionIndex = 19390;

	class GridFightModifierAddMonsterDropByProbabilityConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPBYPROBABILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddMonsterDropByProbabilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddMonsterDropByProbabilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPBYPROBABILITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddMonsterDropByProbabilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddMonsterDropByProbabilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPBYPROBABILITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
