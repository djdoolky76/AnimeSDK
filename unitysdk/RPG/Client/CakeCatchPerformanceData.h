#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class CakeCatchCatData; }
namespace RPG::Client { class CakeCatchPerformanceData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class CakePerformanceConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1BD83660)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD84E40)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BD84E50)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GETACTORCATDATALIST_OFFSET UNITYSDK_OFFSET(0x1BD84E90)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GETLOCALAVAILABLECATDATALIST_OFFSET UNITYSDK_OFFSET(0x1BD850C0)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GETREWARDITEMDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1BD853A0)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_ACTORIDS_OFFSET UNITYSDK_OFFSET(0x1BD85010)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_CANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0x1BD859D0)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1BD857A0)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1BD857C0)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_PERFORMANCEID_OFFSET UNITYSDK_OFFSET(0x1BD855B0)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_PERFORMANCEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1BD85840)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_PERFORMANCENAME_OFFSET UNITYSDK_OFFSET(0x1BD858F0)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_QUESTDATA_OFFSET UNITYSDK_OFFSET(0x1BD82190)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1BD857E0)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_ISUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0x1BD82490)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_SETUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0x1BD85650)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_SETUNLOCK_OFFSET UNITYSDK_OFFSET(0x1BD83880)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1BD857B0)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1BD857D0)
#define RPG_CLIENT_CAKECATCHPERFORMANCEDATA_TRYTAKEREWARD_OFFSET UNITYSDK_OFFSET(0x1BD854D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchPerformanceData_TypeDefinitionIndex = 64423;

	class CakeCatchPerformanceData : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Boolean _IsUnlocked_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeCatchPerformanceData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeCatchPerformanceData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SetUnlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_SETUNLOCK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* GetActorCatDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GETACTORCATDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>* GetLocalAvailableCatDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchCatData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GETLOCALAVAILABLECATDATALIST_OFFSET))(this);
		}

		::RPG::Client::ItemDisplayData* GetRewardItemDisplayData()
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GETREWARDITEMDISPLAYDATA_OFFSET))(this);
		}

		::System::Void TryTakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_TRYTAKEREWARD_OFFSET))(this);
		}

		::System::Boolean IsUnlockStatusSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_ISUNLOCKSTATUSSEEN_OFFSET))(this);
		}

		::System::Void SetUnlockStatusSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_SETUNLOCKSTATUSSEEN_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_ActorIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_ACTORIDS_OFFSET))(this);
		}

		::System::UInt32 get_PerformanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_PERFORMANCEID_OFFSET))(this);
		}

		::System::String* get_PerformanceImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_PERFORMANCEIMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_PerformanceName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_PERFORMANCENAME_OFFSET))(this);
		}

		::RPG::Client::QuestData* get_QuestData()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_QUESTDATA_OFFSET))(this);
		}

		::System::Boolean get_CanTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET_CANTAKEREWARD_OFFSET))(this);
		}

		::RPG::GameCore::CakePerformanceConfigRow* get__Row()
		{
			return ((::RPG::GameCore::CakePerformanceConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHPERFORMANCEDATA_GET__ROW_OFFSET))(this);
		}

	};
}
