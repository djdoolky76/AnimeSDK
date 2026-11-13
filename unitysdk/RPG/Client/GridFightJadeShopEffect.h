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

#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_ADD_ONSHOPCLOSED_OFFSET UNITYSDK_OFFSET(0x1CC2C810)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_BUYGOOD_OFFSET UNITYSDK_OFFSET(0x1CC2C900)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_CANEDITINPREPARATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1CC2C400)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_CANEDIT_OFFSET UNITYSDK_OFFSET(0x1CC2C320)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_CLOSESHOPUI_OFFSET UNITYSDK_OFFSET(0x1CC2C690)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC2B620)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_GETEDITICON_OFFSET UNITYSDK_OFFSET(0x1CC2C390)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_GETGOODSDETAILOBJECTS_OFFSET UNITYSDK_OFFSET(0x1CC2D6F0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_GETNORMALGOOD_OFFSET UNITYSDK_OFFSET(0x1CC2C290)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_GET_GOODS_OFFSET UNITYSDK_OFFSET(0x1CC2C200)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_GET_ISUNLOCKREFRESH_OFFSET UNITYSDK_OFFSET(0x1CC2C1E0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_GET_SPECIALGOOD_OFFSET UNITYSDK_OFFSET(0x1CC2C210)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_NOTIFYGOODPURCHASED_OFFSET UNITYSDK_OFFSET(0x1CC2D1B0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_NOTIFYSHOPCLOSED_OFFSET UNITYSDK_OFFSET(0x1CC2C7A0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_ONGOODSREFRESHED_OFFSET UNITYSDK_OFFSET(0x1CC2D550)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1CC2B790)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_REFRESHGOODS_OFFSET UNITYSDK_OFFSET(0x1CC2D3B0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_REMOVE_ONSHOPCLOSED_OFFSET UNITYSDK_OFFSET(0x1CC2C880)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_SETSHOPPANEL_OFFSET UNITYSDK_OFFSET(0x1CC2DAC0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_SET_ISUNLOCKREFRESH_OFFSET UNITYSDK_OFFSET(0x1CC2C1F0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT_STARTEDIT_OFFSET UNITYSDK_OFFSET(0x1CC2C450)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__BLOCKJADESHOPRESPONSE_OFFSET UNITYSDK_OFFSET(0x1CC2CFB0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__BUILDGOOD_OFFSET UNITYSDK_OFFSET(0x1CC2E030)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__FINDPROTOBYSLOT_OFFSET UNITYSDK_OFFSET(0x1CC2DC80)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__GETBONUSDROPDETAILOBJECT_OFFSET UNITYSDK_OFFSET(0x1CC2D960)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__HASONLYEXPERIENCEREWARDS_OFFSET UNITYSDK_OFFSET(0x1CC2CDC0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__ISSAMEGOOD_OFFSET UNITYSDK_OFFSET(0x1CC2E200)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__ONJADESHOPREQUESTTIMEDOUT_OFFSET UNITYSDK_OFFSET(0x1CC2D170)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__PARSEBONUSDROPLIST_OFFSET UNITYSDK_OFFSET(0x1CC2E510)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__REFRESHGOODS_B__31_0_OFFSET UNITYSDK_OFFSET(0x1CC2EB40)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__REFRESHSHOPUI_OFFSET UNITYSDK_OFFSET(0x1CC2BEE0)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__RESIZEGOODS_OFFSET UNITYSDK_OFFSET(0x1CC2DB10)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__STARTEDIT_B__19_0_OFFSET UNITYSDK_OFFSET(0x1CC2EB30)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__SYNCGOODS_OFFSET UNITYSDK_OFFSET(0x1CC2BA30)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__SYNCISUNLOCKREFRESH_OFFSET UNITYSDK_OFFSET(0x1CC2B920)
#define RPG_CLIENT_GRIDFIGHTJADESHOPEFFECT__TRYENQUEUEAUTOSHOWACTION_OFFSET UNITYSDK_OFFSET(0x1CC2C060)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightJadeShopEffect_TypeDefinitionIndex = 67253;

	class GridFightJadeShopEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::Action* _OnShopClosed; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightJadeShopGood*>* _Goods_k__BackingField; // 0x38
		::XLua::LuaTable* _ShopUI; // 0x40
		::System::Int32 PendingPurchaseSlotId; // 0x48
		::UnityEngine::Vector3 PendingPurchaseFlyStartPos; // 0x4C
		::System::Boolean _IsUnlockRefresh_k__BackingField; // 0x58
		::System::Boolean _IsShopOpen; // 0x59
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
