#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetCurCampIdConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCAMPIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70A2C0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCAMPIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D70A2D0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCAMPIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D70A280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurCampIdConfig_TypeDefinitionIndex = 19539;

	class GridFightParamGetCurCampIdConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCAMPIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetCurCampIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetCurCampIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCAMPIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetCurCampIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetCurCampIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCAMPIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
