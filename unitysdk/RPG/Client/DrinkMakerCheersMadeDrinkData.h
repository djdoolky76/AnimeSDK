#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFJPGILAAON;
namespace RPG::Client { class DrinkMakerBarDrink; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA69490)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRINKDATA_OFFSET UNITYSDK_OFFSET(0x1DA70680)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRINKID_OFFSET UNITYSDK_OFFSET(0x1DA70660)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRINKPROTO_OFFSET UNITYSDK_OFFSET(0x1DA706A0)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRUNKGROUPLIST_OFFSET UNITYSDK_OFFSET(0x1DA706C0)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_ISMADEINMAINSTORY_OFFSET UNITYSDK_OFFSET(0x1DA706E0)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRINKDATA_OFFSET UNITYSDK_OFFSET(0x1DA70690)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRINKID_OFFSET UNITYSDK_OFFSET(0x1DA70670)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRINKPROTO_OFFSET UNITYSDK_OFFSET(0x1DA706B0)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRUNKGROUPLIST_OFFSET UNITYSDK_OFFSET(0x1DA706D0)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_ISMADEINMAINSTORY_OFFSET UNITYSDK_OFFSET(0x1DA706F0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersMadeDrinkData_TypeDefinitionIndex = 65065;

	class DrinkMakerCheersMadeDrinkData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _DrunkGroupList_k__BackingField; // 0x10
		::RPG::Client::DrinkMakerBarDrink* _DrinkData_k__BackingField; // 0x18
		::DFJPGILAAON* _DrinkProto_k__BackingField; // 0x20
		::System::Boolean _IsMadeInMainStory_k__BackingField; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 _DrinkId_k__BackingField; // 0x2C
		::System::Void _ctor(::System::UInt32 a1, ::DFJPGILAAON* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::DFJPGILAAON*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_DrinkId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRINKID_OFFSET))(this);
		}

		::System::Void set_DrinkId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRINKID_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerBarDrink* get_DrinkData()
		{
			return ((::RPG::Client::DrinkMakerBarDrink*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRINKDATA_OFFSET))(this);
		}

		::System::Void set_DrinkData(::RPG::Client::DrinkMakerBarDrink* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBarDrink*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRINKDATA_OFFSET))(this, a1);
		}

		::DFJPGILAAON* get_DrinkProto()
		{
			return ((::DFJPGILAAON*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRINKPROTO_OFFSET))(this);
		}

		::System::Void set_DrinkProto(::DFJPGILAAON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFJPGILAAON*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRINKPROTO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DrunkGroupList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRUNKGROUPLIST_OFFSET))(this);
		}

		::System::Void set_DrunkGroupList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRUNKGROUPLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMadeInMainStory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_ISMADEINMAINSTORY_OFFSET))(this);
		}

		::System::Void set_IsMadeInMainStory(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_ISMADEINMAINSTORY_OFFSET))(this, a1);
		}

	};
}
