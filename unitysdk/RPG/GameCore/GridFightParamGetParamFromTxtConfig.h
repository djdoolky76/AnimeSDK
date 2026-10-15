#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetParamFromTxtConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMTXTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70AC20)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMTXTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D70AC30)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMTXTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D70ABE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetParamFromTxtConfig_TypeDefinitionIndex = 19505;

	class GridFightParamGetParamFromTxtConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMTXTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetParamFromTxtConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetParamFromTxtConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMTXTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetParamFromTxtConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetParamFromTxtConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMTXTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
