#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierAddBuffAmplificationConfig; }

#define RPG_GAMECORE_FATEMODIFIERADDBUFFAMPLIFICATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69B040)
#define RPG_GAMECORE_FATEMODIFIERADDBUFFAMPLIFICATIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69B050)
#define RPG_GAMECORE_FATEMODIFIERADDBUFFAMPLIFICATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69B000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierAddBuffAmplificationConfig_TypeDefinitionIndex = 19272;

	class FateModifierAddBuffAmplificationConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDBUFFAMPLIFICATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierAddBuffAmplificationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierAddBuffAmplificationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDBUFFAMPLIFICATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierAddBuffAmplificationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierAddBuffAmplificationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERADDBUFFAMPLIFICATIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
