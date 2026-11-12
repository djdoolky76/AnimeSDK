#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetTutorialReviveHpConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALREVIVEHPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E943DA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALREVIVEHPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E943DB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALREVIVEHPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E943D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetTutorialReviveHpConfig_TypeDefinitionIndex = 19686;

	class GridFightModifierSetTutorialReviveHpConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALREVIVEHPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialReviveHpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialReviveHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALREVIVEHPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialReviveHpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialReviveHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALREVIVEHPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
