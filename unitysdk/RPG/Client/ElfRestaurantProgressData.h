#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class NOHPJFOGFLM;
namespace RPG::Client { class ElfRestaurantDayData; }
namespace RPG::Client { class ElfRestaurantProgressData; }
namespace RPG::GameCore { class RestaurantProgressRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1AED52F0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1AED57C0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AED5870)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GETDAYWITHOFFSET_OFFSET UNITYSDK_OFFSET(0x1AED5A30)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GETDAY_OFFSET UNITYSDK_OFFSET(0x1AED5970)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_BASECUSTOMER_OFFSET UNITYSDK_OFFSET(0x1AEAA1C0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_BREAKMISSION_OFFSET UNITYSDK_OFFSET(0x1AED6100)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_CHECKDAY_OFFSET UNITYSDK_OFFSET(0x1AED6060)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_CHEFNUMBER_OFFSET UNITYSDK_OFFSET(0x1AEACAA0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_DAYLIST_OFFSET UNITYSDK_OFFSET(0x1AED61A0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_ELFSLOTNUM_OFFSET UNITYSDK_OFFSET(0x1AED6220)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_EMPLOYEEMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1AEA5D80)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_FARMERNUMBER_OFFSET UNITYSDK_OFFSET(0x1AEACB40)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_FINISHDAY_OFFSET UNITYSDK_OFFSET(0x1AED6200)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_GOALQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x1AEC9C00)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_HASNEXTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1AED6270)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AED5F40)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1AED61E0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_MENUNUMBER_OFFSET UNITYSDK_OFFSET(0x1AEA5F90)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AEACD90)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_OPENTIME_OFFSET UNITYSDK_OFFSET(0x1AEAAAE0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_PROFITQUESTID_OFFSET UNITYSDK_OFFSET(0x1AEC9B60)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_RECIPEMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1AEA5EE0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_TABLEMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1AEA5E30)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_TABLENUMBER_OFFSET UNITYSDK_OFFSET(0x1AED5FC0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_WAITERNUMBER_OFFSET UNITYSDK_OFFSET(0x1AEACA00)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1AED5F60)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_ISQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x1AED5C90)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_FINISHDAY_OFFSET UNITYSDK_OFFSET(0x1AED6210)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1AED5F50)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1AED61F0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1AED5910)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_TRYGETNEXTFESTIVAL_OFFSET UNITYSDK_OFFSET(0x1AED5E50)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA__FINDNEXTDAY_OFFSET UNITYSDK_OFFSET(0x1AED5AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantProgressData_TypeDefinitionIndex = 65165;

	class ElfRestaurantProgressData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantDayData*>* _Days; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantDayData*>* _DaysList; // 0x18
		::Il2CppArray<::System::UInt32>* OwnerNPCIDs; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::System::UInt32 _FinishDay_k__BackingField; // 0x2C
		::System::Boolean _IsFinished_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfRestaurantProgressData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantProgressData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::NOHPJFOGFLM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOHPJFOGFLM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SYNC_OFFSET))(this, a1);
		}

		::RPG::Client::ElfRestaurantDayData* GetDay(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantDayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GETDAY_OFFSET))(this, a1);
		}

		::RPG::Client::ElfRestaurantDayData* GetDayWithOffset(::System::UInt32 a1, ::RPG::Client::ElfRestaurantDayData* a2)
		{
			return ((::RPG::Client::ElfRestaurantDayData*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ElfRestaurantDayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GETDAYWITHOFFSET_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsQuestFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_ISQUESTFINISHED_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantDayData* _FindNextDay(::RPG::Client::ElfRestaurantDayData* a1)
		{
			return ((::RPG::Client::ElfRestaurantDayData*(*)(::PVOID, ::RPG::Client::ElfRestaurantDayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA__FINDNEXTDAY_OFFSET))(this, a1);
		}

		::RPG::Client::ElfRestaurantDayData* TryGetNextFestival(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantDayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_TRYGETNEXTFESTIVAL_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RestaurantProgressRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantProgressRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_OpenTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_OPENTIME_OFFSET))(this);
		}

		::System::UInt32 get_WaiterNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_WAITERNUMBER_OFFSET))(this);
		}

		::System::UInt32 get_ChefNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_CHEFNUMBER_OFFSET))(this);
		}

		::System::UInt32 get_FarmerNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_FARMERNUMBER_OFFSET))(this);
		}

		::System::UInt32 get_EmployeeMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_EMPLOYEEMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_TableNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_TABLENUMBER_OFFSET))(this);
		}

		::System::UInt32 get_TableMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_TABLEMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_BaseCustomer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_BASECUSTOMER_OFFSET))(this);
		}

		::System::UInt32 get_RecipeMaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_RECIPEMAXLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_MenuNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_MENUNUMBER_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_CheckDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_CHECKDAY_OFFSET))(this);
		}

		::System::UInt32 get_BreakMission()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_BREAKMISSION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantDayData*>* get_DayList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantDayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_DAYLIST_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_ISFINISHED_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_FINISHDAY_OFFSET))(this);
		}

		::System::Void set_FinishDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_SET_FINISHDAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_ElfSlotNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_ELFSLOTNUM_OFFSET))(this);
		}

		::System::UInt32 get_ProfitQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_PROFITQUESTID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_GoalQuestIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_GOALQUESTIDLIST_OFFSET))(this);
		}

		::System::Boolean get_HasNextProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA_GET_HASNEXTPROGRESS_OFFSET))(this);
		}

	};
}
