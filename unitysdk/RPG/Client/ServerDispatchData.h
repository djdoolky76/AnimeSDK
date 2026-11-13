#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JAEJPFGMAAO.h"
#include "unitysdk/RPG/Client/ServerDispatchReturnCode.h"
#include "unitysdk/System/Object.h"
class EBIPBHFLPHL;
class EPFAOLJKOOK;
namespace RPG::Client { class ServerDispatchData; }
namespace RPG::Client { class ServerStopInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_SERVERDISPATCHDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0A2C10)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ANDROIDMIDDLEPACKAGEENABLE_OFFSET UNITYSDK_OFFSET(0x1C0A1810)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ASBRELOGINDESC_OFFSET UNITYSDK_OFFSET(0x1C0A16F0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ASBRELOGINTYPE_OFFSET UNITYSDK_OFFSET(0x1C0A1650)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ASSETBUNDLEVERSIONUPDATEURLWITHSUFFIX_OFFSET UNITYSDK_OFFSET(0x1C0A1530)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ASSETBUNDLEVERSIONUPDATEURL_OFFSET UNITYSDK_OFFSET(0x1C0A1460)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_AUDIOBUNDLEVERSIONUPDATEURLWITHSUFFIX_OFFSET UNITYSDK_OFFSET(0x1C0A1560)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_AUDIOBUNDLEVERSIONUPDATEURL_OFFSET UNITYSDK_OFFSET(0x1C0A14E0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_BANAPPEALURL_OFFSET UNITYSDK_OFFSET(0x1C0A18F0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_BASEASSETBUNDLEVERSIONUPDATEURL_OFFSET UNITYSDK_OFFSET(0x1C0A1480)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_CDNIPV6ENABLE_OFFSET UNITYSDK_OFFSET(0x1C0A17D0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_CLOSEREDEEMCODE_OFFSET UNITYSDK_OFFSET(0x1C0A17F0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_DESIGNDATABUNDLEVERSIONUPDATEURLWITHSUFFIX_OFFSET UNITYSDK_OFFSET(0x1C0A1520)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_DESIGNDATABUNDLEVERSIONUPDATEURL_OFFSET UNITYSDK_OFFSET(0x1C0A1440)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_DESIGNDATARELOGINDESC_OFFSET UNITYSDK_OFFSET(0x1C0A1630)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_DESIGNDATARELOGINTYPE_OFFSET UNITYSDK_OFFSET(0x1C0A15A0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_EVENTTRACKINGOPEN_OFFSET UNITYSDK_OFFSET(0x1C0A1790)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_FTCSWITCH_OFFSET UNITYSDK_OFFSET(0x1C0A1AB0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_GAMESTARTCUSTOMERSERVICEURL_OFFSET UNITYSDK_OFFSET(0x1C0A18D0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_GRIDFIGHTGAMEREFCDNURL_OFFSET UNITYSDK_OFFSET(0x1C0A1A10)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_GRIDFIGHTGAMEREFCOLORHEADERKEY_OFFSET UNITYSDK_OFFSET(0x1C0A1A70)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_GRIDFIGHTGAMEREFCOLORHEADERVALUE_OFFSET UNITYSDK_OFFSET(0x1C0A1A90)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_GRIDFIGHTGAMEREFH5URL_OFFSET UNITYSDK_OFFSET(0x1C0A1A30)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_GRIDFIGHTINTROH5URL_OFFSET UNITYSDK_OFFSET(0x1C0A1A50)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_HASCLOUDGAMEURL_OFFSET UNITYSDK_OFFSET(0x1C0A1390)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_HASOFFICIALCOMMUNITYURL_OFFSET UNITYSDK_OFFSET(0x1C0A12E0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_IFIXPATCHREVISION_OFFSET UNITYSDK_OFFSET(0x1C0A1180)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_IFIXPATCHVERSIONUPDATEURL_OFFSET UNITYSDK_OFFSET(0x1C0A1500)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_IOSEXAM_OFFSET UNITYSDK_OFFSET(0x1C0A17B0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C0A1570)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ISASBFORCEKICK_OFFSET UNITYSDK_OFFSET(0x1C0A16C0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ISASBIDLEKICK_OFFSET UNITYSDK_OFFSET(0x1C0A16D0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ISASBNEEDKICK_OFFSET UNITYSDK_OFFSET(0x1C0A1670)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ISDESIGNDATAFORCEKICK_OFFSET UNITYSDK_OFFSET(0x1C0A1610)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ISDESIGNDATAIDLEKICK_OFFSET UNITYSDK_OFFSET(0x1C0A1620)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ISDESIGNDATANEEDKICK_OFFSET UNITYSDK_OFFSET(0x1C0A15C0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ISGATEINVALID_OFFSET UNITYSDK_OFFSET(0x1C0A1590)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ISIOSAPPROVALPACKAGE_OFFSET UNITYSDK_OFFSET(0x1C0A1220)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ISLUASILENTUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0A16E0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ISSTOP_OFFSET UNITYSDK_OFFSET(0x1C0A1580)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_LOGINWHITEMSG_OFFSET UNITYSDK_OFFSET(0x1C0A1710)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_LUABUNDLEVERSIONUPDATEURLWITHSUFFIX_OFFSET UNITYSDK_OFFSET(0x1C0A1540)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_LUABUNDLEVERSIONUPDATEURL_OFFSET UNITYSDK_OFFSET(0x1C0A14A0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_MTPSWITCH_OFFSET UNITYSDK_OFFSET(0x1C0A1750)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_NETWORKDIAGNOSTIC_OFFSET UNITYSDK_OFFSET(0x1C0A1730)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ONLINEREPLAYDOWNLOADURL_OFFSET UNITYSDK_OFFSET(0x1C0A1850)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ONLINEREPLAYUPLOADURL_OFFSET UNITYSDK_OFFSET(0x1C0A1830)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_PLAYERRETURNINVITEH5URL_OFFSET UNITYSDK_OFFSET(0x1C0A18B0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_PLAYERRETURNQUESTIONNAIREAURL_OFFSET UNITYSDK_OFFSET(0x1C0A1870)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_PLAYERRETURNQUESTIONNAIREBURL_OFFSET UNITYSDK_OFFSET(0x1C0A1890)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_PREDOWNLOADUPDATEURL_OFFSET UNITYSDK_OFFSET(0x1C0A11A0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ROGUEMAGICH5URL_OFFSET UNITYSDK_OFFSET(0x1C0A1910)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ROGUETOURNBUILDREFAPIREQCOLORHEADERKEY_OFFSET UNITYSDK_OFFSET(0x1C0A19D0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ROGUETOURNBUILDREFAPIREQCOLORHEADERVALUE_OFFSET UNITYSDK_OFFSET(0x1C0A19F0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ROGUETOURNBUILDREFH5URL_OFFSET UNITYSDK_OFFSET(0x1C0A19B0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ROGUETOURNBUILDREFSTATICDATAURLPREFIX_OFFSET UNITYSDK_OFFSET(0x1C0A1990)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ROGUETOURNH5URL_OFFSET UNITYSDK_OFFSET(0x1C0A1930)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ROGUETOURNNOTICEID_OFFSET UNITYSDK_OFFSET(0x1C0A1950)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_ROGUETOURNNOTICEPICTYPE_OFFSET UNITYSDK_OFFSET(0x1C0A1970)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_SHOWSERVERCLOSEURL_OFFSET UNITYSDK_OFFSET(0x1C0A1230)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_VIDEOBUNDLEVERSIONUPDATEURLWITHSUFFIX_OFFSET UNITYSDK_OFFSET(0x1C0A1550)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_VIDEOBUNDLEVERSIONUPDATEURL_OFFSET UNITYSDK_OFFSET(0x1C0A14C0)
#define RPG_CLIENT_SERVERDISPATCHDATA_GET_WATERMARKENABLE_OFFSET UNITYSDK_OFFSET(0x1C0A1770)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_ANDROIDMIDDLEPACKAGEENABLE_OFFSET UNITYSDK_OFFSET(0x1C0A1820)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_ASBRELOGINDESC_OFFSET UNITYSDK_OFFSET(0x1C0A1700)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_ASBRELOGINTYPE_OFFSET UNITYSDK_OFFSET(0x1C0A1660)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_ASSETBUNDLEVERSIONUPDATEURL_OFFSET UNITYSDK_OFFSET(0x1C0A1470)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_AUDIOBUNDLEVERSIONUPDATEURL_OFFSET UNITYSDK_OFFSET(0x1C0A14F0)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_BANAPPEALURL_OFFSET UNITYSDK_OFFSET(0x1C0A1900)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_BASEASSETBUNDLEVERSIONUPDATEURL_OFFSET UNITYSDK_OFFSET(0x1C0A1490)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_CDNIPV6ENABLE_OFFSET UNITYSDK_OFFSET(0x1C0A17E0)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_CLOSEREDEEMCODE_OFFSET UNITYSDK_OFFSET(0x1C0A1800)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_DESIGNDATABUNDLEVERSIONUPDATEURL_OFFSET UNITYSDK_OFFSET(0x1C0A1450)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_DESIGNDATARELOGINDESC_OFFSET UNITYSDK_OFFSET(0x1C0A1640)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_DESIGNDATARELOGINTYPE_OFFSET UNITYSDK_OFFSET(0x1C0A15B0)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_EVENTTRACKINGOPEN_OFFSET UNITYSDK_OFFSET(0x1C0A17A0)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_FTCSWITCH_OFFSET UNITYSDK_OFFSET(0x1C0A1AC0)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_GAMESTARTCUSTOMERSERVICEURL_OFFSET UNITYSDK_OFFSET(0x1C0A18E0)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_GRIDFIGHTGAMEREFCDNURL_OFFSET UNITYSDK_OFFSET(0x1C0A1A20)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_GRIDFIGHTGAMEREFCOLORHEADERKEY_OFFSET UNITYSDK_OFFSET(0x1C0A1A80)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_GRIDFIGHTGAMEREFCOLORHEADERVALUE_OFFSET UNITYSDK_OFFSET(0x1C0A1AA0)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_GRIDFIGHTGAMEREFH5URL_OFFSET UNITYSDK_OFFSET(0x1C0A1A40)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_GRIDFIGHTINTROH5URL_OFFSET UNITYSDK_OFFSET(0x1C0A1A60)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_IFIXPATCHREVISION_OFFSET UNITYSDK_OFFSET(0x1C0A1190)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_IFIXPATCHVERSIONUPDATEURL_OFFSET UNITYSDK_OFFSET(0x1C0A1510)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_IOSEXAM_OFFSET UNITYSDK_OFFSET(0x1C0A17C0)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_LOGINWHITEMSG_OFFSET UNITYSDK_OFFSET(0x1C0A1720)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_LUABUNDLEVERSIONUPDATEURL_OFFSET UNITYSDK_OFFSET(0x1C0A14B0)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_MTPSWITCH_OFFSET UNITYSDK_OFFSET(0x1C0A1760)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_NETWORKDIAGNOSTIC_OFFSET UNITYSDK_OFFSET(0x1C0A1740)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_ONLINEREPLAYDOWNLOADURL_OFFSET UNITYSDK_OFFSET(0x1C0A1860)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_ONLINEREPLAYUPLOADURL_OFFSET UNITYSDK_OFFSET(0x1C0A1840)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_PLAYERRETURNINVITEH5URL_OFFSET UNITYSDK_OFFSET(0x1C0A18C0)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_PLAYERRETURNQUESTIONNAIREAURL_OFFSET UNITYSDK_OFFSET(0x1C0A1880)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_PLAYERRETURNQUESTIONNAIREBURL_OFFSET UNITYSDK_OFFSET(0x1C0A18A0)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_PREDOWNLOADUPDATEURL_OFFSET UNITYSDK_OFFSET(0x1C0A11B0)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_ROGUEMAGICH5URL_OFFSET UNITYSDK_OFFSET(0x1C0A1920)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_ROGUETOURNBUILDREFAPIREQCOLORHEADERKEY_OFFSET UNITYSDK_OFFSET(0x1C0A19E0)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_ROGUETOURNBUILDREFAPIREQCOLORHEADERVALUE_OFFSET UNITYSDK_OFFSET(0x1C0A1A00)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_ROGUETOURNBUILDREFH5URL_OFFSET UNITYSDK_OFFSET(0x1C0A19C0)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_ROGUETOURNBUILDREFSTATICDATAURLPREFIX_OFFSET UNITYSDK_OFFSET(0x1C0A19A0)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_ROGUETOURNH5URL_OFFSET UNITYSDK_OFFSET(0x1C0A1940)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_ROGUETOURNNOTICEID_OFFSET UNITYSDK_OFFSET(0x1C0A1960)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_ROGUETOURNNOTICEPICTYPE_OFFSET UNITYSDK_OFFSET(0x1C0A1980)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_VIDEOBUNDLEVERSIONUPDATEURL_OFFSET UNITYSDK_OFFSET(0x1C0A14D0)
#define RPG_CLIENT_SERVERDISPATCHDATA_SET_WATERMARKENABLE_OFFSET UNITYSDK_OFFSET(0x1C0A1780)
#define RPG_CLIENT_SERVERDISPATCHDATA__PARSESERVERDISPATCHDATA_OFFSET UNITYSDK_OFFSET(0x1C0A1AD0)
#define RPG_CLIENT_SERVERDISPATCHDATA__PARSESERVERSTOPINFO_OFFSET UNITYSDK_OFFSET(0x1C0A2D20)

namespace RPG::Client
{
	inline static constexpr unsigned int ServerDispatchData_TypeDefinitionIndex = 71369;

	class ServerDispatchData : public ::System::Object
	{
	public:
		::RPG::Client::ServerStopInfo* StopInfo; // 0x10
		::System::String* _GridFightIntroH5Url_k__BackingField; // 0x18
		::System::String* _DesignDataReloginDesc; // 0x20
		::System::String* _OnlineReplayDownloadUrl_k__BackingField; // 0x28
		::System::String* _RogueTournBuildRefAPIReqColorHeaderKey_k__BackingField; // 0x30
		::System::String* _PlayerReturnInviteH5URL_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ServerUrlDict; // 0x40
		::System::String* _GridFightGameRefColorHeaderKey_k__BackingField; // 0x48
		::System::String* _GridFightGameRefColorHeaderValue_k__BackingField; // 0x50
		::System::String* loginWhiteMsg; // 0x58
		::System::String* LuaPatchVersion; // 0x60
		::System::String* _PlayerReturnQuestionnaireBUrl_k__BackingField; // 0x68
		::System::String* _LuaBundleVersionUpdateUrl; // 0x70
		::System::String* _BanAppealUrl_k__BackingField; // 0x78
		::System::String* _PlayerReturnQuestionnaireAUrl_k__BackingField; // 0x80
		::System::String* _GameStartCustomerServiceUrl_k__BackingField; // 0x88
		::System::String* _RogueMagicH5URL_k__BackingField; // 0x90
		::System::String* ServerDescription; // 0x98
		::System::String* _AudioBundleVersionUpdateUrl; // 0xA0
		::System::String* _DesignDataBundleVersionUpdateUrl; // 0xA8
		::System::String* _AsbReloginDesc; // 0xB0
		::System::String* _OnlineReplayUploadUrl_k__BackingField; // 0xB8
		::System::String* _RogueTournH5URL_k__BackingField; // 0xC0
		::System::String* Name; // 0xC8
		::System::String* _GridFightGameRefCdnUrl_k__BackingField; // 0xD0
		::EPFAOLJKOOK* GateServerAddress; // 0xD8
		::System::String* _predownloadUpdateUrl; // 0xE0
		::System::String* _AssetBundleVersionUpdateUrl; // 0xE8
		::System::String* _RogueTournBuildRefH5URL_k__BackingField; // 0xF0
		::System::String* _GridFightGameRefH5Url_k__BackingField; // 0xF8
		::System::String* _IFixPatchRevision_k__BackingField; // 0x100
		::System::String* _BaseAssetBundleVersionUpdateUrl_k__BackingField; // 0x108
		::System::String* _RogueTournBuildRefStaticDataURLPrefix_k__BackingField; // 0x110
		::System::String* _IFixPatchVersionUpdateUrl; // 0x118
		::System::String* _VideoBundleVersionUpdateUrl; // 0x120
		::System::String* _RogueTournBuildRefAPIReqColorHeaderValue_k__BackingField; // 0x128
		::System::UInt32 _RogueTournNoticePicType_k__BackingField; // 0x130
		::System::Boolean ForbidRecharge; // 0x134
		::System::Boolean EnableUploadBattleLog; // 0x135
		::System::Boolean EnablePredownload; // 0x136
		::System::Boolean EnableAudioBundleVersionUpdate; // 0x137
		::RPG::Client::ServerDispatchReturnCode DispatchInfo; // 0x138
		::System::UInt32 _RogueTournNoticeID_k__BackingField; // 0x13C
		::JAEJPFGMAAO _DesignDataReloginType; // 0x140
		::System::Boolean _WatermarkEnable_k__BackingField; // 0x144
		::System::Boolean _IOSExam_k__BackingField; // 0x145
		::System::Boolean UseTcp; // 0x146
		::System::Boolean _FtcSwitch_k__BackingField; // 0x147
		::System::Boolean EnableSaveReplayFile; // 0x148
		::System::Boolean EnableAssetBundleVersionUpdate; // 0x149
		::System::Boolean _NetworkDiagnostic_k__BackingField; // 0x14A
		::System::Boolean _MTPSwitch_k__BackingField; // 0x14B
		::System::Boolean EnableDesignDataBundleVersionUpdate; // 0x14C
		::System::Boolean _EventTrackingOpen_k__BackingField; // 0x14D
		::System::Boolean _CloseRedeemCode_k__BackingField; // 0x14E
		::System::Boolean EnableLuaBundleVersionUpdate; // 0x14F
		::System::UInt16 Port; // 0x150
		::System::Boolean _AndroidMiddlePackageEnable_k__BackingField; // 0x152
		::System::Boolean EnableVideoBundleVersionUpdate; // 0x153
		::JAEJPFGMAAO _AsbReloginType; // 0x154
		::System::UInt32 _CdnIpv6Enable_k__BackingField; // 0x158
		// static const ::System::String* CLOUD_GAME_URL_KEY; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_CTOR_OFFSET))(this);
		}

		::System::String* get_IFixPatchRevision()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_IFIXPATCHREVISION_OFFSET))(this);
		}

		::System::Void set_IFixPatchRevision(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_IFIXPATCHREVISION_OFFSET))(this, a1);
		}

		::System::String* get_PredownloadUpdateUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_PREDOWNLOADUPDATEURL_OFFSET))(this);
		}

		::System::Void set_PredownloadUpdateUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_PREDOWNLOADUPDATEURL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsIOSApprovalPackage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ISIOSAPPROVALPACKAGE_OFFSET))(this);
		}

		::System::Boolean get_ShowServerCloseURL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_SHOWSERVERCLOSEURL_OFFSET))(this);
		}

		::System::Boolean get_HasOfficialCommunityURL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_HASOFFICIALCOMMUNITYURL_OFFSET))(this);
		}

		::System::Boolean get_HasCloudGameUrl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_HASCLOUDGAMEURL_OFFSET))(this);
		}

		::System::String* get_DesignDataBundleVersionUpdateUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_DESIGNDATABUNDLEVERSIONUPDATEURL_OFFSET))(this);
		}

		::System::Void set_DesignDataBundleVersionUpdateUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_DESIGNDATABUNDLEVERSIONUPDATEURL_OFFSET))(this, a1);
		}

		::System::String* get_AssetBundleVersionUpdateUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ASSETBUNDLEVERSIONUPDATEURL_OFFSET))(this);
		}

		::System::Void set_AssetBundleVersionUpdateUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_ASSETBUNDLEVERSIONUPDATEURL_OFFSET))(this, a1);
		}

		::System::String* get_BaseAssetBundleVersionUpdateUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_BASEASSETBUNDLEVERSIONUPDATEURL_OFFSET))(this);
		}

		::System::Void set_BaseAssetBundleVersionUpdateUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_BASEASSETBUNDLEVERSIONUPDATEURL_OFFSET))(this, a1);
		}

		::System::String* get_LuaBundleVersionUpdateUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_LUABUNDLEVERSIONUPDATEURL_OFFSET))(this);
		}

		::System::Void set_LuaBundleVersionUpdateUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_LUABUNDLEVERSIONUPDATEURL_OFFSET))(this, a1);
		}

		::System::String* get_VideoBundleVersionUpdateUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_VIDEOBUNDLEVERSIONUPDATEURL_OFFSET))(this);
		}

		::System::Void set_VideoBundleVersionUpdateUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_VIDEOBUNDLEVERSIONUPDATEURL_OFFSET))(this, a1);
		}

		::System::String* get_AudioBundleVersionUpdateUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_AUDIOBUNDLEVERSIONUPDATEURL_OFFSET))(this);
		}

		::System::Void set_AudioBundleVersionUpdateUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_AUDIOBUNDLEVERSIONUPDATEURL_OFFSET))(this, a1);
		}

		::System::String* get_IFixPatchVersionUpdateUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_IFIXPATCHVERSIONUPDATEURL_OFFSET))(this);
		}

		::System::Void set_IFixPatchVersionUpdateUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_IFIXPATCHVERSIONUPDATEURL_OFFSET))(this, a1);
		}

		::System::String* get_DesignDataBundleVersionUpdateUrlWithSuffix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_DESIGNDATABUNDLEVERSIONUPDATEURLWITHSUFFIX_OFFSET))(this);
		}

		::System::String* get_AssetBundleVersionUpdateUrlWithSuffix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ASSETBUNDLEVERSIONUPDATEURLWITHSUFFIX_OFFSET))(this);
		}

		::System::String* get_LuaBundleVersionUpdateUrlWithSuffix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_LUABUNDLEVERSIONUPDATEURLWITHSUFFIX_OFFSET))(this);
		}

		::System::String* get_VideoBundleVersionUpdateUrlWithSuffix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_VIDEOBUNDLEVERSIONUPDATEURLWITHSUFFIX_OFFSET))(this);
		}

		::System::String* get_AudioBundleVersionUpdateUrlWithSuffix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_AUDIOBUNDLEVERSIONUPDATEURLWITHSUFFIX_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsStop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ISSTOP_OFFSET))(this);
		}

		::System::Boolean get_IsGateInvalid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ISGATEINVALID_OFFSET))(this);
		}

		::JAEJPFGMAAO get_DesignDataReloginType()
		{
			return ((::JAEJPFGMAAO(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_DESIGNDATARELOGINTYPE_OFFSET))(this);
		}

		::System::Void set_DesignDataReloginType(::JAEJPFGMAAO a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAEJPFGMAAO))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_DESIGNDATARELOGINTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDesignDataNeedKick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ISDESIGNDATANEEDKICK_OFFSET))(this);
		}

		::System::Boolean get_IsDesignDataForceKick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ISDESIGNDATAFORCEKICK_OFFSET))(this);
		}

		::System::Boolean get_IsDesignDataIdleKick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ISDESIGNDATAIDLEKICK_OFFSET))(this);
		}

		::System::String* get_DesignDataReloginDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_DESIGNDATARELOGINDESC_OFFSET))(this);
		}

		::System::Void set_DesignDataReloginDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_DESIGNDATARELOGINDESC_OFFSET))(this, a1);
		}

		::JAEJPFGMAAO get_AsbReloginType()
		{
			return ((::JAEJPFGMAAO(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ASBRELOGINTYPE_OFFSET))(this);
		}

		::System::Void set_AsbReloginType(::JAEJPFGMAAO a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAEJPFGMAAO))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_ASBRELOGINTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAsbNeedKick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ISASBNEEDKICK_OFFSET))(this);
		}

		::System::Boolean get_IsAsbForceKick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ISASBFORCEKICK_OFFSET))(this);
		}

		::System::Boolean get_IsAsbIdleKick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ISASBIDLEKICK_OFFSET))(this);
		}

		::System::Boolean get_IsLuaSilentUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ISLUASILENTUPDATE_OFFSET))(this);
		}

		::System::String* get_AsbReloginDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ASBRELOGINDESC_OFFSET))(this);
		}

		::System::Void set_AsbReloginDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_ASBRELOGINDESC_OFFSET))(this, a1);
		}

		::System::String* get_LoginWhiteMsg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_LOGINWHITEMSG_OFFSET))(this);
		}

		::System::Void set_LoginWhiteMsg(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_LOGINWHITEMSG_OFFSET))(this, a1);
		}

		::System::Boolean get_NetworkDiagnostic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_NETWORKDIAGNOSTIC_OFFSET))(this);
		}

		::System::Void set_NetworkDiagnostic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_NETWORKDIAGNOSTIC_OFFSET))(this, a1);
		}

		::System::Boolean get_MTPSwitch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_MTPSWITCH_OFFSET))(this);
		}

		::System::Void set_MTPSwitch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_MTPSWITCH_OFFSET))(this, a1);
		}

		::System::Boolean get_WatermarkEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_WATERMARKENABLE_OFFSET))(this);
		}

		::System::Void set_WatermarkEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_WATERMARKENABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_EventTrackingOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_EVENTTRACKINGOPEN_OFFSET))(this);
		}

		::System::Void set_EventTrackingOpen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_EVENTTRACKINGOPEN_OFFSET))(this, a1);
		}

		::System::Boolean get_IOSExam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_IOSEXAM_OFFSET))(this);
		}

		::System::Void set_IOSExam(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_IOSEXAM_OFFSET))(this, a1);
		}

		::System::UInt32 get_CdnIpv6Enable()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_CDNIPV6ENABLE_OFFSET))(this);
		}

		::System::Void set_CdnIpv6Enable(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_CDNIPV6ENABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_CloseRedeemCode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_CLOSEREDEEMCODE_OFFSET))(this);
		}

		::System::Void set_CloseRedeemCode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_CLOSEREDEEMCODE_OFFSET))(this, a1);
		}

		::System::Boolean get_AndroidMiddlePackageEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ANDROIDMIDDLEPACKAGEENABLE_OFFSET))(this);
		}

		::System::Void set_AndroidMiddlePackageEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_ANDROIDMIDDLEPACKAGEENABLE_OFFSET))(this, a1);
		}

		::System::String* get_OnlineReplayUploadUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ONLINEREPLAYUPLOADURL_OFFSET))(this);
		}

		::System::Void set_OnlineReplayUploadUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_ONLINEREPLAYUPLOADURL_OFFSET))(this, a1);
		}

		::System::String* get_OnlineReplayDownloadUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ONLINEREPLAYDOWNLOADURL_OFFSET))(this);
		}

		::System::Void set_OnlineReplayDownloadUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_ONLINEREPLAYDOWNLOADURL_OFFSET))(this, a1);
		}

		::System::String* get_PlayerReturnQuestionnaireAUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_PLAYERRETURNQUESTIONNAIREAURL_OFFSET))(this);
		}

		::System::Void set_PlayerReturnQuestionnaireAUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_PLAYERRETURNQUESTIONNAIREAURL_OFFSET))(this, a1);
		}

		::System::String* get_PlayerReturnQuestionnaireBUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_PLAYERRETURNQUESTIONNAIREBURL_OFFSET))(this);
		}

		::System::Void set_PlayerReturnQuestionnaireBUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_PLAYERRETURNQUESTIONNAIREBURL_OFFSET))(this, a1);
		}

		::System::String* get_PlayerReturnInviteH5URL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_PLAYERRETURNINVITEH5URL_OFFSET))(this);
		}

		::System::Void set_PlayerReturnInviteH5URL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_PLAYERRETURNINVITEH5URL_OFFSET))(this, a1);
		}

		::System::String* get_GameStartCustomerServiceUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_GAMESTARTCUSTOMERSERVICEURL_OFFSET))(this);
		}

		::System::Void set_GameStartCustomerServiceUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_GAMESTARTCUSTOMERSERVICEURL_OFFSET))(this, a1);
		}

		::System::String* get_BanAppealUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_BANAPPEALURL_OFFSET))(this);
		}

		::System::Void set_BanAppealUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_BANAPPEALURL_OFFSET))(this, a1);
		}

		::System::String* get_RogueMagicH5URL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ROGUEMAGICH5URL_OFFSET))(this);
		}

		::System::Void set_RogueMagicH5URL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_ROGUEMAGICH5URL_OFFSET))(this, a1);
		}

		::System::String* get_RogueTournH5URL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ROGUETOURNH5URL_OFFSET))(this);
		}

		::System::Void set_RogueTournH5URL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_ROGUETOURNH5URL_OFFSET))(this, a1);
		}

		::System::UInt32 get_RogueTournNoticeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ROGUETOURNNOTICEID_OFFSET))(this);
		}

		::System::Void set_RogueTournNoticeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_ROGUETOURNNOTICEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RogueTournNoticePicType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ROGUETOURNNOTICEPICTYPE_OFFSET))(this);
		}

		::System::Void set_RogueTournNoticePicType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_ROGUETOURNNOTICEPICTYPE_OFFSET))(this, a1);
		}

		::System::String* get_RogueTournBuildRefStaticDataURLPrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ROGUETOURNBUILDREFSTATICDATAURLPREFIX_OFFSET))(this);
		}

		::System::Void set_RogueTournBuildRefStaticDataURLPrefix(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_ROGUETOURNBUILDREFSTATICDATAURLPREFIX_OFFSET))(this, a1);
		}

		::System::String* get_RogueTournBuildRefH5URL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ROGUETOURNBUILDREFH5URL_OFFSET))(this);
		}

		::System::Void set_RogueTournBuildRefH5URL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_ROGUETOURNBUILDREFH5URL_OFFSET))(this, a1);
		}

		::System::String* get_RogueTournBuildRefAPIReqColorHeaderKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ROGUETOURNBUILDREFAPIREQCOLORHEADERKEY_OFFSET))(this);
		}

		::System::Void set_RogueTournBuildRefAPIReqColorHeaderKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_ROGUETOURNBUILDREFAPIREQCOLORHEADERKEY_OFFSET))(this, a1);
		}

		::System::String* get_RogueTournBuildRefAPIReqColorHeaderValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_ROGUETOURNBUILDREFAPIREQCOLORHEADERVALUE_OFFSET))(this);
		}

		::System::Void set_RogueTournBuildRefAPIReqColorHeaderValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_ROGUETOURNBUILDREFAPIREQCOLORHEADERVALUE_OFFSET))(this, a1);
		}

		::System::String* get_GridFightGameRefCdnUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_GRIDFIGHTGAMEREFCDNURL_OFFSET))(this);
		}

		::System::Void set_GridFightGameRefCdnUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_GRIDFIGHTGAMEREFCDNURL_OFFSET))(this, a1);
		}

		::System::String* get_GridFightGameRefH5Url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_GRIDFIGHTGAMEREFH5URL_OFFSET))(this);
		}

		::System::Void set_GridFightGameRefH5Url(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_GRIDFIGHTGAMEREFH5URL_OFFSET))(this, a1);
		}

		::System::String* get_GridFightIntroH5Url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_GRIDFIGHTINTROH5URL_OFFSET))(this);
		}

		::System::Void set_GridFightIntroH5Url(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_GRIDFIGHTINTROH5URL_OFFSET))(this, a1);
		}

		::System::String* get_GridFightGameRefColorHeaderKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_GRIDFIGHTGAMEREFCOLORHEADERKEY_OFFSET))(this);
		}

		::System::Void set_GridFightGameRefColorHeaderKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_GRIDFIGHTGAMEREFCOLORHEADERKEY_OFFSET))(this, a1);
		}

		::System::String* get_GridFightGameRefColorHeaderValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_GRIDFIGHTGAMEREFCOLORHEADERVALUE_OFFSET))(this);
		}

		::System::Void set_GridFightGameRefColorHeaderValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_GRIDFIGHTGAMEREFCOLORHEADERVALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_FtcSwitch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_GET_FTCSWITCH_OFFSET))(this);
		}

		::System::Void set_FtcSwitch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA_SET_FTCSWITCH_OFFSET))(this, a1);
		}

		static ::RPG::Client::ServerDispatchData* _ParseServerDispatchData(::EBIPBHFLPHL* a1)
		{
			return ((::RPG::Client::ServerDispatchData*(*)(::EBIPBHFLPHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA__PARSESERVERDISPATCHDATA_OFFSET))(a1);
		}

		static ::RPG::Client::ServerStopInfo* _ParseServerStopInfo(::EBIPBHFLPHL* a1)
		{
			return ((::RPG::Client::ServerStopInfo*(*)(::EBIPBHFLPHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERDISPATCHDATA__PARSESERVERSTOPINFO_OFFSET))(a1);
		}

	};
}
