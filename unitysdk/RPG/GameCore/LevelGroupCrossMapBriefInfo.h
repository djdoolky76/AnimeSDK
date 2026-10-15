#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupCrossMapBriefInfo; }
namespace RPG::GameCore { class RtLevelGroupInfo; }
namespace RPG::GameCore { class RtLevelGroupInstanceInfo; }

#define RPG_GAMECORE_LEVELGROUPCROSSMAPBRIEFINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AFAC0)
#define RPG_GAMECORE_LEVELGROUPCROSSMAPBRIEFINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7AF9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupCrossMapBriefInfo_TypeDefinitionIndex = 17161;

	class LevelGroupCrossMapBriefInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RtLevelGroupInstanceInfo* GroupInstanceInfo; // 0x10
		::RPG::GameCore::RtLevelGroupInfo* GroupInfo; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPCROSSMAPBRIEFINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupCrossMapBriefInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupCrossMapBriefInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPCROSSMAPBRIEFINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
