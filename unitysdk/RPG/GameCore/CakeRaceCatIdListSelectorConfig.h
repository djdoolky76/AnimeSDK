#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBaseTargetSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceCatIdListSelectorConfig; }

#define RPG_GAMECORE_CAKERACECATIDLISTSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54BDA0)
#define RPG_GAMECORE_CAKERACECATIDLISTSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54BDB0)
#define RPG_GAMECORE_CAKERACECATIDLISTSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54D7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCatIdListSelectorConfig_TypeDefinitionIndex = 18396;

	class CakeRaceCatIdListSelectorConfig : public ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* CatIdList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECATIDLISTSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECATIDLISTSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECATIDLISTSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
