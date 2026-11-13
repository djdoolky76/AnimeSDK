#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBGGEOGBOGN;
class EONDIOOGHIA;
namespace RPG::Client { class MonsterData; }
namespace RPG::Client::ActivityFinalityBattle::Level { class FinalityBattleBattleTargetItem; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_LEVEL_FINALITYBATTLELEVELINFOVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBF58E0)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_LEVEL_FINALITYBATTLELEVELINFOVIEWMODEL_GET_BATTLETARGETS_OFFSET UNITYSDK_OFFSET(0x1DBF9390)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_LEVEL_FINALITYBATTLELEVELINFOVIEWMODEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1DBF8B40)
#define RPG_CLIENT_ACTIVITYFINALITYBATTLE_LEVEL_FINALITYBATTLELEVELINFOVIEWMODEL_GET_PREVIEWMONSTERS_OFFSET UNITYSDK_OFFSET(0x1DBF9490)

namespace RPG::Client::ActivityFinalityBattle::Level
{
	inline static constexpr unsigned int FinalityBattleLevelInfoViewModel_TypeDefinitionIndex = 84965;

	class FinalityBattleLevelInfoViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* _PreviewMonsters; // 0x10
		::EONDIOOGHIA* _Model; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleBattleTargetItem*>* _BattleTargets; // 0x20
		::System::Void _ctor(::EONDIOOGHIA* a1, ::EBGGEOGBOGN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EONDIOOGHIA*, ::EBGGEOGBOGN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_LEVEL_FINALITYBATTLELEVELINFOVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_LEVEL_FINALITYBATTLELEVELINFOVIEWMODEL_GET_ID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleBattleTargetItem*>* get_BattleTargets()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleBattleTargetItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_LEVEL_FINALITYBATTLELEVELINFOVIEWMODEL_GET_BATTLETARGETS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonsterData*>* get_PreviewMonsters()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFINALITYBATTLE_LEVEL_FINALITYBATTLELEVELINFOVIEWMODEL_GET_PREVIEWMONSTERS_OFFSET))(this);
		}

	};
}
