#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareRogueTournLevel; }

#define RPG_GAMECORE_BYCOMPAREROGUETOURNLEVEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A2820)
#define RPG_GAMECORE_BYCOMPAREROGUETOURNLEVEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A2830)
#define RPG_GAMECORE_BYCOMPAREROGUETOURNLEVEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A27E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueTournLevel_TypeDefinitionIndex = 21236;

	class ByCompareRogueTournLevel : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUETOURNLEVEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRogueTournLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRogueTournLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUETOURNLEVEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRogueTournLevel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRogueTournLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUETOURNLEVEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
