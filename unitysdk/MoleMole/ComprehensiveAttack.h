#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/ContinuesTickAction.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class ACNLKLCDALA;
class EIMHGJELHGN;
class NLDPBEOABAP;
class NLNIIPDCABP;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class ComprehensiveAttack_ForceExitSettingData; }
namespace MoleMole { class ComprehensiveAttack_SuccessExitSettingData; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_COMPREHENSIVEATTACK_ALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x163F4DD0)
#define MOLEMOLE_COMPREHENSIVEATTACK_APPLYPARAMVALUES_OFFSET UNITYSDK_OFFSET(0x163F5D70)
#define MOLEMOLE_COMPREHENSIVEATTACK_APPLYRESULT_OFFSET UNITYSDK_OFFSET(0x163F5A10)
#define MOLEMOLE_COMPREHENSIVEATTACK_CHECKFORCEEXIT_OFFSET UNITYSDK_OFFSET(0x163F5BD0)
#define MOLEMOLE_COMPREHENSIVEATTACK_CHECKSUCCESSEXITCONDITION_OFFSET UNITYSDK_OFFSET(0x163F5F40)
#define MOLEMOLE_COMPREHENSIVEATTACK_DEALLOCATECONTINUESTICKTASK_OFFSET UNITYSDK_OFFSET(0x163F4EE0)
#define MOLEMOLE_COMPREHENSIVEATTACK_ISSUCCESSEXITSETTINGVALID_OFFSET UNITYSDK_OFFSET(0x163F5EB0)
#define MOLEMOLE_COMPREHENSIVEATTACK_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x163F4820)
#define MOLEMOLE_COMPREHENSIVEATTACK_ONEND_OFFSET UNITYSDK_OFFSET(0x163F60F0)
#define MOLEMOLE_COMPREHENSIVEATTACK_ONRESET_OFFSET UNITYSDK_OFFSET(0x163F66D0)
#define MOLEMOLE_COMPREHENSIVEATTACK_ONSTART_OFFSET UNITYSDK_OFFSET(0x163F4FD0)
#define MOLEMOLE_COMPREHENSIVEATTACK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x163F5170)
#define MOLEMOLE_COMPREHENSIVEATTACK_REFRESHSUCCESSEXITTRACKING_OFFSET UNITYSDK_OFFSET(0x163F63B0)
#define MOLEMOLE_COMPREHENSIVEATTACK_SYNCCONTINUESTICKTASKSTATE_OFFSET UNITYSDK_OFFSET(0x163F5B20)
#define MOLEMOLE_COMPREHENSIVEATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x163F6850)
#define MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x163F6A10)
#define MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x163F6AA0)
#define MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x163F6B30)
#define MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x163F6BC0)
#define MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x163F6C50)

namespace MoleMole
{
	inline static constexpr unsigned int ComprehensiveAttack_TypeDefinitionIndex = 74993;

	class ComprehensiveAttack : public ::BehaviorDesigner::Runtime::Tasks::ContinuesTickAction
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* AttackTrigger; // 0x58
		::MoleMole::Battle::Entity* _ownerEntity; // 0x60
		::MoleMole::ComprehensiveAttack_ForceExitSettingData* ForceExitSetting; // 0x68
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* OnExitSuccessValues; // 0x70
		::EIMHGJELHGN* _aiComponent; // 0x78
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* OnExitFailValues; // 0x80
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* OnEnterValues; // 0x88
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x90
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* OnExitSuccessParams; // 0x98
		::Il2CppArray<::System::String*>* AnimatorIDs; // 0xA0
		::BehaviorDesigner::Runtime::SharedInt* AttackIndexNum; // 0xA8
		::NLNIIPDCABP* _animatorComponent; // 0xB0
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* OnEnterParams; // 0xB8
		::BehaviorDesigner::Runtime::SharedInt* AnimatorLayer; // 0xC0
		::BehaviorDesigner::Runtime::SharedFloat* MaxWaitTime; // 0xC8
		::MoleMole::ComprehensiveAttack_SuccessExitSettingData* SuccessExitSetting; // 0xD0
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedString*>* SharedAnimatorIDs; // 0xD8
		::NLDPBEOABAP* comprehensiveAttackTask; // 0xE0
		::Il2CppArray<::System::Int32>* _animatorIDHashes; // 0xE8
		::ACNLKLCDALA* _inputComponent; // 0xF0
		::BehaviorDesigner::Runtime::SharedString* AttackIndexName; // 0xF8
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* OnExitFailParams; // 0x100
		::System::Boolean _resultApplied; // 0x108
		::System::Boolean _enteredSuccessExitAnim; // 0x109
		::System::Boolean _onEnterApplied; // 0x10A
		::System::Boolean _inCurrentAnim; // 0x10B
		::System::Single _waitTimer; // 0x10C
		::System::Int32 _currentAnimIndex; // 0x110
		::System::Single _successExitNormalizedTime; // 0x114

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_ONAWAKE_OFFSET))(this);
		}

		::System::Void AllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_ALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void DeAllocateContinuesTickTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_DEALLOCATECONTINUESTICKTASK_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_ONUPDATE_OFFSET))(this);
		}

		::System::Void SyncContinuesTickTaskState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_SYNCCONTINUESTICKTASKSTATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus CheckForceExit(::UnityEngine::AnimatorStateInfo curState, ::System::Int32 currentHash, ::System::Int32 layer)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_CHECKFORCEEXIT_OFFSET))(this, curState, currentHash, layer);
		}

		static ::System::Void ApplyParamValues(::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* paramArray, ::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* valueArray)
		{
			return ((::System::Void(*)(::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>*, ::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_APPLYPARAMVALUES_OFFSET))(paramArray, valueArray);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus ApplyResult(::BehaviorDesigner::Runtime::Tasks::TaskStatus status)
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_APPLYRESULT_OFFSET))(this, status);
		}

		::System::Boolean IsSuccessExitSettingValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_ISSUCCESSEXITSETTINGVALID_OFFSET))(this);
		}

		::System::Boolean CheckSuccessExitCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_CHECKSUCCESSEXITCONDITION_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_ONEND_OFFSET))(this);
		}

		::System::Void RefreshSuccessExitTracking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_REFRESHSUCCESSEXITTRACKING_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPREHENSIVEATTACK___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
