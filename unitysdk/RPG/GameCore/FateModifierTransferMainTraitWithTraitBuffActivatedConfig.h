#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierTransferMainTraitWithTraitBuffActivatedConfig; }

#define RPG_GAMECORE_FATEMODIFIERTRANSFERMAINTRAITWITHTRAITBUFFACTIVATEDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A84D0)
#define RPG_GAMECORE_FATEMODIFIERTRANSFERMAINTRAITWITHTRAITBUFFACTIVATEDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8A84E0)
#define RPG_GAMECORE_FATEMODIFIERTRANSFERMAINTRAITWITHTRAITBUFFACTIVATEDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8A8490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierTransferMainTraitWithTraitBuffActivatedConfig_TypeDefinitionIndex = 19477;

	class FateModifierTransferMainTraitWithTraitBuffActivatedConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERTRANSFERMAINTRAITWITHTRAITBUFFACTIVATEDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierTransferMainTraitWithTraitBuffActivatedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierTransferMainTraitWithTraitBuffActivatedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERTRANSFERMAINTRAITWITHTRAITBUFFACTIVATEDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierTransferMainTraitWithTraitBuffActivatedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierTransferMainTraitWithTraitBuffActivatedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERTRANSFERMAINTRAITWITHTRAITBUFFACTIVATEDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
