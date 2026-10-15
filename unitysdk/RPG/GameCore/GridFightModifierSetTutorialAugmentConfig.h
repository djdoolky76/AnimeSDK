#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetTutorialAugmentConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALAUGMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D707E70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALAUGMENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D707E80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALAUGMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D707E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetTutorialAugmentConfig_TypeDefinitionIndex = 19443;

	class GridFightModifierSetTutorialAugmentConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALAUGMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialAugmentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialAugmentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALAUGMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialAugmentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialAugmentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALAUGMENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
