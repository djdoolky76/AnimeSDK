#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/RPG/Client/PlayerPreparationState.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CLPENACKJJE;
class IEKGANLHMHM;
class LNDHKMMGBGC;
class MGBHKCMHDOK;
namespace RPG::Client { class GridFightBonusDropData; }
namespace RPG::Client { class GridFightJadeShopGood; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class RspHandler; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_ADD_ONSHOPCLOSED_OFFSET UNITYSDK_OFFSET(0xDBD9F50)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_BUYGOOD_OFFSET UNITYSDK_OFFSET(0xDBDA040)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_CANEDITINPREPARATIONSTATE_OFFSET UNITYSDK_OFFSET(0xDBD9B40)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_CANEDIT_OFFSET UNITYSDK_OFFSET(0xDBD9A60)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_CLOSESHOPUI_OFFSET UNITYSDK_OFFSET(0xDBD9DD0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDBD8D60)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_GETEDITICON_OFFSET UNITYSDK_OFFSET(0xDBD9AD0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_GETGOODSDETAILOBJECTS_OFFSET UNITYSDK_OFFSET(0xDBDAE30)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_GETNORMALGOOD_OFFSET UNITYSDK_OFFSET(0xDBD99D0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_GET_GOODS_OFFSET UNITYSDK_OFFSET(0xDBD9940)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_GET_ISUNLOCKREFRESH_OFFSET UNITYSDK_OFFSET(0xDBD9920)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_GET_SPECIALGOOD_OFFSET UNITYSDK_OFFSET(0xDBD9950)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_NOTIFYGOODPURCHASED_OFFSET UNITYSDK_OFFSET(0xDBDA8F0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_NOTIFYSHOPCLOSED_OFFSET UNITYSDK_OFFSET(0xDBD9EE0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_ONGOODSREFRESHED_OFFSET UNITYSDK_OFFSET(0xDBDAC90)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xDBD8ED0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_REFRESHGOODS_OFFSET UNITYSDK_OFFSET(0xDBDAAF0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_REMOVE_ONSHOPCLOSED_OFFSET UNITYSDK_OFFSET(0xDBD9FC0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_SETSHOPPANEL_OFFSET UNITYSDK_OFFSET(0xDBDB200)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_SET_ISUNLOCKREFRESH_OFFSET UNITYSDK_OFFSET(0xDBD9930)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_STARTEDIT_OFFSET UNITYSDK_OFFSET(0xDBD9B90)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__BLOCKJADESHOPRESPONSE_OFFSET UNITYSDK_OFFSET(0xDBDA6F0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__BUILDGOOD_OFFSET UNITYSDK_OFFSET(0xDBDB770)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__FINDPROTOBYSLOT_OFFSET UNITYSDK_OFFSET(0xDBDB3C0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__GETBONUSDROPDETAILOBJECT_OFFSET UNITYSDK_OFFSET(0xDBDB0A0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__HASONLYEXPERIENCEREWARDS_OFFSET UNITYSDK_OFFSET(0xDBDA500)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__ISSAMEGOOD_OFFSET UNITYSDK_OFFSET(0xDBDB940)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__ONJADESHOPREQUESTTIMEDOUT_OFFSET UNITYSDK_OFFSET(0xDBDA8B0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__PARSEBONUSDROPLIST_OFFSET UNITYSDK_OFFSET(0xDBDBC50)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__REFRESHGOODS_B__31_0_OFFSET UNITYSDK_OFFSET(0xDBDC280)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__REFRESHSHOPUI_OFFSET UNITYSDK_OFFSET(0xDBD9620)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__RESIZEGOODS_OFFSET UNITYSDK_OFFSET(0xDBDB250)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__STARTEDIT_B__19_0_OFFSET UNITYSDK_OFFSET(0xDBDC270)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__SYNCGOODS_OFFSET UNITYSDK_OFFSET(0xDBD9170)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__SYNCISUNLOCKREFRESH_OFFSET UNITYSDK_OFFSET(0xDBD9060)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__TRYENQUEUEAUTOSHOWACTION_OFFSET UNITYSDK_OFFSET(0xDBD97A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightJadeShopEffect_TypeDefinitionIndex = 67253;

	class GridFightJadeShopEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::Action* _OnShopClosed; // 0x30
		::XLua::LuaTable* _ShopUI; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::GridFightJadeShopGood*>* _Goods_k__BackingField; // 0x40
		::System::Boolean _IsShopOpen; // 0x48
		::System::Boolean _IsUnlockRefresh_k__BackingField; // 0x49
		::System::Byte _padding0[0x2];
		::System::Int32 PendingPurchaseSlotId; // 0x4C
		::UnityEngine::Vector3 PendingPurchaseFlyStartPos; // 0x50
		// static const ::System::Object SpecialSlotId; // 0x0
		// static const ::System::Object NormalSlotIdMin; // 0x0
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnUpdate(::MGBHKCMHDOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBHKCMHDOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlockRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_GET_ISUNLOCKREFRESH_OFFSET))(this);
		}

		::System::Void set_IsUnlockRefresh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_SET_ISUNLOCKREFRESH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightJadeShopGood*>* get_Goods()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightJadeShopGood*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_GET_GOODS_OFFSET))(this);
		}

		::RPG::Client::GridFightJadeShopGood* get_SpecialGood()
		{
			return ((::RPG::Client::GridFightJadeShopGood*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_GET_SPECIALGOOD_OFFSET))(this);
		}

		::RPG::Client::GridFightJadeShopGood* GetNormalGood(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightJadeShopGood*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_GETNORMALGOOD_OFFSET))(this, a1);
		}

		::System::Boolean CanEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_CANEDIT_OFFSET))(this);
		}

		::System::String* GetEditIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_GETEDITICON_OFFSET))(this);
		}

		::System::Boolean CanEditInPreparationState(::RPG::Client::PlayerPreparationState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayerPreparationState))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_CANEDITINPREPARATIONSTATE_OFFSET))(this, a1);
		}

		::System::Void StartEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_STARTEDIT_OFFSET))(this);
		}

		::System::Void CloseShopUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_CLOSESHOPUI_OFFSET))(this);
		}

		::System::Void NotifyShopClosed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_NOTIFYSHOPCLOSED_OFFSET))(this);
		}

		::System::Void add_OnShopClosed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_ADD_ONSHOPCLOSED_OFFSET))(this, a1);
		}

		::System::Void remove_OnShopClosed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_REMOVE_ONSHOPCLOSED_OFFSET))(this, a1);
		}

		::System::Void _TryEnqueueAutoShowAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__TRYENQUEUEAUTOSHOWACTION_OFFSET))(this);
		}

		::System::Void BuyGood(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_BUYGOOD_OFFSET))(this, a1);
		}

		::System::Boolean _HasOnlyExperienceRewards(::RPG::Client::GridFightJadeShopGood* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightJadeShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__HASONLYEXPERIENCEREWARDS_OFFSET))(this, a1);
		}

		::System::Void _BlockJadeShopResponse(::RPG::Client::RspHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RspHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__BLOCKJADESHOPRESPONSE_OFFSET))(this, a1);
		}

		::System::Void _OnJadeShopRequestTimedOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__ONJADESHOPREQUESTTIMEDOUT_OFFSET))(this);
		}

		::System::Void NotifyGoodPurchased(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_NOTIFYGOODPURCHASED_OFFSET))(this, a1);
		}

		::System::Void RefreshGoods()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_REFRESHGOODS_OFFSET))(this);
		}

		::System::Void OnGoodsRefreshed(::IEKGANLHMHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEKGANLHMHM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_ONGOODSREFRESHED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetGoodsDetailObjects()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_GETGOODSDETAILOBJECTS_OFFSET))(this);
		}

		::System::Void SetShopPanel(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_SETSHOPPANEL_OFFSET))(this, a1);
		}

		::System::Boolean _SyncIsUnlockRefresh(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__SYNCISUNLOCKREFRESH_OFFSET))(this, a1);
		}

		::System::Boolean _SyncGoods(::System::Collections::Generic::IReadOnlyList_1<::LNDHKMMGBGC*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::LNDHKMMGBGC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__SYNCGOODS_OFFSET))(this, a1);
		}

		::System::Boolean _ResizeGoods(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__RESIZEGOODS_OFFSET))(this, a1);
		}

		static ::System::Boolean _IsSameGood(::RPG::Client::GridFightJadeShopGood* a1, ::RPG::Client::GridFightJadeShopGood* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightJadeShopGood*, ::RPG::Client::GridFightJadeShopGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__ISSAMEGOOD_OFFSET))(a1, a2);
		}

		static ::LNDHKMMGBGC* _FindProtoBySlot(::System::Collections::Generic::IReadOnlyList_1<::LNDHKMMGBGC*>* a1, ::System::Int32 a2)
		{
			return ((::LNDHKMMGBGC*(*)(::System::Collections::Generic::IReadOnlyList_1<::LNDHKMMGBGC*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__FINDPROTOBYSLOT_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightJadeShopGood* _BuildGood(::LNDHKMMGBGC* a1)
		{
			return ((::RPG::Client::GridFightJadeShopGood*(*)(::LNDHKMMGBGC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__BUILDGOOD_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* _ParseBonusDropList(::CLPENACKJJE* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>*(*)(::CLPENACKJJE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__PARSEBONUSDROPLIST_OFFSET))(a1);
		}

		static ::System::Object* _GetBonusDropDetailObject(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Object*(*)(::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__GETBONUSDROPDETAILOBJECT_OFFSET))(a1);
		}

		::System::Void _RefreshShopUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__REFRESHSHOPUI_OFFSET))(this);
		}

		::System::Void _StartEdit_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__STARTEDIT_B__19_0_OFFSET))(this);
		}

		::System::Void _RefreshGoods_b__31_0(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__REFRESHGOODS_B__31_0_OFFSET))(this, a1, a2);
		}

	};
}
