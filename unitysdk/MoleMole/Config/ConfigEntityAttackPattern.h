#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKGACDKKAIL.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BasePosXZType.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BasePosYType.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BaseRotXZType.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAttackPattern_BaseRotYType.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GHLDLOHAOGM;
class MLFADFNMJFO;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14> class Func_14; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11> class Func_11; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPATTERN_GETCOLLISIONCENTER_OFFSET UNITYSDK_OFFSET(0x16534970)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPATTERN__CTOR_OFFSET UNITYSDK_OFFSET(0x16534B70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackPattern_TypeDefinitionIndex = 52061;

	class ConfigEntityAttackPattern : public ::System::Object
	{
	public:
		::System::Func_14<::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::System::Object*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::LKGACDKKAIL, ::System::Boolean, ::System::Boolean>* patternMethodWithPosRot; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* BeBlockTags; // 0x18
		::System::Func_11<::MLFADFNMJFO*, ::MoleMole::Config::ConfigEntityAttackPattern*, ::MoleMole::Battle::Entity*, ::UnityEngine::LayerMask, ::System::Object*, ::System::Boolean, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::GHLDLOHAOGM*>*, ::LKGACDKKAIL, ::System::Boolean, ::System::Boolean>* patternMethod; // 0x20
		::System::String* BaseCenterTargetCustomKey; // 0x28
		::Il2CppArray<::System::String*>* TagList; // 0x30
		::System::String* BaseAttachPoint; // 0x38
		::System::Boolean LockZAxis; // 0x40
		::System::Boolean ForceAttackInvincibleTarget; // 0x41
		::System::Boolean IsAngleOffsetLocal; // 0x42
		::System::Boolean IsSubtractive; // 0x43
		::MoleMole::Config::ConfigEntityAttackPattern_BaseRotYType BaseYRotType; // 0x44
		::MoleMole::Config::AbilityTargetting BaseCenterTarget; // 0x48
		::System::Single CenterYOffset; // 0x4C
		::System::Single AngleYOffset; // 0x50
		::System::Single AngleXOffset; // 0x54
		::System::Single AttackResultFilterCoreDistance; // 0x58
		::System::Single CenterXOffset; // 0x5C
		::System::Single DebugAttackRate; // 0x60
		::System::Single CenterZOffset; // 0x64
		::MoleMole::Config::ConfigEntityAttackPattern_BasePosXZType BaseXZType; // 0x68
		::MoleMole::Config::ConfigEntityAttackPattern_BaseRotXZType BaseXZRotType; // 0x6C
		::System::Boolean LockXAxis; // 0x70
		::System::Boolean LockYAxis; // 0x71
		::System::Boolean IgnoreOnParryBeingHitCallback; // 0x72
		::System::Boolean ShowDebug; // 0x73
		::System::Single AngleZOffset; // 0x74
		::MoleMole::Config::ConfigEntityAttackPattern_BasePosYType BaseYType; // 0x78
		::System::Boolean OpenDebugAttackRate; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPATTERN__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetCollisionCenter(::MoleMole::Battle::Entity* casterEntity, ::MoleMole::Battle::Entity* centerEntity)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPATTERN_GETCOLLISIONCENTER_OFFSET))(this, casterEntity, centerEntity);
		}
	};
}
