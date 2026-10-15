#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOJPFHJCOLM;
class EMJANDEFGEN;
class NBHCDAEKHGJ;
namespace RPG::Client { class BattleUITeamBlockData; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TeamDataComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEUITEAMBLOCKDATA_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xC865B00)
#define RPG_CLIENT_BATTLEUITEAMBLOCKDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC864E10)
#define RPG_CLIENT_BATTLEUITEAMBLOCKDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC864F90)
#define RPG_CLIENT_BATTLEUITEAMBLOCKDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8652A0)
#define RPG_CLIENT_BATTLEUITEAMBLOCKDATA_GETITEMDATALIST_OFFSET UNITYSDK_OFFSET(0xC865490)
#define RPG_CLIENT_BATTLEUITEAMBLOCKDATA_GETOVERVIEWDATA_OFFSET UNITYSDK_OFFSET(0xC865450)
#define RPG_CLIENT_BATTLEUITEAMBLOCKDATA_INIT_OFFSET UNITYSDK_OFFSET(0xC8650D0)
#define RPG_CLIENT_BATTLEUITEAMBLOCKDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0xC8653E0)
#define RPG_CLIENT_BATTLEUITEAMBLOCKDATA__COMPAREBATTLEUITEAMBLOCKITEMDATA_OFFSET UNITYSDK_OFFSET(0xC865C40)
#define RPG_CLIENT_BATTLEUITEAMBLOCKDATA__GROUPINSTANCESBYSOURCEENTITY_OFFSET UNITYSDK_OFFSET(0xC865780)
#define RPG_CLIENT_BATTLEUITEAMBLOCKDATA__ONBATTLEUITEAMBLOCKVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xC865BA0)
#define RPG_CLIENT_BATTLEUITEAMBLOCKDATA__REMOVEHANDLERS_OFFSET UNITYSDK_OFFSET(0xC865350)
#define RPG_CLIENT_BATTLEUITEAMBLOCKDATA__UPDATEOVERVIEWDATA_OFFSET UNITYSDK_OFFSET(0xC865230)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleUITeamBlockData_TypeDefinitionIndex = 72051;

	class BattleUITeamBlockData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _SourceEntityList; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::NBHCDAEKHGJ*>*>* _InstancesBySourceEntity; // 0x18
		::System::Collections::Generic::List_1<::AOJPFHJCOLM*>* _ItemDataList; // 0x20
		::EMJANDEFGEN* _OverviewData; // 0x28
		::RPG::GameCore::TeamDataComponent* _TeamDataComponent; // 0x30
		::System::Boolean _AddedNotify; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUITEAMBLOCKDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleUITeamBlockData* Create()
		{
			return ((::RPG::Client::BattleUITeamBlockData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUITEAMBLOCKDATA_CREATE_OFFSET))();
		}

		::System::Void Init(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUITEAMBLOCKDATA_INIT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUITEAMBLOCKDATA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUITEAMBLOCKDATA_ISVALID_OFFSET))(this);
		}

		::AOJPFHJCOLM* GetOverviewData()
		{
			return ((::AOJPFHJCOLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUITEAMBLOCKDATA_GETOVERVIEWDATA_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::AOJPFHJCOLM*>* GetItemDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::AOJPFHJCOLM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUITEAMBLOCKDATA_GETITEMDATALIST_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUITEAMBLOCKDATA_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _RemoveHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUITEAMBLOCKDATA__REMOVEHANDLERS_OFFSET))(this);
		}

		::System::Void _OnBattleUITeamBlockValueChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUITEAMBLOCKDATA__ONBATTLEUITEAMBLOCKVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void _UpdateOverviewData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUITEAMBLOCKDATA__UPDATEOVERVIEWDATA_OFFSET))(this);
		}

		::System::Void _GroupInstancesBySourceEntity(::System::Collections::Generic::List_1<::NBHCDAEKHGJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NBHCDAEKHGJ*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUITEAMBLOCKDATA__GROUPINSTANCESBYSOURCEENTITY_OFFSET))(this, a1);
		}

		::System::Int32 _CompareBattleUITeamBlockItemData(::AOJPFHJCOLM* a1, ::AOJPFHJCOLM* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::AOJPFHJCOLM*, ::AOJPFHJCOLM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUITEAMBLOCKDATA__COMPAREBATTLEUITEAMBLOCKITEMDATA_OFFSET))(this, a1, a2);
		}

	};
}
