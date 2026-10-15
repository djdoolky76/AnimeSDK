#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCondCheckHasAugmentConfig; }

#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAUGMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FA400)
#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAUGMENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6FA410)
#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAUGMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6FA3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondCheckHasAugmentConfig_TypeDefinitionIndex = 19333;

	class GridFightCondCheckHasAugmentConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAUGMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondCheckHasAugmentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondCheckHasAugmentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAUGMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondCheckHasAugmentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondCheckHasAugmentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAUGMENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
