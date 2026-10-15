#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetCurCoinConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D737E10)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D737E20)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D737DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurCoinConfig_TypeDefinitionIndex = 19512;

	class GridFightParamGetCurCoinConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetCurCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetCurCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetCurCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetCurCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
