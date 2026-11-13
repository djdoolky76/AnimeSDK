#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierRandomAddBuffAmplificationByMainTraitConfig; }

#define RPG_GAMECORE_FATEMODIFIERRANDOMADDBUFFAMPLIFICATIONBYMAINTRAITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC93730)
#define RPG_GAMECORE_FATEMODIFIERRANDOMADDBUFFAMPLIFICATIONBYMAINTRAITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1FC93740)
#define RPG_GAMECORE_FATEMODIFIERRANDOMADDBUFFAMPLIFICATIONBYMAINTRAITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1FC936F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierRandomAddBuffAmplificationByMainTraitConfig_TypeDefinitionIndex = 19463;

	class FateModifierRandomAddBuffAmplificationByMainTraitConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERRANDOMADDBUFFAMPLIFICATIONBYMAINTRAITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierRandomAddBuffAmplificationByMainTraitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierRandomAddBuffAmplificationByMainTraitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERRANDOMADDBUFFAMPLIFICATIONBYMAINTRAITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierRandomAddBuffAmplificationByMainTraitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierRandomAddBuffAmplificationByMainTraitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERRANDOMADDBUFFAMPLIFICATIONBYMAINTRAITCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
