#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionEnableNaughtyTargetLockCat; }

#define RPG_GAMECORE_CAKERACEACTIONENABLENAUGHTYTARGETLOCKCAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D548D40)
#define RPG_GAMECORE_CAKERACEACTIONENABLENAUGHTYTARGETLOCKCAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D548D50)
#define RPG_GAMECORE_CAKERACEACTIONENABLENAUGHTYTARGETLOCKCAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D548CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionEnableNaughtyTargetLockCat_TypeDefinitionIndex = 18363;

	class CakeRaceActionEnableNaughtyTargetLockCat : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::UInt32 PathFindRange; // 0x10
		::System::UInt32 UnlockCatExcludeCatCd; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONENABLENAUGHTYTARGETLOCKCAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONENABLENAUGHTYTARGETLOCKCAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONENABLENAUGHTYTARGETLOCKCAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
