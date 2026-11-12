#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBaseTargetSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRacePathFindFrontNearestCatSelectorConfig; }

#define RPG_GAMECORE_CAKERACEPATHFINDFRONTNEARESTCATSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E75E5A0)
#define RPG_GAMECORE_CAKERACEPATHFINDFRONTNEARESTCATSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E75E5B0)
#define RPG_GAMECORE_CAKERACEPATHFINDFRONTNEARESTCATSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E763D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRacePathFindFrontNearestCatSelectorConfig_TypeDefinitionIndex = 18551;

	class CakeRacePathFindFrontNearestCatSelectorConfig : public ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPATHFINDFRONTNEARESTCATSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRacePathFindFrontNearestCatSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRacePathFindFrontNearestCatSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPATHFINDFRONTNEARESTCATSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRacePathFindFrontNearestCatSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRacePathFindFrontNearestCatSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPATHFINDFRONTNEARESTCATSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
