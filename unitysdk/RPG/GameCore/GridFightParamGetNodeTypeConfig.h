#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetNodeTypeConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETNODETYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70AB00)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETNODETYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D70AB10)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETNODETYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D70AAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetNodeTypeConfig_TypeDefinitionIndex = 19545;

	class GridFightParamGetNodeTypeConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNODETYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetNodeTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetNodeTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNODETYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetNodeTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetNodeTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNODETYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
