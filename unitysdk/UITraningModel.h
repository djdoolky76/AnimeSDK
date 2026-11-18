#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/MIKOMFIBMBN.h"

class AHIKNHGPAMH;
class IBNNLPGANLL;
class LMAJAHEPDEI;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DFDEIDBBGHG_1;

#define UITRANINGMODEL_CLEARQUESTNEW_OFFSET UNITYSDK_OFFSET(0x1A80F8F0)
#define UITRANINGMODEL_CLEARSPECIALTRAININGNEWALL_OFFSET UNITYSDK_OFFSET(0x1A80FAA0)
#define UITRANINGMODEL_CLEARSPECIALTRAININGNEW_OFFSET UNITYSDK_OFFSET(0x1A80F880)
#define UITRANINGMODEL_GETTRAINQUESTUNLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x1A80DE60)
#define UITRANINGMODEL_GET_BADGEDATAMODEL_OFFSET UNITYSDK_OFFSET(0x1A80CFC0)
#define UITRANINGMODEL_HASVALIDREWARD_OFFSET UNITYSDK_OFFSET(0x1A80E510)
#define UITRANINGMODEL_ISQUESTNEW_OFFSET UNITYSDK_OFFSET(0x1A80EC90)
#define UITRANINGMODEL_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x1A80E350)
#define UITRANINGMODEL_ISREWARDUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1A80E3C0)
#define UITRANINGMODEL_ISSPECIALTRAININGNEW_OFFSET UNITYSDK_OFFSET(0x1A80E9D0)
#define UITRANINGMODEL_ISTACTICSTRAININGNEW_1_OFFSET UNITYSDK_OFFSET(0x1A80ED80)
#define UITRANINGMODEL_ISTACTICSTRAININGNEW_OFFSET UNITYSDK_OFFSET(0x1A80ED10)
#define UITRANINGMODEL_MARKTACTICSQUESTLISTREAD_OFFSET UNITYSDK_OFFSET(0x1A80F3C0)
#define UITRANINGMODEL_MARKTACTICSQUESTREAD_OFFSET UNITYSDK_OFFSET(0x1A80EF70)
#define UITRANINGMODEL_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1A80D090)
#define UITRANINGMODEL_ONSPECIALTRAININGNEWCHANGED_OFFSET UNITYSDK_OFFSET(0x1A80F990)
#define UITRANINGMODEL_ONSTART_OFFSET UNITYSDK_OFFSET(0x1A80CED0)
#define UITRANINGMODEL_REFRESHREDPOINT_OFFSET UNITYSDK_OFFSET(0x1A80D350)
#define UITRANINGMODEL_REFRESHSPECIALTRAININGREDPOINT_OFFSET UNITYSDK_OFFSET(0x1A8100D0)
#define UITRANINGMODEL_SAVETRAININGSPECIALNEWDATA_OFFSET UNITYSDK_OFFSET(0x1A80F1A0)
#define UITRANINGMODEL_UPDATESPECIALTRANINGINFO_OFFSET UNITYSDK_OFFSET(0x1A80D150)
#define UITRANINGMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A810720)
#define UITRANINGMODEL___BASE_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1A810780)
#define UITRANINGMODEL___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1A810810)

inline static constexpr unsigned int UITraningModel_TypeDefinitionIndex = 75890;

class UITraningModel : public ::JGELKBLKFHE
{
public:
	// static const ::MAOGHPFBDKH TRIAL_BATTLE_NEW_TYPE = 0x3A; // 0x0
	::System::Collections::Generic::HashSet_1<::System::Int32>* TakeRewardRecordList; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* trainTypes; // 0x20
	::MIKOMFIBMBN LastFromCtrl; // 0x28
	::System::Byte _padding0[0x4];
	::System::UInt32 CompleteSpecialTrainingNum; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITRANINGMODEL__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITRANINGMODEL_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITRANINGMODEL_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Void UpdateSpecialTraningInfo(::System::UInt32 completeSpecialTrainingNum, ::DFDEIDBBGHG_1<::System::UInt32>* takeRewardRecordList)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::DFDEIDBBGHG_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + UITRANINGMODEL_UPDATESPECIALTRANINGINFO_OFFSET))(this, completeSpecialTrainingNum, takeRewardRecordList);
	}

	::System::Int32 GetTrainQuestUnlockCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UITRANINGMODEL_GETTRAINQUESTUNLOCKCOUNT_OFFSET))(this);
	}

	::System::Boolean IsRewardTaken(::System::Int32 traningRewardID)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UITRANINGMODEL_ISREWARDTAKEN_OFFSET))(this, traningRewardID);
	}

	::System::Boolean IsRewardUnlocked(::System::Int32 traningRewardID)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UITRANINGMODEL_ISREWARDUNLOCKED_OFFSET))(this, traningRewardID);
	}

	::System::Boolean HasValidReward()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UITRANINGMODEL_HASVALIDREWARD_OFFSET))(this);
	}

	::IBNNLPGANLL* get_BadgeDataModel()
	{
		return ((::IBNNLPGANLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITRANINGMODEL_GET_BADGEDATAMODEL_OFFSET))(this);
	}

	::System::Boolean IsSpecialTrainingNew(::AHIKNHGPAMH* template_)
	{
		return ((::System::Boolean(*)(::PVOID, ::AHIKNHGPAMH*))((::PBYTE)hIl2Cpp + UITRANINGMODEL_ISSPECIALTRAININGNEW_OFFSET))(this, template_);
	}

	::System::Boolean IsTacticsTrainingNew(::LMAJAHEPDEI* template_)
	{
		return ((::System::Boolean(*)(::PVOID, ::LMAJAHEPDEI*))((::PBYTE)hIl2Cpp + UITRANINGMODEL_ISTACTICSTRAININGNEW_OFFSET))(this, template_);
	}

	::System::Boolean IsTacticsTrainingNew_1(::System::Int32 trainingQuestID)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UITRANINGMODEL_ISTACTICSTRAININGNEW_1_OFFSET))(this, trainingQuestID);
	}

	::System::Boolean MarkTacticsQuestRead(::System::Int32 trainingQuestID)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UITRANINGMODEL_MARKTACTICSQUESTREAD_OFFSET))(this, trainingQuestID);
	}

	::System::Boolean MarkTacticsQuestListRead(::System::Collections::Generic::IEnumerable_1<::LMAJAHEPDEI*>* templates)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::LMAJAHEPDEI*>*))((::PBYTE)hIl2Cpp + UITRANINGMODEL_MARKTACTICSQUESTLISTREAD_OFFSET))(this, templates);
	}

	::System::Boolean ClearSpecialTrainingNew(::AHIKNHGPAMH* template_)
	{
		return ((::System::Boolean(*)(::PVOID, ::AHIKNHGPAMH*))((::PBYTE)hIl2Cpp + UITRANINGMODEL_CLEARSPECIALTRAININGNEW_OFFSET))(this, template_);
	}

	::System::Boolean ClearSpecialTrainingNewAll()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UITRANINGMODEL_CLEARSPECIALTRAININGNEWALL_OFFSET))(this);
	}

	::System::Boolean IsQuestNew(::System::Int32 questId)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UITRANINGMODEL_ISQUESTNEW_OFFSET))(this, questId);
	}

	::System::Boolean ClearQuestNew(::System::Int32 questId)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UITRANINGMODEL_CLEARQUESTNEW_OFFSET))(this, questId);
	}

	::System::Void OnSpecialTrainingNewChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITRANINGMODEL_ONSPECIALTRAININGNEWCHANGED_OFFSET))(this);
	}

	::System::Void SaveTrainingSpecialNewData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITRANINGMODEL_SAVETRAININGSPECIALNEWDATA_OFFSET))(this);
	}

	::System::Void RefreshRedPoint()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITRANINGMODEL_REFRESHREDPOINT_OFFSET))(this);
	}

	::System::Void RefreshSpecialTrainingRedPoint()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITRANINGMODEL_REFRESHSPECIALTRAININGREDPOINT_OFFSET))(this);
	}

	::System::Void __base_OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITRANINGMODEL___BASE_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Void __base_OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITRANINGMODEL___BASE_ONSTART_OFFSET))(this);
	}
};
