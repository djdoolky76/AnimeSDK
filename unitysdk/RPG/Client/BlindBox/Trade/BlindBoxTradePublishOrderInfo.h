#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlindBox/Trade/BlindBoxTradePublishOrderPetItemKind.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/Pet/BlindBox/BlindBoxPetType.h"
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradeOrderRepository; }
namespace RPG::Client::BlindBox::Trade { class BlindBoxTradePublishOrderPetItem; }
namespace RPG::Client::Pet { class PetModule; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPetInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD201A80)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETOFFERGROUPCOUNT_OFFSET UNITYSDK_OFFSET(0xD20EB20)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETOFFERGROUPTITLE_OFFSET UNITYSDK_OFFSET(0xD20ED60)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETOFFERPETAT_OFFSET UNITYSDK_OFFSET(0xD20EC10)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETOFFERPETCOUNTINGROUP_OFFSET UNITYSDK_OFFSET(0xD20EB70)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETPETGROUPCOUNT_OFFSET UNITYSDK_OFFSET(0xD20E760)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETPETGROUPTITLE_OFFSET UNITYSDK_OFFSET(0xD20EA30)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETPETITEMAT_OFFSET UNITYSDK_OFFSET(0xD20E8E0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETPETITEMCOUNTINGROUP_OFFSET UNITYSDK_OFFSET(0xD20E7D0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETPRIVATEVALIDDAYOPTIONAT_OFFSET UNITYSDK_OFFSET(0xD20F210)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETPRIVATEVALIDDAYOPTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xD20F1B0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETREQUESTGROUPCOUNT_OFFSET UNITYSDK_OFFSET(0xD20EE80)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETREQUESTGROUPTITLE_OFFSET UNITYSDK_OFFSET(0xD20F050)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETREQUESTPETAT_OFFSET UNITYSDK_OFFSET(0xD20EF70)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETREQUESTPETCOUNTINGROUP_OFFSET UNITYSDK_OFFSET(0xD20EED0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETVALIDDAYOPTIONAT_OFFSET UNITYSDK_OFFSET(0xD20F140)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETVALIDDAYOPTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xD20F0E0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GET__PETMODULE_OFFSET UNITYSDK_OFFSET(0xD20AA90)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GET__PRIVATEVALIDDAYOPTIONS_OFFSET UNITYSDK_OFFSET(0xD209770)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GET__TRADEORDERREPOSITORY_OFFSET UNITYSDK_OFFSET(0xD20AA00)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GET__VALIDDAYOPTIONS_OFFSET UNITYSDK_OFFSET(0xD209580)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_ISOFFERGROUPSELECTABLE_OFFSET UNITYSDK_OFFSET(0xD20EDF0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_REBUILDHIDDENOFFERGROUPS_OFFSET UNITYSDK_OFFSET(0xD20B2D0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_REBUILDOFFERGROUPS_OFFSET UNITYSDK_OFFSET(0xD2098A0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_REBUILDREQUESTGROUPS_OFFSET UNITYSDK_OFFSET(0xD20C5F0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__ADDAGGREGATEDOFFERITEM_OFFSET UNITYSDK_OFFSET(0xD20FFD0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__BUILDAGGREGATEDOFFERITEMS_OFFSET UNITYSDK_OFFSET(0xD20AB70)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__BUILDINDIVIDUALOFFERITEMS_OFFSET UNITYSDK_OFFSET(0xD20AFE0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__BUILDREQUESTITEMS_OFFSET UNITYSDK_OFFSET(0xD20E370)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__COLLECTOWNEDBLINDBOXPETINSTANCES_OFFSET UNITYSDK_OFFSET(0xD20D8B0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__COMPAREINSTANCE_OFFSET UNITYSDK_OFFSET(0xD20F2E0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__COMPAREPET_OFFSET UNITYSDK_OFFSET(0xD20F9F0)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__ISCHROMAPET_OFFSET UNITYSDK_OFFSET(0xD20AB10)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__ISGROUPTYPE_OFFSET UNITYSDK_OFFSET(0xD20E230)
#define RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__TYPEORDER_OFFSET UNITYSDK_OFFSET(0xD20F280)

namespace RPG::Client::BlindBox::Trade
{
	inline static constexpr unsigned int BlindBoxTradePublishOrderInfo_TypeDefinitionIndex = 77216;

	class BlindBoxTradePublishOrderInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _RequestGroups; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* _OfferGroups; // 0x18
		// static const ::System::String* PublicValidDayArrayConstKey; // 0x0
		// static const ::System::String* PrivateValidDayConstKey; // 0x0
		// static const ::System::String* _OfferSelectableTitle; // 0x0
		// static const ::System::String* _OfferNonSelectableTitle; // 0x0
		// static const ::System::String* _RequestNotOwnedTitle; // 0x0
		// static const ::System::String* _RequestOwnedTitle; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get__ValidDayOptions()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GET__VALIDDAYOPTIONS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get__PrivateValidDayOptions()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GET__PRIVATEVALIDDAYOPTIONS_OFFSET))(this);
		}

		::System::Void RebuildOfferGroups(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_REBUILDOFFERGROUPS_OFFSET))(this, a1);
		}

		::System::Void RebuildHiddenOfferGroups(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_REBUILDHIDDENOFFERGROUPS_OFFSET))(this, a1);
		}

		::System::Void RebuildRequestGroups(::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_REBUILDREQUESTGROUPS_OFFSET))(this, a1);
		}

		::System::Int32 GetPetGroupCount(::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItemKind a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItemKind))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETPETGROUPCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 GetPetItemCountInGroup(::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItemKind a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItemKind, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETPETITEMCOUNTINGROUP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItem* GetPetItemAt(::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItemKind a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItem*(*)(::PVOID, ::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItemKind, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETPETITEMAT_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetPetGroupTitle(::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItemKind a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItemKind, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETPETGROUPTITLE_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetOfferGroupCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETOFFERGROUPCOUNT_OFFSET))(this);
		}

		::System::Int32 GetOfferPetCountInGroup(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETOFFERPETCOUNTINGROUP_OFFSET))(this, a1);
		}

		::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance* GetOfferPetAt(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETOFFERPETAT_OFFSET))(this, a1, a2);
		}

		::System::String* GetOfferGroupTitle(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETOFFERGROUPTITLE_OFFSET))(this, a1);
		}

		::System::Boolean IsOfferGroupSelectable(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_ISOFFERGROUPSELECTABLE_OFFSET))(this, a1);
		}

		::System::Int32 GetRequestGroupCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETREQUESTGROUPCOUNT_OFFSET))(this);
		}

		::System::Int32 GetRequestPetCountInGroup(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETREQUESTPETCOUNTINGROUP_OFFSET))(this, a1);
		}

		::RPG::Client::Pet::BlindBox::IBlindBoxPet* GetRequestPetAt(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Pet::BlindBox::IBlindBoxPet*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETREQUESTPETAT_OFFSET))(this, a1, a2);
		}

		::System::String* GetRequestGroupTitle(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETREQUESTGROUPTITLE_OFFSET))(this, a1);
		}

		::System::Int32 GetValidDayOptionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETVALIDDAYOPTIONCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetValidDayOptionAt(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETVALIDDAYOPTIONAT_OFFSET))(this, a1);
		}

		::System::Int32 GetPrivateValidDayOptionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETPRIVATEVALIDDAYOPTIONCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetPrivateValidDayOptionAt(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GETPRIVATEVALIDDAYOPTIONAT_OFFSET))(this, a1);
		}

		static ::System::Boolean _IsGroupType(::RPG::Client::Pet::BlindBox::BlindBoxPetType a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::BlindBoxPetType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__ISGROUPTYPE_OFFSET))(a1);
		}

		static ::System::Boolean _IsChromaPet(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__ISCHROMAPET_OFFSET))(a1);
		}

		static ::System::Int32 _TypeOrder(::RPG::Client::Pet::BlindBox::BlindBoxPetType a1)
		{
			return ((::System::Int32(*)(::RPG::Client::Pet::BlindBox::BlindBoxPetType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__TYPEORDER_OFFSET))(a1);
		}

		::System::Int32 _CompareInstance(::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance* a1, ::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*, ::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__COMPAREINSTANCE_OFFSET))(this, a1, a2);
		}

		::System::Int32 _ComparePet(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1, ::RPG::Client::Pet::BlindBox::IBlindBoxPet* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__COMPAREPET_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItem*>* _BuildIndividualOfferItems(::System::Collections::Generic::List_1<::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*>* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItem*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__BUILDINDIVIDUALOFFERITEMS_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItem*>* _BuildAggregatedOfferItems(::System::Collections::Generic::List_1<::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItem*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__BUILDAGGREGATEDOFFERITEMS_OFFSET))(a1);
		}

		static ::System::Void _AddAggregatedOfferItem(::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItem*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItem*>*, ::System::Collections::Generic::List_1<::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__ADDAGGREGATEDOFFERITEM_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItem*>* _BuildRequestItems(::System::Collections::Generic::List_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*>*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BlindBox::Trade::BlindBoxTradePublishOrderPetItem*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::Pet::BlindBox::IBlindBoxPet*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__BUILDREQUESTITEMS_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*>*>* _CollectOwnedBlindBoxPetInstances()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*>*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO__COLLECTOWNEDBLINDBOXPETINSTANCES_OFFSET))();
		}

		static ::RPG::Client::Pet::PetModule* get__PetModule()
		{
			return ((::RPG::Client::Pet::PetModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GET__PETMODULE_OFFSET))();
		}

		static ::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderRepository* get__TradeOrderRepository()
		{
			return ((::RPG::Client::BlindBox::Trade::BlindBoxTradeOrderRepository*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BLINDBOX_TRADE_BLINDBOXTRADEPUBLISHORDERINFO_GET__TRADEORDERREPOSITORY_OFFSET))();
		}

	};
}
