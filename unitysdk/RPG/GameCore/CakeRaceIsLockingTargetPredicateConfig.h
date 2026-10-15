#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBasePredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceIsLockingTargetPredicateConfig; }

#define RPG_GAMECORE_CAKERACEISLOCKINGTARGETPREDICATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54B8E0)
#define RPG_GAMECORE_CAKERACEISLOCKINGTARGETPREDICATECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54B8F0)
#define RPG_GAMECORE_CAKERACEISLOCKINGTARGETPREDICATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D550C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceIsLockingTargetPredicateConfig_TypeDefinitionIndex = 18380;

	class CakeRaceIsLockingTargetPredicateConfig : public ::RPG::GameCore::CakeRaceBasePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEISLOCKINGTARGETPREDICATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceIsLockingTargetPredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceIsLockingTargetPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEISLOCKINGTARGETPREDICATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceIsLockingTargetPredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceIsLockingTargetPredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEISLOCKINGTARGETPREDICATECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
