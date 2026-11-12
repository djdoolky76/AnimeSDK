#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlanetFesTradingCardFriendData; }
namespace RPG::Client { class PlanetFesTradingCardFriendData_IServerAgent; }
namespace RPG::Client { class PlanetFesTradingCardFriendsItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_CHECKCANFRIENDEXCHANGECARD_OFFSET UNITYSDK_OFFSET(0xE66E690)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE66E5C0)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE66E620)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_GETDEMANDFRIENDDATAWITHPERMISSION_OFFSET UNITYSDK_OFFSET(0xE66E700)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_GETFRIENDDATA_OFFSET UNITYSDK_OFFSET(0xE66E630)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_GETPRESENTFRIENDDATAWITHPERMISSION_OFFSET UNITYSDK_OFFSET(0xE66EA50)
#define RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_GET_FRIENDSDATALIST_OFFSET UNITYSDK_OFFSET(0xE66EA00)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesTradingCardFriendData_TypeDefinitionIndex = 68519;

	class PlanetFesTradingCardFriendData : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesTradingCardFriendData_IServerAgent* _Agent; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesTradingCardFriendData* Create(::RPG::Client::PlanetFesTradingCardFriendData_IServerAgent* a1)
		{
			return ((::RPG::Client::PlanetFesTradingCardFriendData*(*)(::RPG::Client::PlanetFesTradingCardFriendData_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_CREATE_OFFSET))(a1);
		}

		::RPG::Client::PlanetFesTradingCardFriendsItem* GetFriendData(::System::UInt32 a1)
		{
			return ((::RPG::Client::PlanetFesTradingCardFriendsItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_GETFRIENDDATA_OFFSET))(this, a1);
		}

		::System::Boolean CheckCanFriendExchangeCard(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_CHECKCANFRIENDEXCHANGECARD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardFriendsItem*>* GetDemandFriendDataWithPermission()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardFriendsItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_GETDEMANDFRIENDDATAWITHPERMISSION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardFriendsItem*>* GetPresentFriendDataWithPermission()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardFriendsItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_GETPRESENTFRIENDDATAWITHPERMISSION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardFriendsItem*>* get_FriendsDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesTradingCardFriendsItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESTRADINGCARDFRIENDDATA_GET_FRIENDSDATALIST_OFFSET))(this);
		}

	};
}
