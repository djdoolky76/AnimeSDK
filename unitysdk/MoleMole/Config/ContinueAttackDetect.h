#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKGACDKKAIL.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GHLDLOHAOGM;
class MLFADFNMJFO;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AttackPatternBindAnimatorState; }
namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15> class Func_15; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13> class Func_13; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONTINUEATTACKDETECT_ATTACHPATTERNMETHOD_OFFSET UNITYSDK_OFFSET(0x16540470)
#define MOLEMOLE_CONFIG_CONTINUEATTACKDETECT_NEEDHIDECONTINUEATTACKFIELDS_OFFSET UNITYSDK_OFFSET(0x165404B0)
#define MOLEMOLE_CONFIG_CONTINUEATTACKDETECT__CTOR_OFFSET UNITYSDK_OFFSET(0x16540510)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ContinueAttackDetect_TypeDefinitionIndex = 82142;

	class ContinueAttackDetect : public ::MoleMole::Config::ConfigEntityAttackPattern
	{
	public:
		::System::Func_13<::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::System::Object*, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::UInt32, ::System::UInt32, ::LKGACDKKAIL, ::System::Boolean, ::System::Boolean>* patternMethodWithGroupID; // 0x80
		::System::Func_15<::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::System::UInt32, ::System::UInt32, ::LKGACDKKAIL, ::System::Boolean, ::System::Boolean>* patternMethodWithGroupIDAndPosRot; // 0x88
		::System::Collections::Generic::List_1<::MoleMole::Config::AttackPatternBindAnimatorState*>* bindAnimList; // 0x90
		::MoleMole::Config::ConfigTimeDrivenAttackCollider* colliderCfg; // 0x98
		::System::Int32 aliveMaxRecoverTimes; // 0xA0
		::System::Int32 aliveMaxHitCnt; // 0xA4
		::System::Single hitInterval; // 0xA8
		::System::Single unitMaxHitCnt; // 0xAC
		::System::Boolean useAliveMaxRecoverTimes; // 0xB0
		::System::Boolean IsHideContinueAttackFields; // 0xB1
		::System::Boolean canSkipCurFixedUpdate; // 0xB2
		::System::Boolean isReenterForceHitInterval; // 0xB3
		::System::Boolean KeepWhenHit; // 0xB4
		::System::Boolean manualConfigurationPatternListData; // 0xB5
		::System::Boolean isClearHitCntExitPattern; // 0xB6
		::System::Boolean isFollowAttacker; // 0xB7
		::System::Single aliveDuration; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTINUEATTACKDETECT__CTOR_OFFSET))(this);
		}

		::System::Void AttachPatternMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTINUEATTACKDETECT_ATTACHPATTERNMETHOD_OFFSET))(this);
		}

		::System::Boolean NeedHideContinueAttackFields()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONTINUEATTACKDETECT_NEEDHIDECONTINUEATTACKFIELDS_OFFSET))(this);
		}
	};
}
