#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICGOGNGGID.h"
#include "unitysdk/System/Object.h"
class AMMDOPEDNJF;
class EJEDKALMMNP;
class IFCDCCJEJKD;
class KOBGMGHMCLF;
class LLCICCEMLIO;
class LPFCCHDGOFB;
class MDNBBCOBGPH;
namespace RPG::Client { class TeamBuild; }
namespace RPG::Client { class TeamBuildRecipe; }
namespace RPG::Client { class TeamBuildSynopsis; }
namespace RPG::Client { class TeamBuildUnit; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMBUILDCALCULATOR_CHECKDATAISVALID_OFFSET UNITYSDK_OFFSET(0xE1C7870)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE1C9880)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDASSOCIATION_OFFSET UNITYSDK_OFFSET(0xE1C46B0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDCANDIDATEPOOLASSOCIATION_OFFSET UNITYSDK_OFFSET(0xE1C5930)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDPRIORITIZEDASSOCIATION_OFFSET UNITYSDK_OFFSET(0xE1C5530)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDSYNOPSIS_OFFSET UNITYSDK_OFFSET(0xE1C6630)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDS_OFFSET UNITYSDK_OFFSET(0xE1C4300)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GET_MAXTEAMBUILDSYNOPSISCOUNT_OFFSET UNITYSDK_OFFSET(0xE1C3B90)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_REFRESH_OFFSET UNITYSDK_OFFSET(0xE1C3C90)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__ADDTEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0xE1C8D30)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDCANDIDATEPOOLFROMCONFIG_OFFSET UNITYSDK_OFFSET(0xE1C8070)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPEFROMBIGDATA_OFFSET UNITYSDK_OFFSET(0xE1C82F0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPEFROMCONFIG_OFFSET UNITYSDK_OFFSET(0xE1C7DE0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPES_OFFSET UNITYSDK_OFFSET(0xE1C7B70)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__CHECKHASUNRELEASEDAVATARCHANGED_OFFSET UNITYSDK_OFFSET(0xE1C7C90)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__CLEARDATA_OFFSET UNITYSDK_OFFSET(0xE1C3EA0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__ENSURERESULTCOUNT_OFFSET UNITYSDK_OFFSET(0xE1C5460)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__FILLTEAMBUILDRESULTS_OFFSET UNITYSDK_OFFSET(0xE1C5C20)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__FILLWITHALTERNATIVEAVATARS_OFFSET UNITYSDK_OFFSET(0xE1C5800)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__FILLWITHMAINAVATARS_OFFSET UNITYSDK_OFFSET(0xE1C5640)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__GETCANDIDATEPOOLS_OFFSET UNITYSDK_OFFSET(0xE1C50E0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__GETTEAMBUILDCANDIDATEPOOLASSOCIATION_B__19_0_OFFSET UNITYSDK_OFFSET(0xE1C9B20)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__GETTEAMBUILDSYNOPSIS_B__25_0_OFFSET UNITYSDK_OFFSET(0xE1C9B50)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__GETUSINGTEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0xE1C45F0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__HASAVATARCHECKER_OFFSET UNITYSDK_OFFSET(0xE1C9780)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__PREPARERECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0xE1C3FA0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__PREPARETEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0xE1C79C0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__PREPAREUNRELEASEDAVATARDATA_OFFSET UNITYSDK_OFFSET(0xE1C4180)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__TRUECHECKER_OFFSET UNITYSDK_OFFSET(0xE1C9840)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__TRYGETTEAMMATEAVATARID_OFFSET UNITYSDK_OFFSET(0xE1C6A90)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__UPDATEUNRELEASEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0xE1C7D00)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__27_0_OFFSET UNITYSDK_OFFSET(0xE1C9BD0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__27_1_OFFSET UNITYSDK_OFFSET(0xE1C9F10)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARETEAMBUILDRECIPE_B__30_0_OFFSET UNITYSDK_OFFSET(0xE1C9F90)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPAREUNRELEASEDAVATARDATA_B__28_0_OFFSET UNITYSDK_OFFSET(0xE1C9F80)

namespace RPG::Client
{
	class TeamBuildCalculator : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildRecipe*>*>* _ConfigTeamBuildRecipeDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LLCICCEMLIO*>* _TeamBuildCandidatePoolDict; // 0x18
		::IFCDCCJEJKD* _UnreleasedAvatarData; // 0x20
		::System::Collections::Generic::List_1<::KOBGMGHMCLF*>* _RecommendLineups; // 0x28
		::System::Collections::Generic::Dictionary_2<::LICGOGNGGID, ::LPFCCHDGOFB*>* _TeamBuildCandidateRecipeDict; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _RecommendAvatarIDs; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnreleasedAvatarIDs; // 0x40
		::System::Collections::Generic::Dictionary_2<::LICGOGNGGID, ::RPG::Client::TeamBuildRecipe*>* _BigDataTeamBuildRecipeDict; // 0x48
		::MDNBBCOBGPH* _TeamBuildSynopsisBuilder; // 0x50
		::AMMDOPEDNJF* _TeamBuildBuilder; // 0x58
		::System::Boolean _HasData; // 0x60
		::System::Byte _padding0[0x3];
		::System::Nullable* _MaxTeamBuildSynopsisCount; // 0x64
		// static const ::System::Object _MaxAlternativeCount; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_CTOR_OFFSET))(this);
		}

		::System::Int32 get_MaxTeamBuildSynopsisCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GET_MAXTEAMBUILDSYNOPSISCOUNT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* Refresh()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_REFRESH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamBuild*>* GetTeamBuilds(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamBuild*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* GetTeamBuildAssociation(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDASSOCIATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* GetTeamBuildPrioritizedAssociation(::System::Int32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3, ::System::Boolean a4)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDPRIORITIZEDASSOCIATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* GetTeamBuildCandidatePoolAssociation(::System::Int32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3, ::System::Boolean a4, ::System::Collections::Generic::IList_1<::RPG::Client::TeamBuildSynopsis*>* a5)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean, ::System::Collections::Generic::IList_1<::RPG::Client::TeamBuildSynopsis*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDCANDIDATEPOOLASSOCIATION_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _FillWithMainAvatars(::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* a1, ::System::Int32 a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3, ::System::Collections::Generic::IList_1<::System::UInt32>* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*, ::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__FILLWITHMAINAVATARS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _FillWithAlternativeAvatars(::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::IList_1<::System::UInt32>* a4, ::System::Collections::Generic::IList_1<::System::UInt32>* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__FILLWITHALTERNATIVEAVATARS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _FillTeamBuildResults(::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* a1, ::System::Int32 a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3, ::System::Collections::Generic::IList_1<::System::UInt32>* a4, ::System::Boolean a5, ::System::Action* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*, ::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__FILLTEAMBUILDRESULTS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _EnsureResultCount(::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__ENSURERESULTCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LLCICCEMLIO*>*>* _GetCandidatePools(::RPG::Client::TeamBuildRecipe* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LLCICCEMLIO*>*>*(*)(::PVOID, ::RPG::Client::TeamBuildRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__GETCANDIDATEPOOLS_OFFSET))(this, a1);
		}

		::RPG::Client::TeamBuildSynopsis* GetTeamBuildSynopsis(::RPG::Client::TeamBuild* a1)
		{
			return ((::RPG::Client::TeamBuildSynopsis*(*)(::PVOID, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDSYNOPSIS_OFFSET))(this, a1);
		}

		::System::Boolean CheckDataIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_CHECKDATAISVALID_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareRecommendLineupData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__PREPARERECOMMENDLINEUPDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareUnreleasedAvatarData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__PREPAREUNRELEASEDAVATARDATA_OFFSET))(this);
		}

		::System::Void _ClearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__CLEARDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareTeamBuildRecipe()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__PREPARETEAMBUILDRECIPE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _BuildTeamBuildRecipes()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPES_OFFSET))(this);
		}

		::System::Void _BuildTeamBuildRecipeFromConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPEFROMCONFIG_OFFSET))(this);
		}

		::System::Void _BuildTeamBuildCandidatePoolFromConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDCANDIDATEPOOLFROMCONFIG_OFFSET))(this);
		}

		::System::Boolean _CheckHasUnreleasedAvatarChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__CHECKHASUNRELEASEDAVATARCHANGED_OFFSET))(this);
		}

		::System::Void _UpdateUnreleasedAvatarIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__UPDATEUNRELEASEDAVATARIDS_OFFSET))(this);
		}

		::System::Void _BuildTeamBuildRecipeFromBigData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPEFROMBIGDATA_OFFSET))(this);
		}

		::System::Void _AddTeamBuildRecipe(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildRecipe*>*>* a1, ::RPG::Client::TeamBuildRecipe* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildRecipe*>*>*, ::RPG::Client::TeamBuildRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__ADDTEAMBUILDRECIPE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TeamBuildRecipe* _GetUsingTeamBuildRecipe(::RPG::Client::TeamBuildRecipe* a1)
		{
			return ((::RPG::Client::TeamBuildRecipe*(*)(::PVOID, ::RPG::Client::TeamBuildRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__GETUSINGTEAMBUILDRECIPE_OFFSET))(this, a1);
		}

		static ::System::Boolean _TryGetTeammateAvatarID(::RPG::Client::TeamBuildUnit* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::LLCICCEMLIO*>* a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::RPG::Client::TeamBuildUnit*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::LLCICCEMLIO*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__TRYGETTEAMMATEAVATARID_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean _HasAvatarChecker(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__HASAVATARCHECKER_OFFSET))(a1);
		}

		static ::System::Boolean _TrueChecker(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__TRUECHECKER_OFFSET))(a1);
		}

		::System::Void _GetTeamBuildCandidatePoolAssociation_b__19_0(::MDNBBCOBGPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDNBBCOBGPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__GETTEAMBUILDCANDIDATEPOOLASSOCIATION_B__19_0_OFFSET))(this, a1);
		}

		::LLCICCEMLIO* _GetTeamBuildSynopsis_b__25_0(::System::UInt32 a1)
		{
			return ((::LLCICCEMLIO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__GETTEAMBUILDSYNOPSIS_B__25_0_OFFSET))(this, a1);
		}

		::System::Void __PrepareRecommendLineupData_b__27_0(::EJEDKALMMNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJEDKALMMNP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__27_0_OFFSET))(this, a1);
		}

		::System::Void __PrepareRecommendLineupData_b__27_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__27_1_OFFSET))(this, a1);
		}

		::System::Void __PrepareUnreleasedAvatarData_b__28_0(::IFCDCCJEJKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFCDCCJEJKD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPAREUNRELEASEDAVATARDATA_B__28_0_OFFSET))(this, a1);
		}

		::System::Void __PrepareTeamBuildRecipe_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARETEAMBUILDRECIPE_B__30_0_OFFSET))(this);
		}

	};
}
