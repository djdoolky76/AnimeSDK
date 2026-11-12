#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/DrinkMakerQuantifyTagType.h"
class JALACKKFDEG;
class JPDFANKBJNO;
class KKIACMJGIKN;
namespace RPG::Client { class DrinkMakerBar; }
namespace RPG::Client { class DrinkMakerBarChallenge; }
namespace RPG::Client { class DrinkMakerBarDrink; }
namespace RPG::Client { class DrinkMakerBarGuest; }
namespace RPG::Client { class DrinkMakerBarIngredient; }
namespace RPG::Client { class DrinkMakerBartendDrinkData; }
namespace RPG::Client { class DrinkMakerBartender; }
namespace RPG::Client { class DrinkMakerCheersBarExtend; }
namespace RPG::Client { class DrinkMakerCommentManager; }
namespace RPG::Client { class DrinkMakerTag; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::GameCore { class DrinkMakerCupRow; }
namespace RPG::GameCore { class DrinkMakerDecorationRow; }
namespace RPG::GameCore { class DrinkMakerIceRow; }
namespace RPG::GameCore { class DrinkMakerIngredientRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xD6BA340)
#define RPG_CLIENT_DRINKMAKERMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD6B6640)
#define RPG_CLIENT_DRINKMAKERMODULE_GETALLGUESTSDATA_OFFSET UNITYSDK_OFFSET(0xD6B4680)
#define RPG_CLIENT_DRINKMAKERMODULE_GETALLMIXTAGS_OFFSET UNITYSDK_OFFSET(0xD6B4C70)
#define RPG_CLIENT_DRINKMAKERMODULE_GETALLUNLOCKEDDRINKSDATA_OFFSET UNITYSDK_OFFSET(0xD6B47B0)
#define RPG_CLIENT_DRINKMAKERMODULE_GETCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xD6B4EA0)
#define RPG_CLIENT_DRINKMAKERMODULE_GETDRINKDATA_OFFSET UNITYSDK_OFFSET(0xD6B46C0)
#define RPG_CLIENT_DRINKMAKERMODULE_GETFINISHCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0xD6B4F30)
#define RPG_CLIENT_DRINKMAKERMODULE_GETGUESTDATA_OFFSET UNITYSDK_OFFSET(0xD6B45C0)
#define RPG_CLIENT_DRINKMAKERMODULE_GETINGREDIENTDATA_OFFSET UNITYSDK_OFFSET(0xD6A3F80)
#define RPG_CLIENT_DRINKMAKERMODULE_GETINGREDIENTROWDATA_OFFSET UNITYSDK_OFFSET(0xD697540)
#define RPG_CLIENT_DRINKMAKERMODULE_GETTAGBYQUANTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xD6B4AD0)
#define RPG_CLIENT_DRINKMAKERMODULE_GETTAGDATA_OFFSET UNITYSDK_OFFSET(0xD6B49E0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLECUPROWDATA_OFFSET UNITYSDK_OFFSET(0xD6B7F10)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLEDECOROWDATA_OFFSET UNITYSDK_OFFSET(0xD6B8350)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLEICEROWDATA_OFFSET UNITYSDK_OFFSET(0xD6B8130)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLEINGREDIENTROWDATA_OFFSET UNITYSDK_OFFSET(0xD6B8570)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_CHEERSBAR_OFFSET UNITYSDK_OFFSET(0xD6B41F0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_CURCHALLENGE_OFFSET UNITYSDK_OFFSET(0xD6B9070)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARCHALLENGES_OFFSET UNITYSDK_OFFSET(0xD6B9030)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARDRINKS_OFFSET UNITYSDK_OFFSET(0xD6B8FB0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARINGREDIENTS_OFFSET UNITYSDK_OFFSET(0xD6B8F70)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARTENDER_OFFSET UNITYSDK_OFFSET(0xD6B8EF0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBAR_OFFSET UNITYSDK_OFFSET(0xD6B7930)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERCOMMENTMANAGER_OFFSET UNITYSDK_OFFSET(0xD6B8F30)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERTAGS_OFFSET UNITYSDK_OFFSET(0xD6B8FF0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_ISDATAPREPARED_OFFSET UNITYSDK_OFFSET(0xD6B7EF0)
#define RPG_CLIENT_DRINKMAKERMODULE_GET_LIMITEDREWARDID_OFFSET UNITYSDK_OFFSET(0xD6B9090)
#define RPG_CLIENT_DRINKMAKERMODULE_GET__DRINKMAKERCOMMENTMANAGER_OFFSET UNITYSDK_OFFSET(0xD6B90B0)
#define RPG_CLIENT_DRINKMAKERMODULE_HASAVATARREWARD_OFFSET UNITYSDK_OFFSET(0xD6922B0)
#define RPG_CLIENT_DRINKMAKERMODULE_HASGUESTFINISHREWARD_OFFSET UNITYSDK_OFFSET(0xD692360)
#define RPG_CLIENT_DRINKMAKERMODULE_HASNEWCHALLENGE_OFFSET UNITYSDK_OFFSET(0xD691BB0)
#define RPG_CLIENT_DRINKMAKERMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xD6B52E0)
#define RPG_CLIENT_DRINKMAKERMODULE_ISTIPREACHLIMIT_OFFSET UNITYSDK_OFFSET(0xD6B5120)
#define RPG_CLIENT_DRINKMAKERMODULE_OFFERHASREWARD_OFFSET UNITYSDK_OFFSET(0xD6921C0)
#define RPG_CLIENT_DRINKMAKERMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xD6B6700)
#define RPG_CLIENT_DRINKMAKERMODULE_SENDDRINKMAKERDATA_OFFSET UNITYSDK_OFFSET(0xD6B4210)
#define RPG_CLIENT_DRINKMAKERMODULE_SENDGETDRINKMAKERDATAREQ_OFFSET UNITYSDK_OFFSET(0xD6B44D0)
#define RPG_CLIENT_DRINKMAKERMODULE_SENDMAKECHALLENGEDRINKREQ_OFFSET UNITYSDK_OFFSET(0xD69A9E0)
#define RPG_CLIENT_DRINKMAKERMODULE_SENDMAKEDRINKREQ_OFFSET UNITYSDK_OFFSET(0xD69A770)
#define RPG_CLIENT_DRINKMAKERMODULE_SENDMAKEGUIDEMISSIONDRINKREQ_OFFSET UNITYSDK_OFFSET(0xD69A8A0)
#define RPG_CLIENT_DRINKMAKERMODULE_SET_CHEERSBAR_OFFSET UNITYSDK_OFFSET(0xD6B4200)
#define RPG_CLIENT_DRINKMAKERMODULE_SET_CURCHALLENGE_OFFSET UNITYSDK_OFFSET(0xD6B9080)
#define RPG_CLIENT_DRINKMAKERMODULE_SET_ISDATAPREPARED_OFFSET UNITYSDK_OFFSET(0xD6B7F00)
#define RPG_CLIENT_DRINKMAKERMODULE_SET_LIMITEDREWARDID_OFFSET UNITYSDK_OFFSET(0xD6B90A0)
#define RPG_CLIENT_DRINKMAKERMODULE_SET__DRINKMAKERCOMMENTMANAGER_OFFSET UNITYSDK_OFFSET(0xD6B90C0)
#define RPG_CLIENT_DRINKMAKERMODULE__ADDCHEERSPACKETHANDLER_OFFSET UNITYSDK_OFFSET(0xD6B3D50)
#define RPG_CLIENT_DRINKMAKERMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xD6B90D0)
#define RPG_CLIENT_DRINKMAKERMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xD6B9330)
#define RPG_CLIENT_DRINKMAKERMODULE__GET_AVAILABLEINGREDIENTROWDATA_B__60_2_OFFSET UNITYSDK_OFFSET(0xD6BA9E0)
#define RPG_CLIENT_DRINKMAKERMODULE__GET_AVAILABLEINGREDIENTROWDATA_B__60_3_OFFSET UNITYSDK_OFFSET(0xD6BAAD0)
#define RPG_CLIENT_DRINKMAKERMODULE__INITBARDATA_OFFSET UNITYSDK_OFFSET(0xD6B55D0)
#define RPG_CLIENT_DRINKMAKERMODULE__INITCHALLENGESDATA_OFFSET UNITYSDK_OFFSET(0xD6B63A0)
#define RPG_CLIENT_DRINKMAKERMODULE__INITDRINKDATA_OFFSET UNITYSDK_OFFSET(0xD6B5E80)
#define RPG_CLIENT_DRINKMAKERMODULE__INITFORDRINKMAKERCHEERS_OFFSET UNITYSDK_OFFSET(0xD6B3C80)
#define RPG_CLIENT_DRINKMAKERMODULE__INITGUESTDATA_OFFSET UNITYSDK_OFFSET(0xD6B5670)
#define RPG_CLIENT_DRINKMAKERMODULE__INITINGREDIENTSDATA_OFFSET UNITYSDK_OFFSET(0xD6B5BD0)
#define RPG_CLIENT_DRINKMAKERMODULE__INITTAGDATA_OFFSET UNITYSDK_OFFSET(0xD6B6140)
#define RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0xD6BA160)
#define RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHEERSENTERNEXTGROUPSCRSP_OFFSET UNITYSDK_OFFSET(0xD6B4090)
#define RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHEERSGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xD6B3F80)
#define RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHEERSMAKEDRINKSCRSP_OFFSET UNITYSDK_OFFSET(0xD6B4000)
#define RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERONRESULTDIALOGCLOSE_OFFSET UNITYSDK_OFFSET(0xD6B9A30)
#define RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERUPDATETIPSNOTIFY_OFFSET UNITYSDK_OFFSET(0xD6BA2C0)
#define RPG_CLIENT_DRINKMAKERMODULE__ONENDDRINKMAKERSEQUENCESCRSP_OFFSET UNITYSDK_OFFSET(0xD6B9E40)
#define RPG_CLIENT_DRINKMAKERMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0xD6B9910)
#define RPG_CLIENT_DRINKMAKERMODULE__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0xD6B9830)
#define RPG_CLIENT_DRINKMAKERMODULE__ONGETDRINKMAKERDATASCRSP_OFFSET UNITYSDK_OFFSET(0xD6B9AC0)
#define RPG_CLIENT_DRINKMAKERMODULE__ONGETDRINKMAKERDAYENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xD6B9FB0)
#define RPG_CLIENT_DRINKMAKERMODULE__ONMAINENTRANCEPAGEOPEN_OFFSET UNITYSDK_OFFSET(0xD6B97B0)
#define RPG_CLIENT_DRINKMAKERMODULE__ONMAKEDRINKSCRSP_OFFSET UNITYSDK_OFFSET(0xD6B9C30)
#define RPG_CLIENT_DRINKMAKERMODULE__ONMAKEMISSIONDRINKSCRSP_OFFSET UNITYSDK_OFFSET(0xD6B9D10)
#define RPG_CLIENT_DRINKMAKERMODULE__SHOWDAYTRANSFERDIALOG_OFFSET UNITYSDK_OFFSET(0xD6B7E00)
#define RPG_CLIENT_DRINKMAKERMODULE__TRYUPDATEUNLOCKDATA_OFFSET UNITYSDK_OFFSET(0xD6B6AF0)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATEALLUNLOCKSUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xD6B7970)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATEFINISHEDCHALLENGELIST_OFFSET UNITYSDK_OFFSET(0xD6B7A70)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATEFINISHEDCHALLENGE_OFFSET UNITYSDK_OFFSET(0xD6B7D70)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATEGUESTDATA_OFFSET UNITYSDK_OFFSET(0xD6B68B0)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATEGUESTDAYCOUNT_OFFSET UNITYSDK_OFFSET(0xD6B7410)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATEGUESTSDATA_OFFSET UNITYSDK_OFFSET(0xD6B67F0)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATESEQUENCEENDGUEST_OFFSET UNITYSDK_OFFSET(0xD6B69A0)
#define RPG_CLIENT_DRINKMAKERMODULE__UPDATETIPNUM_OFFSET UNITYSDK_OFFSET(0xD6B79C0)
#define RPG_CLIENT_DRINKMAKERMODULE___INITFORDRINKMAKERCHEERS_B__0_0_OFFSET UNITYSDK_OFFSET(0xD6BA360)
#define RPG_CLIENT_DRINKMAKERMODULE___INITFORDRINKMAKERCHEERS_B__0_1_OFFSET UNITYSDK_OFFSET(0xD6BA840)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerModule_TypeDefinitionIndex = 65072;

	class DrinkMakerModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarGuest*>* _allGuests; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarGuest*>* _drinkMakerBarGuests; // 0x18
		::RPG::Client::DrinkMakerBartender* _drinkMakerBartender; // 0x20
		::RPG::Client::DrinkMakerCommentManager* __drinkMakerCommentManager_k__BackingField; // 0x28
		::RPG::Client::DrinkMakerBarChallenge* _CurChallenge_k__BackingField; // 0x30
		::RPG::Client::DrinkMakerBar* _drinkMakerBar; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _unlockSubMissionIDs; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarDrink*>* _drinkMakerBarDrinks; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _GuestIDToDayCount; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerTag*>* _drinkMakerTags; // 0x58
		::RPG::Client::DrinkMakerCheersBarExtend* _CheersBar_k__BackingField; // 0x60
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _unlockMainMissionIDs; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarChallenge*>* _drinkMakerBarChallenges; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarIngredient*>* _drinkMakerBarIngredients; // 0x78
		::System::UInt32 _AvatarRewardQuestID; // 0x80
		::System::UInt32 _LimitedRewardID_k__BackingField; // 0x84
		::System::Boolean _IsMissionDrinkSuccess; // 0x88
		::System::Boolean _ShowDayTransfer; // 0x89
		::System::Boolean _IsDataPrepared_k__BackingField; // 0x8A
		::System::Byte _padding0[0x1];
		::System::UInt32 _MaxTipCount; // 0x8C
		// static const ::System::Object OFFER_TYPE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_CTOR_OFFSET))(this);
		}

		::System::Void _InitForDrinkMakerCheers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__INITFORDRINKMAKERCHEERS_OFFSET))(this);
		}

		::System::Void _AddCheersPacketHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ADDCHEERSPACKETHANDLER_OFFSET))(this);
		}

		::System::Void _OnDrinkMakerCheersGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHEERSGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnDrinkMakerCheersMakeDrinkScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHEERSMAKEDRINKSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnDrinkMakerCheersEnterNextGroupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHEERSENTERNEXTGROUPSCRSP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::DrinkMakerCheersBarExtend* get_CheersBar()
		{
			return ((::RPG::Client::DrinkMakerCheersBarExtend*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_CHEERSBAR_OFFSET))(this);
		}

		::System::Void set_CheersBar(::RPG::Client::DrinkMakerCheersBarExtend* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBarExtend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SET_CHEERSBAR_OFFSET))(this, a1);
		}

		::System::Void SendDrinkMakerData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SENDDRINKMAKERDATA_OFFSET))(this);
		}

		::System::Void SendGetDrinkMakerDataReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SENDGETDRINKMAKERDATAREQ_OFFSET))(this);
		}

		::System::Void SendMakeDrinkReq(::System::UInt32 a1, ::RPG::Client::DrinkMakerBartendDrinkData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SENDMAKEDRINKREQ_OFFSET))(this, a1, a2);
		}

		::System::Void SendMakeGuideMissionDrinkReq(::System::UInt32 a1, ::System::Boolean a2, ::RPG::Client::DrinkMakerBartendDrinkData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SENDMAKEGUIDEMISSIONDRINKREQ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendMakeChallengeDrinkReq(::System::UInt32 a1, ::RPG::Client::DrinkMakerBartendDrinkData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::DrinkMakerBartendDrinkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SENDMAKECHALLENGEDRINKREQ_OFFSET))(this, a1, a2);
		}

		::RPG::Client::DrinkMakerBarGuest* GetGuestData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBarGuest*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETGUESTDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarGuest*>* GetAllGuestsData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarGuest*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETALLGUESTSDATA_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerBarDrink* GetDrinkData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBarDrink*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETDRINKDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrink*>* GetAllUnlockedDrinksData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerBarDrink*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETALLUNLOCKEDDRINKSDATA_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerTag* GetTagData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerTag*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETTAGDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>* GetTagByQuantifyType(::RPG::GameCore::DrinkMakerQuantifyTagType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>*(*)(::PVOID, ::RPG::GameCore::DrinkMakerQuantifyTagType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETTAGBYQUANTIFYTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>* GetAllMixTags()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DrinkMakerTag*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETALLMIXTAGS_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerBarIngredient* GetIngredientData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBarIngredient*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETINGREDIENTDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::DrinkMakerIngredientRow* GetIngredientRowData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerIngredientRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETINGREDIENTROWDATA_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerBarChallenge* GetChallengeData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DrinkMakerBarChallenge*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETCHALLENGEDATA_OFFSET))(this, a1);
		}

		::System::Int32 GetFinishChallengeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GETFINISHCHALLENGECOUNT_OFFSET))(this);
		}

		::System::Boolean OfferHasReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_OFFERHASREWARD_OFFSET))(this);
		}

		::System::Boolean HasNewChallenge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_HASNEWCHALLENGE_OFFSET))(this);
		}

		::System::Boolean HasAvatarReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_HASAVATARREWARD_OFFSET))(this);
		}

		::System::Boolean HasGuestFinishReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_HASGUESTFINISHREWARD_OFFSET))(this);
		}

		::System::Boolean IsTipReachLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_ISTIPREACHLIMIT_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _InitBarData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__INITBARDATA_OFFSET))(this);
		}

		::System::Void _InitGuestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__INITGUESTDATA_OFFSET))(this);
		}

		::System::Void _InitIngredientsData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__INITINGREDIENTSDATA_OFFSET))(this);
		}

		::System::Void _InitChallengesData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__INITCHALLENGESDATA_OFFSET))(this);
		}

		::System::Void _InitDrinkData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__INITDRINKDATA_OFFSET))(this);
		}

		::System::Void _InitTagData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__INITTAGDATA_OFFSET))(this);
		}

		::System::Void _UpdateGuestsData(::JPDFANKBJNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPDFANKBJNO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATEGUESTSDATA_OFFSET))(this, a1);
		}

		::System::Void _UpdateGuestData(::KKIACMJGIKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKIACMJGIKN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATEGUESTDATA_OFFSET))(this, a1);
		}

		::System::Void _UpdateSequenceEndGuest(::JALACKKFDEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JALACKKFDEG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATESEQUENCEENDGUEST_OFFSET))(this, a1);
		}

		::System::Void _TryUpdateUnlockData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__TRYUPDATEUNLOCKDATA_OFFSET))(this, a1);
		}

		::System::Void _UpdateGuestDayCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATEGUESTDAYCOUNT_OFFSET))(this, a1);
		}

		::System::Void _UpdateAllUnlockSubMissionData(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATEALLUNLOCKSUBMISSIONDATA_OFFSET))(this, a1);
		}

		::System::Void _UpdateTipNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATETIPNUM_OFFSET))(this, a1);
		}

		::System::Void _UpdateFinishedChallengeList(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATEFINISHEDCHALLENGELIST_OFFSET))(this, a1);
		}

		::System::Void _UpdateFinishedChallenge(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__UPDATEFINISHEDCHALLENGE_OFFSET))(this, a1);
		}

		::System::Void _ShowDayTransferDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__SHOWDAYTRANSFERDIALOG_OFFSET))(this);
		}

		::System::Boolean get_IsDataPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_ISDATAPREPARED_OFFSET))(this);
		}

		::System::Void set_IsDataPrepared(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SET_ISDATAPREPARED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerCupRow*>* get_AvailableCupRowData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerCupRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLECUPROWDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerIceRow*>* get_AvailableIceRowData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerIceRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLEICEROWDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerDecorationRow*>* get_AvailableDecoRowData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerDecorationRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLEDECOROWDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerIngredientRow*>* get_AvailableIngredientRowData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::DrinkMakerIngredientRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_AVAILABLEINGREDIENTROWDATA_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerBar* get_DrinkMakerBar()
		{
			return ((::RPG::Client::DrinkMakerBar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBAR_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerBartender* get_DrinkMakerBartender()
		{
			return ((::RPG::Client::DrinkMakerBartender*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARTENDER_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerCommentManager* get_DrinkMakerCommentManager()
		{
			return ((::RPG::Client::DrinkMakerCommentManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERCOMMENTMANAGER_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarIngredient*>* get_DrinkMakerBarIngredients()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarIngredient*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARINGREDIENTS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarDrink*>* get_DrinkMakerBarDrinks()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarDrink*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARDRINKS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerTag*>* get_DrinkMakerTags()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerTag*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERTAGS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarChallenge*>* get_DrinkMakerBarChallenges()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DrinkMakerBarChallenge*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_DRINKMAKERBARCHALLENGES_OFFSET))(this);
		}

		::RPG::Client::DrinkMakerBarChallenge* get_CurChallenge()
		{
			return ((::RPG::Client::DrinkMakerBarChallenge*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_CURCHALLENGE_OFFSET))(this);
		}

		::System::Void set_CurChallenge(::RPG::Client::DrinkMakerBarChallenge* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBarChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SET_CURCHALLENGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_LimitedRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET_LIMITEDREWARDID_OFFSET))(this);
		}

		::System::Void set_LimitedRewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SET_LIMITEDREWARDID_OFFSET))(this, a1);
		}

		::RPG::Client::DrinkMakerCommentManager* get__drinkMakerCommentManager()
		{
			return ((::RPG::Client::DrinkMakerCommentManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_GET__DRINKMAKERCOMMENTMANAGER_OFFSET))(this);
		}

		::System::Void set__drinkMakerCommentManager(::RPG::Client::DrinkMakerCommentManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCommentManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE_SET__DRINKMAKERCOMMENTMANAGER_OFFSET))(this, a1);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnMainEntrancePageOpen(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONMAINENTRANCEPAGEOPEN_OFFSET))(this, a1);
		}

		::System::Void _OnFinishSubMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONFINISHSUBMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnFinishedMainMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONFINISHEDMAINMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnDrinkMakerOnResultDialogClose(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERONRESULTDIALOGCLOSE_OFFSET))(this, a1);
		}

		::System::Void _OnGetDrinkMakerDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONGETDRINKMAKERDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMakeDrinkScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONMAKEDRINKSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMakeMissionDrinkScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONMAKEMISSIONDRINKSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEndDrinkMakerSequenceScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONENDDRINKMAKERSEQUENCESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetDrinkMakerDayEndScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONGETDRINKMAKERDAYENDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnDrinkMakerChallengeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERCHALLENGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnDrinkMakerUpdateTipsNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__ONDRINKMAKERUPDATETIPSNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void __InitForDrinkMakerCheers_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE___INITFORDRINKMAKERCHEERS_B__0_0_OFFSET))(this);
		}

		::System::Void __InitForDrinkMakerCheers_b__0_1(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE___INITFORDRINKMAKERCHEERS_B__0_1_OFFSET))(this, a1);
		}

		::System::UInt32 _get_AvailableIngredientRowData_b__60_2(::RPG::Client::DrinkMakerBarIngredient* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::DrinkMakerBarIngredient*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__GET_AVAILABLEINGREDIENTROWDATA_B__60_2_OFFSET))(this, a1);
		}

		::System::UInt32 _get_AvailableIngredientRowData_b__60_3(::RPG::Client::DrinkMakerBarIngredient* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::DrinkMakerBarIngredient*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERMODULE__GET_AVAILABLEINGREDIENTROWDATA_B__60_3_OFFSET))(this, a1);
		}

	};
}
