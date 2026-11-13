#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOCCEBGNPJA.h"
#include "unitysdk/HHJGMFEALEB.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TutorialBlockType.h"
#include "unitysdk/RPG/GameCore/TutorialPlatformType.h"
#include "unitysdk/UnityEngine/Vector2.h"
class BALOBFDIOBP;
class LBLCEIPMLIF;
class OGCJPKBFFLJ;
namespace RPG::Client { class MonoPerformanceUITransfer; }
namespace RPG::Client { class RuntimeTutorialNode; }
namespace RPG::Client { class TutorialMaskFilter; }
namespace RPG::Client { class TutorialNodeCollector; }
namespace RPG::Client { class TutorialRaycaster; }
namespace RPG::Client { class TutorialSupportModule; }
namespace RPG::Client { class TutorialUIWrapper; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Tutorial { class TutorialGuideGroupData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TutorialDataRow; }
namespace RPG::GameCore { class TutorialDynamicParamBase; }
namespace RPG::GameCore { class TutorialGuideUIContextConfig; }
namespace RPG::GameCore { class TutorialJsonConfig; }
namespace RPG::GameCore { class TutorialTriggerParam; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ADDHIDENODE_OFFSET UNITYSDK_OFFSET(0x1C9C10A0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ADDTRIGGERTUTORIALLISTENER_OFFSET UNITYSDK_OFFSET(0x1C9BE5C0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ADDTUTORIALNODECOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1C9BC9A0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ALLOWGETFOCUS_OFFSET UNITYSDK_OFFSET(0x1C9C1ED0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ALLOWLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x1C9C1F60)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_BINDTICK_OFFSET UNITYSDK_OFFSET(0x1C9BFF10)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_BLOCKOPERATION_OFFSET UNITYSDK_OFFSET(0x1C9C0660)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARALLHIDENODES_OFFSET UNITYSDK_OFFSET(0x1C9C1270)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARALLREGISTERNODE_OFFSET UNITYSDK_OFFSET(0x1C9C1550)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARDEBUGFLAG_OFFSET UNITYSDK_OFFSET(0x1C9BF6E0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARNODEDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C9BEFB0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_CREATETUTORIALDATAROWCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1C9C1FC0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_CREATETUTORIALGUIDEDATAROWCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1C9C2090)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C4B50)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_EVALUATEDYNAMICVALUE_OFFSET UNITYSDK_OFFSET(0x1C9BE560)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_FORCEFINISHCURRENTTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1C9B61F0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_FORCEREGISTERALLTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0x1C9BFA50)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETNEXTCONFIGINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1C9B1AA0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETNODESCREENPOINT_OFFSET UNITYSDK_OFFSET(0x1C9C1CB0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETRUNTIMETUTORIALNODE_1_OFFSET UNITYSDK_OFFSET(0x1C9B3300)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETRUNTIMETUTORIALNODE_OFFSET UNITYSDK_OFFSET(0x1C9B2D50)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETTUTORIALGUIDESTATUSBYID_OFFSET UNITYSDK_OFFSET(0x1C9BF7C0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETTUTORIALPLATFORMTYPE_OFFSET UNITYSDK_OFFSET(0x1C9AF680)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GETTUTORIALSTATUSBYID_OFFSET UNITYSDK_OFFSET(0x1C9BF730)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ALLOWSTARTTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1C9C46A0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ALLTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0x1C9C4600)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_DATAINITED_OFFSET UNITYSDK_OFFSET(0x1C9C45E0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_FORCENAVIGATIONTARGET_OFFSET UNITYSDK_OFFSET(0x1C9C44F0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C9AF600)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISBLOCKTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1C9C46F0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISCONTROLLERINPUT_OFFSET UNITYSDK_OFFSET(0x1C9B7630)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISINTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1C9C45C0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISLOCKCONTROLLERHOTSWITCH_OFFSET UNITYSDK_OFFSET(0x1C9C4710)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISMOBILEINPUT_OFFSET UNITYSDK_OFFSET(0x1C9B7700)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISTUTORIALDIALOGOPEN_OFFSET UNITYSDK_OFFSET(0x1C9BBEA0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_RUNNINGTUTORIALID_OFFSET UNITYSDK_OFFSET(0x1C9BEEA0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_SHOULDBLOCKFOCUS_OFFSET UNITYSDK_OFFSET(0x1C9C4640)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_SHOULDREGISTER_OFFSET UNITYSDK_OFFSET(0x1C9BCF90)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALBLOCKMASKTRANS_OFFSET UNITYSDK_OFFSET(0x1C9C48B0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALJSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0x1C9C4620)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALMASKFILTER_OFFSET UNITYSDK_OFFSET(0x1C9B92D0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALRAYCASTER_OFFSET UNITYSDK_OFFSET(0x1C9C4980)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALUIMASKTRANS_OFFSET UNITYSDK_OFFSET(0x1C9C47E0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_HASBATTLELOCK_OFFSET UNITYSDK_OFFSET(0x1C9C1040)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_HASTUTORIALBLOCKMASK_OFFSET UNITYSDK_OFFSET(0x1C9C0020)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1C9BECE0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ISPOINTALLOWRAYCAST_OFFSET UNITYSDK_OFFSET(0x1C9BE100)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_ISTUTORIALBLOCKOPERATION_OFFSET UNITYSDK_OFFSET(0x1C9C0FE0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_NOTIFYTASKUNLOCKKEY_OFFSET UNITYSDK_OFFSET(0x1C9BF860)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_PARSEDYNAMICVALUE_OFFSET UNITYSDK_OFFSET(0x1C9BBBA0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_PREPARENEEDEDMISSIONDATAPROMISE_OFFSET UNITYSDK_OFFSET(0x1C9C2160)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_REGISTERDYNAMICVALUEEVALUATOR_OFFSET UNITYSDK_OFFSET(0x1C9BE4B0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_REGISTERONTUTORIALFORCESKIPCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C9C0C70)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_REGISTERTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0x1C9BD7C0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_RELEASEALLLOCKOPERATION_OFFSET UNITYSDK_OFFSET(0x1C9C00B0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_REMOVEHIDENODE_OFFSET UNITYSDK_OFFSET(0x1C9C11E0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_REMOVETRIGGERTUTORIALLISTENER_OFFSET UNITYSDK_OFFSET(0x1C9BE6E0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_REMOVETUTORIALNODECOLLECTOR_OFFSET UNITYSDK_OFFSET(0x1C9BCBE0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_REPLACEDYNAMICVALUE_OFFSET UNITYSDK_OFFSET(0x1C9BBC60)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETDATAINITED_OFFSET UNITYSDK_OFFSET(0x1C9C1400)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETDEBUGINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x1C9BF690)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETDEBUGPLATFORM_OFFSET UNITYSDK_OFFSET(0x1C9BF640)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETNODEDYNAMICKEY_1_OFFSET UNITYSDK_OFFSET(0x1C9BEF50)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETNODEDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C9BEEF0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETNODESIZE_OFFSET UNITYSDK_OFFSET(0x1C9C1DF0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SETTUTORIALDIALOGROOT_OFFSET UNITYSDK_OFFSET(0x1C9C0D70)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ALLTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0x1C9C4610)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_DATAINITED_OFFSET UNITYSDK_OFFSET(0x1C9C45F0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_FORCENAVIGATIONTARGET_OFFSET UNITYSDK_OFFSET(0x1C9C4570)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ISBLOCKTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1C9C4700)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ISINTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1C9C45D0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ISLOCKCONTROLLERHOTSWITCH_OFFSET UNITYSDK_OFFSET(0x1C9C4760)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_RUNNINGTUTORIALID_OFFSET UNITYSDK_OFFSET(0x1C9C4450)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_TUTORIALJSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0x1C9C4630)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_STARTADVLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x1C9BEA20)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_STOPADVLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x1C9BEC00)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_TRYGETTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0x1C9B22F0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_TRYTRIGGERTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1C9BE770)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_UNBLOCKOPERATION_OFFSET UNITYSDK_OFFSET(0x1C9C0A60)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_UNREGISTERDYNAMICVALUEEVALUATOR_OFFSET UNITYSDK_OFFSET(0x1C9BE500)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_UNREGISTERONTUTORIALFORCESKIPCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C9C0CF0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE_UNREGISTERTUTORIALNODE_OFFSET UNITYSDK_OFFSET(0x1C9BDD70)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__FILLNEEDEDMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1C9C3380)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__FILLNEEDEDSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1C9C34B0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__INITTUTORIALINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x1C9C3CC0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__ISNODESHOULDHIDE_OFFSET UNITYSDK_OFFSET(0x1C9BF5D0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__ISNODEVALID_OFFSET UNITYSDK_OFFSET(0x1C9C3D50)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__LOGERROR_OFFSET UNITYSDK_OFFSET(0x1C9C42A0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__ONENDTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1C9C0F40)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__ONSTARTTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1C9C0EF0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__REGISTERALLNODE_OFFSET UNITYSDK_OFFSET(0x1C9C35E0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__STARTADVLEVELGRAPH_B__11_0_OFFSET UNITYSDK_OFFSET(0x1C9C4BC0)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__TICK_OFFSET UNITYSDK_OFFSET(0x1C9C3F80)
#define RPG_CLIENT_TUTORIALSUPPORTMODULE__USEBATTLELOCK_OFFSET UNITYSDK_OFFSET(0x1C9C0940)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialSupportModule_TypeDefinitionIndex = 70191;

	class TutorialSupportModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::IList_1<::RPG::Client::TutorialNodeCollector*>* _AllTutorialNodeCollector; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* _HideNodeIDs; // 0x18
		::System::Collections::Generic::ICollection_1<::System::Object*>* _AllTutorialNode_k__BackingField; // 0x20
		::RPG::GameCore::LevelGraphComponent* _AdvLevelGraphCmpt; // 0x28
		::UnityEngine::GameObject* _ForceNavigationTarget; // 0x30
		::System::Collections::Generic::IList_1<::RPG::Client::RuntimeTutorialNode*>* _AllRuntimeTutorialNodeList; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* _PendingTaskUnlockKeys; // 0x40
		::Il2CppArray<::System::Single>* _CachePoint; // 0x48
		::RPG::Client::TutorialMaskFilter* _TutorialMaskFilter; // 0x50
		::System::Collections::Generic::List_1<::OGCJPKBFFLJ*>* _TriggerTutorialListenerList; // 0x58
		::UnityEngine::Transform* _TutorialDialogRoot; // 0x60
		::RPG::GameCore::TutorialJsonConfig* _TutorialJsonConfigRef_k__BackingField; // 0x68
		::BALOBFDIOBP* _DynamicValueEvaluator; // 0x70
		::UnityEngine::Transform* _TutorialUIMaskTrans; // 0x78
		::UnityEngine::Transform* _TutorialBlockMaskTrans; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::LBLCEIPMLIF*>* _TutorialNodeDict; // 0x88
		::System::Action* _OnTutorialForceSkip; // 0x90
		::System::UInt32 _RunningTutorialID; // 0x98
		::System::UInt32 TutorialBlockMaxWaitTime; // 0x9C
		::HHJGMFEALEB TutorialStateResponse; // 0xA0
		::System::Boolean _IsBlockTutorial_k__BackingField; // 0xA4
		::System::Boolean _IsInTutorial_k__BackingField; // 0xA5
		::System::Byte _padding0[0x2];
		::System::UInt32 _CurrentInstanceID; // 0xA8
		::System::UInt32 _CacheInputType; // 0xAC
		::System::Boolean _IsLockControllerHotSwitch; // 0xB0
		::System::Boolean IsTutorialLockOperation; // 0xB1
		::System::Boolean _DataInited_k__BackingField; // 0xB2
		::System::Byte _padding1[0x1];
		::System::UInt32 _BlockOperationCount; // 0xB4
		::RPG::GameCore::TutorialPlatformType _DebugPlatformType; // 0xB8
		::RPG::Client::TutorialBlockType _BlockType; // 0xBC
		// static const ::System::String* _DynamicValue_Prefix; // 0x0
		// static const ::System::String* _DynamicValue_Postfix; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_CTOR_OFFSET))(this);
		}

		::System::Void RegisterDynamicValueEvaluator(::BALOBFDIOBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BALOBFDIOBP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_REGISTERDYNAMICVALUEEVALUATOR_OFFSET))(this, a1);
		}

		::System::Void UnregisterDynamicValueEvaluator(::BALOBFDIOBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BALOBFDIOBP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_UNREGISTERDYNAMICVALUEEVALUATOR_OFFSET))(this, a1);
		}

		::System::String* EvaluateDynamicValue(::RPG::GameCore::TutorialDynamicParamBase* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TutorialDynamicParamBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_EVALUATEDYNAMICVALUE_OFFSET))(this, a1);
		}

		::System::String* ParseDynamicValue(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_PARSEDYNAMICVALUE_OFFSET))(this, a1);
		}

		::System::String* ReplaceDynamicValue(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_REPLACEDYNAMICVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddTriggerTutorialListener(::OGCJPKBFFLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGCJPKBFFLJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ADDTRIGGERTUTORIALLISTENER_OFFSET))(this, a1);
		}

		::System::Void RemoveTriggerTutorialListener(::OGCJPKBFFLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGCJPKBFFLJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_REMOVETRIGGERTUTORIALLISTENER_OFFSET))(this, a1);
		}

		::System::Void TryTriggerTutorial(::System::String* a1, ::System::Action* a2, ::System::Action_1<::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_TRYTRIGGERTUTORIAL_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::LevelGraphComponent* StartAdvLevelGraph(::System::String* a1, ::RPG::GameCore::GameWorld* a2)
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_STARTADVLEVELGRAPH_OFFSET))(this, a1, a2);
		}

		::System::Void StopAdvLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_STOPADVLEVELGRAPH_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_INIT_OFFSET))(this);
		}

		::System::Void ForceFinishCurrentTutorial(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_FORCEFINISHCURRENTTUTORIAL_OFFSET))(this, a1, a2);
		}

		::System::Void SetNodeDynamicKey(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETNODEDYNAMICKEY_OFFSET))(this, a1, a2);
		}

		::System::Void SetNodeDynamicKey_1(::UnityEngine::GameObject* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETNODEDYNAMICKEY_1_OFFSET))(this, a1, a2);
		}

		::System::Void ClearNodeDynamicKey(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARNODEDYNAMICKEY_OFFSET))(this, a1);
		}

		::System::Void AddTutorialNodeCollector(::RPG::Client::TutorialNodeCollector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TutorialNodeCollector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ADDTUTORIALNODECOLLECTOR_OFFSET))(this, a1);
		}

		::System::Void RemoveTutorialNodeCollector(::RPG::Client::TutorialNodeCollector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TutorialNodeCollector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_REMOVETUTORIALNODECOLLECTOR_OFFSET))(this, a1);
		}

		::System::Boolean RegisterTutorialNode(::System::String* a1, ::LBLCEIPMLIF* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::LBLCEIPMLIF*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_REGISTERTUTORIALNODE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetDebugPlatform(::RPG::GameCore::TutorialPlatformType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialPlatformType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETDEBUGPLATFORM_OFFSET))(this, a1);
		}

		::System::Void SetDebugInputType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETDEBUGINPUTTYPE_OFFSET))(this, a1);
		}

		::System::Void ClearDebugFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARDEBUGFLAG_OFFSET))(this);
		}

		::System::Boolean IsPointAllowRaycast(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ISPOINTALLOWRAYCAST_OFFSET))(this, a1);
		}

		::HHJGMFEALEB GetTutorialStatusByID(::System::UInt32 a1)
		{
			return ((::HHJGMFEALEB(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETTUTORIALSTATUSBYID_OFFSET))(this, a1);
		}

		::HHJGMFEALEB GetTutorialGuideStatusByID(::System::UInt32 a1, ::AOCCEBGNPJA a2)
		{
			return ((::HHJGMFEALEB(*)(::PVOID, ::System::UInt32, ::AOCCEBGNPJA))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETTUTORIALGUIDESTATUSBYID_OFFSET))(this, a1, a2);
		}

		::System::Void NotifyTaskUnlockKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_NOTIFYTASKUNLOCKKEY_OFFSET))(this, a1);
		}

		::System::Void ForceRegisterAllTutorialNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_FORCEREGISTERALLTUTORIALNODE_OFFSET))(this);
		}

		::System::Void BindTick(::RPG::Client::MonoPerformanceUITransfer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoPerformanceUITransfer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_BINDTICK_OFFSET))(this, a1);
		}

		::System::Boolean HasTutorialBlockMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_HASTUTORIALBLOCKMASK_OFFSET))(this);
		}

		::System::Void ReleaseAllLockOperation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_RELEASEALLLOCKOPERATION_OFFSET))(this);
		}

		::System::UInt32 GetNextConfigInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETNEXTCONFIGINSTANCEID_OFFSET))(this);
		}

		::System::Void BlockOperation(::RPG::Client::TutorialBlockType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TutorialBlockType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_BLOCKOPERATION_OFFSET))(this, a1);
		}

		::System::Void UnblockOperation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_UNBLOCKOPERATION_OFFSET))(this);
		}

		::System::Void RegisterOnTutorialForceSkipCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_REGISTERONTUTORIALFORCESKIPCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnregisterOnTutorialForceSkipCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_UNREGISTERONTUTORIALFORCESKIPCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetTutorialDialogRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETTUTORIALDIALOGROOT_OFFSET))(this, a1);
		}

		::System::Boolean IsTutorialBlockOperation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ISTUTORIALBLOCKOPERATION_OFFSET))(this);
		}

		::System::Boolean HasBattleLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_HASBATTLELOCK_OFFSET))(this);
		}

		::System::Boolean UnregisterTutorialNode(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_UNREGISTERTUTORIALNODE_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* TryGetTutorialNode(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_TRYGETTUTORIALNODE_OFFSET))(this, a1, a2);
		}

		::System::Void AddHideNode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ADDHIDENODE_OFFSET))(this, a1);
		}

		::System::Void RemoveHideNode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_REMOVEHIDENODE_OFFSET))(this, a1);
		}

		::System::Void ClearAllHideNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARALLHIDENODES_OFFSET))(this);
		}

		::System::Void SetDataInited(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETDATAINITED_OFFSET))(this, a1);
		}

		::System::Void ClearAllRegisterNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_CLEARALLREGISTERNODE_OFFSET))(this);
		}

		::RPG::GameCore::TutorialPlatformType GetTutorialPlatformType()
		{
			return ((::RPG::GameCore::TutorialPlatformType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETTUTORIALPLATFORMTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* GetNodeScreenPoint(::UnityEngine::Transform* a1)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETNODESCREENPOINT_OFFSET))(this, a1);
		}

		::System::Void SetNodeSize(::UnityEngine::RectTransform* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SETNODESIZE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::RuntimeTutorialNode* GetRuntimeTutorialNode(::System::String* a1)
		{
			return ((::RPG::Client::RuntimeTutorialNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETRUNTIMETUTORIALNODE_OFFSET))(this, a1);
		}

		::RPG::Client::RuntimeTutorialNode* GetRuntimeTutorialNode_1(::RPG::GameCore::TutorialGuideUIContextConfig* a1)
		{
			return ((::RPG::Client::RuntimeTutorialNode*(*)(::PVOID, ::RPG::GameCore::TutorialGuideUIContextConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GETRUNTIMETUTORIALNODE_1_OFFSET))(this, a1);
		}

		::System::Boolean AllowGetFocus(::RPG::Client::TutorialUIWrapper* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TutorialUIWrapper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ALLOWGETFOCUS_OFFSET))(this, a1);
		}

		::System::Boolean AllowLostFocus(::RPG::Client::TutorialUIWrapper* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TutorialUIWrapper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_ALLOWLOSTFOCUS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::ICollection_1<::RPG::GameCore::TutorialDataRow*>* CreateTutorialDataRowCollection()
		{
			return ((::System::Collections::Generic::ICollection_1<::RPG::GameCore::TutorialDataRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_CREATETUTORIALDATAROWCOLLECTION_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::RPG::Client::Tutorial::TutorialGuideGroupData*>* CreateTutorialGuideDataRowCollection()
		{
			return ((::System::Collections::Generic::ICollection_1<::RPG::Client::Tutorial::TutorialGuideGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_CREATETUTORIALGUIDEDATAROWCOLLECTION_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareNeededMissionDataPromise(::System::Collections::Generic::ICollection_1<::RPG::GameCore::TutorialDataRow*>* a1, ::System::Collections::Generic::ICollection_1<::RPG::Client::Tutorial::TutorialGuideGroupData*>* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::GameCore::TutorialDataRow*>*, ::System::Collections::Generic::ICollection_1<::RPG::Client::Tutorial::TutorialGuideGroupData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_PREPARENEEDEDMISSIONDATAPROMISE_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterAllNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__REGISTERALLNODE_OFFSET))(this);
		}

		::System::Void _InitTutorialInputType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__INITTUTORIALINPUTTYPE_OFFSET))(this);
		}

		::System::Void _OnStartTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__ONSTARTTUTORIAL_OFFSET))(this);
		}

		::System::Void _OnEndTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__ONENDTUTORIAL_OFFSET))(this);
		}

		::System::Boolean _IsNodeValid(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__ISNODEVALID_OFFSET))(this, a1);
		}

		::System::Void _Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__TICK_OFFSET))(this, a1);
		}

		::System::Boolean _UseBattleLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__USEBATTLELOCK_OFFSET))(this);
		}

		::System::Void _FillNeededMainMissionID(::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__FILLNEEDEDMAINMISSIONID_OFFSET))(this, a1, a2);
		}

		::System::Void _FillNeededSubMissionID(::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__FILLNEEDEDSUBMISSIONID_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsNodeShouldHide(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__ISNODESHOULDHIDE_OFFSET))(this, a1);
		}

		::System::Void _LogError(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__LOGERROR_OFFSET))(this, a1);
		}

		::System::UInt32 get_RunningTutorialID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_RUNNINGTUTORIALID_OFFSET))(this);
		}

		::System::Void set_RunningTutorialID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_RUNNINGTUTORIALID_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_ForceNavigationTarget()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_FORCENAVIGATIONTARGET_OFFSET))(this);
		}

		::System::Void set_ForceNavigationTarget(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_FORCENAVIGATIONTARGET_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISINTUTORIAL_OFFSET))(this);
		}

		::System::Void set_IsInTutorial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ISINTUTORIAL_OFFSET))(this, a1);
		}

		::System::Boolean get_DataInited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_DATAINITED_OFFSET))(this);
		}

		::System::Void set_DataInited(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_DATAINITED_OFFSET))(this, a1);
		}

		static ::RPG::Client::TutorialSupportModule* get_Instance()
		{
			return ((::RPG::Client::TutorialSupportModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::Collections::Generic::ICollection_1<::System::Object*>* get_AllTutorialNode()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ALLTUTORIALNODE_OFFSET))(this);
		}

		::System::Void set_AllTutorialNode(::System::Collections::Generic::ICollection_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ALLTUTORIALNODE_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldRegister()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_SHOULDREGISTER_OFFSET))(this);
		}

		::RPG::GameCore::TutorialJsonConfig* get_TutorialJsonConfigRef()
		{
			return ((::RPG::GameCore::TutorialJsonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALJSONCONFIGREF_OFFSET))(this);
		}

		::System::Void set_TutorialJsonConfigRef(::RPG::GameCore::TutorialJsonConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialJsonConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_TUTORIALJSONCONFIGREF_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldBlockFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_SHOULDBLOCKFOCUS_OFFSET))(this);
		}

		::System::Boolean get_AllowStartTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ALLOWSTARTTUTORIAL_OFFSET))(this);
		}

		::System::Boolean get_IsControllerInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISCONTROLLERINPUT_OFFSET))(this);
		}

		::System::Boolean get_IsMobileInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISMOBILEINPUT_OFFSET))(this);
		}

		::System::Boolean get_IsBlockTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISBLOCKTUTORIAL_OFFSET))(this);
		}

		::System::Void set_IsBlockTutorial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ISBLOCKTUTORIAL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLockControllerHotSwitch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISLOCKCONTROLLERHOTSWITCH_OFFSET))(this);
		}

		::System::Void set_IsLockControllerHotSwitch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_SET_ISLOCKCONTROLLERHOTSWITCH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTutorialDialogOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_ISTUTORIALDIALOGOPEN_OFFSET))(this);
		}

		::UnityEngine::Transform* get_TutorialUIMaskTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALUIMASKTRANS_OFFSET))(this);
		}

		::UnityEngine::Transform* get_TutorialBlockMaskTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALBLOCKMASKTRANS_OFFSET))(this);
		}

		::RPG::Client::TutorialMaskFilter* get_TutorialMaskFilter()
		{
			return ((::RPG::Client::TutorialMaskFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALMASKFILTER_OFFSET))(this);
		}

		::RPG::Client::TutorialRaycaster* get_TutorialRaycaster()
		{
			return ((::RPG::Client::TutorialRaycaster*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE_GET_TUTORIALRAYCASTER_OFFSET))(this);
		}

		::System::Void _StartAdvLevelGraph_b__11_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALSUPPORTMODULE__STARTADVLEVELGRAPH_B__11_0_OFFSET))(this, a1);
		}

	};
}
