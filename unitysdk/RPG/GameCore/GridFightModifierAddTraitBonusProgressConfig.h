#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddTraitBonusProgressConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITBONUSPROGRESSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060BB60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITBONUSPROGRESSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060BB70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITBONUSPROGRESSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060BB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddTraitBonusProgressConfig_TypeDefinitionIndex = 19800;

	class GridFightModifierAddTraitBonusProgressConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITBONUSPROGRESSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddTraitBonusProgressConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddTraitBonusProgressConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITBONUSPROGRESSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddTraitBonusProgressConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddTraitBonusProgressConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDTRAITBONUSPROGRESSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
