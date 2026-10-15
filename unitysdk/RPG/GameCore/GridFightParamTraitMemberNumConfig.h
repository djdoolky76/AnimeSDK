#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamTraitMemberNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMTRAITMEMBERNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70B400)
#define RPG_GAMECORE_GRIDFIGHTPARAMTRAITMEMBERNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D70B410)
#define RPG_GAMECORE_GRIDFIGHTPARAMTRAITMEMBERNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D70B3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamTraitMemberNumConfig_TypeDefinitionIndex = 19507;

	class GridFightParamTraitMemberNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTRAITMEMBERNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamTraitMemberNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamTraitMemberNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTRAITMEMBERNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamTraitMemberNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamTraitMemberNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMTRAITMEMBERNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
