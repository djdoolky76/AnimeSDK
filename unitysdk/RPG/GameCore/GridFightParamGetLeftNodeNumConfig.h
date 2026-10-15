#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetLeftNodeNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTNODENUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D738410)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTNODENUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D738420)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTNODENUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7383D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetLeftNodeNumConfig_TypeDefinitionIndex = 19541;

	class GridFightParamGetLeftNodeNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTNODENUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetLeftNodeNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetLeftNodeNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTNODENUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetLeftNodeNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetLeftNodeNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLEFTNODENUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
