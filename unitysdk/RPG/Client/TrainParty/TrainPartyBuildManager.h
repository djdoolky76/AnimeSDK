#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLLBJDEJFNF_OOIDNDCPEAF_DAHCIBCIIAD.h"
#include "unitysdk/JIIEHEBIBMO.h"
#include "unitysdk/RPG/Client/TrainParty/SlotType.h"
#include "unitysdk/RPG/GameCore/SlotDisplayType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyBuildManager___c__DisplayClass18_0.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class CLLBJDEJFNF;
class FNMEHOIANGN;
class GAGGCODGDLB;
class JFKNHCMPADM;
class KIBIPJKMLBM;
class LACGKNHJGKN;
class LFHAFKOJBAB;
class MELNFDAIHIL;
class NDLMAMEGFDM;
class OIIPJFDNPAH;
class POFNNGOCEOK;
class PPAFCLJOBBM;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::TrainParty { class TrainPartyBuildAreaInfo; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYBadgeItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYNormalItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYPhotoItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildLevelRewardInfo; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSlotInfo; }
namespace RPG::Client::TrainParty { class TrainPartyBuildStepInfo; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSubArea; }
namespace RPG::Client::TrainParty::OutlinePost { class OutlinePostManager; }
namespace RPG::GameCore { class ItemRow; }
namespace RPG::GameCore { class TrainPartyRewardConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CANCELALLPREVIEWDIY_OFFSET UNITYSDK_OFFSET(0x1C62AA40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CANCELPREVIEWDIY_OFFSET UNITYSDK_OFFSET(0x1C62DD80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CHANGEBADGEAUTOFILLSTATE_OFFSET UNITYSDK_OFFSET(0x1C625D50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CLEARDIYITEMREDDOT_OFFSET UNITYSDK_OFFSET(0x1C62DED0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CONFIRMDISPLAYWALLDIY_OFFSET UNITYSDK_OFFSET(0x1C625390)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CONFIRMDIY_OFFSET UNITYSDK_OFFSET(0x1C62D100)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C62F3B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C629690)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_FETCHDIYITEMSBYSLOTINFO_OFFSET UNITYSDK_OFFSET(0x1C62DF80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETALLAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0x1C62CE60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDAREAINFOBYID_OFFSET UNITYSDK_OFFSET(0x1C625870)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDDIYITEMSBYSLOT_OFFSET UNITYSDK_OFFSET(0x1C62E470)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDSTATUSBYSTATICID_OFFSET UNITYSDK_OFFSET(0x1C62C220)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETDIYITEMBYID_OFFSET UNITYSDK_OFFSET(0x1C61B4C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETDIYITEMBYSLOTID_OFFSET UNITYSDK_OFFSET(0x1C62C440)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETLEVELREWARDINFOLIST_OFFSET UNITYSDK_OFFSET(0x1C62E5F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETLEVELROW_OFFSET UNITYSDK_OFFSET(0x1C62E890)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETMISSIONPHOTODIYITEMS_OFFSET UNITYSDK_OFFSET(0x1C6262E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETNEXTAREAINFO_OFFSET UNITYSDK_OFFSET(0x1C62C610)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETOIGINALBUILDDIYITEMSBYSLOT_OFFSET UNITYSDK_OFFSET(0x1C621260)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETORCREATEPHOTODIYITEM_OFFSET UNITYSDK_OFFSET(0x1C61B550)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSHOWINACTIVITYAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0x1C62CC30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSLOTROTATION_OFFSET UNITYSDK_OFFSET(0x1C62ECF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSLOTTODIYITEMDICT_OFFSET UNITYSDK_OFFSET(0x1C625B10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSUBAREALIST_OFFSET UNITYSDK_OFFSET(0x1C621870)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETUNLOCKEDAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0x1C62CA90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDCOINITEMROW_OFFSET UNITYSDK_OFFSET(0x1C62F0A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDLEVEL_OFFSET UNITYSDK_OFFSET(0x1C62F060)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C62F080)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x1C62F280)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_DEFAULTAREAID_OFFSET UNITYSDK_OFFSET(0x1C62F140)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_FUNDS_OFFSET UNITYSDK_OFFSET(0x1C62F020)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_ISACTIVITYFINISHED_OFFSET UNITYSDK_OFFSET(0x1C62E9B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_ISINEARLYACCESS_OFFSET UNITYSDK_OFFSET(0x1C62EFA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_OUTLINEPOSTMANAGER_OFFSET UNITYSDK_OFFSET(0x1C62F390)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_SLOTPOSMAPPINGMANAGER_OFFSET UNITYSDK_OFFSET(0x1C62F370)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_STARNUM_OFFSET UNITYSDK_OFFSET(0x1C62F040)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET__BUILDFUNDSITEMID_OFFSET UNITYSDK_OFFSET(0x1C62A450)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1C62E900)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_HASNEWBADGES_OFFSET UNITYSDK_OFFSET(0x1C626650)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1C629150)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISAREAUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C62CA30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISBUILDLEVELREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x1C625240)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISDESKDISPLAYSLOT_OFFSET UNITYSDK_OFFSET(0x1C62EA60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISHEROROOMUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C62E950)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISNEWRECEIVEDBADGE_OFFSET UNITYSDK_OFFSET(0x1C6266F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISSHELFDISPLAYSLOT_OFFSET UNITYSDK_OFFSET(0x1C62EBF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONAREAUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C62AB50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONBUILDINGUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0x1C62ACD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONDIYFINISH_OFFSET UNITYSDK_OFFSET(0x1C62A540)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONENTERBUILDMAINPAGE_OFFSET UNITYSDK_OFFSET(0x1C62D5F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONEXITBUILDMAINPAGE_OFFSET UNITYSDK_OFFSET(0x1C62D7B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONTAKEBUILDLEVELREWARD_OFFSET UNITYSDK_OFFSET(0x1C62AC30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_PREVIEWDIYITEM_OFFSET UNITYSDK_OFFSET(0x1C62DC00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_RECORDUNLOCKSTATICIDLIST_OFFSET UNITYSDK_OFFSET(0x1C62C0B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_REMOVEDIY_OFFSET UNITYSDK_OFFSET(0x1C62D390)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_BUILDLEVEL_OFFSET UNITYSDK_OFFSET(0x1C62F070)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_BUILDPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C62F090)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_FUNDS_OFFSET UNITYSDK_OFFSET(0x1C62F030)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_OUTLINEPOSTMANAGER_OFFSET UNITYSDK_OFFSET(0x1C62F3A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_SLOTPOSMAPPINGMANAGER_OFFSET UNITYSDK_OFFSET(0x1C62F380)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_STARNUM_OFFSET UNITYSDK_OFFSET(0x1C62F050)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_STARTBUILDSTATICSTEP_OFFSET UNITYSDK_OFFSET(0x1C62CEA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SWITCHBUILDCAMERA_OFFSET UNITYSDK_OFFSET(0x1C62D970)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SWITCHDIYCAMERA_OFFSET UNITYSDK_OFFSET(0x1C62DAB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SYNCDISPLAYAREAINFO_OFFSET UNITYSDK_OFFSET(0x1C62A3C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0x1C6297F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETBUILDABLEBAREAINFO_OFFSET UNITYSDK_OFFSET(0x1C62C7D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETNEWUNLOCKEDAREAINFO_OFFSET UNITYSDK_OFFSET(0x1C62C950)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETORCREATEBADGEDIYITEM_1_OFFSET UNITYSDK_OFFSET(0x1C626520)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETORCREATEBADGEDIYITEM_OFFSET UNITYSDK_OFFSET(0x1C61B160)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETSLOTINFOBYID_OFFSET UNITYSDK_OFFSET(0x1C62C290)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYINITITEMNEWSTATES_OFFSET UNITYSDK_OFFSET(0x1C62EE70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATEBUILDLEVEL_OFFSET UNITYSDK_OFFSET(0x1C62A4F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATEFUNDS_OFFSET UNITYSDK_OFFSET(0x1C629920)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATESTARNUM_OFFSET UNITYSDK_OFFSET(0x1C62A4A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ADDDISPLAYAREAINFO_OFFSET UNITYSDK_OFFSET(0x1C625970)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ADDDYNAMICITEM_OFFSET UNITYSDK_OFFSET(0x1C62BE20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CLEARNORMALITEMNEWSTATES_OFFSET UNITYSDK_OFFSET(0x1C628DB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CLEARPHOTONEWSTATES_OFFSET UNITYSDK_OFFSET(0x1C628EC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATEBADGESYNCDATA_OFFSET UNITYSDK_OFFSET(0x1C6273B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATENORMALPROPSYNCDATA_OFFSET UNITYSDK_OFFSET(0x1C6275E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATEOUTLINEPOSMANAGER_OFFSET UNITYSDK_OFFSET(0x1C629550)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATEPHOTOSYNCDATA_OFFSET UNITYSDK_OFFSET(0x1C627480)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATESLOTPOSMAPPINGMANAGER_OFFSET UNITYSDK_OFFSET(0x1C6294F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHBADGEDIYITEMSBYSLOTINFO_OFFSET UNITYSDK_OFFSET(0x1C6276E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHNORMALDIYITEMSBYSLOTINFO_OFFSET UNITYSDK_OFFSET(0x1C62E0C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHPHOTODIYITEMSBYSLOTINFO_OFFSET UNITYSDK_OFFSET(0x1C627E00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHPHOTODIYITEMSBYSLOTTYPE_OFFSET UNITYSDK_OFFSET(0x1C627EE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__GETAREAINFOBYID_OFFSET UNITYSDK_OFFSET(0x1C62C010)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__HASDISPLAYSLOTTYPE_OFFSET UNITYSDK_OFFSET(0x1C62EB60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__INITALLAREAINFO_OFFSET UNITYSDK_OFFSET(0x1C6291F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__INITITEMNEWSTATES_OFFSET UNITYSDK_OFFSET(0x1C62EEF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__RESETAREAINFOS_OFFSET UNITYSDK_OFFSET(0x1C629F80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0x1C62A070)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCBADGEDIYITEMLIST_OFFSET UNITYSDK_OFFSET(0x1C626DB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCBUILDPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C62A370)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCDYNAMICITEMLIST_OFFSET UNITYSDK_OFFSET(0x1C629A00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCPHOTODIYITEMLIST_OFFSET UNITYSDK_OFFSET(0x1C6267C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___FETCHPHOTODIYITEMSBYSLOTTYPE_G___TRYADDSINGLEAVATAR_18_0_OFFSET UNITYSDK_OFFSET(0x1C628B00)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildManager_TypeDefinitionIndex = 76446;

	class TrainPartyBuildManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*>* _BuildBadgeDIYItemCache; // 0x10
		::RPG::Client::TrainParty::OutlinePost::OutlinePostManager* _OutlinePostManager_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem*>* _BuildPhotoDIYItemCacheList; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockStaticIDSet; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>* _AreaInfoList; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYNormalItem*>* _BuildDIYItemMap; // 0x38
		::PPAFCLJOBBM* _SlotPosMappingManager_k__BackingField; // 0x40
		::System::UInt32 _Funds_k__BackingField; // 0x48
		::System::UInt32 _Count; // 0x4C
		::System::UInt32 _BuildProgress_k__BackingField; // 0x50
		::System::UInt32 _BuildLevel_k__BackingField; // 0x54
		::System::UInt32 _AlreadyTakenRewardMaxLevel; // 0x58
		::System::Boolean _IsHeroRoomEarlyUnlocked; // 0x5C
		::System::Byte _padding0[0x3];
		::System::UInt32 _StarNum_k__BackingField; // 0x60
		// static const ::System::Object _INVALID_SUB_AREA_ID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void ConfirmDisplayWallDiy(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CONFIRMDISPLAYWALLDIY_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* GetSlotToDIYItemDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSLOTTODIYITEMDICT_OFFSET))(this);
		}

		::System::Void ChangeBadgeAutoFillState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CHANGEBADGEAUTOFILLSTATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSubArea*>* GetSubAreaList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildSubArea*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSUBAREALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem*>* GetMissionPhotoDIYItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETMISSIONPHOTODIYITEMS_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* TryGetOrCreateBadgeDIYItem(::System::UInt32 a1, ::System::Int64 a2)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*(*)(::PVOID, ::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETORCREATEBADGEDIYITEM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem* TryGetOrCreateBadgeDIYItem_1(::JFKNHCMPADM* a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYBadgeItem*(*)(::PVOID, ::JFKNHCMPADM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETORCREATEBADGEDIYITEM_1_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem* GetOrCreatePhotoDIYItem(::CLLBJDEJFNF_OOIDNDCPEAF_DAHCIBCIIAD a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYPhotoItem*(*)(::PVOID, ::CLLBJDEJFNF_OOIDNDCPEAF_DAHCIBCIIAD, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETORCREATEPHOTODIYITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasNewBadges()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_HASNEWBADGES_OFFSET))(this);
		}

		::System::Boolean IsNewReceivedBadge(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISNEWRECEIVEDBADGE_OFFSET))(this, a1);
		}

		::System::Void _SyncPhotoDIYItemList(::System::Collections::Generic::IEnumerable_1<::CLLBJDEJFNF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::CLLBJDEJFNF*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCPHOTODIYITEMLIST_OFFSET))(this, a1);
		}

		::System::Void _SyncBadgeDIYItemList(::System::Collections::Generic::IEnumerable_1<::POFNNGOCEOK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::POFNNGOCEOK*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCBADGEDIYITEMLIST_OFFSET))(this, a1);
		}

		::POFNNGOCEOK* _CreateBadgeSyncData(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::POFNNGOCEOK*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATEBADGESYNCDATA_OFFSET))(this, a1, a2);
		}

		::CLLBJDEJFNF* _CreatePhotoSyncData(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::CLLBJDEJFNF*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATEPHOTOSYNCDATA_OFFSET))(this, a1, a2);
		}

		::FNMEHOIANGN* _CreateNormalPropSyncData(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::FNMEHOIANGN*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATENORMALPROPSYNCDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _AddDisplayAreaInfo(::OIIPJFDNPAH* a1, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a2, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OIIPJFDNPAH*, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ADDDISPLAYAREAINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _FetchBadgeDIYItemsBySlotInfo(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHBADGEDIYITEMSBYSLOTINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _FetchPhotoDIYItemsBySlotInfo(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHPHOTODIYITEMSBYSLOTINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _FetchPhotoDIYItemsBySlotType(::RPG::Client::TrainParty::SlotType a1, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::SlotType, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHPHOTODIYITEMSBYSLOTTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void _ClearNormalItemNewStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CLEARNORMALITEMNEWSTATES_OFFSET))(this);
		}

		::System::Void _ClearPhotoNewStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CLEARPHOTONEWSTATES_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::KIBIPJKMLBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIBIPJKMLBM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SYNC_OFFSET))(this, a1);
		}

		::System::Void UpdateFunds(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATEFUNDS_OFFSET))(this, a1);
		}

		::System::Void UpdateStarNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATESTARNUM_OFFSET))(this, a1);
		}

		::System::Void UpdateBuildLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_UPDATEBUILDLEVEL_OFFSET))(this, a1);
		}

		::System::Void OnDiyFinish(::MELNFDAIHIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MELNFDAIHIL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONDIYFINISH_OFFSET))(this, a1);
		}

		::System::Void OnAreaUnlock(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONAREAUNLOCK_OFFSET))(this, a1);
		}

		::System::Void OnTakeBuildLevelReward(::LACGKNHJGKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LACGKNHJGKN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONTAKEBUILDLEVELREWARD_OFFSET))(this, a1);
		}

		::System::Void OnBuildingUpdateNotify(::LFHAFKOJBAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFHAFKOJBAB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONBUILDINGUPDATENOTIFY_OFFSET))(this, a1);
		}

		::System::Void RecordUnlockStaticIDList(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_RECORDUNLOCKSTATICIDLIST_OFFSET))(this, a1);
		}

		::JIIEHEBIBMO GetBuildStatusByStaticID(::System::UInt32 a1)
		{
			return ((::JIIEHEBIBMO(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDSTATUSBYSTATICID_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* TryGetSlotInfoByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETSLOTINFOBYID_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYItem* GetDIYItemBySlotID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETDIYITEMBYSLOTID_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYItem* GetDiyItemByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETDIYITEMBYID_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* GetNextAreaInfo(::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETNEXTAREAINFO_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* TryGetBuildablebAreaInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETBUILDABLEBAREAINFO_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* TryGetNewUnlockedAreaInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYGETNEWUNLOCKEDAREAINFO_OFFSET))(this);
		}

		::System::Boolean IsBuildLevelRewardTaken(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISBUILDLEVELREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::Boolean IsAreaUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISAREAUNLOCKED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>* GetUnlockedAreaInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETUNLOCKEDAREAINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>* GetShowInActivityAreaInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSHOWINACTIVITYAREAINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>* GetAllAreaInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETALLAREAINFOLIST_OFFSET))(this);
		}

		::System::Void StartBuildStaticStep(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::TrainParty::TrainPartyBuildStepInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildStepInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_STARTBUILDSTATICSTEP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ConfirmDiy(::System::UInt32 a1, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a2, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CONFIRMDIY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveDiy(::System::UInt32 a1, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_REMOVEDIY_OFFSET))(this, a1, a2);
		}

		::System::Void OnEnterBuildMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONENTERBUILDMAINPAGE_OFFSET))(this);
		}

		::System::Void OnExitBuildMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ONEXITBUILDMAINPAGE_OFFSET))(this);
		}

		::System::Void SwitchBuildCamera(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SWITCHBUILDCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SwitchDiyCamera(::System::UInt32 a1, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a2, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SWITCHDIYCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PreviewDiyItem(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_PREVIEWDIYITEM_OFFSET))(this, a1, a2);
		}

		::System::Void CancelAllPreviewDiy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CANCELALLPREVIEWDIY_OFFSET))(this);
		}

		::System::Void CancelPreviewDiy(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CANCELPREVIEWDIY_OFFSET))(this, a1);
		}

		::System::Void ClearDiyItemReddot(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_CLEARDIYITEMREDDOT_OFFSET))(this, a1);
		}

		::System::Void FetchDiyItemsBySlotInfo(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_FETCHDIYITEMSBYSLOTINFO_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* GetBuildDiyItemsBySlot(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDDIYITEMSBYSLOT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* GetOiginalBuildDiyItemsBySlot(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETOIGINALBUILDDIYITEMSBYSLOT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildLevelRewardInfo*>* GetLevelRewardInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildLevelRewardInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETLEVELREWARDINFOLIST_OFFSET))(this);
		}

		::RPG::GameCore::TrainPartyRewardConfigRow* GetLevelRow(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyRewardConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETLEVELROW_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* GetBuildAreaInfoByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETBUILDAREAINFOBYID_OFFSET))(this, a1);
		}

		::System::Boolean HasAnyRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_HASANYREWARDCANTAKE_OFFSET))(this);
		}

		::System::Void _SyncBuildProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCBUILDPROGRESS_OFFSET))(this, a1);
		}

		::System::Void SyncDisplayAreaInfo(::OIIPJFDNPAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIIPJFDNPAH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SYNCDISPLAYAREAINFO_OFFSET))(this, a1);
		}

		::System::Boolean IsHeroRoomUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISHEROROOMUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsDeskDisplaySlot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISDESKDISPLAYSLOT_OFFSET))(this, a1);
		}

		::System::Boolean IsShelfDisplaySlot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_ISSHELFDISPLAYSLOT_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion GetSlotRotation(::System::UInt32 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GETSLOTROTATION_OFFSET))(this, a1);
		}

		::System::Void TryInitItemNewStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_TRYINITITEMNEWSTATES_OFFSET))(this);
		}

		::System::Void _InitAllAreaInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__INITALLAREAINFO_OFFSET))(this);
		}

		::System::Void _CreateSlotPosMappingManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATESLOTPOSMAPPINGMANAGER_OFFSET))(this);
		}

		::System::Void _CreateOutLinePosManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__CREATEOUTLINEPOSMANAGER_OFFSET))(this);
		}

		::System::Void _ResetAreaInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__RESETAREAINFOS_OFFSET))(this);
		}

		::System::Void _SyncAreaInfoList(::System::Collections::Generic::IList_1<::NDLMAMEGFDM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::NDLMAMEGFDM*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCAREAINFOLIST_OFFSET))(this, a1);
		}

		::System::Void _FetchNormalDIYItemsBySlotInfo(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__FETCHNORMALDIYITEMSBYSLOTINFO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TrainParty::TrainPartyBuildAreaInfo* _GetAreaInfoByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildAreaInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__GETAREAINFOBYID_OFFSET))(this, a1);
		}

		::System::Void _SyncDynamicItemList(::System::Collections::Generic::IList_1<::GAGGCODGDLB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::GAGGCODGDLB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__SYNCDYNAMICITEMLIST_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYNormalItem* _AddDynamicItem(::System::UInt32 a1, ::System::Int64 a2)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYNormalItem*(*)(::PVOID, ::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__ADDDYNAMICITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean _HasDisplaySlotType(::Il2CppArray<::RPG::GameCore::SlotDisplayType>* a1, ::RPG::GameCore::SlotDisplayType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::SlotDisplayType>*, ::RPG::GameCore::SlotDisplayType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__HASDISPLAYSLOTTYPE_OFFSET))(this, a1, a2);
		}

		::System::Void _InitItemNewStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER__INITITEMNEWSTATES_OFFSET))(this);
		}

		::System::UInt32 get_Funds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_FUNDS_OFFSET))(this);
		}

		::System::Void set_Funds(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_FUNDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_StarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_STARNUM_OFFSET))(this);
		}

		::System::Void set_StarNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_STARNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuildLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDLEVEL_OFFSET))(this);
		}

		::System::Void set_BuildLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_BUILDLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuildProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDPROGRESS_OFFSET))(this);
		}

		::System::Void set_BuildProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_BUILDPROGRESS_OFFSET))(this, a1);
		}

		::RPG::GameCore::ItemRow* get_BuildCoinItemRow()
		{
			return ((::RPG::GameCore::ItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_BUILDCOINITEMROW_OFFSET))(this);
		}

		::System::UInt32 get_DefaultAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_DEFAULTAREAID_OFFSET))(this);
		}

		::System::Boolean get_IsInEarlyAccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_ISINEARLYACCESS_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_CONTENTID_OFFSET))(this);
		}

		::System::Boolean get_IsActivityFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_ISACTIVITYFINISHED_OFFSET))(this);
		}

		::PPAFCLJOBBM* get_SlotPosMappingManager()
		{
			return ((::PPAFCLJOBBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_SLOTPOSMAPPINGMANAGER_OFFSET))(this);
		}

		::System::Void set_SlotPosMappingManager(::PPAFCLJOBBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPAFCLJOBBM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_SLOTPOSMAPPINGMANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::OutlinePost::OutlinePostManager* get_OutlinePostManager()
		{
			return ((::RPG::Client::TrainParty::OutlinePost::OutlinePostManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET_OUTLINEPOSTMANAGER_OFFSET))(this);
		}

		::System::Void set_OutlinePostManager(::RPG::Client::TrainParty::OutlinePost::OutlinePostManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::OutlinePost::OutlinePostManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_SET_OUTLINEPOSTMANAGER_OFFSET))(this, a1);
		}

		::System::UInt32 get__BuildFundsItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER_GET__BUILDFUNDSITEMID_OFFSET))(this);
		}

		::System::Void __FetchPhotoDIYItemsBySlotType_g___TryAddSingleAvatar_18_0(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::TrainParty::TrainPartyBuildManager___c__DisplayClass18_0 a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::TrainParty::TrainPartyBuildManager___c__DisplayClass18_0, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDMANAGER___FETCHPHOTODIYITEMSBYSLOTTYPE_G___TRYADDSINGLEAVATAR_18_0_OFFSET))(this, a1, a2, a3);
		}

	};
}
