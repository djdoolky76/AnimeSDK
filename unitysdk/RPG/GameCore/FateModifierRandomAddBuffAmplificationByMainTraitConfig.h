#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierRandomAddBuffAmplificationByMainTraitConfig; }

#define RPG_GAMECORE_FATEMODIFIERRANDOMADDBUFFAMPLIFICATIONBYMAINTRAITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66DF30)
#define RPG_GAMECORE_FATEMODIFIERRANDOMADDBUFFAMPLIFICATIONBYMAINTRAITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66DF40)
#define RPG_GAMECORE_FATEMODIFIERRANDOMADDBUFFAMPLIFICATIONBYMAINTRAITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66DEF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierRandomAddBuffAmplificationByMainTraitConfig_TypeDefinitionIndex = 19273;

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
