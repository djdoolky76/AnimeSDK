#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/RPG/Client/PlayerPreparationState.h"
#include "unitysdk/RPG/GameCore/GridFightTrailblazeGoodsType.h"
class AMNAMDLMADK;
class MGBHKCMHDOK;
namespace RPG::Client { class GridFightGamePlayResConfig; }
namespace RPG::Client { class GridFightPreparationTraitEffectIndicator; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrailblazeBonusEffectData; }
namespace RPG::Client { class GridFightTrailblazeBonusGood; }
namespace RPG::Client { class GridFightTrailblazeBoughtGood; }
namespace RPG::Client { class GridFightTrailblazeBoughtProperty; }
namespace RPG::Client { class GridFightTrailblazeGood; }
namespace RPG::Client { class GridFightTrailblazeIndicator; }
namespace RPG::Client { class GridFightTrailblazePurchaseBonus; }
namespace RPG::Client { class GridFightTrait; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_BUYGOOD_OFFSET UNITYSDK_OFFSET(0x1D3D6BB0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_CALLSHOPBUYBONUSEFFECT_OFFSET UNITYSDK_OFFSET(0x1D3D71A0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_CANEDITINPREPARATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1D3D6950)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_CANEDIT_OFFSET UNITYSDK_OFFSET(0x1D3D68E0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3D7E60)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_CLEARMARKBOUGHTGOODINSHOP_OFFSET UNITYSDK_OFFSET(0x1D3D77F0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_CLEARPENDINGBUY_OFFSET UNITYSDK_OFFSET(0x1D3D7080)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D4BE0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_GETBOUGHTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D3D7B00)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_GETEDITICON_OFFSET UNITYSDK_OFFSET(0x1D3D69B0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_GETGOODSDETAILOBJECTS_OFFSET UNITYSDK_OFFSET(0x1D3D7370)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_GETMAZEBUFFBOUGHTGOODS_OFFSET UNITYSDK_OFFSET(0x1D3D7880)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_GETPREPARATIONINDICATOR_OFFSET UNITYSDK_OFFSET(0x1D3D5010)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_GET_COSTCOINID_OFFSET UNITYSDK_OFFSET(0x1D3D4AD0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_GET_GOODS_OFFSET UNITYSDK_OFFSET(0x1D3D7C60)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_GET_PURCHASEBONUS_OFFSET UNITYSDK_OFFSET(0x1D3D7C70)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_GET_SHOPCOIN_OFFSET UNITYSDK_OFFSET(0x1D3D6420)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_MARKBOUGHTGOODINSHOP_OFFSET UNITYSDK_OFFSET(0x1D3D77B0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0x1D3D67F0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_ONUNLOCKPAMKING_OFFSET UNITYSDK_OFFSET(0x1D3D7C90)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D3D5120)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_SETSHOPPANEL_OFFSET UNITYSDK_OFFSET(0x1D3D7830)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_SET_PURCHASEBONUS_OFFSET UNITYSDK_OFFSET(0x1D3D7C80)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_SET_SHOPCOIN_OFFSET UNITYSDK_OFFSET(0x1D3D6460)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_STARTEDIT_OFFSET UNITYSDK_OFFSET(0x1D3D6A20)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_SYNCBOUGHTGOODS_OFFSET UNITYSDK_OFFSET(0x1D3D5C10)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_SYNCGOODS_OFFSET UNITYSDK_OFFSET(0x1D3D53C0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_SYNCSHOPCOIN_OFFSET UNITYSDK_OFFSET(0x1D3D5210)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT__GETBONUSGOODDETAILOBJECT_OFFSET UNITYSDK_OFFSET(0x1D3D75F0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT__REFRESHSHOPUI_OFFSET UNITYSDK_OFFSET(0x1D3D6600)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrailblazeEffect_TypeDefinitionIndex = 67273;

	class GridFightTrailblazeEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::RPG::Client::GridFightTrailblazePurchaseBonus* _PurchaseBonus_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrailblazeGood*>* _Goods_k__BackingField; // 0x38
		::System::Action* _OnDataChanged; // 0x40
		::XLua::LuaTable* _ShopUI; // 0x48
		::RPG::Client::GridFightTrailblazeIndicator* _PreparationIndicator; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrailblazeBoughtGood*>* _BoughtMazeBuffGoods; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrailblazeBoughtProperty*>* _BoughtProperty; // 0x60
		::RPG::GameCore::GridFightTrailblazeGoodsType PendingBuyType; // 0x68
		::System::Boolean BoughtGoodInShop; // 0x6C
		::System::Byte _padding0[0x3];
		::System::UInt32 _ShopCoin; // 0x70
		::System::Int32 PendingBuyIndex; // 0x74
		static ::RPG::Client::GridFightGamePlayResConfig** StaticGet_CostCoinConfig()
		{
			return (::RPG::Client::GridFightGamePlayResConfig**)UnitySDK::FromName("RPG.Client", "GridFightTrailblazeEffect")->GetStaticField(0x13A30);
		}

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_CCTOR_OFFSET))();
		}

		static ::System::UInt32 get_CostCoinID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_GET_COSTCOINID_OFFSET))();
		}

		::RPG::Client::GridFightPreparationTraitEffectIndicator* GetPreparationIndicator()
		{
			return ((::RPG::Client::GridFightPreparationTraitEffectIndicator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_GETPREPARATIONINDICATOR_OFFSET))(this);
		}

		::System::Void OnUpdate(::MGBHKCMHDOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBHKCMHDOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void SyncShopCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_SYNCSHOPCOIN_OFFSET))(this, a1);
		}

		::System::Void SyncGoods(::System::Collections::Generic::IList_1<::AMNAMDLMADK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::AMNAMDLMADK*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_SYNCGOODS_OFFSET))(this, a1);
		}

		::System::Void SyncBoughtGoods(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_SYNCBOUGHTGOODS_OFFSET))(this, a1);
		}

		::System::Void OnTraitChange(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_ONTRAITCHANGE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ShopCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_GET_SHOPCOIN_OFFSET))(this);
		}

		::System::Void set_ShopCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_SET_SHOPCOIN_OFFSET))(this, a1);
		}

		::System::Boolean CanEdit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_CANEDIT_OFFSET))(this);
		}

		::System::Boolean CanEditInPreparationState(::RPG::Client::PlayerPreparationState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayerPreparationState))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_CANEDITINPREPARATIONSTATE_OFFSET))(this, a1);
		}

		::System::String* GetEditIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_GETEDITICON_OFFSET))(this);
		}

		::System::Void StartEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_STARTEDIT_OFFSET))(this);
		}

		::System::Void BuyGood(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_BUYGOOD_OFFSET))(this, a1);
		}

		::System::Void ClearPendingBuy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_CLEARPENDINGBUY_OFFSET))(this);
		}

		::System::Void CallShopBuyBonusEffect(::RPG::Client::GridFightTrailblazeBonusEffectData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrailblazeBonusEffectData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_CALLSHOPBUYBONUSEFFECT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetGoodsDetailObjects()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_GETGOODSDETAILOBJECTS_OFFSET))(this);
		}

		::System::Void MarkBoughtGoodInShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_MARKBOUGHTGOODINSHOP_OFFSET))(this);
		}

		::System::Void ClearMarkBoughtGoodInShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_CLEARMARKBOUGHTGOODINSHOP_OFFSET))(this);
		}

		static ::System::Object* _GetBonusGoodDetailObject(::RPG::Client::GridFightTrailblazeBonusGood* a1)
		{
			return ((::System::Object*(*)(::RPG::Client::GridFightTrailblazeBonusGood*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT__GETBONUSGOODDETAILOBJECT_OFFSET))(a1);
		}

		::System::Void SetShopPanel(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_SETSHOPPANEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrailblazeBoughtGood*>* GetMazeBuffBoughtGoods()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrailblazeBoughtGood*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_GETMAZEBUFFBOUGHTGOODS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrailblazeBoughtProperty*>* GetBoughtProperty()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrailblazeBoughtProperty*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_GETBOUGHTPROPERTY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrailblazeGood*>* get_Goods()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrailblazeGood*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_GET_GOODS_OFFSET))(this);
		}

		::RPG::Client::GridFightTrailblazePurchaseBonus* get_PurchaseBonus()
		{
			return ((::RPG::Client::GridFightTrailblazePurchaseBonus*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_GET_PURCHASEBONUS_OFFSET))(this);
		}

		::System::Void set_PurchaseBonus(::RPG::Client::GridFightTrailblazePurchaseBonus* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrailblazePurchaseBonus*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_SET_PURCHASEBONUS_OFFSET))(this, a1);
		}

		::System::Void _RefreshShopUI(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT__REFRESHSHOPUI_OFFSET))(this, a1);
		}

		::System::Void OnUnlockPamKing(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT_ONUNLOCKPAMKING_OFFSET))(this, a1);
		}

	};
}
