#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGFGGFBNOJC;
class IILBDJMKELG;
namespace RPG::Client { class ElfRestaurantEmployeeData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD780770)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD77EC90)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLCHEF_OFFSET UNITYSDK_OFFSET(0xD77F7F0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLDEVELOPEDEMPLOYEES_OFFSET UNITYSDK_OFFSET(0xD77EFB0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLFARMER_OFFSET UNITYSDK_OFFSET(0xD77F530)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLNEWUNLOCKEMPLOYEE_OFFSET UNITYSDK_OFFSET(0xD778A10)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLPURCHASEDFARMER_OFFSET UNITYSDK_OFFSET(0xD7585B0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLUNLOCKEMPLOYEE_OFFSET UNITYSDK_OFFSET(0xD77ED30)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLWAITER_OFFSET UNITYSDK_OFFSET(0xD77F260)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETEMPLOYEEDATA_OFFSET UNITYSDK_OFFSET(0xD776850)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GET_CHIEFCOUNT_OFFSET UNITYSDK_OFFSET(0xD780570)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GET_WAITERCOUNT_OFFSET UNITYSDK_OFFSET(0xD780370)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_HASAUTOABILITYEMPLOYEE_OFFSET UNITYSDK_OFFSET(0xD77FAC0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_INIT_OFFSET UNITYSDK_OFFSET(0xD77E990)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_SYNCEMPLOYEEUPGRADE_OFFSET UNITYSDK_OFFSET(0xD77FE90)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xD77FF00)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO__INITEMPLOYEEDATA_OFFSET UNITYSDK_OFFSET(0xD77E9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantEmployeeInfo_TypeDefinitionIndex = 65106;

	class ElfRestaurantEmployeeInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantEmployeeData*>* EmployeeDataDict; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void _InitEmployeeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO__INITEMPLOYEEDATA_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantEmployeeData* GetEmployeeData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ElfRestaurantEmployeeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETEMPLOYEEDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>* GetAllUnlockEmployee()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLUNLOCKEMPLOYEE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>* GetAllDevelopedEmployees()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLDEVELOPEDEMPLOYEES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>* GetAllNewUnlockEmployee()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLNEWUNLOCKEMPLOYEE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>* GetAllWaiter()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLWAITER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>* GetAllFarmer()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLFARMER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>* GetAllPurchasedFarmer()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLPURCHASEDFARMER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>* GetAllChef()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GETALLCHEF_OFFSET))(this);
		}

		::System::Boolean HasAutoAbilityEmployee()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_HASAUTOABILITYEMPLOYEE_OFFSET))(this);
		}

		::System::Void SyncEmployeeUpgrade(::AGFGGFBNOJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGFGGFBNOJC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_SYNCEMPLOYEEUPGRADE_OFFSET))(this, a1);
		}

		::System::Void Sync(::IILBDJMKELG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IILBDJMKELG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_WaiterCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GET_WAITERCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_ChiefCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEINFO_GET_CHIEFCOUNT_OFFSET))(this);
		}

	};
}
