#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBaseTargetSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceNearRowsSelectorConfig; }

#define RPG_GAMECORE_CAKERACENEARROWSSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54C2E0)
#define RPG_GAMECORE_CAKERACENEARROWSSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54C2F0)
#define RPG_GAMECORE_CAKERACENEARROWSSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D551830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceNearRowsSelectorConfig_TypeDefinitionIndex = 18395;

	class CakeRaceNearRowsSelectorConfig : public ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig
	{
	public:
		::System::UInt32 FrontRange; // 0x10
		::System::UInt32 BehindRange; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACENEARROWSSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceNearRowsSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceNearRowsSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACENEARROWSSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceNearRowsSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceNearRowsSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACENEARROWSSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
