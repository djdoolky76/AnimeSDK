#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierTransferMainTraitWithTraitBuffActivatedConfig; }

#define RPG_GAMECORE_FATEMODIFIERTRANSFERMAINTRAITWITHTRAITBUFFACTIVATEDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69BBF0)
#define RPG_GAMECORE_FATEMODIFIERTRANSFERMAINTRAITWITHTRAITBUFFACTIVATEDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69BC00)
#define RPG_GAMECORE_FATEMODIFIERTRANSFERMAINTRAITWITHTRAITBUFFACTIVATEDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69BBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierTransferMainTraitWithTraitBuffActivatedConfig_TypeDefinitionIndex = 19287;

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
