#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddAdditionalPropertyByRoundConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROUNDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D704E80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROUNDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D704E90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROUNDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D704E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddAdditionalPropertyByRoundConfig_TypeDefinitionIndex = 19385;

	class GridFightModifierAddAdditionalPropertyByRoundConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROUNDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddAdditionalPropertyByRoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddAdditionalPropertyByRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROUNDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddAdditionalPropertyByRoundConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddAdditionalPropertyByRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDADDITIONALPROPERTYBYROUNDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
