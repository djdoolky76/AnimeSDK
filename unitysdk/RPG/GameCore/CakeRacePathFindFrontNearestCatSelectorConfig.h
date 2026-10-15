#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBaseTargetSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRacePathFindFrontNearestCatSelectorConfig; }

#define RPG_GAMECORE_CAKERACEPATHFINDFRONTNEARESTCATSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54C440)
#define RPG_GAMECORE_CAKERACEPATHFINDFRONTNEARESTCATSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54C450)
#define RPG_GAMECORE_CAKERACEPATHFINDFRONTNEARESTCATSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D551C10)

namespace RPG::GameCore
{
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
