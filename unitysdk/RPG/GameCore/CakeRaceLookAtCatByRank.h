#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceLookAtCatByRank; }

#define RPG_GAMECORE_CAKERACELOOKATCATBYRANK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D550D80)
#define RPG_GAMECORE_CAKERACELOOKATCATBYRANK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D550D90)
#define RPG_GAMECORE_CAKERACELOOKATCATBYRANK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D550D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceLookAtCatByRank_TypeDefinitionIndex = 24303;

	class CakeRaceLookAtCatByRank : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 CatRank; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACELOOKATCATBYRANK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceLookAtCatByRank* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceLookAtCatByRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACELOOKATCATBYRANK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceLookAtCatByRank* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceLookAtCatByRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACELOOKATCATBYRANK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
