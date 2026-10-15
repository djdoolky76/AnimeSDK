#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionEnableTargetLockCat; }

#define RPG_GAMECORE_CAKERACEACTIONENABLETARGETLOCKCAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D548E80)
#define RPG_GAMECORE_CAKERACEACTIONENABLETARGETLOCKCAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D548E90)
#define RPG_GAMECORE_CAKERACEACTIONENABLETARGETLOCKCAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D548E30)

namespace RPG::GameCore
{
	class CakeRaceActionEnableTargetLockCat : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::UInt32 PreferCat; // 0x10
		::System::UInt32 LockRange; // 0x14
		::System::UInt32 LostExtendRange; // 0x18
		::System::UInt32 LockYDistance; // 0x1C
		::System::UInt32 LostYExtendDistance; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONENABLETARGETLOCKCAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONENABLETARGETLOCKCAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONENABLETARGETLOCKCAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
