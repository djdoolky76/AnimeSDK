#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetLastNodeTypeConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70A8C0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D70A8D0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D70A880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetLastNodeTypeConfig_TypeDefinitionIndex = 19546;

	class GridFightParamGetLastNodeTypeConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetLastNodeTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetLastNodeTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetLastNodeTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetLastNodeTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETLASTNODETYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
