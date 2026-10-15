#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCondCompareNodeIdConfig; }

#define RPG_GAMECORE_GRIDFIGHTCONDCOMPARENODEIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FA520)
#define RPG_GAMECORE_GRIDFIGHTCONDCOMPARENODEIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6FA530)
#define RPG_GAMECORE_GRIDFIGHTCONDCOMPARENODEIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6FA4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondCompareNodeIdConfig_TypeDefinitionIndex = 19336;

	class GridFightCondCompareNodeIdConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCOMPARENODEIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondCompareNodeIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondCompareNodeIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCOMPARENODEIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondCompareNodeIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondCompareNodeIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCOMPARENODEIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
