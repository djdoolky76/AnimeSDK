#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierMasterMar7thConfig; }

#define RPG_GAMECORE_FATEMODIFIERMASTERMAR7THCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66DC30)
#define RPG_GAMECORE_FATEMODIFIERMASTERMAR7THCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66DC40)
#define RPG_GAMECORE_FATEMODIFIERMASTERMAR7THCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66DBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierMasterMar7thConfig_TypeDefinitionIndex = 19289;

	class FateModifierMasterMar7thConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERMAR7THCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierMasterMar7thConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierMasterMar7thConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERMAR7THCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierMasterMar7thConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierMasterMar7thConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMASTERMAR7THCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
