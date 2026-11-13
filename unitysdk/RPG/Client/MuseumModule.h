#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/MuseumTalkTriggerType.h"
#include "unitysdk/RPG/GameCore/MuseumTalkType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/RPG/Client/TextID.h"
class BDDMKOIHCPK;
class DEEJKBIMHAA;
class EJLFOBMAPEJ;
class IKADIECNGND;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MuseumAreaData; }
namespace RPG::Client { class MuseumAvatarItemData; }
namespace RPG::Client { class MuseumData; }
namespace RPG::Client { class MuseumExhibitItemData; }
namespace RPG::Client { class MuseumGetItemNotifyParam; }
namespace RPG::Client { class MuseumStaffData; }
namespace RPG::Client { class MuseumTurnResult; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class MuseumActivityQuestConfigRow; }
namespace RPG::GameCore { class MuseumCommentsRow; }
namespace RPG::GameCore { class MuseumDeskTalkConfigRow; }
namespace RPG::GameCore { class MuseumTutorialTalkRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSEUMMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A1A7F50)
#define RPG_CLIENT_MUSEUMMODULE_GETALLEXHIBITITEMDATALIST_OFFSET UNITYSDK_OFFSET(0x1C29F970)
#define RPG_CLIENT_MUSEUMMODULE_GETALLMUSEUMAVATARITEMDATALIST_OFFSET UNITYSDK_OFFSET(0x1C29F7F0)
#define RPG_CLIENT_MUSEUMMODULE_GETDISPLAYNPCSTAFFDATAS_OFFSET UNITYSDK_OFFSET(0x1A1A83E0)
#define RPG_CLIENT_MUSEUMMODULE_GETMUSEUMINFO_OFFSET UNITYSDK_OFFSET(0x1A1A80F0)
#define RPG_CLIENT_MUSEUMMODULE_GETMUSTTRIGGERTALKID_OFFSET UNITYSDK_OFFSET(0x1A1A7000)
#define RPG_CLIENT_MUSEUMMODULE_GETRANDOMCOMMENTS_OFFSET UNITYSDK_OFFSET(0x1A1A21D0)
#define RPG_CLIENT_MUSEUMMODULE_GETSTAFFDATA_OFFSET UNITYSDK_OFFSET(0x1A19F5B0)
#define RPG_CLIENT_MUSEUMMODULE_GETSTARTRELATEDMISSIONCOUNTBYCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1A1A4E00)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLEXHIBITITEMDATA_OFFSET UNITYSDK_OFFSET(0x1C29B530)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLITEMMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A1A5D30)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A1A5CE0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLMUSEUMAVATARITEMDATA_OFFSET UNITYSDK_OFFSET(0x1C29B1E0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLSTAFFMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A1A5D80)
#define RPG_CLIENT_MUSEUMMODULE_GET_ALLSTAFFS_OFFSET UNITYSDK_OFFSET(0x1C29CF00)
#define RPG_CLIENT_MUSEUMMODULE_GET_ATLASUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A1A5E60)
#define RPG_CLIENT_MUSEUMMODULE_GET_CURCONFIGLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A1A65C0)
#define RPG_CLIENT_MUSEUMMODULE_GET_CURFORCEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A1A62C0)
#define RPG_CLIENT_MUSEUMMODULE_GET_CURPHASEUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A1A6310)
#define RPG_CLIENT_MUSEUMMODULE_GET_EXHIBITITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1C29FCC0)
#define RPG_CLIENT_MUSEUMMODULE_GET_FINISHEDQUESTLIST_OFFSET UNITYSDK_OFFSET(0x1C29FBB0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISALLAREAGOTFULLRENEWPOINT_OFFSET UNITYSDK_OFFSET(0x1C29FC30)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISALLFINISH_OFFSET UNITYSDK_OFFSET(0x1C29B590)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISALREADYFINISH_OFFSET UNITYSDK_OFFSET(0x1C29FCA0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISATLASUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A1A5F90)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISCONFIGLOCKED_OFFSET UNITYSDK_OFFSET(0x1A1A68E0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISFORCEMISSIONTAKEN_OFFSET UNITYSDK_OFFSET(0x1A1A66F0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1C29FC50)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISMARKETUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A1A6060)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISPHASEUNLOCKMISSIONTAKEN_OFFSET UNITYSDK_OFFSET(0x1A1A6770)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISTARGETUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A1A61F0)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISUPGRADEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1A1A6130)
#define RPG_CLIENT_MUSEUMMODULE_GET_ISWAITFINISHTURNRSP_OFFSET UNITYSDK_OFFSET(0x1C29FB50)
#define RPG_CLIENT_MUSEUMMODULE_GET_LOGICRANDOM_OFFSET UNITYSDK_OFFSET(0x1C29FB90)
#define RPG_CLIENT_MUSEUMMODULE_GET_MARKETUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A1A5EB0)
#define RPG_CLIENT_MUSEUMMODULE_GET_MAXSTAFFSTATS_OFFSET UNITYSDK_OFFSET(0x1C29FB70)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0x1C29FDE0)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMCURRENCYCONFIGID_OFFSET UNITYSDK_OFFSET(0x1C29FB10)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMDATA_OFFSET UNITYSDK_OFFSET(0x1C299850)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMMISSIONCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1A1A67C0)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMMISSIONLIMIT_OFFSET UNITYSDK_OFFSET(0x1A1A4F60)
#define RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMTURNRESULTCACHE_OFFSET UNITYSDK_OFFSET(0x1C29FB30)
#define RPG_CLIENT_MUSEUMMODULE_GET_PHASEQUESTLIST_OFFSET UNITYSDK_OFFSET(0x1C29FC10)
#define RPG_CLIENT_MUSEUMMODULE_GET_REDDOTPHASEQUESTLIST_OFFSET UNITYSDK_OFFSET(0x1C29FBF0)
#define RPG_CLIENT_MUSEUMMODULE_GET_REDDOTQUESTSERIES_OFFSET UNITYSDK_OFFSET(0x1C29FBD0)
#define RPG_CLIENT_MUSEUMMODULE_GET_REWARDQUESTSERIESLIST_OFFSET UNITYSDK_OFFSET(0x1C29FAF0)
#define RPG_CLIENT_MUSEUMMODULE_GET_STAFFCOUNT_OFFSET UNITYSDK_OFFSET(0x1C29FD50)
#define RPG_CLIENT_MUSEUMMODULE_GET_TAKENITEMMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1A1A5DD0)
#define RPG_CLIENT_MUSEUMMODULE_GET_TAKENMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1A1A5E10)
#define RPG_CLIENT_MUSEUMMODULE_GET_TAKENSTAFFMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1A1A5DF0)
#define RPG_CLIENT_MUSEUMMODULE_GET_TARGETUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A1A5F40)
#define RPG_CLIENT_MUSEUMMODULE_GET_UNLOCKAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0x1C29FFB0)
#define RPG_CLIENT_MUSEUMMODULE_GET_UNLOCKEXHIBITITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1C2A0180)
#define RPG_CLIENT_MUSEUMMODULE_GET_UPGRADEUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A1A5F00)
#define RPG_CLIENT_MUSEUMMODULE_HAVEHIDEPHASEMISSION_OFFSET UNITYSDK_OFFSET(0x1A1A4720)
#define RPG_CLIENT_MUSEUMMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1A1A8E10)
#define RPG_CLIENT_MUSEUMMODULE_ISCHAPTERMISSIONREACHLIMIT_OFFSET UNITYSDK_OFFSET(0x1A1A4DA0)
#define RPG_CLIENT_MUSEUMMODULE_ISPHASEMISSIONSTART_OFFSET UNITYSDK_OFFSET(0x1A1A4990)
#define RPG_CLIENT_MUSEUMMODULE_RANDOMGETTALKID_OFFSET UNITYSDK_OFFSET(0x1A1A69C0)
#define RPG_CLIENT_MUSEUMMODULE_RANDOMGETTEXTIDBYTALKID_OFFSET UNITYSDK_OFFSET(0x1A1A7180)
#define RPG_CLIENT_MUSEUMMODULE_REFRESHALLMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A1A3200)
#define RPG_CLIENT_MUSEUMMODULE_REFRESHALLUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A1A3850)
#define RPG_CLIENT_MUSEUMMODULE_REFRESHCONFIGLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A1A3DA0)
#define RPG_CLIENT_MUSEUMMODULE_REFRESHSTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1A1A8370)
#define RPG_CLIENT_MUSEUMMODULE_REMOVESTAFF_OFFSET UNITYSDK_OFFSET(0x1A1A8220)
#define RPG_CLIENT_MUSEUMMODULE_SET_FINISHEDQUESTLIST_OFFSET UNITYSDK_OFFSET(0x1C29FBC0)
#define RPG_CLIENT_MUSEUMMODULE_SET_ISALLAREAGOTFULLRENEWPOINT_OFFSET UNITYSDK_OFFSET(0x1C29FC40)
#define RPG_CLIENT_MUSEUMMODULE_SET_ISALREADYFINISH_OFFSET UNITYSDK_OFFSET(0x1C29FCB0)
#define RPG_CLIENT_MUSEUMMODULE_SET_ISWAITFINISHTURNRSP_OFFSET UNITYSDK_OFFSET(0x1C29FB60)
#define RPG_CLIENT_MUSEUMMODULE_SET_LOGICRANDOM_OFFSET UNITYSDK_OFFSET(0x1C29FBA0)
#define RPG_CLIENT_MUSEUMMODULE_SET_MAXSTAFFSTATS_OFFSET UNITYSDK_OFFSET(0x1C29FB80)
#define RPG_CLIENT_MUSEUMMODULE_SET_MUSEUMCURRENCYCONFIGID_OFFSET UNITYSDK_OFFSET(0x1C29FB20)
#define RPG_CLIENT_MUSEUMMODULE_SET_MUSEUMTURNRESULTCACHE_OFFSET UNITYSDK_OFFSET(0x1C29FB40)
#define RPG_CLIENT_MUSEUMMODULE_SET_PHASEQUESTLIST_OFFSET UNITYSDK_OFFSET(0x1C29FC20)
#define RPG_CLIENT_MUSEUMMODULE_SET_REDDOTPHASEQUESTLIST_OFFSET UNITYSDK_OFFSET(0x1C29FC00)
#define RPG_CLIENT_MUSEUMMODULE_SET_REDDOTQUESTSERIES_OFFSET UNITYSDK_OFFSET(0x1C29FBE0)
#define RPG_CLIENT_MUSEUMMODULE_SET_REWARDQUESTSERIESLIST_OFFSET UNITYSDK_OFFSET(0x1C29FB00)
#define RPG_CLIENT_MUSEUMMODULE_SET_TAKENITEMMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1A1A5DE0)
#define RPG_CLIENT_MUSEUMMODULE_SET_TAKENSTAFFMISSIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1A1A5E00)
#define RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYNEWTURN_OFFSET UNITYSDK_OFFSET(0x1A1A8880)
#define RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYRANDOMEVENT_OFFSET UNITYSDK_OFFSET(0x1A1A8620)
#define RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYTARGETREWARD_OFFSET UNITYSDK_OFFSET(0x1A1A8A00)
#define RPG_CLIENT_MUSEUMMODULE_TRYTRIGGERTUTORIALMISSIONPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1A1A8D50)
#define RPG_CLIENT_MUSEUMMODULE_UPDATEUNSEENTALKMISSION_OFFSET UNITYSDK_OFFSET(0x1A1A7340)
#define RPG_CLIENT_MUSEUMMODULE__ADDMUSTTRIGGERTALKID_OFFSET UNITYSDK_OFFSET(0x1A1A7990)
#define RPG_CLIENT_MUSEUMMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A1A9110)
#define RPG_CLIENT_MUSEUMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A1A93F0)
#define RPG_CLIENT_MUSEUMMODULE__ADDTALKID_OFFSET UNITYSDK_OFFSET(0x1A1A7BC0)
#define RPG_CLIENT_MUSEUMMODULE__BEGINMUSEUMPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1C2998A0)
#define RPG_CLIENT_MUSEUMMODULE__CACHETARGETREWARD_OFFSET UNITYSDK_OFFSET(0x1C29BF50)
#define RPG_CLIENT_MUSEUMMODULE__CANTAKEITEMMISSION_OFFSET UNITYSDK_OFFSET(0x1A1A5BB0)
#define RPG_CLIENT_MUSEUMMODULE__CLEARTARGETREWARDCACHE_OFFSET UNITYSDK_OFFSET(0x1C29C1E0)
#define RPG_CLIENT_MUSEUMMODULE__CMDBUYNPCSTUFFSCRSP_OFFSET UNITYSDK_OFFSET(0x1A1AA100)
#define RPG_CLIENT_MUSEUMMODULE__CMDFINISHCURTURNSCRSP_OFFSET UNITYSDK_OFFSET(0x1C2995B0)
#define RPG_CLIENT_MUSEUMMODULE__CMDGETMUSEUMINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1A1A9EC0)
#define RPG_CLIENT_MUSEUMMODULE__CMDMUSEUMRANDOMEVENTQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0x1C299D80)
#define RPG_CLIENT_MUSEUMMODULE__CMDMUSEUMRANDOMEVENTSELECTSCRSP_OFFSET UNITYSDK_OFFSET(0x1C29A030)
#define RPG_CLIENT_MUSEUMMODULE__CMDREMOVESTUFFFROMAREASCRSP_OFFSET UNITYSDK_OFFSET(0x1C299510)
#define RPG_CLIENT_MUSEUMMODULE__CMDSETSTUFFTOAREASCRSP_OFFSET UNITYSDK_OFFSET(0x1C299490)
#define RPG_CLIENT_MUSEUMMODULE__CMDTAKECOLLECTREWARDRSP_OFFSET UNITYSDK_OFFSET(0x1C29A1B0)
#define RPG_CLIENT_MUSEUMMODULE__CMDUPGRADEAREASCRSP_OFFSET UNITYSDK_OFFSET(0x1C299AD0)
#define RPG_CLIENT_MUSEUMMODULE__CMDUPGRADEAREASTATSCRSP_OFFSET UNITYSDK_OFFSET(0x1C299BB0)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLEXHIBITCOLLECTIONITEMDATA_OFFSET UNITYSDK_OFFSET(0x1C29E920)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLFORCEMISSIONID_OFFSET UNITYSDK_OFFSET(0x1A1A4030)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLMISSIONID_OFFSET UNITYSDK_OFFSET(0x1A1A33A0)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLPHASEUNLOCKMISSIONID_OFFSET UNITYSDK_OFFSET(0x1A1A5830)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLSTAFFCOLLECTIONITEMDATA_OFFSET UNITYSDK_OFFSET(0x1C29E4E0)
#define RPG_CLIENT_MUSEUMMODULE__CREATEALLSTAFFSDATA_OFFSET UNITYSDK_OFFSET(0x1C29E3A0)
#define RPG_CLIENT_MUSEUMMODULE__CREATETALKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A1A77A0)
#define RPG_CLIENT_MUSEUMMODULE__GETCOMMENTPOOLINDEX_OFFSET UNITYSDK_OFFSET(0x1A1A31B0)
#define RPG_CLIENT_MUSEUMMODULE__GETCOMMENTPOOL_OFFSET UNITYSDK_OFFSET(0x1A1A3020)
#define RPG_CLIENT_MUSEUMMODULE__GETHIGHESTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1A1A7E70)
#define RPG_CLIENT_MUSEUMMODULE__GETPOSITIVECOMMENTPROB_OFFSET UNITYSDK_OFFSET(0x1A1A30D0)
#define RPG_CLIENT_MUSEUMMODULE__GETSTARTRELATEDMISSIONCOUNTBYCHAPTERID_B__28_0_OFFSET UNITYSDK_OFFSET(0x1C2A0360)
#define RPG_CLIENT_MUSEUMMODULE__GETTUTORIALMISSIONPERFORMANCEROW_OFFSET UNITYSDK_OFFSET(0x1C29CC60)
#define RPG_CLIENT_MUSEUMMODULE__HASTARGETREWARDCACHE_OFFSET UNITYSDK_OFFSET(0x1C29C140)
#define RPG_CLIENT_MUSEUMMODULE__INITREWARDQUEST_OFFSET UNITYSDK_OFFSET(0x1C29DBC0)
#define RPG_CLIENT_MUSEUMMODULE__INITTALKDATA_OFFSET UNITYSDK_OFFSET(0x1A1A7610)
#define RPG_CLIENT_MUSEUMMODULE__ISHAVEMISSIONEVENT_OFFSET UNITYSDK_OFFSET(0x1C29CD30)
#define RPG_CLIENT_MUSEUMMODULE__LOADTALKDATA_OFFSET UNITYSDK_OFFSET(0x1A1A6B50)
#define RPG_CLIENT_MUSEUMMODULE__ONBEFOREMUSEUMDATACHANGE_1_OFFSET UNITYSDK_OFFSET(0x1C29F1E0)
#define RPG_CLIENT_MUSEUMMODULE__ONBEFOREMUSEUMDATACHANGE_OFFSET UNITYSDK_OFFSET(0x1C29A750)
#define RPG_CLIENT_MUSEUMMODULE__ONFORCEMISSIONTAKEN_OFFSET UNITYSDK_OFFSET(0x1A1A5A60)
#define RPG_CLIENT_MUSEUMMODULE__ONMAINMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x1C29C460)
#define RPG_CLIENT_MUSEUMMODULE__ONMAINMISSIONTAKEN_OFFSET UNITYSDK_OFFSET(0x1C29C3A0)
#define RPG_CLIENT_MUSEUMMODULE__ONMUSEUMPERFORMANCEEND_OFFSET UNITYSDK_OFFSET(0x1C29CA90)
#define RPG_CLIENT_MUSEUMMODULE__ONREFRESHEVENTSTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1C29D960)
#define RPG_CLIENT_MUSEUMMODULE__ONSHOWLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x1C29CEB0)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCGETEXHIBITSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1C29B320)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCGETSTUFFSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1C29AF10)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMFUNDSCHANGEDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1C29AE40)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMINFOCHANGEDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1C29A510)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMRANDOMEVENTSTARTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1C29B720)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETMISSIONFINISHNOTIFY_OFFSET UNITYSDK_OFFSET(0x1C29BD40)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETREWARDNOTIFY_OFFSET UNITYSDK_OFFSET(0x1C29BEE0)
#define RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETSTARTNOTIFY_OFFSET UNITYSDK_OFFSET(0x1C29BB50)
#define RPG_CLIENT_MUSEUMMODULE__PREPARECOMMENTS_OFFSET UNITYSDK_OFFSET(0x1A1A2990)
#define RPG_CLIENT_MUSEUMMODULE__READCOMMENTCONST_OFFSET UNITYSDK_OFFSET(0x1A1A2700)
#define RPG_CLIENT_MUSEUMMODULE__READUNLOCKMISSIONID_OFFSET UNITYSDK_OFFSET(0x1A1A39F0)
#define RPG_CLIENT_MUSEUMMODULE__RECEIVEALLMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A1A5150)
#define RPG_CLIENT_MUSEUMMODULE__RECEIVEUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A1A56E0)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHCONFIGLOCKMISSIONDATA_B__14_0_OFFSET UNITYSDK_OFFSET(0x1C2A0340)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHEVENTSTAFFAVAILABLE_1_OFFSET UNITYSDK_OFFSET(0x1C29AD70)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHEVENTSTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1C29D8F0)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHFINISHEDQUEST_OFFSET UNITYSDK_OFFSET(0x1C29DED0)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHFINISHSTATUS_OFFSET UNITYSDK_OFFSET(0x1C29ADE0)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHFORCEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A1A4570)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHPHASEUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A1A43B0)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHSINGLESTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1C29DB50)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHSTAFFAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1C29D490)
#define RPG_CLIENT_MUSEUMMODULE__REFRESHTAKENREWARDMUSEUMDATA_OFFSET UNITYSDK_OFFSET(0x1C29CF50)
#define RPG_CLIENT_MUSEUMMODULE__RESETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C29A9D0)
#define RPG_CLIENT_MUSEUMMODULE__SETVALIDTALKIDSCACHE_OFFSET UNITYSDK_OFFSET(0x1A1A6CD0)
#define RPG_CLIENT_MUSEUMMODULE__TRIGGERPERFORMANCEANDEXITMUSEUM_OFFSET UNITYSDK_OFFSET(0x1C29F550)
#define RPG_CLIENT_MUSEUMMODULE__TRYADDTALKMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1A1A7DC0)
#define RPG_CLIENT_MUSEUMMODULE__TRYCACHEPHASEUPGRADE_OFFSET UNITYSDK_OFFSET(0x1C29ED50)
#define RPG_CLIENT_MUSEUMMODULE__TRYCACHETURNCHANGE_OFFSET UNITYSDK_OFFSET(0x1C29F190)
#define RPG_CLIENT_MUSEUMMODULE__TRYCACHETURNRESULT_OFFSET UNITYSDK_OFFSET(0x1C29F0D0)
#define RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYMUSEUMEXHIBITGET_OFFSET UNITYSDK_OFFSET(0x1C29ECF0)
#define RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYNEWPHASEBEGIN_OFFSET UNITYSDK_OFFSET(0x1C29C730)
#define RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYPHASEUPGRADE_OFFSET UNITYSDK_OFFSET(0x1C29CBD0)
#define RPG_CLIENT_MUSEUMMODULE__TRYUPDATEUNSEENMISSIONBYTALKID_OFFSET UNITYSDK_OFFSET(0x1A1A6F50)
#define RPG_CLIENT_MUSEUMMODULE__UNINITCOMMENTDATA_OFFSET UNITYSDK_OFFSET(0x1A1A3150)
#define RPG_CLIENT_MUSEUMMODULE__UNINITMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A1A5080)
#define RPG_CLIENT_MUSEUMMODULE__UNINITTALKDATA_OFFSET UNITYSDK_OFFSET(0x1A1A7930)
#define RPG_CLIENT_MUSEUMMODULE__UPDATEUNSEENTUTORIALMISSION_OFFSET UNITYSDK_OFFSET(0x1C29C540)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumModule_TypeDefinitionIndex = 68269;

	class MuseumModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _AllUnlockMissionID; // 0x10
		::RPG::Client::Promises::Promise* _RefreshConfigLockMissionDataPromise; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>* _AllExhibitItemData; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _TalkMissionList; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _PhaseQuestList_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedQuestList_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::MuseumActivityQuestConfigRow*>* _RewardQuestSeriesList_k__BackingField; // 0x40
		::RPG::Client::MainMissionData* _UpgradeUnlockMissionData; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _ValidTalkIDsCache; // 0x50
		::Il2CppArray<::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>*>* _Comments; // 0x58
		::RPG::Client::Promises::Promise* _RemoveStaffPromise; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MuseumTalkTriggerType, ::System::Collections::Generic::List_1<::System::UInt32>*>* _TriggerTypeToTalkIDs; // 0x68
		::DEEJKBIMHAA* _LogicRandom_k__BackingField; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* _AllStaffMissionID; // 0x78
		::RPG::Client::MuseumTurnResult* _MuseumTurnResultCache_k__BackingField; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>* _AllStaffs; // 0x88
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotQuestSeries_k__BackingField; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* _AllStaffMissionData; // 0x98
		::RPG::Client::Promises::Promise* _GetMuseumInfoPromise; // 0xA0
		::System::Collections::Generic::List_1<::System::UInt32>* _AllPhaseUnlockMissionID; // 0xA8
		::System::Collections::Generic::List_1<::System::UInt32>* _AllItemMissionID; // 0xB0
		::RPG::Client::MainMissionData* _MarketUnlockMissionData; // 0xB8
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotPhaseQuestList_k__BackingField; // 0xC0
		::RPG::Client::MainMissionData* _AtlasUnlockMissionData; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* _AllPhaseUnlockMissionData; // 0xD0
		::System::Collections::Generic::List_1<::System::UInt32>* _AllForceMissionID; // 0xD8
		::RPG::Client::MainMissionData* _TargetUnlockMissionData; // 0xE0
		::RPG::Client::MuseumGetItemNotifyParam* _MuseumGetItemNotifyCache; // 0xE8
		::RPG::Client::MuseumData* _MuseumData; // 0xF0
		::RPG::Client::Promises::Promise* _RefreshMissionDataPromise; // 0xF8
		::Il2CppArray<::System::Single>* _PositiveCommentProb; // 0x100
		::RPG::Client::MainMissionData* _CurForceMissionData; // 0x108
		::RPG::Client::Promises::Promise* _RefreshUnlockMissionDataPromise; // 0x110
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumAvatarItemData*>* _AllMuseumAvatarItemData; // 0x118
		::System::Collections::Generic::List_1<::System::UInt32>* _AllMissionID; // 0x120
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MuseumTalkTriggerType, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MuseumTalkType, ::System::UInt32>*>* _TriggerTypeToMustTriggerTalkDict; // 0x128
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* _AllMissionData; // 0x130
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* _AllItemMissionData; // 0x138
		::System::Boolean _IsAlreadyFinish; // 0x140
		::System::Boolean _IsTakenItemMission; // 0x141
		::System::Boolean _IsAllAreaGotFullRenewPoint_k__BackingField; // 0x142
		::System::Byte _padding0[0x1];
		::System::UInt32 _MuseumMissionLimit; // 0x144
		::System::UInt32 _AtlasUnlockMissionID; // 0x148
		::System::UInt32 _TakenStaffMissionCount_k__BackingField; // 0x14C
		::System::Boolean _MuseumShowNewTurnHint; // 0x150
		::System::Boolean _IsDataLoaded; // 0x151
		::System::Byte _padding1[0x2];
		::System::UInt32 _MuseumCurrencyConfigID_k__BackingField; // 0x154
		::System::UInt32 _MuseumMissionChapterID; // 0x158
		::System::UInt32 _TargetUnlockMissionID; // 0x15C
		::System::UInt32 _UpgradeUnlockMissionID; // 0x160
		::System::UInt32 _CommentNumPerArea; // 0x164
		::System::Nullable_1<::System::UInt32> _PhaseUpgradeNotify; // 0x168
		::System::UInt32 _TakenItemMissionCount_k__BackingField; // 0x170
		::System::UInt32 _ListeningMainMissionID; // 0x174
		::System::Int32 _MaxStaffStats_k__BackingField; // 0x178
		::System::Boolean _IsAlreadyFinish_k__BackingField; // 0x17C
		::System::Boolean _IsTurnResultNeedNotify; // 0x17D
		::System::Boolean _IsWaitFinishTurnRsp_k__BackingField; // 0x17E
		::System::Boolean _IsInPerfomance; // 0x17F
		::System::UInt32 _MarketUnlockMissionID; // 0x180
		// static const ::System::String* _PositiveCommentProbKey; // 0x0
		// static const ::System::String* _CommentNumPerAreaKey; // 0x0
		// static const ::System::String* _MuseumMissionLimitIDKey; // 0x0
		// static const ::System::String* _MuseumMissionChapterIDKey; // 0x0
		// static const ::System::String* _AtlasUnlockMissionIDKey; // 0x0
		// static const ::System::String* _MarketUnlockMissionIDKey; // 0x0
		// static const ::System::String* _UpgradeUnlockMissionIDKey; // 0x0
		// static const ::System::String* _TargetUnlockMissionIDKey; // 0x0
		// static const ::System::Object _MuseumMaxPhaseLevel; // 0x0
		// static const ::System::String* _MUSEUM_PERFORMANCE_EVENT_PREFIX; // 0x0
		// static const ::System::String* _MUSEUM_HIDE_MISSION_PERFORMANCE_EVENT; // 0x0
		// static const ::System::String* _MuseumCurrencyItemIDKey; // 0x0
		// static const ::System::String* _MUSEUM_END_PERFORMANCE_EVENT; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>* GetRandomComments(::RPG::Client::MuseumAreaData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>*(*)(::PVOID, ::RPG::Client::MuseumAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETRANDOMCOMMENTS_OFFSET))(this, a1);
		}

		::System::Void _UnInitCommentData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__UNINITCOMMENTDATA_OFFSET))(this);
		}

		::System::Void _ReadCommentConst()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__READCOMMENTCONST_OFFSET))(this);
		}

		::System::Void _PrepareComments()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__PREPARECOMMENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>* _GetCommentPool(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MuseumCommentsRow*>*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETCOMMENTPOOL_OFFSET))(this, a1, a2);
		}

		::System::Single _GetPositiveCommentProb(::RPG::Client::MuseumAreaData* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::MuseumAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETPOSITIVECOMMENTPROB_OFFSET))(this, a1);
		}

		static ::System::Int32 _GetCommentPoolIndex(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETCOMMENTPOOLINDEX_OFFSET))(a1, a2);
		}

		::RPG::Client::Promises::Promise* RefreshAllMissionData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_REFRESHALLMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RefreshAllUnlockMissionData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_REFRESHALLUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RefreshConfigLockMissionData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_REFRESHCONFIGLOCKMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean HaveHidePhaseMission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_HAVEHIDEPHASEMISSION_OFFSET))(this);
		}

		::System::Boolean IsChapterMissionReachLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_ISCHAPTERMISSIONREACHLIMIT_OFFSET))(this);
		}

		::System::Void _UnInitMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__UNINITMISSIONDATA_OFFSET))(this);
		}

		::System::Void _CreateAllMissionID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATEALLMISSIONID_OFFSET))(this);
		}

		::System::Void _ReceiveAllMissionData(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__RECEIVEALLMISSIONDATA_OFFSET))(this, a1);
		}

		::System::Void _ReadUnlockMissionID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__READUNLOCKMISSIONID_OFFSET))(this);
		}

		::System::Void _ReceiveUnlockMissionData(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__RECEIVEUNLOCKMISSIONDATA_OFFSET))(this, a1);
		}

		::System::Void _CreateAllForceMissionID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATEALLFORCEMISSIONID_OFFSET))(this);
		}

		::System::Void _CreateAllPhaseUnlockMissionID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATEALLPHASEUNLOCKMISSIONID_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _RefreshPhaseUnlockMissionData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHPHASEUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _RefreshForceMissionData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHFORCEMISSIONDATA_OFFSET))(this);
		}

		::System::Void _OnForceMissionTaken(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONFORCEMISSIONTAKEN_OFFSET))(this, a1);
		}

		::System::Boolean _CanTakeItemMission(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CANTAKEITEMMISSION_OFFSET))(this, a1);
		}

		::System::Int32 GetStartRelatedMissionCountByChapterID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETSTARTRELATEDMISSIONCOUNTBYCHAPTERID_OFFSET))(this);
		}

		::System::Boolean IsPhaseMissionStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_ISPHASEMISSIONSTART_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* get_AllMissionData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ALLMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* get_AllItemMissionData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ALLITEMMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>* get_AllStaffMissionData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MainMissionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ALLSTAFFMISSIONDATA_OFFSET))(this);
		}

		::System::UInt32 get_TakenItemMissionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_TAKENITEMMISSIONCOUNT_OFFSET))(this);
		}

		::System::Void set_TakenItemMissionCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_TAKENITEMMISSIONCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TakenStaffMissionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_TAKENSTAFFMISSIONCOUNT_OFFSET))(this);
		}

		::System::Void set_TakenStaffMissionCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_TAKENSTAFFMISSIONCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TakenMissionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_TAKENMISSIONCOUNT_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_AtlasUnlockMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ATLASUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_MarketUnlockMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MARKETUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_UpgradeUnlockMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_UPGRADEUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_TargetUnlockMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_TARGETUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean get_IsAtlasUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISATLASUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsMarketUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISMARKETUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsUpgradeUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISUPGRADEUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsTargetUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISTARGETUNLOCK_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_CurForceMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_CURFORCEMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_CurPhaseUnlockMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_CURPHASEUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_CurConfigLockMissionData()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_CURCONFIGLOCKMISSIONDATA_OFFSET))(this);
		}

		::System::UInt32 get_MuseumMissionLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMMISSIONLIMIT_OFFSET))(this);
		}

		::System::UInt32 get_MuseumMissionChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMMISSIONCHAPTERID_OFFSET))(this);
		}

		::System::Boolean get_IsForceMissionTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISFORCEMISSIONTAKEN_OFFSET))(this);
		}

		::System::Boolean get_IsPhaseUnlockMissionTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISPHASEUNLOCKMISSIONTAKEN_OFFSET))(this);
		}

		::System::Boolean get_IsConfigLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISCONFIGLOCKED_OFFSET))(this);
		}

		::System::UInt32 RandomGetTalkID(::RPG::GameCore::MuseumTalkTriggerType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::MuseumTalkTriggerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_RANDOMGETTALKID_OFFSET))(this, a1);
		}

		::System::UInt32 GetMustTriggerTalkID(::RPG::GameCore::MuseumTalkTriggerType a1, ::RPG::GameCore::MuseumTalkType a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::MuseumTalkTriggerType, ::RPG::GameCore::MuseumTalkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETMUSTTRIGGERTALKID_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID RandomGetTextIDByTalkID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_RANDOMGETTEXTIDBYTALKID_OFFSET))(this, a1);
		}

		::System::Void UpdateUnseenTalkMission(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_UPDATEUNSEENTALKMISSION_OFFSET))(this, a1, a2);
		}

		::System::Void _InitTalkData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__INITTALKDATA_OFFSET))(this);
		}

		::System::Void _UnInitTalkData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__UNINITTALKDATA_OFFSET))(this);
		}

		::System::Void _LoadTalkData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__LOADTALKDATA_OFFSET))(this);
		}

		::System::Void _CreateTalkMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATETALKMISSIONDATA_OFFSET))(this);
		}

		::System::Void _AddTalkID(::RPG::GameCore::MuseumDeskTalkConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumDeskTalkConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ADDTALKID_OFFSET))(this, a1);
		}

		::System::Void _AddMustTriggerTalkID(::RPG::GameCore::MuseumDeskTalkConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumDeskTalkConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ADDMUSTTRIGGERTALKID_OFFSET))(this, a1);
		}

		::System::Void _TryAddTalkMissionList(::RPG::GameCore::MuseumDeskTalkConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumDeskTalkConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYADDTALKMISSIONLIST_OFFSET))(this, a1);
		}

		::System::Void _TryUpdateUnseenMissionByTalkID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYUPDATEUNSEENMISSIONBYTALKID_OFFSET))(this, a1);
		}

		::System::Void _SetValidTalkIDsCache(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__SETVALIDTALKIDSCACHE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetHighestPriority(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETHIGHESTPRIORITY_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumStaffData* GetStaffData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MuseumStaffData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETSTAFFDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* GetMuseumInfo()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETMUSEUMINFO_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RemoveStaff(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_REMOVESTAFF_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RefreshStaffAvailable()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_REFRESHSTAFFAVAILABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MuseumStaffData*>* GetDisplayNpcStaffDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MuseumStaffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETDISPLAYNPCSTAFFDATAS_OFFSET))(this);
		}

		::System::Void TryNotifyRandomEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYRANDOMEVENT_OFFSET))(this);
		}

		::System::Boolean TryNotifyNewTurn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYNEWTURN_OFFSET))(this);
		}

		::System::Void TryNotifyTargetReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_TRYNOTIFYTARGETREWARD_OFFSET))(this);
		}

		::System::Boolean TryTriggerTutorialMissionPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_TRYTRIGGERTUTORIALMISSIONPERFORMANCE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdGetMuseumInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDGETMUSEUMINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdBuyNpcStuffScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDBUYNPCSTUFFSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdSetStuffToAreaScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDSETSTUFFTOAREASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdRemoveStuffFromAreaScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDREMOVESTUFFFROMAREASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdFinishCurTurnScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDFINISHCURTURNSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdUpgradeAreaScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDUPGRADEAREASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdUpgradeAreaStatScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDUPGRADEAREASTATSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdMuseumRandomEventQueryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDMUSEUMRANDOMEVENTQUERYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdMuseumRandomEventSelectScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDMUSEUMRANDOMEVENTSELECTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdTakeCollectRewardRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CMDTAKECOLLECTREWARDRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncMuseumInfoChangedScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMINFOCHANGEDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncMuseumFundsChangedScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMFUNDSCHANGEDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncGetStuffScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCGETSTUFFSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncGetExhibitScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCGETEXHIBITSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncMuseumRandomEventStartScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMRANDOMEVENTSTARTSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncMuseumTargetStartNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETSTARTNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncMuseumTargetMissionFinishNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETMISSIONFINISHNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncMuseumTargetRewardNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSYNCMUSEUMTARGETREWARDNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Boolean _HasTargetRewardCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__HASTARGETREWARDCACHE_OFFSET))(this);
		}

		::System::Void _CacheTargetReward(::BDDMKOIHCPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDDMKOIHCPK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CACHETARGETREWARD_OFFSET))(this, a1);
		}

		::System::Void _ClearTargetRewardCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CLEARTARGETREWARDCACHE_OFFSET))(this);
		}

		::System::Void _OnMainMissionTaken(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONMAINMISSIONTAKEN_OFFSET))(this, a1);
		}

		::System::Void _OnMainMissionFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONMAINMISSIONFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnMuseumPerformanceEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONMUSEUMPERFORMANCEEND_OFFSET))(this, a1);
		}

		::System::Void _OnShowLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONSHOWLOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void _BeginMuseumPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__BEGINMUSEUMPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean _TryNotifyPhaseUpgrade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYPHASEUPGRADE_OFFSET))(this);
		}

		::System::Void _ResetStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__RESETSTATUS_OFFSET))(this);
		}

		::System::Void _RefreshTakenRewardMuseumData(::IKADIECNGND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKADIECNGND*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHTAKENREWARDMUSEUMDATA_OFFSET))(this, a1);
		}

		::System::Void _RefreshStaffAvailable(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHSTAFFAVAILABLE_OFFSET))(this, a1);
		}

		::System::Void _RefreshEventStaffAvailable(::IKADIECNGND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKADIECNGND*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHEVENTSTAFFAVAILABLE_OFFSET))(this, a1);
		}

		::System::Void _RefreshEventStaffAvailable_1(::EJLFOBMAPEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJLFOBMAPEJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHEVENTSTAFFAVAILABLE_1_OFFSET))(this, a1);
		}

		::System::Void _OnRefreshEventStaffAvailable(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONREFRESHEVENTSTAFFAVAILABLE_OFFSET))(this, a1);
		}

		::System::Void _RefreshSingleStaffAvailable(::RPG::Client::MuseumStaffData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumStaffData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHSINGLESTAFFAVAILABLE_OFFSET))(this, a1, a2);
		}

		::System::Void _InitRewardQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__INITREWARDQUEST_OFFSET))(this);
		}

		::System::Void _RefreshFinishedQuest(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHFINISHEDQUEST_OFFSET))(this, a1);
		}

		::System::Void _CreateAllStaffsData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATEALLSTAFFSDATA_OFFSET))(this);
		}

		::System::Void _CreateAllStaffCollectionItemData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATEALLSTAFFCOLLECTIONITEMDATA_OFFSET))(this);
		}

		::System::Void _CreateAllExhibitCollectionItemData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__CREATEALLEXHIBITCOLLECTIONITEMDATA_OFFSET))(this);
		}

		::System::Void _OnBeforeMuseumDataChange(::EJLFOBMAPEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJLFOBMAPEJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONBEFOREMUSEUMDATACHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnBeforeMuseumDataChange_1(::IKADIECNGND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKADIECNGND*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ONBEFOREMUSEUMDATACHANGE_1_OFFSET))(this, a1);
		}

		::System::Void _TryNotifyMuseumExhibitGet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYMUSEUMEXHIBITGET_OFFSET))(this);
		}

		::System::Void _TryCachePhaseUpgrade(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYCACHEPHASEUPGRADE_OFFSET))(this, a1);
		}

		::System::Void _TryCacheTurnChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYCACHETURNCHANGE_OFFSET))(this);
		}

		::System::Void _TryCacheTurnResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYCACHETURNRESULT_OFFSET))(this);
		}

		::System::Void _UpdateUnseenTutorialMission(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__UPDATEUNSEENTUTORIALMISSION_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::MuseumTutorialTalkRow* _GetTutorialMissionPerformanceRow()
		{
			return ((::RPG::GameCore::MuseumTutorialTalkRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETTUTORIALMISSIONPERFORMANCEROW_OFFSET))(this);
		}

		::System::Boolean _IsHaveMissionEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__ISHAVEMISSIONEVENT_OFFSET))(this);
		}

		::System::Void _TryNotifyNewPhaseBegin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRYNOTIFYNEWPHASEBEGIN_OFFSET))(this, a1);
		}

		::System::Void _TriggerPerformanceAndExitMuseum(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__TRIGGERPERFORMANCEANDEXITMUSEUM_OFFSET))(this, a1);
		}

		::System::Void _RefreshFinishStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHFINISHSTATUS_OFFSET))(this);
		}

		::RPG::Client::MuseumData* get_MuseumData()
		{
			return ((::RPG::Client::MuseumData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>* get_AllStaffs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumStaffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ALLSTAFFS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MuseumAvatarItemData*>* GetAllMuseumAvatarItemDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MuseumAvatarItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETALLMUSEUMAVATARITEMDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MuseumExhibitItemData*>* GetAllExhibitItemDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MuseumExhibitItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GETALLEXHIBITITEMDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumAvatarItemData*>* get_AllMuseumAvatarItemData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumAvatarItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ALLMUSEUMAVATARITEMDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>* get_AllExhibitItemData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MuseumExhibitItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ALLEXHIBITITEMDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MuseumActivityQuestConfigRow*>* get_RewardQuestSeriesList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MuseumActivityQuestConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_REWARDQUESTSERIESLIST_OFFSET))(this);
		}

		::System::Void set_RewardQuestSeriesList(::System::Collections::Generic::List_1<::RPG::GameCore::MuseumActivityQuestConfigRow*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::MuseumActivityQuestConfigRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_REWARDQUESTSERIESLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_MuseumCurrencyConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMCURRENCYCONFIGID_OFFSET))(this);
		}

		::System::Void set_MuseumCurrencyConfigID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_MUSEUMCURRENCYCONFIGID_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumTurnResult* get_MuseumTurnResultCache()
		{
			return ((::RPG::Client::MuseumTurnResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMTURNRESULTCACHE_OFFSET))(this);
		}

		::System::Void set_MuseumTurnResultCache(::RPG::Client::MuseumTurnResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumTurnResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_MUSEUMTURNRESULTCACHE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWaitFinishTurnRsp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISWAITFINISHTURNRSP_OFFSET))(this);
		}

		::System::Void set_IsWaitFinishTurnRsp(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_ISWAITFINISHTURNRSP_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxStaffStats()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MAXSTAFFSTATS_OFFSET))(this);
		}

		::System::Void set_MaxStaffStats(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_MAXSTAFFSTATS_OFFSET))(this, a1);
		}

		::DEEJKBIMHAA* get_LogicRandom()
		{
			return ((::DEEJKBIMHAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_LOGICRANDOM_OFFSET))(this);
		}

		::System::Void set_LogicRandom(::DEEJKBIMHAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEEJKBIMHAA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_LOGICRANDOM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FinishedQuestList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_FINISHEDQUESTLIST_OFFSET))(this);
		}

		::System::Void set_FinishedQuestList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_FINISHEDQUESTLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotQuestSeries()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_REDDOTQUESTSERIES_OFFSET))(this);
		}

		::System::Void set_RedDotQuestSeries(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_REDDOTQUESTSERIES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotPhaseQuestList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_REDDOTPHASEQUESTLIST_OFFSET))(this);
		}

		::System::Void set_RedDotPhaseQuestList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_REDDOTPHASEQUESTLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PhaseQuestList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_PHASEQUESTLIST_OFFSET))(this);
		}

		::System::Void set_PhaseQuestList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_PHASEQUESTLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAllAreaGotFullRenewPoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISALLAREAGOTFULLRENEWPOINT_OFFSET))(this);
		}

		::System::Void set_IsAllAreaGotFullRenewPoint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_ISALLAREAGOTFULLRENEWPOINT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISINPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean get_IsAllFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISALLFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsAlreadyFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_ISALREADYFINISH_OFFSET))(this);
		}

		::System::Void set_IsAlreadyFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_SET_ISALREADYFINISH_OFFSET))(this, a1);
		}

		::System::Int32 get_ExhibitItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_EXHIBITITEMCOUNT_OFFSET))(this);
		}

		::System::Int32 get_StaffCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_STAFFCOUNT_OFFSET))(this);
		}

		::System::Int32 get_MuseumAvatarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_MUSEUMAVATARCOUNT_OFFSET))(this);
		}

		::System::Int32 get_UnlockAvatarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_UNLOCKAVATARCOUNT_OFFSET))(this);
		}

		::System::Int32 get_UnlockExhibitItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE_GET_UNLOCKEXHIBITITEMCOUNT_OFFSET))(this);
		}

		::System::Void _RefreshConfigLockMissionData_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__REFRESHCONFIGLOCKMISSIONDATA_B__14_0_OFFSET))(this);
		}

		::System::Boolean _GetStartRelatedMissionCountByChapterID_b__28_0(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE__GETSTARTRELATEDMISSIONCOUNTBYCHAPTERID_B__28_0_OFFSET))(this, a1);
		}

	};
}
