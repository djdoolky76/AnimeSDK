#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/Nullable_1.h"
class IPABEFHCBLD;
class NJEBDKOJNGA;
class NPIJFFFFKBK;
class PDEIEDGCOBA;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class DiceCombatDiceConfigData; }
namespace RPG::Client { class FriendRankingInfo; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client::DiceCombat { class DiceCombatCommunicateData; }
namespace RPG::Client::DiceCombat { class DiceCombatFriendData; }
namespace RPG::Client::DiceCombat { class DiceCombatPVPManager; }
namespace RPG::Client::DiceCombat { class DiceCombatRedDot; }
namespace RPG::Client::DiceCombat { class DiceCombatShopData; }
namespace RPG::Client::DiceCombat { class DiceCombatShopGoodData; }
namespace RPG::Client::DiceCombat { class DiceCombatSpecialRuleData; }
namespace RPG::Client::DiceCombat { class DiceCombatStageInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatV2MPService; }
namespace RPG::Client::DiceCombat { class DiceCombatV2OpponentData; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvEStage; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvPStage; }
namespace RPG::Client::DiceCombat { class DiceCombatV2RedDot; }
namespace RPG::Client::DiceCombat { class DiceCombatV2Stage; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace RPG::Client::DiceCombat { class IDiceCombatStage; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBATMODULE_BUYMULTISHOPGOODS_OFFSET UNITYSDK_OFFSET(0x1C54C8F0)
#define RPG_CLIENT_DICECOMBATMODULE_BUYSHOPGOOD_OFFSET UNITYSDK_OFFSET(0x1C54C560)
#define RPG_CLIENT_DICECOMBATMODULE_CANBUYAVATARSHOPGOODBYAVATARID_OFFSET UNITYSDK_OFFSET(0x1C54D380)
#define RPG_CLIENT_DICECOMBATMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA45780)
#define RPG_CLIENT_DICECOMBATMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C549890)
#define RPG_CLIENT_DICECOMBATMODULE_GET2V1CURRENTALLPVPSTAGESCORE_OFFSET UNITYSDK_OFFSET(0x1C5489E0)
#define RPG_CLIENT_DICECOMBATMODULE_GET2V1OPPONENTDATA_OFFSET UNITYSDK_OFFSET(0x1C548400)
#define RPG_CLIENT_DICECOMBATMODULE_GET2V1SCOREREWARDMAXSCORE_OFFSET UNITYSDK_OFFSET(0x1C548BF0)
#define RPG_CLIENT_DICECOMBATMODULE_GET2V1STAGEDATA_OFFSET UNITYSDK_OFFSET(0x1C533880)
#define RPG_CLIENT_DICECOMBATMODULE_GETALLDICESCOUNT_OFFSET UNITYSDK_OFFSET(0x1C54B8D0)
#define RPG_CLIENT_DICECOMBATMODULE_GETALLSORTED2V1PVESTAGEDATAS_OFFSET UNITYSDK_OFFSET(0x1C5389D0)
#define RPG_CLIENT_DICECOMBATMODULE_GETALLSORTED2V1PVPSTAGEDATAS_OFFSET UNITYSDK_OFFSET(0x1C548640)
#define RPG_CLIENT_DICECOMBATMODULE_GETAVATARCONFIGINFOLIST_OFFSET UNITYSDK_OFFSET(0x1C519830)
#define RPG_CLIENT_DICECOMBATMODULE_GETAVATARGOODDATABYID_OFFSET UNITYSDK_OFFSET(0x1C5144B0)
#define RPG_CLIENT_DICECOMBATMODULE_GETCOMMUNICATEDATA_OFFSET UNITYSDK_OFFSET(0x1C516520)
#define RPG_CLIENT_DICECOMBATMODULE_GETCONFIGAVATARINFO_OFFSET UNITYSDK_OFFSET(0x1C51A930)
#define RPG_CLIENT_DICECOMBATMODULE_GETCURRENTPURCHASABLEDICESET_OFFSET UNITYSDK_OFFSET(0x1C51AA60)
#define RPG_CLIENT_DICECOMBATMODULE_GETDICECOMBATBATCHBUYMODE_OFFSET UNITYSDK_OFFSET(0x1C54D3F0)
#define RPG_CLIENT_DICECOMBATMODULE_GETDICECONFIGDATA_OFFSET UNITYSDK_OFFSET(0x1C51AF60)
#define RPG_CLIENT_DICECOMBATMODULE_GETDICECONFIGINFOLIST_OFFSET UNITYSDK_OFFSET(0x1C519F00)
#define RPG_CLIENT_DICECOMBATMODULE_GETDICEGOODDATABYID_OFFSET UNITYSDK_OFFSET(0x1C520720)
#define RPG_CLIENT_DICECOMBATMODULE_GETFRIENDDATALIST_OFFSET UNITYSDK_OFFSET(0x1C54DC20)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERANDCANBUYAVATARINFOLISTBYREF_OFFSET UNITYSDK_OFFSET(0x1C54A8F0)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERANDCANBUYAVATARINFOLIST_OFFSET UNITYSDK_OFFSET(0x1C54A880)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERAVATARINFOLISTBYREF_OFFSET UNITYSDK_OFFSET(0x1C54A6F0)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERAVATARINFOLIST_OFFSET UNITYSDK_OFFSET(0x1C54A560)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERAVATARINFO_OFFSET UNITYSDK_OFFSET(0x1C514400)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERDICEINFOLIST_OFFSET UNITYSDK_OFFSET(0x1C54ACB0)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERDICEINFO_OFFSET UNITYSDK_OFFSET(0x1C54B290)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERDICESCOUNT_OFFSET UNITYSDK_OFFSET(0x1C54B680)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERPVESAVEDAVATARID_OFFSET UNITYSDK_OFFSET(0x1C549E70)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERPVPSAVEDAVATARID_OFFSET UNITYSDK_OFFSET(0x1C54A050)
#define RPG_CLIENT_DICECOMBATMODULE_GETPLAYERV2PVPSAVEDAVATARID_OFFSET UNITYSDK_OFFSET(0x1C54A230)
#define RPG_CLIENT_DICECOMBATMODULE_GETPVESTAGE2V1_OFFSET UNITYSDK_OFFSET(0x1C534980)
#define RPG_CLIENT_DICECOMBATMODULE_GETPVPSTAGE2V1_OFFSET UNITYSDK_OFFSET(0x1C530500)
#define RPG_CLIENT_DICECOMBATMODULE_GETSHOPDATA_OFFSET UNITYSDK_OFFSET(0x1C54BD40)
#define RPG_CLIENT_DICECOMBATMODULE_GETSHOPGOODDATABYGOODID_OFFSET UNITYSDK_OFFSET(0x1C54BEE0)
#define RPG_CLIENT_DICECOMBATMODULE_GETSHOPGOODDATA_OFFSET UNITYSDK_OFFSET(0x1C54BE00)
#define RPG_CLIENT_DICECOMBATMODULE_GETSPECIALRULEDATA_OFFSET UNITYSDK_OFFSET(0x1C54AE40)
#define RPG_CLIENT_DICECOMBATMODULE_GETSTAGEIDBYENTITYCONFIGKEY_OFFSET UNITYSDK_OFFSET(0x1C549DD0)
#define RPG_CLIENT_DICECOMBATMODULE_GETSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x1C512370)
#define RPG_CLIENT_DICECOMBATMODULE_GETV2ACTIVITYPANELVIDEOID_OFFSET UNITYSDK_OFFSET(0x1C5492E0)
#define RPG_CLIENT_DICECOMBATMODULE_GETV2SCOREREWARDQUESTDATALIST_OFFSET UNITYSDK_OFFSET(0x1C5383A0)
#define RPG_CLIENT_DICECOMBATMODULE_GETV2SCOREREWARDS_OFFSET UNITYSDK_OFFSET(0x1C548E00)
#define RPG_CLIENT_DICECOMBATMODULE_GET_ACTIVITYAVATARREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0x1C515720)
#define RPG_CLIENT_DICECOMBATMODULE_GET_ACTIVITYENTRANCEID_OFFSET UNITYSDK_OFFSET(0x1C53F380)
#define RPG_CLIENT_DICECOMBATMODULE_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1C5154A0)
#define RPG_CLIENT_DICECOMBATMODULE_GET_DICECOMBATREDDOT_OFFSET UNITYSDK_OFFSET(0x1DA45760)
#define RPG_CLIENT_DICECOMBATMODULE_GET_DICECOMBATV2REDDOT_OFFSET UNITYSDK_OFFSET(0x1C549360)
#define RPG_CLIENT_DICECOMBATMODULE_GET_FINISHEDSTAGES_OFFSET UNITYSDK_OFFSET(0x1DA456A0)
#define RPG_CLIENT_DICECOMBATMODULE_GET_ISALLOWPVPINVITATION_OFFSET UNITYSDK_OFFSET(0x1DA456C0)
#define RPG_CLIENT_DICECOMBATMODULE_GET_OFFERINGID_OFFSET UNITYSDK_OFFSET(0x1C517130)
#define RPG_CLIENT_DICECOMBATMODULE_GET_PVPMGR_OFFSET UNITYSDK_OFFSET(0x1C54F1F0)
#define RPG_CLIENT_DICECOMBATMODULE_GET_SORTEDSHOPDATALIST_OFFSET UNITYSDK_OFFSET(0x1DA45680)
#define RPG_CLIENT_DICECOMBATMODULE_GET_V2ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1C549200)
#define RPG_CLIENT_DICECOMBATMODULE_GET_V2MPSERVICE_OFFSET UNITYSDK_OFFSET(0x1DA45660)
#define RPG_CLIENT_DICECOMBATMODULE_HASORCANBUYRECOMMENDCOLORDICEFORAVATAR_OFFSET UNITYSDK_OFFSET(0x1C54AF80)
#define RPG_CLIENT_DICECOMBATMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1C549380)
#define RPG_CLIENT_DICECOMBATMODULE_ISACTIVITYINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1C5152C0)
#define RPG_CLIENT_DICECOMBATMODULE_ISAVATARCARDSHOWASPLAYER_OFFSET UNITYSDK_OFFSET(0x1C54B4C0)
#define RPG_CLIENT_DICECOMBATMODULE_ISDICERECOMMENDFORAVATAR_OFFSET UNITYSDK_OFFSET(0x1C54B340)
#define RPG_CLIENT_DICECOMBATMODULE_ISV2ACTIVITYINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1C531EB0)
#define RPG_CLIENT_DICECOMBATMODULE_ISV2ALLSCOREREWARDGOT_OFFSET UNITYSDK_OFFSET(0x1C548D00)
#define RPG_CLIENT_DICECOMBATMODULE_ISV2ANYSCOREREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1C549100)
#define RPG_CLIENT_DICECOMBATMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1C5499C0)
#define RPG_CLIENT_DICECOMBATMODULE_PREPAREMISSIONDATABEFORELOADING_OFFSET UNITYSDK_OFFSET(0x1C549C70)
#define RPG_CLIENT_DICECOMBATMODULE_SENDDICECOMBATFINISHPVESTAGECSREQ_OFFSET UNITYSDK_OFFSET(0x1C54BC80)
#define RPG_CLIENT_DICECOMBATMODULE_SENDV2FINISHPVESTAGECSREQ_OFFSET UNITYSDK_OFFSET(0x1C5481F0)
#define RPG_CLIENT_DICECOMBATMODULE_SETALLOWPVPINVITATION_OFFSET UNITYSDK_OFFSET(0x1C54DC60)
#define RPG_CLIENT_DICECOMBATMODULE_SETDICECOMBATBATCHBUYMODE_OFFSET UNITYSDK_OFFSET(0x1C54D450)
#define RPG_CLIENT_DICECOMBATMODULE_SETPLAYERPVESAVEDAVATARID_OFFSET UNITYSDK_OFFSET(0x1C549FF0)
#define RPG_CLIENT_DICECOMBATMODULE_SETPLAYERPVPSAVEDAVATARID_OFFSET UNITYSDK_OFFSET(0x1C54A1D0)
#define RPG_CLIENT_DICECOMBATMODULE_SETPLAYERV2PVPSAVEDAVATARID_OFFSET UNITYSDK_OFFSET(0x1C54A430)
#define RPG_CLIENT_DICECOMBATMODULE_SETPVPSTAGE2V1MAXSCORE_OFFSET UNITYSDK_OFFSET(0x1C548100)
#define RPG_CLIENT_DICECOMBATMODULE_SET_DICECOMBATREDDOT_OFFSET UNITYSDK_OFFSET(0x1DA45770)
#define RPG_CLIENT_DICECOMBATMODULE_SET_DICECOMBATV2REDDOT_OFFSET UNITYSDK_OFFSET(0x1C549370)
#define RPG_CLIENT_DICECOMBATMODULE_SET_FINISHEDSTAGES_OFFSET UNITYSDK_OFFSET(0x1DA456B0)
#define RPG_CLIENT_DICECOMBATMODULE_SET_ISALLOWPVPINVITATION_OFFSET UNITYSDK_OFFSET(0x1DA45710)
#define RPG_CLIENT_DICECOMBATMODULE_SET_PVPMGR_OFFSET UNITYSDK_OFFSET(0x1DA45650)
#define RPG_CLIENT_DICECOMBATMODULE_SET_SORTEDSHOPDATALIST_OFFSET UNITYSDK_OFFSET(0x1DA45690)
#define RPG_CLIENT_DICECOMBATMODULE_SET_V2MPSERVICE_OFFSET UNITYSDK_OFFSET(0x1DA45670)
#define RPG_CLIENT_DICECOMBATMODULE_TRIGGERADVENTUREDICECOMBATGROUPCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x1C54BAB0)
#define RPG_CLIENT_DICECOMBATMODULE_TRYGETSTAGEINFOBYCURRENTMODE_OFFSET UNITYSDK_OFFSET(0x1C514AD0)
#define RPG_CLIENT_DICECOMBATMODULE_UPDATEFRIENDDATA_OFFSET UNITYSDK_OFFSET(0x1C54D4B0)
#define RPG_CLIENT_DICECOMBATMODULE_UPDATESHOPDATA_OFFSET UNITYSDK_OFFSET(0x1C54C320)
#define RPG_CLIENT_DICECOMBATMODULE_UPDATEV1FRIENDDATA_OFFSET UNITYSDK_OFFSET(0x1C54D660)
#define RPG_CLIENT_DICECOMBATMODULE_UPDATEV2FRIENDDATA_OFFSET UNITYSDK_OFFSET(0x1C54D930)
#define RPG_CLIENT_DICECOMBATMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1C5498F0)
#define RPG_CLIENT_DICECOMBATMODULE__ADDPACKETHANDLERSV2_OFFSET UNITYSDK_OFFSET(0x1C544890)
#define RPG_CLIENT_DICECOMBATMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1C5442F0)
#define RPG_CLIENT_DICECOMBATMODULE__GENSHOWADDITEMDIALOGDELEGATE_OFFSET UNITYSDK_OFFSET(0x1C54D060)
#define RPG_CLIENT_DICECOMBATMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1C54E230)
#define RPG_CLIENT_DICECOMBATMODULE__GETFLOORCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1C54E5A0)
#define RPG_CLIENT_DICECOMBATMODULE__INIT_B__49_0_OFFSET UNITYSDK_OFFSET(0x1DA459C0)
#define RPG_CLIENT_DICECOMBATMODULE__ONADDAVATAR_OFFSET UNITYSDK_OFFSET(0x1C545770)
#define RPG_CLIENT_DICECOMBATMODULE__ONADDDICE_OFFSET UNITYSDK_OFFSET(0x1C545950)
#define RPG_CLIENT_DICECOMBATMODULE__ONADDITEMRSPFORMULTIBUYSHOPGOODS_OFFSET UNITYSDK_OFFSET(0x1C546AB0)
#define RPG_CLIENT_DICECOMBATMODULE__ONADDITEMRSP_OFFSET UNITYSDK_OFFSET(0x1C546340)
#define RPG_CLIENT_DICECOMBATMODULE__ONADVENTUREPHASEMAPCREATED_OFFSET UNITYSDK_OFFSET(0x1C54E2B0)
#define RPG_CLIENT_DICECOMBATMODULE__ONBUYSHOPGOODSCRSP_OFFSET UNITYSDK_OFFSET(0x1C547D30)
#define RPG_CLIENT_DICECOMBATMODULE__ONFINISHPVESTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x1C547F00)
#define RPG_CLIENT_DICECOMBATMODULE__ONGETSHOPDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1C547430)
#define RPG_CLIENT_DICECOMBATMODULE__ONGETSYSTEMDATARSP_OFFSET UNITYSDK_OFFSET(0x1C544970)
#define RPG_CLIENT_DICECOMBATMODULE__ONGETSYSTEMDATAV2SCRSP_OFFSET UNITYSDK_OFFSET(0x1C545AE0)
#define RPG_CLIENT_DICECOMBATMODULE__ONMODIFYAVATARDICERSP_OFFSET UNITYSDK_OFFSET(0x1C546B60)
#define RPG_CLIENT_DICECOMBATMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0x1C54DCD0)
#define RPG_CLIENT_DICECOMBATMODULE__ONMULTIPLAYERGETMATCHPLAYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1C546EC0)
#define RPG_CLIENT_DICECOMBATMODULE__ONMULTIPLAYERMATCHPLAYDATACHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1C547350)
#define RPG_CLIENT_DICECOMBATMODULE__ONUPGRADEAVATARRSP_OFFSET UNITYSDK_OFFSET(0x1C546D30)
#define RPG_CLIENT_DICECOMBATMODULE__ONV2FINISHPVESTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x1C548350)
#define RPG_CLIENT_DICECOMBATMODULE__REQUESTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1C54DD20)
#define RPG_CLIENT_DICECOMBATMODULE__REQUESTMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1C54E130)
#define RPG_CLIENT_DICECOMBATMODULE__SHOWGETITEMDIALOGONADDAVATAR_OFFSET UNITYSDK_OFFSET(0x1C5466B0)
#define RPG_CLIENT_DICECOMBATMODULE__SHOWGETITEMDIALOGONADDDICE_OFFSET UNITYSDK_OFFSET(0x1C5468B0)
#define RPG_CLIENT_DICECOMBATMODULE__SORT2V1STAGEDATAS_OFFSET UNITYSDK_OFFSET(0x1C548960)
#define RPG_CLIENT_DICECOMBATMODULE__SORTFRIENDDATALIST_OFFSET UNITYSDK_OFFSET(0x1C54EC80)
#define RPG_CLIENT_DICECOMBATMODULE__SYNCFRIENDDATA_OFFSET UNITYSDK_OFFSET(0x1C54E630)
#define RPG_CLIENT_DICECOMBATMODULE__UPDATESHOPDATALIST_OFFSET UNITYSDK_OFFSET(0x1C5475D0)
#define RPG_CLIENT_DICECOMBATMODULE___REQUESTACTIVITYDATA_B__101_0_OFFSET UNITYSDK_OFFSET(0x1DA45AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatModule_TypeDefinitionIndex = 64998;

	class DiceCombatModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FinishedStages_k__BackingField; // 0x10
		::RPG::Client::Promises::Promise* _WaitGetItemNotifyPromise; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatShopData*>* _ShopDatas; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IPABEFHCBLD*>* _PlayerDiceDatas; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatFriendData*>* _FriendDatas; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* FinishedV2PveStages; // 0x38
		::RPG::Client::DiceCombat::DiceCombatPVPManager* _PVPMgr_k__BackingField; // 0x40
		::RPG::Client::Promises::Promise* _WaitBuyShopGoodRspPromise; // 0x48
		::RPG::Client::DiceCombat::DiceCombatV2MPService* _V2MPService_k__BackingField; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* _CurFloorEntityConfigKeyToStageID; // 0x58
		::RPG::Client::DiceCombat::DiceCombatRedDot* _DiceCombatRedDot_k__BackingField; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* _PlayerAvatarInfos; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvEStage*>* _CachedVisiblePVEStages; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvEStage*>* _CachedAllPVEStages; // 0x78
		::RPG::Client::Promises::Promise* _WaitMultiBuyShopGoodRspPromise; // 0x80
		::RPG::Client::Promises::Promise* _WaitMultiGetItemPromise; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatV2OpponentData*>* _V2OpponentDatas; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*>* _CommunicateDatas; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleData*>* _SpecialRuleDatas; // 0xA0
		::RPG::Client::DiceCombat::DiceCombatV2RedDot* _DiceCombatV2RedDot_k__BackingField; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatV2Stage*>* _V2StageDatas; // 0xB0
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopData*>* _SortedShopDataList_k__BackingField; // 0xB8
		::RPG::Client::Promises::Promise* _WaitGetShopDataRspPromise; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombatDiceConfigData*>* _DiceDatas; // 0xC8
		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* _V2ScoreRewardQuestDatas; // 0xD0
		::System::Collections::Generic::List_1<::System::UInt32>* _LeftGetItemIDList; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* _AvatarConfigInfos; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatStageInfo*>* _StageInfos; // 0xE8
		::System::Int32 _LeftBuyShopGoodRspCount; // 0xF0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetSystemDataRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONGETSYSTEMDATARSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAddItemRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONADDITEMRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAddItemRspForMultiBuyShopGoods(::System::Nullable_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONADDITEMRSPFORMULTIBUYSHOPGOODS_OFFSET))(this, a1);
		}

		::System::Void _OnModifyAvatarDiceRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONMODIFYAVATARDICERSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnUpgradeAvatarRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONUPGRADEAVATARRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnAddAvatar(::System::UInt32 a1, ::NPIJFFFFKBK* a2, ::System::Int64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPIJFFFFKBK*, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONADDAVATAR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnAddDice(::System::UInt32 a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONADDDICE_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowGetItemDialogOnAddAvatar(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__SHOWGETITEMDIALOGONADDAVATAR_OFFSET))(this, a1);
		}

		::System::Void _ShowGetItemDialogOnAddDice(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__SHOWGETITEMDIALOGONADDDICE_OFFSET))(this, a1);
		}

		::System::Void _OnMultiplayerGetMatchPlayDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONMULTIPLAYERGETMATCHPLAYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMultiplayerMatchPlayDataChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONMULTIPLAYERMATCHPLAYDATACHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetShopDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONGETSHOPDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnBuyShopGoodScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONBUYSHOPGOODSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFinishPveStageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONFINISHPVESTAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateShopDataList(::Google::Protobuf::Collections::RepeatedField_1<::NJEBDKOJNGA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::NJEBDKOJNGA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__UPDATESHOPDATALIST_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlersV2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ADDPACKETHANDLERSV2_OFFSET))(this);
		}

		::System::Void _OnGetSystemDataV2ScRsp(::PDEIEDGCOBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDEIEDGCOBA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONGETSYSTEMDATAV2SCRSP_OFFSET))(this, a1);
		}

		::System::Void SendV2FinishPveStageCsReq(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SENDV2FINISHPVESTAGECSREQ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _OnV2FinishPveStageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONV2FINISHPVESTAGESCRSP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::DiceCombat::IDiceCombatStage* TryGetStageInfoByCurrentMode(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatStage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_TRYGETSTAGEINFOBYCURRENTMODE_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatV2PvEStage* GetPvEStage2v1(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvEStage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPVESTAGE2V1_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatV2PvPStage* GetPvPStage2v1(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvPStage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPVPSTAGE2V1_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatV2Stage* Get2v1StageData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2Stage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET2V1STAGEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatV2OpponentData* Get2v1OpponentData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2OpponentData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET2V1OPPONENTDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvEStage*>* GetAllSorted2v1PVEStageDatas(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvEStage*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETALLSORTED2V1PVESTAGEDATAS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvPStage*>* GetAllSorted2v1PVPStageDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatV2PvPStage*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETALLSORTED2V1PVPSTAGEDATAS_OFFSET))(this);
		}

		::System::Int32 _Sort2v1StageDatas(::RPG::Client::DiceCombat::DiceCombatV2Stage* a1, ::RPG::Client::DiceCombat::DiceCombatV2Stage* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2Stage*, ::RPG::Client::DiceCombat::DiceCombatV2Stage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__SORT2V1STAGEDATAS_OFFSET))(this, a1, a2);
		}

		::System::Void SetPVPStage2v1MaxScore(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SETPVPSTAGE2V1MAXSCORE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Get2V1CurrentAllPVPStageScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET2V1CURRENTALLPVPSTAGESCORE_OFFSET))(this);
		}

		::System::UInt32 Get2V1ScoreRewardMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET2V1SCOREREWARDMAXSCORE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetV2ScoreRewardQuestDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETV2SCOREREWARDQUESTDATALIST_OFFSET))(this);
		}

		::System::Boolean IsV2AllScoreRewardGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_ISV2ALLSCOREREWARDGOT_OFFSET))(this);
		}

		::System::Void GetV2ScoreRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETV2SCOREREWARDS_OFFSET))(this);
		}

		::System::Boolean IsV2AnyScoreRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_ISV2ANYSCOREREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean IsV2ActivityInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_ISV2ACTIVITYINSCHEDULE_OFFSET))(this);
		}

		::System::UInt32 GetV2ActivityPanelVideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETV2ACTIVITYPANELVIDEOID_OFFSET))(this);
		}

		::System::UInt32 get_V2ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_V2ACTIVITYID_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatV2RedDot* get_DiceCombatV2RedDot()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2RedDot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_DICECOMBATV2REDDOT_OFFSET))(this);
		}

		::System::Void set_DiceCombatV2RedDot(::RPG::Client::DiceCombat::DiceCombatV2RedDot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2RedDot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SET_DICECOMBATV2REDDOT_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void PrepareMissionDataBeforeLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_PREPAREMISSIONDATABEFORELOADING_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatStageInfo* GetStageInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatStageInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETSTAGEINFO_OFFSET))(this, a1);
		}

		::System::Boolean IsActivityInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_ISACTIVITYINSCHEDULE_OFFSET))(this);
		}

		::System::UInt32 GetStageIDByEntityConfigKey(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETSTAGEIDBYENTITYCONFIGKEY_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetPlayerPVESavedAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERPVESAVEDAVATARID_OFFSET))(this);
		}

		::System::Void SetPlayerPVESavedAvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SETPLAYERPVESAVEDAVATARID_OFFSET))(this, a1);
		}

		::System::UInt32 GetPlayerPVPSavedAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERPVPSAVEDAVATARID_OFFSET))(this);
		}

		::System::Void SetPlayerPVPSavedAvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SETPLAYERPVPSAVEDAVATARID_OFFSET))(this, a1);
		}

		::System::UInt32 GetPlayerV2PVPSavedAvatarID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERV2PVPSAVEDAVATARID_OFFSET))(this, a1);
		}

		::System::Void SetPlayerV2PVPSavedAvatarID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SETPLAYERV2PVPSAVEDAVATARID_OFFSET))(this, a1, a2);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* GetPlayerAvatarInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERAVATARINFO_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* GetConfigAvatarInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETCONFIGAVATARINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* GetPlayerAvatarInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERAVATARINFOLIST_OFFSET))(this);
		}

		::System::Void GetPlayerAvatarInfoListByRef(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERAVATARINFOLISTBYREF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* GetPlayerAndCanBuyAvatarInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERANDCANBUYAVATARINFOLIST_OFFSET))(this);
		}

		::System::Void GetPlayerAndCanBuyAvatarInfoListByRef(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERANDCANBUYAVATARINFOLISTBYREF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* GetAvatarConfigInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETAVATARCONFIGINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::IPABEFHCBLD*>* GetPlayerDiceInfoList()
		{
			return ((::System::Collections::Generic::List_1<::IPABEFHCBLD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERDICEINFOLIST_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatSpecialRuleData* GetSpecialRuleData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatSpecialRuleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETSPECIALRULEDATA_OFFSET))(this, a1);
		}

		::System::Boolean HasOrCanBuyRecommendColorDiceForAvatar(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_HASORCANBUYRECOMMENDCOLORDICEFORAVATAR_OFFSET))(this, a1);
		}

		::System::Boolean IsDiceRecommendForAvatar(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_ISDICERECOMMENDFORAVATAR_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsAvatarCardShowAsPlayer(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_ISAVATARCARDSHOWASPLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombatDiceConfigData* GetDiceConfigData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombatDiceConfigData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETDICECONFIGDATA_OFFSET))(this, a1);
		}

		::IPABEFHCBLD* GetPlayerDiceInfo(::System::UInt32 a1)
		{
			return ((::IPABEFHCBLD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERDICEINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceConfigData*>* GetDiceConfigInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceConfigData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETDICECONFIGINFOLIST_OFFSET))(this);
		}

		::System::Int32 GetPlayerDicesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETPLAYERDICESCOUNT_OFFSET))(this);
		}

		::System::Int32 GetAllDicesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETALLDICESCOUNT_OFFSET))(this);
		}

		::System::Void TriggerAdventureDiceCombatGroupCustomEvent(::System::UInt32 a1, ::System::String* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_TRIGGERADVENTUREDICECOMBATGROUPCUSTOMEVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SendDiceCombatFinishPveStageCsReq(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SENDDICECOMBATFINISHPVESTAGECSREQ_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::DiceCombat::DiceCombatCommunicateData* GetCommunicateData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatCommunicateData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETCOMMUNICATEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatShopData* GetShopData(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatShopData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETSHOPDATA_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatShopGoodData* GetShopGoodData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatShopGoodData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETSHOPGOODDATA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::DiceCombat::DiceCombatShopGoodData* GetShopGoodDataByGoodID(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatShopGoodData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETSHOPGOODDATABYGOODID_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatShopGoodData* GetDiceGoodDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatShopGoodData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETDICEGOODDATABYID_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatShopGoodData* GetAvatarGoodDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatShopGoodData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETAVATARGOODDATABYID_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* UpdateShopData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_UPDATESHOPDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* BuyShopGood(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_BUYSHOPGOOD_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* BuyMultiShopGoods(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_BUYMULTISHOPGOODS_OFFSET))(this, a1, a2);
		}

		::System::Boolean CanBuyAvatarShopGoodByAvatarID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_CANBUYAVATARSHOPGOODBYAVATARID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* GetCurrentPurchasableDiceSet()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETCURRENTPURCHASABLEDICESET_OFFSET))(this);
		}

		::System::Boolean GetDiceCombatBatchBuyMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETDICECOMBATBATCHBUYMODE_OFFSET))(this);
		}

		::System::Void SetDiceCombatBatchBuyMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SETDICECOMBATBATCHBUYMODE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* UpdateFriendData(::FJPMJPEKLJL a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_UPDATEFRIENDDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* UpdateV1FriendData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_UPDATEV1FRIENDDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* UpdateV2FriendData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_UPDATEV2FRIENDDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatFriendData*>* GetFriendDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatFriendData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GETFRIENDDATALIST_OFFSET))(this);
		}

		::System::Void SetAllowPVPInvitation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SETALLOWPVPINVITATION_OFFSET))(this, a1);
		}

		::System::Void _OnModuleInitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONMODULEINITREQ_OFFSET))(this);
		}

		::System::Void _RequestActivityData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__REQUESTACTIVITYDATA_OFFSET))(this);
		}

		::System::Void _RequestMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__REQUESTMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetDependantSubMissionIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__GETDEPENDANTSUBMISSIONIDS_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseMapCreated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__ONADVENTUREPHASEMAPCREATED_OFFSET))(this, a1);
		}

		::System::String* _GetFloorConfigPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__GETFLOORCONFIGPATH_OFFSET))(this, a1);
		}

		::System::Void _SyncFriendData(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__SYNCFRIENDDATA_OFFSET))(this, a1);
		}

		::System::Int32 _SortFriendDataList(::RPG::Client::DiceCombat::DiceCombatFriendData* a1, ::RPG::Client::DiceCombat::DiceCombatFriendData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatFriendData*, ::RPG::Client::DiceCombat::DiceCombatFriendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__SORTFRIENDDATALIST_OFFSET))(this, a1, a2);
		}

		::System::Action* _GenShowAddItemDialogDelegate(::System::UInt32 a1)
		{
			return ((::System::Action*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__GENSHOWADDITEMDIALOGDELEGATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::UInt32 get_OfferingID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_OFFERINGID_OFFSET))(this);
		}

		::System::UInt32 get_ActivityEntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_ACTIVITYENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_ActivityAvatarRewardQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_ACTIVITYAVATARREWARDQUESTID_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatPVPManager* get_PVPMgr()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatPVPManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_PVPMGR_OFFSET))(this);
		}

		::System::Void set_PVPMgr(::RPG::Client::DiceCombat::DiceCombatPVPManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPVPManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SET_PVPMGR_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatV2MPService* get_V2MPService()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2MPService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_V2MPSERVICE_OFFSET))(this);
		}

		::System::Void set_V2MPService(::RPG::Client::DiceCombat::DiceCombatV2MPService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2MPService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SET_V2MPSERVICE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopData*>* get_SortedShopDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_SORTEDSHOPDATALIST_OFFSET))(this);
		}

		::System::Void set_SortedShopDataList(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatShopData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SET_SORTEDSHOPDATALIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_FinishedStages()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_FINISHEDSTAGES_OFFSET))(this);
		}

		::System::Void set_FinishedStages(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SET_FINISHEDSTAGES_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAllowPVPInvitation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_ISALLOWPVPINVITATION_OFFSET))(this);
		}

		::System::Void set_IsAllowPVPInvitation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SET_ISALLOWPVPINVITATION_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatRedDot* get_DiceCombatRedDot()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatRedDot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_GET_DICECOMBATREDDOT_OFFSET))(this);
		}

		::System::Void set_DiceCombatRedDot(::RPG::Client::DiceCombat::DiceCombatRedDot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRedDot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE_SET_DICECOMBATREDDOT_OFFSET))(this, a1);
		}

		::System::Void _Init_b__49_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE__INIT_B__49_0_OFFSET))(this);
		}

		::System::Void __RequestActivityData_b__101_0(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___REQUESTACTIVITYDATA_B__101_0_OFFSET))(this, a1);
		}

	};
}
