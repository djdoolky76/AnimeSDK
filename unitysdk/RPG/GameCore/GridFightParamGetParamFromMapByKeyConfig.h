#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetParamFromMapByKeyConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BF6A0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BF6B0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BF660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetParamFromMapByKeyConfig_TypeDefinitionIndex = 19854;

	class GridFightParamGetParamFromMapByKeyConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetParamFromMapByKeyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetParamFromMapByKeyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetParamFromMapByKeyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetParamFromMapByKeyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
