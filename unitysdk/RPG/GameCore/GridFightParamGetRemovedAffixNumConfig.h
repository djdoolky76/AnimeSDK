#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetRemovedAffixNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETREMOVEDAFFIXNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BFA60)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETREMOVEDAFFIXNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BFA70)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETREMOVEDAFFIXNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BFA20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetRemovedAffixNumConfig_TypeDefinitionIndex = 19885;

	class GridFightParamGetRemovedAffixNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETREMOVEDAFFIXNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetRemovedAffixNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetRemovedAffixNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETREMOVEDAFFIXNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetRemovedAffixNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetRemovedAffixNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETREMOVEDAFFIXNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
