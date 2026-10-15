#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetItemNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETITEMNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70A800)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETITEMNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D70A810)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETITEMNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D70A7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetItemNumConfig_TypeDefinitionIndex = 19525;

	class GridFightParamGetItemNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETITEMNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetItemNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetItemNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETITEMNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetItemNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetItemNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETITEMNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
