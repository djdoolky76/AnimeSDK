#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CABCPFKAOPP;
namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace RPG::Client::ChenLingBattle { class ShopRefreshInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_CREATEBYPROTO_OFFSET UNITYSDK_OFFSET(0x1E259230)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E25B2D0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_BOUGHTCARDINDICES_OFFSET UNITYSDK_OFFSET(0x1E25B330)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_CARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1E25B310)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_DISCOUNTPERCENT_OFFSET UNITYSDK_OFFSET(0x1E25B350)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x1E25B2F0)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_BOUGHTCARDINDICES_OFFSET UNITYSDK_OFFSET(0x1E25B340)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_CARDCONFIGS_OFFSET UNITYSDK_OFFSET(0x1E25B320)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_DISCOUNTPERCENT_OFFSET UNITYSDK_OFFSET(0x1E25B360)
#define RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x1E25B300)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ShopRefreshInfo_TypeDefinitionIndex = 78650;

	class ShopRefreshInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* _CardConfigs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _BoughtCardIndices_k__BackingField; // 0x18
		::System::UInt32 _RefreshCost_k__BackingField; // 0x20
		::System::UInt32 _DiscountPercent_k__BackingField; // 0x24
		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::RPG::Client::ChenLingBattle::ShopRefreshInfo* CreateByProto(::CABCPFKAOPP* a1)
		{
			return ((::RPG::Client::ChenLingBattle::ShopRefreshInfo*(*)(::CABCPFKAOPP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_CREATEBYPROTO_OFFSET))(a1);
		}

		::System::UInt32 get_RefreshCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_REFRESHCOST_OFFSET))(this);
		}

		::System::Void set_RefreshCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_REFRESHCOST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* get_CardConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_CARDCONFIGS_OFFSET))(this);
		}

		::System::Void set_CardConfigs(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::CardConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_CARDCONFIGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_BoughtCardIndices()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_BOUGHTCARDINDICES_OFFSET))(this);
		}

		::System::Void set_BoughtCardIndices(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_BOUGHTCARDINDICES_OFFSET))(this, a1);
		}

		::System::UInt32 get_DiscountPercent()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_GET_DISCOUNTPERCENT_OFFSET))(this);
		}

		::System::Void set_DiscountPercent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SHOPREFRESHINFO_SET_DISCOUNTPERCENT_OFFSET))(this, a1);
		}

	};
}
