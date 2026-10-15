#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetAugmentQualityConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETAUGMENTQUALITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7356C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETAUGMENTQUALITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7356D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETAUGMENTQUALITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D735680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetAugmentQualityConfig_TypeDefinitionIndex = 19450;

	class GridFightModifierSetAugmentQualityConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETAUGMENTQUALITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetAugmentQualityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetAugmentQualityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETAUGMENTQUALITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetAugmentQualityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetAugmentQualityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETAUGMENTQUALITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
