#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BattleRogueMagicData_RoundCount; }

#define RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1AE6FBB0)
#define RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0x1AE6F700)
#define RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT_GETLEFTBATTLECOUNT_OFFSET UNITYSDK_OFFSET(0x1AE6FB60)
#define RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT_GETLEFTGLOBALCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE6FB10)
#define RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT_GET_TOTALROUNDCNT_OFFSET UNITYSDK_OFFSET(0x1AE684F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleRogueMagicData_RoundCount_TypeDefinitionIndex = 57529;

	class BattleRogueMagicData_RoundCount : public ::System::Object
	{
	public:
		::System::UInt32 BattleRoundCnt; // 0x10
		::System::UInt32 GlobalRoundCnt; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_TotalRoundCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT_GET_TOTALROUNDCNT_OFFSET))(this);
		}

		::System::UInt32 GetLeftGlobalCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT_GETLEFTGLOBALCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetLeftBattleCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT_GETLEFTBATTLECOUNT_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleRogueMagicData_RoundCount* DeepClone()
		{
			return ((::RPG::GameCore::BattleRogueMagicData_RoundCount*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT_DEEPCLONE_OFFSET))(this);
		}

	};
}
