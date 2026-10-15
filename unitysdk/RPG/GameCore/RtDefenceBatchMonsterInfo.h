#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtDefenceBatchSpawnTiming.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtDefenceBatchMonsterInfo; }
namespace RPG::GameCore { class RtDefenceSpawnMonsterInfo; }

#define RPG_GAMECORE_RTDEFENCEBATCHMONSTERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5A9F0)
#define RPG_GAMECORE_RTDEFENCEBATCHMONSTERINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5A7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceBatchMonsterInfo_TypeDefinitionIndex = 18068;

	class RtDefenceBatchMonsterInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint Delay; // 0x10
		::RPG::GameCore::FixPoint Interval; // 0x18
		::RPG::GameCore::RtDefenceBatchSpawnTiming Timing; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::RtDefenceSpawnMonsterInfo*>* SpawnList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCEBATCHMONSTERINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtDefenceBatchMonsterInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtDefenceBatchMonsterInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCEBATCHMONSTERINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
