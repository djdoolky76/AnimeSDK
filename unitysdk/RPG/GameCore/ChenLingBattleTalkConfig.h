#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingAbilityConfig; }
namespace RPG::GameCore { class ChenLingBattleTalkConfig; }

#define RPG_GAMECORE_CHENLINGBATTLETALKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D55A390)
#define RPG_GAMECORE_CHENLINGBATTLETALKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D55A2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleTalkConfig_TypeDefinitionIndex = 15814;

	class ChenLingBattleTalkConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChenLingAbilityConfig* Composite; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETALKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleTalkConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleTalkConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLETALKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
