#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class AELMAJAHPCP;
class AICDMFFGNIH;
class BBOFEHOPCEC;
class CLPGGJNLFPL;
class EILOGENDCCG;
class FGHGHOHCAKF;
class GAGIJDJFKAB;
class GLEPMONEPEM;
class HIOAMIPNLIN;
class IOGNBKGNPFD;
class JBFFCBPMKEF;
class LPNPMKNMMOK;
class MBBEBLGELAP;
class OONGDLIDJJJ;
class PFPHICGLMBI;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class DynamicBool; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicJson; }
namespace RPG::GameCore { class DynamicJsonConfig; }
namespace RPG::GameCore { class DynamicJsonList; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class DynamicStringList; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class JsonConfig; }
namespace RPG::GameCore { class LevelGraph; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TASKCONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0xF2840B0)
#define RPG_GAMECORE_TASKCONTEXT_CLONEFROMSTANDALONEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xF284000)
#define RPG_GAMECORE_TASKCONTEXT_CLONEWITHTASKTEMPLATE_OFFSET UNITYSDK_OFFSET(0xF283E40)
#define RPG_GAMECORE_TASKCONTEXT_CLONE_OFFSET UNITYSDK_OFFSET(0xF283D10)
#define RPG_GAMECORE_TASKCONTEXT_COPYTO_OFFSET UNITYSDK_OFFSET(0xF283A90)
#define RPG_GAMECORE_TASKCONTEXT_CREATECHILDCONTEXT_OFFSET UNITYSDK_OFFSET(0xF2841F0)
#define RPG_GAMECORE_TASKCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xF2688A0)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_1_OFFSET UNITYSDK_OFFSET(0xF287AD0)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_2_OFFSET UNITYSDK_OFFSET(0xF287B30)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_3_OFFSET UNITYSDK_OFFSET(0xF287BA0)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_OFFSET UNITYSDK_OFFSET(0xF287A70)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATESINGLETARGET_OFFSET UNITYSDK_OFFSET(0xF26A700)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATETARGET_1_OFFSET UNITYSDK_OFFSET(0xF2872A0)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATETARGET_OFFSET UNITYSDK_OFFSET(0xF286C10)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_1_OFFSET UNITYSDK_OFFSET(0xF285B50)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_2_OFFSET UNITYSDK_OFFSET(0xF286130)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_3_OFFSET UNITYSDK_OFFSET(0xF286290)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_4_OFFSET UNITYSDK_OFFSET(0xF286440)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_6_OFFSET UNITYSDK_OFFSET(0xF2865A0)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_8_OFFSET UNITYSDK_OFFSET(0xF2866F0)
#define RPG_GAMECORE_TASKCONTEXT_EVALUATE_OFFSET UNITYSDK_OFFSET(0xF285050)
#define RPG_GAMECORE_TASKCONTEXT_GETBELONGEDCONFIGNAME_OFFSET UNITYSDK_OFFSET(0xF284DE0)
#define RPG_GAMECORE_TASKCONTEXT_GETOWNERCUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xF285790)
#define RPG_GAMECORE_TASKCONTEXT_GET_CASTERENTITY_OFFSET UNITYSDK_OFFSET(0xF284450)
#define RPG_GAMECORE_TASKCONTEXT_GET_CURRENTPARAMDATA_OFFSET UNITYSDK_OFFSET(0xF284C80)
#define RPG_GAMECORE_TASKCONTEXT_GET_GAMEWORLD_OFFSET UNITYSDK_OFFSET(0xF284440)
#define RPG_GAMECORE_TASKCONTEXT_GET_ISSUBLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xF287420)
#define RPG_GAMECORE_TASKCONTEXT_GET_LITTLEGAMELEVELGRAPHENTITY_OFFSET UNITYSDK_OFFSET(0xF287A30)
#define RPG_GAMECORE_TASKCONTEXT_GET_LITTLEGAMESTATETREEENTITY_OFFSET UNITYSDK_OFFSET(0xF287E80)
#define RPG_GAMECORE_TASKCONTEXT_GET_OWNERABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0xF2846D0)
#define RPG_GAMECORE_TASKCONTEXT_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xF2843D0)
#define RPG_GAMECORE_TASKCONTEXT_GET_OWNERGROUPENTITY_OFFSET UNITYSDK_OFFSET(0xF287480)
#define RPG_GAMECORE_TASKCONTEXT_GET_PARAMREGISTER_OFFSET UNITYSDK_OFFSET(0xF284C20)
#define RPG_GAMECORE_TASKCONTEXT_GET_SAFESOURCEENTITY_OFFSET UNITYSDK_OFFSET(0xF284640)
#define RPG_GAMECORE_TASKCONTEXT_GET_SOURCEENTITY_OFFSET UNITYSDK_OFFSET(0xF27ADE0)
#define RPG_GAMECORE_TASKCONTEXT_GET_TASKACTIONTARGET_OFFSET UNITYSDK_OFFSET(0xF284620)
#define RPG_GAMECORE_TASKCONTEXT_ISBELONGTOPERFORMANCEREPLAYENV_OFFSET UNITYSDK_OFFSET(0xF2846F0)
#define RPG_GAMECORE_TASKCONTEXT_ISBELONGTOSTANDALONEPERFORMANCEENV_OFFSET UNITYSDK_OFFSET(0xF284890)
#define RPG_GAMECORE_TASKCONTEXT_ISPERFORMANCELEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xF284A70)
#define RPG_GAMECORE_TASKCONTEXT_MAPRESPATH_OFFSET UNITYSDK_OFFSET(0xF287C00)
#define RPG_GAMECORE_TASKCONTEXT_RPG_GAMECORE_IALIASEVALUATOR_EVALUATEALIAS_OFFSET UNITYSDK_OFFSET(0xF2873A0)
#define RPG_GAMECORE_TASKCONTEXT_RPG_GAMECORE_IDYNAMICVALUEPROVIDER_EVALUATE_OFFSET UNITYSDK_OFFSET(0xF287330)
#define RPG_GAMECORE_TASKCONTEXT_SET_OWNERABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0xF2846E0)
#define RPG_GAMECORE_TASKCONTEXT_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xF2843E0)
#define RPG_GAMECORE_TASKCONTEXT_SET_TASKACTIONTARGET_OFFSET UNITYSDK_OFFSET(0xF284630)
#define RPG_GAMECORE_TASKCONTEXT_SHOULDBLOCKTASKBYPERFORMANCEREPLAY_OFFSET UNITYSDK_OFFSET(0xF284A00)
#define RPG_GAMECORE_TASKCONTEXT_SHOULDBLOCKTASKBYSTANDALONEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xF284BB0)
#define RPG_GAMECORE_TASKCONTEXT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF284D60)
#define RPG_GAMECORE_TASKCONTEXT_TRYEVALUATE_1_OFFSET UNITYSDK_OFFSET(0xF2851C0)
#define RPG_GAMECORE_TASKCONTEXT_TRYEVALUATE_OFFSET UNITYSDK_OFFSET(0xF285160)
#define RPG_GAMECORE_TASKCONTEXT__GETSELFINSTANCE_OFFSET UNITYSDK_OFFSET(0xF284310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TaskContext_TypeDefinitionIndex = 55943;

	class TaskContext : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelGraph* OwnerGraph; // 0x10
		::OONGDLIDJJJ* Knowledge; // 0x18
		::IOGNBKGNPFD* LittleGameAbilityContext; // 0x20
		::CLPGGJNLFPL* TaskTemplate; // 0x28
		::AICDMFFGNIH* AidDetail; // 0x30
		::Entitas::IEntity* LittleGameEntity; // 0x38
		::RPG::GameCore::GameEntity* _TaskActionTarget_k__BackingField; // 0x40
		::GAGIJDJFKAB* ExtraParamStack; // 0x48
		::HIOAMIPNLIN* OwnerModifierInstance; // 0x50
		::BBOFEHOPCEC* AIRoot; // 0x58
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::JsonConfig*, ::EILOGENDCCG*>* _EvaluatorInstanceDict; // 0x60
		::MBBEBLGELAP* SourceAbilityInst; // 0x68
		::RPG::GameCore::GameWorld* _GameWorld; // 0x70
		::BBOFEHOPCEC* RootState; // 0x78
		::MBBEBLGELAP* _OwnerAbilityInstance_k__BackingField; // 0x80
		::RPG::GameCore::GameEntity* _OwnerEntity; // 0x88
		::RPG::GameCore::GameEntity* Instigator; // 0x90
		::RPG::MVector3 StimulusPos; // 0x98
		::System::Boolean PerformanceReplayController; // 0xA4
		::System::Boolean StandalonePerformanceController; // 0xA5
		::System::Boolean IsInAnimEvent; // 0xA6
		::System::Boolean FinishImmediatelyInPerformanceFlag; // 0xA7
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_COPYTO_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskContext* Clone()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_CLONE_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* CloneWithTaskTemplate()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_CLONEWITHTASKTEMPLATE_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* CloneFromStandalonePerformance()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_CLONEFROMSTANDALONEPERFORMANCE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_CLEAR_OFFSET))(this);
		}

		::FGHGHOHCAKF* CreateChildContext()
		{
			return ((::FGHGHOHCAKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_CREATECHILDCONTEXT_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* _GetSelfInstance()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT__GETSELFINSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_SET_OWNERENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameWorld* get_GameWorld()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_GAMEWORLD_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_CasterEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_CASTERENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_TaskActionTarget()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_TASKACTIONTARGET_OFFSET))(this);
		}

		::System::Void set_TaskActionTarget(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_SET_TASKACTIONTARGET_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_SourceEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_SOURCEENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_SafeSourceEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_SAFESOURCEENTITY_OFFSET))(this);
		}

		::MBBEBLGELAP* get_OwnerAbilityInstance()
		{
			return ((::MBBEBLGELAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_OWNERABILITYINSTANCE_OFFSET))(this);
		}

		::System::Void set_OwnerAbilityInstance(::MBBEBLGELAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBBEBLGELAP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_SET_OWNERABILITYINSTANCE_OFFSET))(this, a1);
		}

		::System::Boolean IsBelongToPerformanceReplayEnv()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_ISBELONGTOPERFORMANCEREPLAYENV_OFFSET))(this);
		}

		::System::Boolean IsBelongToStandalonePerformanceEnv()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_ISBELONGTOSTANDALONEPERFORMANCEENV_OFFSET))(this);
		}

		::System::Boolean ShouldBlockTaskByPerformanceReplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_SHOULDBLOCKTASKBYPERFORMANCEREPLAY_OFFSET))(this);
		}

		::System::Boolean ShouldBlockTaskByStandalonePerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_SHOULDBLOCKTASKBYSTANDALONEPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean IsPerformanceLevelGraph()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_ISPERFORMANCELEVELGRAPH_OFFSET))(this);
		}

		::AELMAJAHPCP* get_ParamRegister()
		{
			return ((::AELMAJAHPCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_PARAMREGISTER_OFFSET))(this);
		}

		::LPNPMKNMMOK* get_CurrentParamData()
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_CURRENTPARAMDATA_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_TOSTRING_OFFSET))(this);
		}

		::System::String* GetBelongedConfigName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GETBELONGEDCONFIGNAME_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint Evaluate(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint TryEvaluate(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_TRYEVALUATE_OFFSET))(this, a1);
		}

		::System::String* TryEvaluate_1(::RPG::GameCore::DynamicString* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_TRYEVALUATE_1_OFFSET))(this, a1);
		}

		::System::String* Evaluate_1(::RPG::GameCore::DynamicString* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_1_OFFSET))(this, a1);
		}

		::System::Boolean Evaluate_2(::RPG::GameCore::DynamicBool* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DynamicBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_2_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* Evaluate_3(::RPG::GameCore::DynamicStringList* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::RPG::GameCore::DynamicStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_3_OFFSET))(this, a1);
		}

		::RPG::GameCore::DynamicJsonConfig* Evaluate_4(::RPG::GameCore::DynamicJson* a1)
		{
			return ((::RPG::GameCore::DynamicJsonConfig*(*)(::PVOID, ::RPG::GameCore::DynamicJson*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_4_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::DynamicJsonConfig*>* Evaluate_6(::RPG::GameCore::DynamicJsonList* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::DynamicJsonConfig*>*(*)(::PVOID, ::RPG::GameCore::DynamicJsonList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_6_OFFSET))(this, a1);
		}

		::System::String* Evaluate_8(::RPG::GameCore::FormatString a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FormatString))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATE_8_OFFSET))(this, a1);
		}

		::System::Void EvaluateTarget(::RPG::GameCore::TargetEvaluator* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::AliveStateMask a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATETARGET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EvaluateTarget_1(::RPG::GameCore::TargetEvaluator* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATETARGET_1_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* EvaluateSingleTarget(::RPG::GameCore::TargetEvaluator* a1, ::RPG::GameCore::AliveStateMask a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATESINGLETARGET_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint RPG_GameCore_IDynamicValueProvider_Evaluate(::RPG::GameCore::StringHash a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_RPG_GAMECORE_IDYNAMICVALUEPROVIDER_EVALUATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint RPG_GameCore_IAliasEvaluator_EvaluateAlias(::RPG::GameCore::TaskConfig* a1, ::RPG::GameCore::StringHash a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::TaskConfig*, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_RPG_GAMECORE_IALIASEVALUATOR_EVALUATEALIAS_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsSubLevelGraph()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_ISSUBLEVELGRAPH_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnerGroupEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_OWNERGROUPENTITY_OFFSET))(this);
		}

		::JBFFCBPMKEF* GetOwnerCustomData()
		{
			return ((::JBFFCBPMKEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GETOWNERCUSTOMDATA_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint EvaluateOrDefault(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_OFFSET))(this, a1);
		}

		::System::String* EvaluateOrDefault_1(::RPG::GameCore::DynamicString* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* EvaluateOrDefault_2(::RPG::GameCore::DynamicStringList* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::RPG::GameCore::DynamicStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_2_OFFSET))(this, a1);
		}

		::System::Boolean EvaluateOrDefault_3(::RPG::GameCore::DynamicBool* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DynamicBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_EVALUATEORDEFAULT_3_OFFSET))(this, a1);
		}

		::System::String* MapResPath(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_MAPRESPATH_OFFSET))(this, a1);
		}

		::GLEPMONEPEM* get_LittleGameStateTreeEntity()
		{
			return ((::GLEPMONEPEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_LITTLEGAMESTATETREEENTITY_OFFSET))(this);
		}

		::PFPHICGLMBI* get_LittleGameLevelGraphEntity()
		{
			return ((::PFPHICGLMBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TASKCONTEXT_GET_LITTLEGAMELEVELGRAPHENTITY_OFFSET))(this);
		}

	};
}
