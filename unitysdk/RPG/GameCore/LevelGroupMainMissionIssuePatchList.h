#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupMainMissionIssuePatch; }
namespace RPG::GameCore { class LevelGroupMainMissionIssuePatchList; }

#define RPG_GAMECORE_LEVELGROUPMAINMISSIONISSUEPATCHLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D783B90)
#define RPG_GAMECORE_LEVELGROUPMAINMISSIONISSUEPATCHLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D783AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupMainMissionIssuePatchList_TypeDefinitionIndex = 17366;

	class LevelGroupMainMissionIssuePatchList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelGroupMainMissionIssuePatch*>* List; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMAINMISSIONISSUEPATCHLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupMainMissionIssuePatchList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupMainMissionIssuePatchList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMAINMISSIONISSUEPATCHLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
