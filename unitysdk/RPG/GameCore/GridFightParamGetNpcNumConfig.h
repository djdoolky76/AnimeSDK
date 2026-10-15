#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetNpcNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETNPCNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7385F0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETNPCNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D738600)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETNPCNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7385B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetNpcNumConfig_TypeDefinitionIndex = 19521;

	class GridFightParamGetNpcNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNPCNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetNpcNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetNpcNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNPCNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetNpcNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetNpcNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETNPCNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
