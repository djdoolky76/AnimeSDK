#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCondCheckHasPortalBuffConfig; }

#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPORTALBUFFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x205FF040)
#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPORTALBUFFCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x205FF050)
#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPORTALBUFFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x205FF000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondCheckHasPortalBuffConfig_TypeDefinitionIndex = 19542;

	class GridFightCondCheckHasPortalBuffConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPORTALBUFFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondCheckHasPortalBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondCheckHasPortalBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPORTALBUFFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondCheckHasPortalBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondCheckHasPortalBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPORTALBUFFCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
