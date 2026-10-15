#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTargetLockStatus.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceCatCommonConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CAKERACECATCOMMONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54D7C0)
#define RPG_GAMECORE_CAKERACECATCOMMONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54D1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCatCommonConfig_TypeDefinitionIndex = 18400;

	class CakeRaceCatCommonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PathFindRange; // 0x10
		::System::Single SoftMaxTemperature; // 0x14
		::System::UInt32 PathFindLookAsideProbabilityThreshold; // 0x18
		::System::UInt32 PathFindDeadPathPenaltyWeight; // 0x1C
		::System::UInt32 LookAsideDuration; // 0x20
		::System::UInt32 SlideFrictionMax; // 0x24
		::System::UInt32 SlideFrictionAddOnIce; // 0x28
		::System::UInt32 SlideFrictionDefault; // 0x2C
		::System::UInt32 PathFindLockTargetWeight; // 0x30
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* AimCatAIWaitTimeRange; // 0x38
		::System::UInt32 PathFindAimCatInitCD; // 0x40
		::System::UInt32 PathFindAimCatCD; // 0x44
		::System::UInt32 PathFindLockFoodRangeMm; // 0x48
		::System::UInt32 PathFindUnLockFoodExtendRangeMs; // 0x4C
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceTargetLockStatus, ::System::Int32>* CatLockStatusAddCurWaitTimes; // 0x50
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceTargetLockStatus, ::System::Int32>* FoodLockStatusAddCurWaitTimes; // 0x58
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceTargetLockStatus, ::System::Int32>* NaughtyCatLockStatusAddCurWaitTimes; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* AventurineSkillEffectConfig; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECATCOMMONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceCatCommonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceCatCommonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECATCOMMONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
