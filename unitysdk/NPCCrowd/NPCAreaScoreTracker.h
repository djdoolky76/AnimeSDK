#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/NPCCrowd/NPCAreaScoreTracker_EValidationState.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject { class ViewObjectManager; }
namespace NPCCrowd { class NPCPerformanceConfigSO; }
namespace NPCCrowd { class NPCPerformanceScoreTable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCAREASCORETRACKER_BEGINVALIDATION_OFFSET UNITYSDK_OFFSET(0x114D4DF0)
#define NPCCROWD_NPCAREASCORETRACKER_CLEAR_OFFSET UNITYSDK_OFFSET(0x114D5470)
#define NPCCROWD_NPCAREASCORETRACKER_CONTINUEVALIDATION_OFFSET UNITYSDK_OFFSET(0x114D52D0)
#define NPCCROWD_NPCAREASCORETRACKER_FINISHVALIDATION_OFFSET UNITYSDK_OFFSET(0x114D54D0)
#define NPCCROWD_NPCAREASCORETRACKER_GETAREAPERFORMANCESCORE_OFFSET UNITYSDK_OFFSET(0x114D4CA0)
#define NPCCROWD_NPCAREASCORETRACKER_GET_ACTIVEGADGETCOUNT_OFFSET UNITYSDK_OFFSET(0x114D4900)
#define NPCCROWD_NPCAREASCORETRACKER_GET_ACTIVESERVERNPCCOUNT_OFFSET UNITYSDK_OFFSET(0x114D4910)
#define NPCCROWD_NPCAREASCORETRACKER_GET_CACHEDGADGETSCORE_OFFSET UNITYSDK_OFFSET(0x114D48F0)
#define NPCCROWD_NPCAREASCORETRACKER_GET_CACHEDSERVERNPCVOSCORE_OFFSET UNITYSDK_OFFSET(0x114D4920)
#define NPCCROWD_NPCAREASCORETRACKER_GET_ISVALIDATING_OFFSET UNITYSDK_OFFSET(0x114D49F0)
#define NPCCROWD_NPCAREASCORETRACKER_GET_SERVERNPCCOUNTSCORE_OFFSET UNITYSDK_OFFSET(0x114D4930)
#define NPCCROWD_NPCAREASCORETRACKER_GET_SERVERNPCTOTALSCORE_OFFSET UNITYSDK_OFFSET(0x114D4990)
#define NPCCROWD_NPCAREASCORETRACKER_ONENTITYACTIVATED_OFFSET UNITYSDK_OFFSET(0x114D4A10)
#define NPCCROWD_NPCAREASCORETRACKER_ONENTITYDEACTIVATED_OFFSET UNITYSDK_OFFSET(0x114D4AC0)
#define NPCCROWD_NPCAREASCORETRACKER_PROCESSGROUPFORVALIDATION_OFFSET UNITYSDK_OFFSET(0x114D5590)
#define NPCCROWD_NPCAREASCORETRACKER_REFRESHFROMPOLLINGSTATS_OFFSET UNITYSDK_OFFSET(0x114D4C00)
#define NPCCROWD_NPCAREASCORETRACKER_UPDATECROWDCOUNT_OFFSET UNITYSDK_OFFSET(0x114D4BB0)
#define NPCCROWD_NPCAREASCORETRACKER_UPDATE_OFFSET UNITYSDK_OFFSET(0x114D4D70)
#define NPCCROWD_NPCAREASCORETRACKER__CTOR_OFFSET UNITYSDK_OFFSET(0x114D4A00)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCAreaScoreTracker_TypeDefinitionIndex = 89481;

	class NPCAreaScoreTracker : public ::System::Object
	{
	public:
		::NPCCrowd::NPCPerformanceScoreTable* _scoreTable; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _validationGroupList; // 0x18
		::NPCCrowd::NPCPerformanceConfigSO* _config; // 0x20
		::System::Int32 _activeServerNPCCount; // 0x28
		::System::Int32 _validationGroupIndex; // 0x2C
		::System::Single _validationAccumServerNPCVOScore; // 0x30
		::System::Single _cachedGadgetScore; // 0x34
		::System::Int32 _validationAccumServerNPCCount; // 0x38
		::System::Int32 _cachedCrowdCount; // 0x3C
		::System::Int32 _activeGadgetCount; // 0x40
		::NPCCrowd::NPCAreaScoreTracker_EValidationState _validationState; // 0x44
		::System::Single _cachedServerNPCVOScore; // 0x48
		::System::Single _validationAccumGadgetScore; // 0x4C
		::System::Int32 _validationAccumGadgetCount; // 0x50
		::System::Int32 _framesSinceLastValidation; // 0x54

		::System::Void _ctor(::NPCCrowd::NPCPerformanceConfigSO* config, ::NPCCrowd::NPCPerformanceScoreTable* scoreTable)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::NPCPerformanceConfigSO*, ::NPCCrowd::NPCPerformanceScoreTable*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER__CTOR_OFFSET))(this, config, scoreTable);
		}

		::System::Single get_CachedGadgetScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_GET_CACHEDGADGETSCORE_OFFSET))(this);
		}

		::System::Int32 get_ActiveGadgetCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_GET_ACTIVEGADGETCOUNT_OFFSET))(this);
		}

		::System::Int32 get_ActiveServerNPCCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_GET_ACTIVESERVERNPCCOUNT_OFFSET))(this);
		}

		::System::Single get_CachedServerNPCVOScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_GET_CACHEDSERVERNPCVOSCORE_OFFSET))(this);
		}

		::System::Single get_ServerNPCCountScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_GET_SERVERNPCCOUNTSCORE_OFFSET))(this);
		}

		::System::Single get_ServerNPCTotalScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_GET_SERVERNPCTOTALSCORE_OFFSET))(this);
		}

		::System::Boolean get_IsValidating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_GET_ISVALIDATING_OFFSET))(this);
		}

		::System::Void OnEntityActivated(::MoleMole::Config::EntityType type, ::System::Int32 viewObjectID)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_ONENTITYACTIVATED_OFFSET))(this, type, viewObjectID);
		}

		::System::Void OnEntityDeactivated(::MoleMole::Config::EntityType type, ::System::Int32 viewObjectID)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_ONENTITYDEACTIVATED_OFFSET))(this, type, viewObjectID);
		}

		::System::Void UpdateCrowdCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_UPDATECROWDCOUNT_OFFSET))(this, count);
		}

		::System::Void RefreshFromPollingStats(::System::Single gadgetScore, ::System::Int32 gadgetCount, ::System::Int32 serverNPCCount, ::System::Single serverNPCVOScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_REFRESHFROMPOLLINGSTATS_OFFSET))(this, gadgetScore, gadgetCount, serverNPCCount, serverNPCVOScore);
		}

		::System::Single GetAreaPerformanceScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_GETAREAPERFORMANCESCORE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_UPDATE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_CLEAR_OFFSET))(this);
		}

		::System::Void BeginValidation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_BEGINVALIDATION_OFFSET))(this);
		}

		::System::Void ContinueValidation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_CONTINUEVALIDATION_OFFSET))(this);
		}

		::System::Void ProcessGroupForValidation(::Foundation::ViewObject::ViewObjectManager* vom, ::System::UInt32 groupId)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectManager*, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_PROCESSGROUPFORVALIDATION_OFFSET))(this, vom, groupId);
		}

		::System::Void FinishValidation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCAREASCORETRACKER_FINISHVALIDATION_OFFSET))(this);
		}
	};
}
