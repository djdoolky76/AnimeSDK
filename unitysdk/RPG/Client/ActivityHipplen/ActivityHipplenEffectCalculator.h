#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOKFDBENEKJ_TriggerType.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenEffectSource.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"
class AOIOJIPNOAL;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectContext; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CALCULATEEFFECTLISTVIEWDATA_OFFSET UNITYSDK_OFFSET(0x1DC086C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CALCULATEWORKEFFECTVIEWDATA_OFFSET UNITYSDK_OFFSET(0x1DC06E60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHANGEGETRATIO_OFFSET UNITYSDK_OFFSET(0x1DC09760)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHANGEREDUCERATIO_OFFSET UNITYSDK_OFFSET(0x1DC097F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHANGESTAT_OFFSET UNITYSDK_OFFSET(0x1DC094B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x1DC08920)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHECKSTATVALUEWITHCHANGEVALUE_OFFSET UNITYSDK_OFFSET(0x1DC08FC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA0900)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DC06E10)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_GET_CURRESULTDATA_OFFSET UNITYSDK_OFFSET(0x1CCA08B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_INIT_OFFSET UNITYSDK_OFFSET(0x1DC06D90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CALCULATETRAITEFFECTBYTRIGGERTYPE_OFFSET UNITYSDK_OFFSET(0x1DC08210)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CALCULATETRAITEFFECTONPROGRESSINGADDITION_OFFSET UNITYSDK_OFFSET(0x1DC084C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKAGENDAFIRSTWORK_OFFSET UNITYSDK_OFFSET(0x1DC099C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKCYCLELIST_OFFSET UNITYSDK_OFFSET(0x1DC09A80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKCYCLETRIALGRADE_OFFSET UNITYSDK_OFFSET(0x1DC09C10)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKMINIGAMELIST_OFFSET UNITYSDK_OFFSET(0x1CCA04A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKSINGLECONDITION_OFFSET UNITYSDK_OFFSET(0x1DC08DF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKSTATGRADE_OFFSET UNITYSDK_OFFSET(0x1DC09C90)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKSTATVALUE_OFFSET UNITYSDK_OFFSET(0x1CCA0520)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKWORKLIST_OFFSET UNITYSDK_OFFSET(0x1DC09880)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKWORKTYPE_OFFSET UNITYSDK_OFFSET(0x1CCA0220)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenEffectCalculator_TypeDefinitionIndex = 77814;

	class ActivityHipplenEffectCalculator : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenEffectContext* _EffectContext; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* CalculateWorkEffectViewData(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>* a1, ::RPG::GameCore::HipplenGameGradeType a2)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*>*, ::RPG::GameCore::HipplenGameGradeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CALCULATEWORKEFFECTVIEWDATA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* CalculateEffectListViewData(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a2)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CALCULATEEFFECTLISTVIEWDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckCondition(::System::Collections::Generic::IList_1<::AOIOJIPNOAL*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::AOIOJIPNOAL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHECKCONDITION_OFFSET))(this, a1);
		}

		::System::Boolean CheckStatValueWithChangeValue(::System::Collections::Generic::IList_1<::AOIOJIPNOAL*>* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2, ::RPG::GameCore::HipplenStatType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::AOIOJIPNOAL*>*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*, ::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHECKSTATVALUEWITHCHANGEVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ChangeStat(::System::UInt32 a1, ::System::Int32 a2, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a3, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHANGESTAT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ChangeGetRatio(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHANGEGETRATIO_OFFSET))(this, a1, a2);
		}

		::System::Void ChangeReduceRatio(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_CHANGEREDUCERATIO_OFFSET))(this, a1, a2);
		}

		::System::Void _CalculateTraitEffectByTriggerType(::LOKFDBENEKJ_TriggerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOKFDBENEKJ_TriggerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CALCULATETRAITEFFECTBYTRIGGERTYPE_OFFSET))(this, a1);
		}

		::System::Void _CalculateTraitEffectOnProgressingAddition(::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CALCULATETRAITEFFECTONPROGRESSINGADDITION_OFFSET))(this, a1);
		}

		::System::Boolean _CheckSingleCondition(::AOIOJIPNOAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOIOJIPNOAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKSINGLECONDITION_OFFSET))(this, a1);
		}

		::System::Boolean _CheckWorkList(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKWORKLIST_OFFSET))(this, a1);
		}

		::System::Boolean _CheckAgendaFirstWork(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKAGENDAFIRSTWORK_OFFSET))(this, a1);
		}

		::System::Boolean _CheckCycleList(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKCYCLELIST_OFFSET))(this, a1);
		}

		::System::Boolean _CheckCycleTrialGrade(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKCYCLETRIALGRADE_OFFSET))(this, a1);
		}

		::System::Boolean _CheckStatGrade(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKSTATGRADE_OFFSET))(this, a1);
		}

		::System::Boolean _CheckWorkType(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKWORKTYPE_OFFSET))(this, a1);
		}

		::System::Boolean _CheckMiniGameList(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKMINIGAMELIST_OFFSET))(this, a1);
		}

		::System::Boolean _CheckStatValue(::System::String* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2, ::RPG::GameCore::HipplenStatType a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*, ::RPG::GameCore::HipplenStatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR__CHECKSTATVALUE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* get_CurResultData()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCALCULATOR_GET_CURRESULTDATA_OFFSET))(this);
		}

	};
}
