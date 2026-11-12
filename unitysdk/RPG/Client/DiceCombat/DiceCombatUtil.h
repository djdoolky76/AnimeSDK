#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatCommunicateType.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ChatMessageInviteData; }
namespace RPG::Client { class DiceCombatBigAvatarCardDisplayer; }
namespace RPG::Client { class DiceCombatDiceConfigData; }
namespace RPG::Client { class DiceCombatDiceRarityIconDisplayer; }
namespace RPG::Client { class DiceCombatModule; }
namespace RPG::Client { class DiceCombatOutOfBattleDiceModel; }
namespace RPG::Client { class OfferingRewardData; }
namespace RPG::Client::DiceCombat { class DiceCombatAvatarLevelData; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionCardInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionDiceInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatCommunicateData; }
namespace RPG::Client::DiceCombat { class DiceCombatGameFlow; }
namespace RPG::Client::DiceCombat { class DiceCombatGlossaryTermData; }
namespace RPG::Client::DiceCombat { class DiceCombatPVPLobby; }
namespace RPG::Client::DiceCombat { class DiceCombatRankLevelData; }
namespace RPG::Client::DiceCombat { class DiceCombatShopData; }
namespace RPG::Client::DiceCombat { class DiceCombatShopGoodData; }
namespace RPG::Client::DiceCombat { class DiceCombatSpecialRuleGroupData; }
namespace RPG::Client::DiceCombat { class DiceCombatStageInfo; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_BINDPLAYABLEDIRECTORANIMATOR_OFFSET UNITYSDK_OFFSET(0xD6534B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CANAVATARUSEANYNUMBERDICEFORATTACK_OFFSET UNITYSDK_OFFSET(0xD64C9D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CANTRANSFERTOENTRANCE_OFFSET UNITYSDK_OFFSET(0xD654C60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CCTOR_OFFSET UNITYSDK_OFFSET(0xD656A70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CHECKPROGRESSFINISH_OFFSET UNITYSDK_OFFSET(0xD649790)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CHECKRETURNMAZEBYSTAGEID_OFFSET UNITYSDK_OFFSET(0xD652960)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CHECKSHOWPROGRESSPAGEBYSTAGEID_OFFSET UNITYSDK_OFFSET(0xD64BE70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CREATEBIGAVATARCARDDISPLAYER_OFFSET UNITYSDK_OFFSET(0xD652120)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CREATEOUTOFBATTLEDICEMODEL_OFFSET UNITYSDK_OFFSET(0xD6520D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CREATERARITYICONDISPLAYER_OFFSET UNITYSDK_OFFSET(0xD652250)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_FETCHDEPENDANTSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0xD649370)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETACTIVITYAVATARREWARDQUESTID_OFFSET UNITYSDK_OFFSET(0xD64C7E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xD64C720)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETACTIVITYID_OFFSET UNITYSDK_OFFSET(0xD64C640)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLCOLLECTIONCARDINFOBYRARITY_OFFSET UNITYSDK_OFFSET(0xD650040)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLCOLLECTIONSPECIALDICEINFO_OFFSET UNITYSDK_OFFSET(0xD650920)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLCOMMUNICATEDATABYTYPE_OFFSET UNITYSDK_OFFSET(0xD64D2C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLRANKLEVELINFO_OFFSET UNITYSDK_OFFSET(0xD64CDA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETASSETPATHBYDICEID_OFFSET UNITYSDK_OFFSET(0xD64A490)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVAILABLECOMMUNICATEIDLIST_OFFSET UNITYSDK_OFFSET(0xD64ED70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARDEFAULTSPECIALDICEID_OFFSET UNITYSDK_OFFSET(0xD651EA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARFINALATTACKVOICEPATH_OFFSET UNITYSDK_OFFSET(0xD656650)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARHEADICONIMGPATH_OFFSET UNITYSDK_OFFSET(0xD6555D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARHIGHLEVELBGIMGPATH_OFFSET UNITYSDK_OFFSET(0xD655E10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARHIGHLEVELBGUI3DIMGPATH_OFFSET UNITYSDK_OFFSET(0xD656230)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARIMGPATH_OFFSET UNITYSDK_OFFSET(0xD654D90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARINFOBYID_OFFSET UNITYSDK_OFFSET(0xD64CB60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARLEVELDATABYID_OFFSET UNITYSDK_OFFSET(0xD652070)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARSHOPICONIMGPATH_OFFSET UNITYSDK_OFFSET(0xD6559F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARUI3DIMGPATH_OFFSET UNITYSDK_OFFSET(0xD6551B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARUPGRADEMAXLEVEL_OFFSET UNITYSDK_OFFSET(0xD64F7F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETBANTUTORIALSPECIALSTAGEIDLIST_OFFSET UNITYSDK_OFFSET(0xD64EF90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETBILLBOARDANDOPTIONPRESUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xD6492A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETBUYMULTIGOODSCURRENCY_OFFSET UNITYSDK_OFFSET(0xD653340)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCARDMAXRARITY_OFFSET UNITYSDK_OFFSET(0xD64DBC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATDICEAPPEARANDDISAPPEAREFFECTIDVALUE_OFFSET UNITYSDK_OFFSET(0xD64E5D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATDICECOLLAPSETIMEVALUE_OFFSET UNITYSDK_OFFSET(0xD64E2A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATDICECOLLAPSEWITHDEFENDERADDITIVEPOINTTIMEVALUE_OFFSET UNITYSDK_OFFSET(0xD64E3B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATDICEV2COLLAPSETIMEVALUE_OFFSET UNITYSDK_OFFSET(0xD64E4C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATHEALEFFECTIDVALUE_OFFSET UNITYSDK_OFFSET(0xD64E6D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATHUGEDAMAGEVALUE_OFFSET UNITYSDK_OFFSET(0xD64E1A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATROLLDICEMAXSIMULATIONTIME_OFFSET UNITYSDK_OFFSET(0xD64EA50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMMUNICATECOOLDOWNMILLISECOND_OFFSET UNITYSDK_OFFSET(0xD64D8C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMMUNICATEDATAS_OFFSET UNITYSDK_OFFSET(0xD64D5C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMMUNICATEREMAINMILLISECOND_OFFSET UNITYSDK_OFFSET(0xD64D7C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOUNTDOWNSTARTHINTVALUE_OFFSET UNITYSDK_OFFSET(0xD64E0A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCURCAMPAIGNID_OFFSET UNITYSDK_OFFSET(0xD649EC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCUREARLYACCESSCONTENTID_OFFSET UNITYSDK_OFFSET(0xD654B00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCURRENCYICONPATH_OFFSET UNITYSDK_OFFSET(0xD64F9C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCURRENTSTAGEINFO_OFFSET UNITYSDK_OFFSET(0xD649DD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICECHANGEPERMISSIONITEMID_OFFSET UNITYSDK_OFFSET(0xD64F460)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICECOMBATMAINPAGEDICELIST_OFFSET UNITYSDK_OFFSET(0xD64EB50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICEFACEMATPATHBYDICEID_OFFSET UNITYSDK_OFFSET(0xD64A570)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICEINFOBYID_OFFSET UNITYSDK_OFFSET(0xD651630)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICEMAXRARITY_OFFSET UNITYSDK_OFFSET(0xD64DAC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICERARITYICONPATH_OFFSET UNITYSDK_OFFSET(0xD64A210)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICETYPEICONPATHBYID_OFFSET UNITYSDK_OFFSET(0xD64A690)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDUSTITEMID_OFFSET UNITYSDK_OFFSET(0xD64DCC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETGLOSSARYDATASBYIDLIST_OFFSET UNITYSDK_OFFSET(0xD652380)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETGLOSSARYIDLISTBYAVATARID_OFFSET UNITYSDK_OFFSET(0xD6544D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETMAINPAGEROLLDICECOOLDOWNMILLISECOND_OFFSET UNITYSDK_OFFSET(0xD64E950)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNEXTCAMPAIGNID_OFFSET UNITYSDK_OFFSET(0xD6497F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNEXTSTAGEINFO_OFFSET UNITYSDK_OFFSET(0xD649990)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNPCENTRANCEPAGECAMPAIGNTITLEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD64E890)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNPCENTRANCEPAGENORMALTITLEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD64E7D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGREWARDCARDID_OFFSET UNITYSDK_OFFSET(0xD64DDC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGREWARDCARDREQUIREDLEVEL_OFFSET UNITYSDK_OFFSET(0xD64DEC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0xD64F1B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGTYPEID_OFFSET UNITYSDK_OFFSET(0xD64DFC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETORDEREDDICEINFOLISTBYIDLIST_1_OFFSET UNITYSDK_OFFSET(0xD651850)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETORDEREDDICEINFOLISTBYIDLIST_OFFSET UNITYSDK_OFFSET(0xD6516D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOWNDUSTCOUNT_OFFSET UNITYSDK_OFFSET(0xD64F370)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOWNEDDICEINFOLISTBYRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xD650E00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETPLAYERISFEMALE_OFFSET UNITYSDK_OFFSET(0xD64F270)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETRANKLEVELINFOBYSCORE_OFFSET UNITYSDK_OFFSET(0xD64D120)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETRANKSCORE_OFFSET UNITYSDK_OFFSET(0xD64CC00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETSPECRULEGROUPDATASBYMAP_OFFSET UNITYSDK_OFFSET(0xD651BC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETSTAGEIDBYCAMPAIGNID_OFFSET UNITYSDK_OFFSET(0xD649B00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETSUBMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0xD6496F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETUPGRADEAVATARDUSTCOST_OFFSET UNITYSDK_OFFSET(0xD64F560)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETWEATHERDIALOGPERFORMANCETIME_OFFSET UNITYSDK_OFFSET(0xD64D9C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GET_GAMEFLOW_OFFSET UNITYSDK_OFFSET(0xD649020)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GET_MODULE_OFFSET UNITYSDK_OFFSET(0xD648FA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GET_PVPLOBBY_OFFSET UNITYSDK_OFFSET(0xD649120)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_HASENOUGHCURRENCYBUYGOOD_OFFSET UNITYSDK_OFFSET(0xD652FF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_HASENOUGHCURRENCYBUYMULTIGOODS_OFFSET UNITYSDK_OFFSET(0xD653160)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISACTIVITYINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xD64C460)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISAVATARSKILLHASGLOSSARY_OFFSET UNITYSDK_OFFSET(0xD654410)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISINENTRANCEFLOOR_OFFSET UNITYSDK_OFFSET(0xD654810)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISMAXRANKLEVEL_OFFSET UNITYSDK_OFFSET(0xD64C8C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISNEWBOSSAVAILABLE_OFFSET UNITYSDK_OFFSET(0xD64A070)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISPVPNEWUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD64CCF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISPVPUNLOCK_OFFSET UNITYSDK_OFFSET(0xD64C3A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISSHOWBILLBOARDANDOPTION_OFFSET UNITYSDK_OFFSET(0xD6491E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISUNLOCKCHANGESPECIALDICE_OFFSET UNITYSDK_OFFSET(0xD652740)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_REPEATEDAVATARDUSTREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xD653A70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_REPEATEDDICEDUSTREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xD653D50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SENDDICECOMBATMAINPAGEROLLDICECSREQ_OFFSET UNITYSDK_OFFSET(0xD64FF50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SENDDICECOMBATMODIFYAVATARDICECSREQ_OFFSET UNITYSDK_OFFSET(0xD64FD10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SENDDICECOMBATUPGRADEAVATARCSREQ_OFFSET UNITYSDK_OFFSET(0xD64FAE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SETCHENLINGITEMMATERIAL_OFFSET UNITYSDK_OFFSET(0xD653FF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SETSTREAMINGJOBALLFINISHCALLBACKONCE_OFFSET UNITYSDK_OFFSET(0xD654D20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SHOWAVATARSKILLGLOSSARYDIALOG_OFFSET UNITYSDK_OFFSET(0xD654210)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SHOWCOMMONLOADINGDIALOG_OFFSET UNITYSDK_OFFSET(0xD654120)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SORTFOREDITTEAMAVATARLIST_OFFSET UNITYSDK_OFFSET(0xD64A330)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SORTSHOPDATALIST_OFFSET UNITYSDK_OFFSET(0xD652B00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SORTSHOPLIST_OFFSET UNITYSDK_OFFSET(0xD652A10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SWIPEDICEMODEL_OFFSET UNITYSDK_OFFSET(0xD652850)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_TRANSFERTOENTRANCE_OFFSET UNITYSDK_OFFSET(0xD654970)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_TRYACCEPTMATCHINVITATIONBYINVITEDATA_OFFSET UNITYSDK_OFFSET(0xD654A90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_TRYACCEPTMATCHINVITATION_OFFSET UNITYSDK_OFFSET(0xD654600)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL__GETOWNEDDICEINFOLISTBYRECOMMENDATION_G__GETSORTPRIORITY_72_0_OFFSET UNITYSDK_OFFSET(0xD656BA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL__SORTFOREDITTEAMAVATARLISTCOMPARER_OFFSET UNITYSDK_OFFSET(0xD64A760)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUtil_TypeDefinitionIndex = 78424;

	class DiceCombatUtil : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_EntranceID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client.DiceCombat", "DiceCombatUtil")->GetStaticField(0x8370);
		}

		static ::System::UInt32* StaticGet_PvpUnlockSubMissionID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client.DiceCombat", "DiceCombatUtil")->GetStaticField(0x8374);
		}

		// static const ::System::String* Dice_Gameplay_State_Group_Name; // 0x0
		// static const ::System::String* Dice_Gameplay_In_State_Name; // 0x0
		// static const ::System::String* Dice_Gameplay_Out_State_Name; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CCTOR_OFFSET))();
		}

		static ::RPG::Client::DiceCombatModule* get_Module()
		{
			return ((::RPG::Client::DiceCombatModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GET_MODULE_OFFSET))();
		}

		static ::RPG::Client::DiceCombat::DiceCombatGameFlow* get_GameFlow()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatGameFlow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GET_GAMEFLOW_OFFSET))();
		}

		static ::RPG::Client::DiceCombat::DiceCombatPVPLobby* get_PVPLobby()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatPVPLobby*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GET_PVPLOBBY_OFFSET))();
		}

		static ::System::Boolean IsShowBillboardAndOption()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISSHOWBILLBOARDANDOPTION_OFFSET))();
		}

		static ::System::UInt32 GetBillboardAndOptionPreSubMissionID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETBILLBOARDANDOPTIONPRESUBMISSIONID_OFFSET))();
		}

		static ::System::Void FetchDependantSubMissionIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_FETCHDEPENDANTSUBMISSIONIDS_OFFSET))(a1);
		}

		static ::RPG::GameCore::SubMissionState GetSubMissionState(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SubMissionState(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETSUBMISSIONSTATE_OFFSET))(a1);
		}

		static ::System::Boolean CheckProgressFinish()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CHECKPROGRESSFINISH_OFFSET))();
		}

		static ::RPG::Client::DiceCombat::DiceCombatStageInfo* GetNextStageInfo()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatStageInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNEXTSTAGEINFO_OFFSET))();
		}

		static ::RPG::Client::DiceCombat::DiceCombatStageInfo* GetCurrentStageInfo()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatStageInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCURRENTSTAGEINFO_OFFSET))();
		}

		static ::System::UInt32 GetCurCampaignID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCURCAMPAIGNID_OFFSET))();
		}

		static ::System::UInt32 GetNextCampaignID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNEXTCAMPAIGNID_OFFSET))();
		}

		static ::System::UInt32 GetStageIDByCampaignID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETSTAGEIDBYCAMPAIGNID_OFFSET))(a1);
		}

		static ::System::Boolean IsNewBossAvailable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISNEWBOSSAVAILABLE_OFFSET))();
		}

		static ::System::String* GetDiceRarityIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICERARITYICONPATH_OFFSET))(a1);
		}

		static ::System::Void SortForEditTeamAvatarList(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SORTFOREDITTEAMAVATARLIST_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetAssetPathByDiceID(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETASSETPATHBYDICEID_OFFSET))(a1);
		}

		static ::System::String* GetDiceFaceMatPathByDiceID(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICEFACEMATPATHBYDICEID_OFFSET))(a1);
		}

		static ::System::String* GetDiceTypeIconPathByID(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICETYPEICONPATHBYID_OFFSET))(a1);
		}

		static ::System::Int32 _SortForEditTeamAvatarListComparer(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::UInt32 a4)
		{
			return ((::System::Int32(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL__SORTFOREDITTEAMAVATARLISTCOMPARER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CheckShowProgressPageByStageID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CHECKSHOWPROGRESSPAGEBYSTAGEID_OFFSET))(a1);
		}

		static ::System::Boolean IsPVPUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISPVPUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsActivityInSchedule()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISACTIVITYINSCHEDULE_OFFSET))();
		}

		static ::System::UInt32 GetActivityID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETACTIVITYID_OFFSET))();
		}

		static ::RPG::Client::ActivityData* GetActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETACTIVITYDATA_OFFSET))();
		}

		static ::System::UInt32 GetActivityAvatarRewardQuestID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETACTIVITYAVATARREWARDQUESTID_OFFSET))();
		}

		static ::System::Boolean IsMaxRankLevel(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISMAXRANKLEVEL_OFFSET))(a1);
		}

		static ::System::Boolean CanAvatarUseAnyNumberDiceForAttack(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CANAVATARUSEANYNUMBERDICEFORATTACK_OFFSET))(a1);
		}

		static ::System::UInt32 GetRankScore()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETRANKSCORE_OFFSET))();
		}

		static ::System::Boolean IsPVPNewUnlocked()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISPVPNEWUNLOCKED_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatRankLevelData*>* GetAllRankLevelInfo()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatRankLevelData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLRANKLEVELINFO_OFFSET))();
		}

		static ::RPG::Client::DiceCombat::DiceCombatRankLevelData* GetRankLevelInfoByScore(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatRankLevelData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETRANKLEVELINFOBYSCORE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCommunicateData*>* GetAllCommunicateDataByType(::RPG::GameCore::DiceCombatCommunicateType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCommunicateData*>*(*)(::RPG::GameCore::DiceCombatCommunicateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLCOMMUNICATEDATABYTYPE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCommunicateData*>* GetCommunicateDatas(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::RPG::GameCore::DiceCombatCommunicateType a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCommunicateData*>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::DiceCombatCommunicateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMMUNICATEDATAS_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetCommunicateRemainMilliSecond()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMMUNICATEREMAINMILLISECOND_OFFSET))();
		}

		static ::System::UInt32 GetCommunicateCooldownMilliSecond()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMMUNICATECOOLDOWNMILLISECOND_OFFSET))();
		}

		static ::System::UInt32 GetWeatherDialogPerformanceTime()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETWEATHERDIALOGPERFORMANCETIME_OFFSET))();
		}

		static ::System::UInt32 GetDiceMaxRarity()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICEMAXRARITY_OFFSET))();
		}

		static ::System::UInt32 GetCardMaxRarity()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCARDMAXRARITY_OFFSET))();
		}

		static ::System::UInt32 GetDustItemID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDUSTITEMID_OFFSET))();
		}

		static ::System::UInt32 GetOfferingRewardCardID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGREWARDCARDID_OFFSET))();
		}

		static ::System::UInt32 GetOfferingRewardCardRequiredLevel()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGREWARDCARDREQUIREDLEVEL_OFFSET))();
		}

		static ::System::UInt32 GetOfferingTypeID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGTYPEID_OFFSET))();
		}

		static ::System::UInt32 GetCountDownStartHintValue()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOUNTDOWNSTARTHINTVALUE_OFFSET))();
		}

		static ::System::UInt32 GetCombatHugeDamageValue()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATHUGEDAMAGEVALUE_OFFSET))();
		}

		static ::System::Single GetCombatDiceCollapseTimeValue()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATDICECOLLAPSETIMEVALUE_OFFSET))();
		}

		static ::System::Single GetCombatDiceCollapseWithDefenderAdditivePointTimeValue()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATDICECOLLAPSEWITHDEFENDERADDITIVEPOINTTIMEVALUE_OFFSET))();
		}

		static ::System::Single GetCombatDiceV2CollapseTimeValue()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATDICEV2COLLAPSETIMEVALUE_OFFSET))();
		}

		static ::System::UInt32 GetCombatDiceAppearAndDisappearEffectIDValue()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATDICEAPPEARANDDISAPPEAREFFECTIDVALUE_OFFSET))();
		}

		static ::System::UInt32 GetCombatHealEffectIDValue()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATHEALEFFECTIDVALUE_OFFSET))();
		}

		static ::System::String* GetNPCEntrancePageNormalTitleImagePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNPCENTRANCEPAGENORMALTITLEIMAGEPATH_OFFSET))();
		}

		static ::System::String* GetNPCEntrancePageCampaignTitleImagePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETNPCENTRANCEPAGECAMPAIGNTITLEIMAGEPATH_OFFSET))();
		}

		static ::System::UInt32 GetMainPageRollDiceCoolDownMilliSecond()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETMAINPAGEROLLDICECOOLDOWNMILLISECOND_OFFSET))();
		}

		static ::System::Int32 GetCombatRollDiceMaxSimulationTime()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCOMBATROLLDICEMAXSIMULATIONTIME_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetDiceCombatMainPageDiceList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICECOMBATMAINPAGEDICELIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetAvailableCommunicateIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVAILABLECOMMUNICATEIDLIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetBanTutorialSpecialStageIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETBANTUTORIALSPECIALSTAGEIDLIST_OFFSET))();
		}

		static ::RPG::Client::OfferingRewardData* GetOfferingRewardData()
		{
			return ((::RPG::Client::OfferingRewardData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOFFERINGREWARDDATA_OFFSET))();
		}

		static ::System::Boolean GetPlayerIsFemale()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETPLAYERISFEMALE_OFFSET))();
		}

		static ::System::UInt32 GetOwnDustCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOWNDUSTCOUNT_OFFSET))();
		}

		static ::System::UInt32 GetDiceChangePermissionItemID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICECHANGEPERMISSIONITEMID_OFFSET))();
		}

		static ::System::UInt32 GetUpgradeAvatarDustCost(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETUPGRADEAVATARDUSTCOST_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetAvatarUpgradeMaxLevel(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARUPGRADEMAXLEVEL_OFFSET))(a1);
		}

		static ::System::String* GetCurrencyIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCURRENCYICONPATH_OFFSET))(a1);
		}

		static ::System::Void SendDiceCombatUpgradeAvatarCsReq(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SENDDICECOMBATUPGRADEAVATARCSREQ_OFFSET))(a1);
		}

		static ::System::Void SendDiceCombatModifyAvatarDiceCsReq(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SENDDICECOMBATMODIFYAVATARDICECSREQ_OFFSET))(a1, a2);
		}

		static ::System::Void SendDiceCombatMainPageRollDiceCsReq()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SENDDICECOMBATMAINPAGEROLLDICECSREQ_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*>* GetAllCollectionCardInfoByRarity(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLCOLLECTIONCARDINFOBYRARITY_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>* GetAllCollectionSpecialDiceInfo()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETALLCOLLECTIONSPECIALDICEINFO_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>* GetOwnedDiceInfoListByRecommendation(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETOWNEDDICEINFOLISTBYRECOMMENDATION_OFFSET))(a1);
		}

		static ::RPG::Client::DiceCombatDiceConfigData* GetDiceInfoByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombatDiceConfigData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETDICEINFOBYID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceConfigData*>* GetOrderedDiceInfoListByIDList(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceConfigData*>*(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETORDEREDDICEINFOLISTBYIDLIST_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceConfigData*>* GetOrderedDiceInfoListByIDList_1(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceConfigData*>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETORDEREDDICEINFOLISTBYIDLIST_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*>* GetSpecRuleGroupDatasByMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*>*(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETSPECRULEGROUPDATASBYMAP_OFFSET))(a1);
		}

		static ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* GetAvatarInfoByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARINFOBYID_OFFSET))(a1);
		}

		static ::System::UInt32 GetAvatarDefaultSpecialDiceID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARDEFAULTSPECIALDICEID_OFFSET))(a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatAvatarLevelData* GetAvatarLevelDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatAvatarLevelData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARLEVELDATABYID_OFFSET))(a1);
		}

		static ::RPG::Client::DiceCombatOutOfBattleDiceModel* CreateOutOfBattleDiceModel(::System::UInt32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::RPG::Client::DiceCombatOutOfBattleDiceModel*(*)(::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CREATEOUTOFBATTLEDICEMODEL_OFFSET))(a1, a2);
		}

		static ::RPG::Client::DiceCombatBigAvatarCardDisplayer* CreateBigAvatarCardDisplayer(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::DiceCombatBigAvatarCardDisplayer*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CREATEBIGAVATARCARDDISPLAYER_OFFSET))(a1);
		}

		static ::RPG::Client::DiceCombatDiceRarityIconDisplayer* CreateRarityIconDisplayer(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::DiceCombatDiceRarityIconDisplayer*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CREATERARITYICONDISPLAYER_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*>* GetGlossaryDatasByIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETGLOSSARYDATASBYIDLIST_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsUnlockChangeSpecialDice()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISUNLOCKCHANGESPECIALDICE_OFFSET))();
		}

		static ::System::Void SwipeDiceModel(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SWIPEDICEMODEL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CheckReturnMazeByStageID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CHECKRETURNMAZEBYSTAGEID_OFFSET))(a1);
		}

		static ::System::Int32 SortShopList(::RPG::Client::DiceCombat::DiceCombatShopData* a1, ::RPG::Client::DiceCombat::DiceCombatShopData* a2)
		{
			return ((::System::Int32(*)(::RPG::Client::DiceCombat::DiceCombatShopData*, ::RPG::Client::DiceCombat::DiceCombatShopData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SORTSHOPLIST_OFFSET))(a1, a2);
		}

		static ::System::Int32 SortShopDataList(::RPG::Client::DiceCombat::DiceCombatShopGoodData* a1, ::RPG::Client::DiceCombat::DiceCombatShopGoodData* a2)
		{
			return ((::System::Int32(*)(::RPG::Client::DiceCombat::DiceCombatShopGoodData*, ::RPG::Client::DiceCombat::DiceCombatShopGoodData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SORTSHOPDATALIST_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasEnoughCurrencyBuyGood(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_HASENOUGHCURRENCYBUYGOOD_OFFSET))(a1);
		}

		static ::System::Boolean HasEnoughCurrencyBuyMultiGoods(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_HASENOUGHCURRENCYBUYMULTIGOODS_OFFSET))(a1);
		}

		static ::System::UInt32 GetBuyMultiGoodsCurrency(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETBUYMULTIGOODSCURRENCY_OFFSET))(a1);
		}

		static ::System::Void BindPlayableDirectorAnimator(::UnityEngine::Playables::PlayableDirector* a1, ::System::String* a2, ::UnityEngine::Animator* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::System::String*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_BINDPLAYABLEDIRECTORANIMATOR_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 RepeatedAvatarDustRewardCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_REPEATEDAVATARDUSTREWARDCOUNT_OFFSET))(a1);
		}

		static ::System::UInt32 RepeatedDiceDustRewardCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_REPEATEDDICEDUSTREWARDCOUNT_OFFSET))(a1);
		}

		static ::System::Void SetChenLingItemMaterial(::UnityEngine::Transform* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SETCHENLINGITEMMATERIAL_OFFSET))(a1, a2);
		}

		static ::System::Void ShowCommonLoadingDialog(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SHOWCOMMONLOADINGDIALOG_OFFSET))(a1);
		}

		static ::System::Void ShowAvatarSkillGlossaryDialog(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SHOWAVATARSKILLGLOSSARYDIALOG_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetGlossaryIDListByAvatarID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETGLOSSARYIDLISTBYAVATARID_OFFSET))(a1);
		}

		static ::System::Boolean IsAvatarSKillHasGlossary(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISAVATARSKILLHASGLOSSARY_OFFSET))(a1);
		}

		static ::System::Void TryAcceptMatchInvitation(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_TRYACCEPTMATCHINVITATION_OFFSET))(a1);
		}

		static ::System::Void TryAcceptMatchInvitationByInviteData(::RPG::Client::ChatMessageInviteData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ChatMessageInviteData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_TRYACCEPTMATCHINVITATIONBYINVITEDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsInEntranceFloor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_ISINENTRANCEFLOOR_OFFSET))();
		}

		static ::System::Void TransferToEntrance(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_TRANSFERTOENTRANCE_OFFSET))(a1, a2);
		}

		static ::System::Boolean CanTransferToEntrance()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_CANTRANSFERTOENTRANCE_OFFSET))();
		}

		static ::System::UInt32 GetCurEarlyAccessContentID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETCUREARLYACCESSCONTENTID_OFFSET))();
		}

		static ::System::Void SetStreamingJobAllFinishCallbackOnce(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_SETSTREAMINGJOBALLFINISHCALLBACKONCE_OFFSET))(a1);
		}

		static ::System::String* GetAvatarImgPath(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::String*(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARIMGPATH_OFFSET))(a1);
		}

		static ::System::String* GetAvatarUI3DImgPath(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::String*(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARUI3DIMGPATH_OFFSET))(a1);
		}

		static ::System::String* GetAvatarHeadIconImgPath(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::String*(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARHEADICONIMGPATH_OFFSET))(a1);
		}

		static ::System::String* GetAvatarShopIconImgPath(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::String*(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARSHOPICONIMGPATH_OFFSET))(a1);
		}

		static ::System::String* GetAvatarHighLevelBGImgPath(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::String*(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARHIGHLEVELBGIMGPATH_OFFSET))(a1);
		}

		static ::System::String* GetAvatarHighLevelBGUI3DImgPath(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::String*(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARHIGHLEVELBGUI3DIMGPATH_OFFSET))(a1);
		}

		static ::System::String* GetAvatarFinalAttackVoicePath(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* a1)
		{
			return ((::System::String*(*)(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL_GETAVATARFINALATTACKVOICEPATH_OFFSET))(a1);
		}

		static ::System::Int32 _GetOwnedDiceInfoListByRecommendation_g__GetSortPriority_72_0(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* a1)
		{
			return ((::System::Int32(*)(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL__GETOWNEDDICEINFOLISTBYRECOMMENDATION_G__GETSORTPRIORITY_72_0_OFFSET))(a1);
		}

	};
}
