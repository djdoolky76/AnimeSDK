#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActAddBuffCountConfig; }

#define RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66BCC0)
#define RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66BCD0)
#define RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66BC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddBuffCountConfig_TypeDefinitionIndex = 19226;

	class FateActAddBuffCountConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddBuffCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddBuffCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddBuffCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddBuffCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
