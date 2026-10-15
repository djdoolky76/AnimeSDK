#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class COCHLLCNDJF;
class GADFFIFFNHM;
class JGGGMLCFHFG;
class KPHFNLMNPFC;
class MCHDFGLEMCD;
class NPDKAGOCOLG;
namespace RPG::Client { class ChimeraEvaluationData; }
namespace RPG::Client { class ChimeraEvaluationDisplayData; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xCB48CE0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB46720)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETBESTEVALUATIONCHIMERAS_OFFSET UNITYSDK_OFFSET(0xCB48610)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETCHIMERAEVALUATIONTEXTPARAMS_OFFSET UNITYSDK_OFFSET(0xCB48A50)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETEVALUATIONDATA_OFFSET UNITYSDK_OFFSET(0xCB480C0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETEVALUATIONGROUPDATA_OFFSET UNITYSDK_OFFSET(0xCB45F70)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETEVALUATIONPROGRESSDATA_OFFSET UNITYSDK_OFFSET(0xCB481B0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERABESTEVALUATIONS_OFFSET UNITYSDK_OFFSET(0xCB48CA0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERAEVALUATIONDATALIST_OFFSET UNITYSDK_OFFSET(0xCB48C10)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERAEVALUATIONGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xCB48CC0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERAEVALUATIONPROGRESSDATADICT_OFFSET UNITYSDK_OFFSET(0xCB48C30)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERASATISFYEVALUATIONDICT_OFFSET UNITYSDK_OFFSET(0xCB48C50)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_INCREASEEVALUATIONPROGRESSDATA_OFFSET UNITYSDK_OFFSET(0xCB48280)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xCB460E0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_ISCHIMERASATISFYEVALUATIONCONDITION_OFFSET UNITYSDK_OFFSET(0xCB48590)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERABESTEVALUATIONS_OFFSET UNITYSDK_OFFSET(0xCB48CB0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERAEVALUATIONDATALIST_OFFSET UNITYSDK_OFFSET(0xCB48C20)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERAEVALUATIONGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xCB48CD0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERAEVALUATIONPROGRESSDATADICT_OFFSET UNITYSDK_OFFSET(0xCB48C40)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SYNCCHIMERA_OFFSET UNITYSDK_OFFSET(0xCB46820)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SYNCEVALUATIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xCB47BF0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SYNCEXPIREEVALUATION_OFFSET UNITYSDK_OFFSET(0xCB470C0)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER_UPDATEEVALUATIONPROGRESSDATA_OFFSET UNITYSDK_OFFSET(0xCB48400)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER__INITCHIMERAEVALUATIONDATA_OFFSET UNITYSDK_OFFSET(0xCB46190)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER__INITCHIMERAEVALUATIONGROUPDATA_OFFSET UNITYSDK_OFFSET(0xCB46490)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER__INITCHIMERAEVALUATIONPROGRESSDATA_OFFSET UNITYSDK_OFFSET(0xCB46420)
#define RPG_CLIENT_CHIMERAEVALUATIONMANAGER__SYNCCHIMERAEVALUATIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xCB46CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraEvaluationManager_TypeDefinitionIndex = 63490;

	class ChimeraEvaluationManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* _ChimeraBestEvaluations_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>* _ChimeraEvaluationDataList_k__BackingField; // 0x18
		::MCHDFGLEMCD* _Evaluator; // 0x20
		::System::Collections::Generic::List_1<::KPHFNLMNPFC*>* _ChimeraEvaluationGroupDataList_k__BackingField; // 0x28
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::JGGGMLCFHFG*>* _ChimeraEvaluationProgressDataDict_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void _InitChimeraEvaluationData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER__INITCHIMERAEVALUATIONDATA_OFFSET))(this);
		}

		::System::Void _InitChimeraEvaluationProgressData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER__INITCHIMERAEVALUATIONPROGRESSDATA_OFFSET))(this);
		}

		::System::Void _InitChimeraEvaluationGroupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER__INITCHIMERAEVALUATIONGROUPDATA_OFFSET))(this);
		}

		::System::Void SyncChimera(::System::Collections::Generic::IEnumerable_1<::GADFFIFFNHM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::GADFFIFFNHM*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SYNCCHIMERA_OFFSET))(this, a1);
		}

		::System::Void SyncExpireEvaluation(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::NPDKAGOCOLG*>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::NPDKAGOCOLG*>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SYNCEXPIREEVALUATION_OFFSET))(this, a1);
		}

		::System::Void SyncEvaluationProgress(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::COCHLLCNDJF*>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::COCHLLCNDJF*>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SYNCEVALUATIONPROGRESS_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraEvaluationData* GetEvaluationData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraEvaluationData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETEVALUATIONDATA_OFFSET))(this, a1);
		}

		::JGGGMLCFHFG* GetEvaluationProgressData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::JGGGMLCFHFG*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETEVALUATIONPROGRESSDATA_OFFSET))(this, a1, a2);
		}

		::KPHFNLMNPFC* GetEvaluationGroupData(::System::UInt32 a1)
		{
			return ((::KPHFNLMNPFC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETEVALUATIONGROUPDATA_OFFSET))(this, a1);
		}

		::System::Void IncreaseEvaluationProgressData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_INCREASEEVALUATIONPROGRESSDATA_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateEvaluationProgressData(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_UPDATEEVALUATIONPROGRESSDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsChimeraSatisfyEvaluationCondition(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_ISCHIMERASATISFYEVALUATIONCONDITION_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* GetBestEvaluationChimeras()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETBESTEVALUATIONCHIMERAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* GetChimeraEvaluationTextParams(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GETCHIMERAEVALUATIONTEXTPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SyncChimeraEvaluationProgress(::System::UInt32 a1, ::COCHLLCNDJF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::COCHLLCNDJF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER__SYNCCHIMERAEVALUATIONPROGRESS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>* get_ChimeraEvaluationDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERAEVALUATIONDATALIST_OFFSET))(this);
		}

		::System::Void set_ChimeraEvaluationDataList(::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERAEVALUATIONDATALIST_OFFSET))(this, a1);
		}

		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::JGGGMLCFHFG*>* get_ChimeraEvaluationProgressDataDict()
		{
			return ((::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::JGGGMLCFHFG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERAEVALUATIONPROGRESSDATADICT_OFFSET))(this);
		}

		::System::Void set_ChimeraEvaluationProgressDataDict(::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::JGGGMLCFHFG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::JGGGMLCFHFG*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERAEVALUATIONPROGRESSDATADICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_ChimeraSatisfyEvaluationDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERASATISFYEVALUATIONDICT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* get_ChimeraBestEvaluations()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERABESTEVALUATIONS_OFFSET))(this);
		}

		::System::Void set_ChimeraBestEvaluations(::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChimeraEvaluationDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERABESTEVALUATIONS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::KPHFNLMNPFC*>* get_ChimeraEvaluationGroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::KPHFNLMNPFC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_GET_CHIMERAEVALUATIONGROUPDATALIST_OFFSET))(this);
		}

		::System::Void set_ChimeraEvaluationGroupDataList(::System::Collections::Generic::List_1<::KPHFNLMNPFC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KPHFNLMNPFC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAEVALUATIONMANAGER_SET_CHIMERAEVALUATIONGROUPDATALIST_OFFSET))(this, a1);
		}

	};
}
