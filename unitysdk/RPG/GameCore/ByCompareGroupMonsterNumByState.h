#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareGroupMonsterNumByState; }

#define RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUMBYSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D485410)
#define RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUMBYSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D485420)
#define RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUMBYSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4853D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGroupMonsterNumByState_TypeDefinitionIndex = 21161;

	class ByCompareGroupMonsterNumByState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUMBYSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareGroupMonsterNumByState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareGroupMonsterNumByState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUMBYSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareGroupMonsterNumByState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareGroupMonsterNumByState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGROUPMONSTERNUMBYSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
