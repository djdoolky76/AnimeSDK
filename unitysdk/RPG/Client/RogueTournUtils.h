#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNKAAIFEKNP_RogueTournSelectType.h"
#include "unitysdk/JEOPNAHLJHA.h"
#include "unitysdk/RPG/GameCore/RogueTitanCategory.h"
#include "unitysdk/RPG/GameCore/RogueTournTitanFloorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class FHEGNOPNICH;
class JGAMMPGMCNI;
class KHNBFDNKLHE;
class PKPICFPDHEO;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class IRogueTournGameSettleResultComposition; }
namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueFormulaInfo; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournDivisionData; }
namespace RPG::Client { class RogueTournHexInfo; }
namespace RPG::Client { class RogueTournPersonaGameStyleData; }
namespace RPG::Client { class RogueTournSettleData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class RogueTournBuildRefMatchConfig; }
namespace RPG::GameCore { class RogueTournBuildRefSortConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNUTILS_ASSERT_1_OFFSET UNITYSDK_OFFSET(0xEAC3280)
#define RPG_CLIENT_ROGUETOURNUTILS_ASSERT_2_OFFSET UNITYSDK_OFFSET(0xEAC32D0)
#define RPG_CLIENT_ROGUETOURNUTILS_ASSERT_OFFSET UNITYSDK_OFFSET(0xEAC3240)
#define RPG_CLIENT_ROGUETOURNUTILS_BACKTOMODESELECTPAGE_OFFSET UNITYSDK_OFFSET(0xEAC0A80)
#define RPG_CLIENT_ROGUETOURNUTILS_CALCBUILDREFMATCHRATE_OFFSET UNITYSDK_OFFSET(0xEAB7C80)
#define RPG_CLIENT_ROGUETOURNUTILS_CALCBUILDREFSORTRATE_OFFSET UNITYSDK_OFFSET(0xEABBE60)
#define RPG_CLIENT_ROGUETOURNUTILS_CALCCURGAMEBUILDREFMATCHRATE_OFFSET UNITYSDK_OFFSET(0xEAB7B10)
#define RPG_CLIENT_ROGUETOURNUTILS_CANTRANSFERTOLAUNCHER_OFFSET UNITYSDK_OFFSET(0xEABFFC0)
#define RPG_CLIENT_ROGUETOURNUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0xEAC4B60)
#define RPG_CLIENT_ROGUETOURNUTILS_CHECKGAMEISCHALLENGEDIVISION_OFFSET UNITYSDK_OFFSET(0xEAC4050)
#define RPG_CLIENT_ROGUETOURNUTILS_CHECKISCHALLENGEDIVISIONPROGRESSDOWN_OFFSET UNITYSDK_OFFSET(0xEAC4650)
#define RPG_CLIENT_ROGUETOURNUTILS_CHECKLEVELISCHALLENGEDIVISION_OFFSET UNITYSDK_OFFSET(0xEAC3F80)
#define RPG_CLIENT_ROGUETOURNUTILS_CHECKSETTLEISCHALLENGEDIVISION_OFFSET UNITYSDK_OFFSET(0xEAC3DB0)
#define RPG_CLIENT_ROGUETOURNUTILS_CLEAROUTDATEDQUESTREWARDREDDOTDATA_OFFSET UNITYSDK_OFFSET(0xEAC2620)
#define RPG_CLIENT_ROGUETOURNUTILS_CONVERTFLOORTYPETOTITANCATEGORY_OFFSET UNITYSDK_OFFSET(0xEABF8E0)
#define RPG_CLIENT_ROGUETOURNUTILS_CONVERTGAMELANGCODE2API_OFFSET UNITYSDK_OFFSET(0xEABE7E0)
#define RPG_CLIENT_ROGUETOURNUTILS_GETBATTLEGAMESTYLEDATA_OFFSET UNITYSDK_OFFSET(0xEABF4E0)
#define RPG_CLIENT_ROGUETOURNUTILS_GETCACHEDAVATAR_OFFSET UNITYSDK_OFFSET(0xEABEA60)
#define RPG_CLIENT_ROGUETOURNUTILS_GETCACHEDFORMULADATA_OFFSET UNITYSDK_OFFSET(0xEABE9C0)
#define RPG_CLIENT_ROGUETOURNUTILS_GETCONTENTID_OFFSET UNITYSDK_OFFSET(0xEABFF00)
#define RPG_CLIENT_ROGUETOURNUTILS_GETCURDIVISIONDATA_OFFSET UNITYSDK_OFFSET(0xEAC3A50)
#define RPG_CLIENT_ROGUETOURNUTILS_GETDIVISIONDATABYLEVEL_OFFSET UNITYSDK_OFFSET(0xEAC3B50)
#define RPG_CLIENT_ROGUETOURNUTILS_GETGAMELANGCODEBYCDNLANGCODE_OFFSET UNITYSDK_OFFSET(0xEABE610)
#define RPG_CLIENT_ROGUETOURNUTILS_GETPASSEDSEASONGUIDEAREACOUNT_OFFSET UNITYSDK_OFFSET(0xEAC19C0)
#define RPG_CLIENT_ROGUETOURNUTILS_GETQUESTREWARDACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0xEAC1DA0)
#define RPG_CLIENT_ROGUETOURNUTILS_GETSEASONTALENTCOINTYPE_OFFSET UNITYSDK_OFFSET(0xEAC48C0)
#define RPG_CLIENT_ROGUETOURNUTILS_GETSORTEDROOMCARDINGAME_OFFSET UNITYSDK_OFFSET(0xEABEB00)
#define RPG_CLIENT_ROGUETOURNUTILS_GETTOURNEXPLEVELBYEXP_OFFSET UNITYSDK_OFFSET(0xEABF930)
#define RPG_CLIENT_ROGUETOURNUTILS_ISANYFORMALAREAPASSED_OFFSET UNITYSDK_OFFSET(0xEAC1B70)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFESSENTIALFORMULAMISSING_OFFSET UNITYSDK_OFFSET(0xEABC9D0)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFHEXMIRACLEMISSING_OFFSET UNITYSDK_OFFSET(0xEABD290)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFOPTIONALFORMULAMISSING_OFFSET UNITYSDK_OFFSET(0xEABD140)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFSORTTOFIRST_OFFSET UNITYSDK_OFFSET(0xEABBDA0)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFSORTTOLAST_OFFSET UNITYSDK_OFFSET(0xEABBCE0)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFTEAMMEMBERMISSINGINTEAM_OFFSET UNITYSDK_OFFSET(0xEABC950)
#define RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFTEAMMEMBERMISSING_OFFSET UNITYSDK_OFFSET(0xEABC2D0)
#define RPG_CLIENT_ROGUETOURNUTILS_ISCURWEEKCHALLENGEEXPIRED_OFFSET UNITYSDK_OFFSET(0xEAC1C40)
#define RPG_CLIENT_ROGUETOURNUTILS_ISEXPDOUBLE_OFFSET UNITYSDK_OFFSET(0xEABFCE0)
#define RPG_CLIENT_ROGUETOURNUTILS_ISGUIDEAREASPASSED_OFFSET UNITYSDK_OFFSET(0xEAC16B0)
#define RPG_CLIENT_ROGUETOURNUTILS_ISINEVOLVERELICCOCOONBATTLE_OFFSET UNITYSDK_OFFSET(0xEAC08D0)
#define RPG_CLIENT_ROGUETOURNUTILS_ISINLAUNCHERFLOOR_OFFSET UNITYSDK_OFFSET(0xEAC01D0)
#define RPG_CLIENT_ROGUETOURNUTILS_ISPERMANENTGUIDEAREASPASSED_OFFSET UNITYSDK_OFFSET(0xEAC1740)
#define RPG_CLIENT_ROGUETOURNUTILS_ISSEASONGUIDEAREASPASSED_OFFSET UNITYSDK_OFFSET(0xEAC1810)
#define RPG_CLIENT_ROGUETOURNUTILS_ISSHOWSETTLEDIVSIONUI_OFFSET UNITYSDK_OFFSET(0xEAC3C30)
#define RPG_CLIENT_ROGUETOURNUTILS_ISSTYLEPARASITE_OFFSET UNITYSDK_OFFSET(0xEABF680)
#define RPG_CLIENT_ROGUETOURNUTILS_ISSTYLERAISINGPIG_OFFSET UNITYSDK_OFFSET(0xEABF7E0)
#define RPG_CLIENT_ROGUETOURNUTILS_LOGERROR_1_OFFSET UNITYSDK_OFFSET(0xEAC31E0)
#define RPG_CLIENT_ROGUETOURNUTILS_LOGERROR_OFFSET UNITYSDK_OFFSET(0xEAB3940)
#define RPG_CLIENT_ROGUETOURNUTILS_LOGWARNING_1_OFFSET UNITYSDK_OFFSET(0xEAC3190)
#define RPG_CLIENT_ROGUETOURNUTILS_LOGWARNING_OFFSET UNITYSDK_OFFSET(0xEAC3150)
#define RPG_CLIENT_ROGUETOURNUTILS_LOG_1_OFFSET UNITYSDK_OFFSET(0xEAC3100)
#define RPG_CLIENT_ROGUETOURNUTILS_LOG_OFFSET UNITYSDK_OFFSET(0xEAC30C0)
#define RPG_CLIENT_ROGUETOURNUTILS_MERGESAMEUIDCARD_OFFSET UNITYSDK_OFFSET(0xEABEE40)
#define RPG_CLIENT_ROGUETOURNUTILS_REPORTBUFFSELECTION_OFFSET UNITYSDK_OFFSET(0xEAC3320)
#define RPG_CLIENT_ROGUETOURNUTILS_SETACTIVITYWEEKCHALLENGESEEN_OFFSET UNITYSDK_OFFSET(0xEAC2EC0)
#define RPG_CLIENT_ROGUETOURNUTILS_SETALLQUESTREWARDQUESTSSEEN_OFFSET UNITYSDK_OFFSET(0xEAC1E60)
#define RPG_CLIENT_ROGUETOURNUTILS_SETQUESTREWARDTABGROUPQUESTSSEEN_OFFSET UNITYSDK_OFFSET(0xEAC2120)
#define RPG_CLIENT_ROGUETOURNUTILS_SETQUESTREWARDTABQUESTSSEEN_OFFSET UNITYSDK_OFFSET(0xEAC23A0)
#define RPG_CLIENT_ROGUETOURNUTILS_SHOWTOURNEXPREWARDPAGEFROMACTIVITYPANEL_OFFSET UNITYSDK_OFFSET(0xEABFB80)
#define RPG_CLIENT_ROGUETOURNUTILS_TELEPORTINSIDEROGUESCENE_1_OFFSET UNITYSDK_OFFSET(0xEAC06C0)
#define RPG_CLIENT_ROGUETOURNUTILS_TELEPORTINSIDEROGUESCENE_OFFSET UNITYSDK_OFFSET(0xEAC0640)
#define RPG_CLIENT_ROGUETOURNUTILS_TELEPORTINTOROGUESCENE_OFFSET UNITYSDK_OFFSET(0xEAC0390)
#define RPG_CLIENT_ROGUETOURNUTILS_TELEPORTOUTOFROGUESCENE_OFFSET UNITYSDK_OFFSET(0xEAC0530)
#define RPG_CLIENT_ROGUETOURNUTILS_TRANSFEROPENMODESELECTPAGE_OFFSET UNITYSDK_OFFSET(0xEAC1450)
#define RPG_CLIENT_ROGUETOURNUTILS_TRANSFERTOLAUNCHER_OFFSET UNITYSDK_OFFSET(0xEAC0090)
#define RPG_CLIENT_ROGUETOURNUTILS_TRYDISPOSE_OFFSET UNITYSDK_OFFSET(0xEAC4A10)
#define RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHFORMULARATE_OFFSET UNITYSDK_OFFSET(0xEAB7D80)
#define RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHHEXRATE_OFFSET UNITYSDK_OFFSET(0xEAB8B10)
#define RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHSELECTINGFORMULARATE_OFFSET UNITYSDK_OFFSET(0xEAB9C30)
#define RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHSELECTINGMIRACLERATE_OFFSET UNITYSDK_OFFSET(0xEABA9D0)
#define RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHTEAMRATE_OFFSET UNITYSDK_OFFSET(0xEABB6E0)
#define RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFSORTRATE_OFFSET UNITYSDK_OFFSET(0xEABBF90)
#define RPG_CLIENT_ROGUETOURNUTILS__DELAYEDPROMISE_OFFSET UNITYSDK_OFFSET(0xEAC1380)
#define RPG_CLIENT_ROGUETOURNUTILS__GETLAUNCHERTRANSFERPARAM_OFFSET UNITYSDK_OFFSET(0xEABFDC0)
#define RPG_CLIENT_ROGUETOURNUTILS__ISBUILDREFFORMULAMISSING_OFFSET UNITYSDK_OFFSET(0xEABCB20)
#define RPG_CLIENT_ROGUETOURNUTILS__ISCURVERSIONBUILDREFFORSORT_OFFSET UNITYSDK_OFFSET(0xEABC1A0)
#define RPG_CLIENT_ROGUETOURNUTILS__SETTRANSITIONPERFORMANCETYPEINROGUE_OFFSET UNITYSDK_OFFSET(0xEAC07F0)
#define RPG_CLIENT_ROGUETOURNUTILS__SETTRANSITIONPERFORMANCETYPEOUTOFROGUE_OFFSET UNITYSDK_OFFSET(0xEAC04A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUtils_TypeDefinitionIndex = 69757;

	class RogueTournUtils : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_RaisingPigStyleID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "RogueTournUtils")->GetStaticField(0x8A70);
		}

		static ::System::UInt32* StaticGet_ParasiteStyleID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "RogueTournUtils")->GetStaticField(0x8A74);
		}

		// static const ::System::Object _SortToLastOpWeight; // 0x0
		// static const ::System::Object _SortToFirstOpWeight; // 0x0
		// static const ::System::Object _SortOpWeightCheckEpsilon; // 0x0
		// static const ::System::Object _BackScreenTransferFadeInTime; // 0x0
		// static const ::System::Object _BackScreenTransferFadeOutTime; // 0x0
		// static const ::System::Object _BackScreenTransferKeepTime; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CCTOR_OFFSET))();
		}

		static ::System::UInt32 CalcCurGameBuildRefMatchRate(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CALCCURGAMEBUILDREFMATCHRATE_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 CalcBuildRefMatchRate(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::RPG::Client::RogueFormulaInfo* a2, ::RPG::Client::RogueTournHexInfo* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5, ::RPG::GameCore::RogueTournBuildRefMatchConfig* a6)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::RogueFormulaInfo*, ::RPG::Client::RogueTournHexInfo*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CALCBUILDREFMATCHRATE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::UInt32 _CalcBuildRefMatchFormulaRate(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::RPG::Client::RogueFormulaInfo* a2, ::RPG::GameCore::RogueTournBuildRefMatchConfig* a3)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::RogueFormulaInfo*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHFORMULARATE_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 _CalcBuildRefMatchHexRate(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::RPG::Client::RogueTournHexInfo* a2, ::RPG::GameCore::RogueTournBuildRefMatchConfig* a3)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::RogueTournHexInfo*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHHEXRATE_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 _CalcBuildRefMatchSelectingFormulaRate(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::RPG::GameCore::RogueTournBuildRefMatchConfig* a3)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHSELECTINGFORMULARATE_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 _CalcBuildRefMatchSelectingMiracleRate(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::RPG::GameCore::RogueTournBuildRefMatchConfig* a3)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHSELECTINGMIRACLERATE_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 _CalcBuildRefMatchTeamRate(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::RPG::GameCore::RogueTournBuildRefMatchConfig* a2)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::GameCore::RogueTournBuildRefMatchConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFMATCHTEAMRATE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsBuildRefSortToLast(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFSORTTOLAST_OFFSET))(a1);
		}

		static ::System::Boolean IsBuildRefSortToFirst(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFSORTTOFIRST_OFFSET))(a1);
		}

		static ::System::Double CalcBuildRefSortRate(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Double(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CALCBUILDREFSORTRATE_OFFSET))(a1);
		}

		static ::System::Double _CalcBuildRefSortRate(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::RPG::GameCore::RogueTournBuildRefSortConfig* a2)
		{
			return ((::System::Double(*)(::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::GameCore::RogueTournBuildRefSortConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__CALCBUILDREFSORTRATE_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsCurVersionBuildRefForSort(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__ISCURVERSIONBUILDREFFORSORT_OFFSET))(a1);
		}

		static ::System::Boolean IsBuildRefTeamMemberMissing(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFTEAMMEMBERMISSING_OFFSET))(a1);
		}

		static ::System::Boolean IsBuildRefTeamMemberMissingInTeam(::RPG::Client::RogueTournBuildRefTeamData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournBuildRefTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFTEAMMEMBERMISSINGINTEAM_OFFSET))(a1);
		}

		static ::System::Boolean IsBuildRefEssentialFormulaMissing(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFESSENTIALFORMULAMISSING_OFFSET))(a1);
		}

		static ::System::Boolean IsBuildRefOptionalFormulaMissing(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFOPTIONALFORMULAMISSING_OFFSET))(a1);
		}

		static ::System::Boolean _IsBuildRefFormulaMissing(::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>* a1)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::RPG::Client::RogueFormulaData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__ISBUILDREFFORMULAMISSING_OFFSET))(a1);
		}

		static ::System::Boolean IsBuildRefHexMiracleMissing(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISBUILDREFHEXMIRACLEMISSING_OFFSET))(a1);
		}

		static ::System::String* GetGameLangCodeByCDNLangCode(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETGAMELANGCODEBYCDNLANGCODE_OFFSET))(a1);
		}

		static ::System::String* ConvertGameLangCode2API(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CONVERTGAMELANGCODE2API_OFFSET))(a1);
		}

		static ::RPG::Client::RogueFormulaData* GetCachedFormulaData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETCACHEDFORMULADATA_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetCachedAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETCACHEDAVATAR_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* GetSortedRoomCardInGame(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETSORTEDROOMCARDINGAME_OFFSET))(a1);
		}

		static ::System::ValueTuple_2<::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*> MergeSameUIDCard(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>* a2)
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*>(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomCardInGame*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_MERGESAMEUIDCARD_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueTournPersonaGameStyleData* GetBattleGameStyleData()
		{
			return ((::RPG::Client::RogueTournPersonaGameStyleData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETBATTLEGAMESTYLEDATA_OFFSET))();
		}

		static ::System::Boolean IsStyleParasite()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISSTYLEPARASITE_OFFSET))();
		}

		static ::System::Boolean IsStyleRaisingPig()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISSTYLERAISINGPIG_OFFSET))();
		}

		static ::RPG::GameCore::RogueTitanCategory ConvertFloorTypeToTitanCategory(::RPG::GameCore::RogueTournTitanFloorType a1)
		{
			return ((::RPG::GameCore::RogueTitanCategory(*)(::RPG::GameCore::RogueTournTitanFloorType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CONVERTFLOORTYPETOTITANCATEGORY_OFFSET))(a1);
		}

		static ::System::UInt32 GetTournExpLevelByExp(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETTOURNEXPLEVELBYEXP_OFFSET))(a1);
		}

		static ::System::Void ShowTournExpRewardPageFromActivityPanel()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_SHOWTOURNEXPREWARDPAGEFROMACTIVITYPANEL_OFFSET))();
		}

		static ::System::Boolean IsExpDouble()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISEXPDOUBLE_OFFSET))();
		}

		static ::System::Void _GetLauncherTransferParam(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__GETLAUNCHERTRANSFERPARAM_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetContentID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETCONTENTID_OFFSET))();
		}

		static ::System::Boolean CanTransferToLauncher()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CANTRANSFERTOLAUNCHER_OFFSET))();
		}

		static ::System::Void TransferToLauncher(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_TRANSFERTOLAUNCHER_OFFSET))(a1);
		}

		static ::System::Boolean IsInLauncherFloor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISINLAUNCHERFLOOR_OFFSET))();
		}

		static ::System::Void TeleportIntoRogueScene(::JGAMMPGMCNI* a1)
		{
			return ((::System::Void(*)(::JGAMMPGMCNI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_TELEPORTINTOROGUESCENE_OFFSET))(a1);
		}

		static ::System::Void TeleportOutOfRogueScene(::JGAMMPGMCNI* a1)
		{
			return ((::System::Void(*)(::JGAMMPGMCNI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_TELEPORTOUTOFROGUESCENE_OFFSET))(a1);
		}

		static ::System::Void TeleportInsideRogueScene(::JGAMMPGMCNI* a1)
		{
			return ((::System::Void(*)(::JGAMMPGMCNI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_TELEPORTINSIDEROGUESCENE_OFFSET))(a1);
		}

		static ::System::Void TeleportInsideRogueScene_1(::FHEGNOPNICH* a1, ::KHNBFDNKLHE* a2, ::PKPICFPDHEO* a3)
		{
			return ((::System::Void(*)(::FHEGNOPNICH*, ::KHNBFDNKLHE*, ::PKPICFPDHEO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_TELEPORTINSIDEROGUESCENE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _SetTransitionPerformanceTypeInRogue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__SETTRANSITIONPERFORMANCETYPEINROGUE_OFFSET))(a1);
		}

		static ::System::Void _SetTransitionPerformanceTypeOutOfRogue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__SETTRANSITIONPERFORMANCETYPEOUTOFROGUE_OFFSET))(a1);
		}

		static ::System::Boolean IsInEvolveRelicCocoonBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISINEVOLVERELICCOCOONBATTLE_OFFSET))();
		}

		static ::RPG::Client::Promises::IPromise* BackToModeSelectPage()
		{
			return ((::RPG::Client::Promises::IPromise*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_BACKTOMODESELECTPAGE_OFFSET))();
		}

		static ::System::Void TransferOpenModeSelectPage()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_TRANSFEROPENMODESELECTPAGE_OFFSET))();
		}

		static ::System::Boolean IsGuideAreasPassed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISGUIDEAREASPASSED_OFFSET))();
		}

		static ::System::Boolean IsPermanentGuideAreasPassed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISPERMANENTGUIDEAREASPASSED_OFFSET))();
		}

		static ::System::Boolean IsSeasonGuideAreasPassed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISSEASONGUIDEAREASPASSED_OFFSET))();
		}

		static ::System::UInt32 GetPassedSeasonGuideAreaCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETPASSEDSEASONGUIDEAREACOUNT_OFFSET))();
		}

		static ::System::Boolean IsAnyFormalAreaPassed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISANYFORMALAREAPASSED_OFFSET))();
		}

		static ::System::Boolean IsCurWeekChallengeExpired()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISCURWEEKCHALLENGEEXPIRED_OFFSET))();
		}

		static ::System::UInt32 GetQuestRewardActivityRewardID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETQUESTREWARDACTIVITYREWARDID_OFFSET))();
		}

		static ::System::Void SetAllQuestRewardQuestsSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_SETALLQUESTREWARDQUESTSSEEN_OFFSET))();
		}

		static ::System::Void SetQuestRewardTabGroupQuestsSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_SETQUESTREWARDTABGROUPQUESTSSEEN_OFFSET))(a1);
		}

		static ::System::Void SetQuestRewardTabQuestsSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_SETQUESTREWARDTABQUESTSSEEN_OFFSET))(a1);
		}

		static ::System::Void ClearOutdatedQuestRewardRedDotData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CLEAROUTDATEDQUESTREWARDREDDOTDATA_OFFSET))();
		}

		static ::System::Void SetActivityWeekChallengeSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_SETACTIVITYWEEKCHALLENGESEEN_OFFSET))();
		}

		static ::System::Void Log(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_LOG_OFFSET))(a1);
		}

		static ::System::Void Log_1(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_LOG_1_OFFSET))(a1, a2);
		}

		static ::System::Void LogWarning(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_LOGWARNING_OFFSET))(a1);
		}

		static ::System::Void LogWarning_1(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_LOGWARNING_1_OFFSET))(a1, a2);
		}

		static ::System::Void LogError(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_LOGERROR_OFFSET))(a1);
		}

		static ::System::Void LogError_1(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_LOGERROR_1_OFFSET))(a1, a2);
		}

		static ::System::Void Assert(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ASSERT_OFFSET))(a1);
		}

		static ::System::Void Assert_1(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ASSERT_1_OFFSET))(a1, a2);
		}

		static ::System::Void Assert_2(::System::Boolean a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ASSERT_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportBuffSelection(::DNKAAIFEKNP_RogueTournSelectType a1, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::DNKAAIFEKNP_RogueTournSelectType, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_REPORTBUFFSELECTION_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::RogueTournDivisionData* GetCurDivisionData()
		{
			return ((::RPG::Client::RogueTournDivisionData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETCURDIVISIONDATA_OFFSET))();
		}

		static ::RPG::Client::RogueTournDivisionData* GetDivisionDataByLevel(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournDivisionData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETDIVISIONDATABYLEVEL_OFFSET))(a1);
		}

		static ::System::Boolean IsShowSettleDivsionUI(::RPG::Client::RogueTournSettleData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournSettleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ISSHOWSETTLEDIVSIONUI_OFFSET))(a1);
		}

		static ::System::Boolean CheckSettleIsChallengeDivision(::RPG::Client::RogueTournSettleData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueTournSettleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CHECKSETTLEISCHALLENGEDIVISION_OFFSET))(a1);
		}

		static ::System::Boolean CheckLevelIsChallengeDivision(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CHECKLEVELISCHALLENGEDIVISION_OFFSET))(a1);
		}

		static ::System::Boolean CheckGameIsChallengeDivision()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CHECKGAMEISCHALLENGEDIVISION_OFFSET))();
		}

		static ::System::Boolean CheckIsChallengeDivisionProgressDown(::RPG::Client::IRogueTournGameSettleResultComposition* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IRogueTournGameSettleResultComposition*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_CHECKISCHALLENGEDIVISIONPROGRESSDOWN_OFFSET))(a1);
		}

		static ::JEOPNAHLJHA GetSeasonTalentCoinType()
		{
			return ((::JEOPNAHLJHA(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_GETSEASONTALENTCOINTYPE_OFFSET))();
		}

		static ::System::Func_1<::RPG::Client::Promises::IPromise*>* _DelayedPromise(::System::Single a1)
		{
			return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS__DELAYEDPROMISE_OFFSET))(a1);
		}

		static ::System::Void TryDispose(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_TRYDISPOSE_OFFSET))(a1);
		}

	};
}
