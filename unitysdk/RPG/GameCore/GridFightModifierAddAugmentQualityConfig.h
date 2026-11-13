#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddAugmentQualityConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDAUGMENTQUALITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2060AB50)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDAUGMENTQUALITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2060AB60)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDAUGMENTQUALITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2060AB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddAugmentQualityConfig_TypeDefinitionIndex = 19692;

	class GridFightModifierAddAugmentQualityConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDAUGMENTQUALITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddAugmentQualityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddAugmentQualityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDAUGMENTQUALITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddAugmentQualityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddAugmentQualityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDAUGMENTQUALITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
