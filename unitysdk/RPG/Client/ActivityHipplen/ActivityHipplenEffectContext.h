#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJBFNECBPPK;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenRoutineManager; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenTraitData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_ADDTRAITRESULTDATA_OFFSET UNITYSDK_OFFSET(0xCD480C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_ADDWORKRESULTDATA_OFFSET UNITYSDK_OFFSET(0xCD466C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_CHECKENERGYOVERFLOW_OFFSET UNITYSDK_OFFSET(0xCD481C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xCD44930)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_ROUTINEMGR_OFFSET UNITYSDK_OFFSET(0xCD49130)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_TOTALRESULTDATA_OFFSET UNITYSDK_OFFSET(0xCD49170)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_TRAITEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xCD49150)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_TRAITRESULTDATALIST_OFFSET UNITYSDK_OFFSET(0xCD49190)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_WORKRESULTDATALIST_OFFSET UNITYSDK_OFFSET(0xCD491B0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_RESET_OFFSET UNITYSDK_OFFSET(0xCD458A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_ROUTINEMGR_OFFSET UNITYSDK_OFFSET(0xCD49140)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_TOTALRESULTDATA_OFFSET UNITYSDK_OFFSET(0xCD49180)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_TRAITEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xCD49160)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_TRAITRESULTDATALIST_OFFSET UNITYSDK_OFFSET(0xCD491A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_WORKRESULTDATALIST_OFFSET UNITYSDK_OFFSET(0xCD491C0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenEffectContext_TypeDefinitionIndex = 77823;

	class ActivityHipplenEffectContext : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* Work; // 0x10
		::Il2CppArray<::System::Single>* StatReduceRatio; // 0x18
		::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager* _RoutineMgr_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* _WorkResultDataList_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::KJBFNECBPPK*>* _TraitEffectList_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* _TraitResultDataList_k__BackingField; // 0x38
		::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* _TotalResultData_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*>* _TraitList; // 0x48
		::Il2CppArray<::System::Single>* StatGetRatio; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_RESET_OFFSET))(this);
		}

		::System::Void AddTraitResultData(::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_ADDTRAITRESULTDATA_OFFSET))(this, a1);
		}

		::System::Void AddWorkResultData(::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_ADDWORKRESULTDATA_OFFSET))(this, a1);
		}

		::System::Void CheckEnergyOverflow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_CHECKENERGYOVERFLOW_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager* get_RoutineMgr()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_ROUTINEMGR_OFFSET))(this);
		}

		::System::Void set_RoutineMgr(::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenRoutineManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_ROUTINEMGR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::KJBFNECBPPK*>* get_TraitEffectList()
		{
			return ((::System::Collections::Generic::List_1<::KJBFNECBPPK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_TRAITEFFECTLIST_OFFSET))(this);
		}

		::System::Void set_TraitEffectList(::System::Collections::Generic::List_1<::KJBFNECBPPK*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KJBFNECBPPK*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_TRAITEFFECTLIST_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* get_TotalResultData()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_TOTALRESULTDATA_OFFSET))(this);
		}

		::System::Void set_TotalResultData(::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_TOTALRESULTDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* get_TraitResultDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_TRAITRESULTDATALIST_OFFSET))(this);
		}

		::System::Void set_TraitResultDataList(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_TRAITRESULTDATALIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* get_WorkResultDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_GET_WORKRESULTDATALIST_OFFSET))(this);
		}

		::System::Void set_WorkResultDataList(::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENEFFECTCONTEXT_SET_WORKRESULTDATALIST_OFFSET))(this, a1);
		}

	};
}
