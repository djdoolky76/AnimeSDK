#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddAugmentSelectRerollCntConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDAUGMENTSELECTREROLLCNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D732970)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDAUGMENTSELECTREROLLCNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D732980)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDAUGMENTSELECTREROLLCNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D732930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddAugmentSelectRerollCntConfig_TypeDefinitionIndex = 19470;

	class GridFightModifierAddAugmentSelectRerollCntConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDAUGMENTSELECTREROLLCNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddAugmentSelectRerollCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddAugmentSelectRerollCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDAUGMENTSELECTREROLLCNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddAugmentSelectRerollCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddAugmentSelectRerollCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDAUGMENTSELECTREROLLCNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
