#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAEEKGKDCJL.h"
#include "unitysdk/DPINADAJFCO.h"
#include "unitysdk/FKCPBAAEJJO.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/SurfGameItemDataEntry.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/ONNKFCEDCPB.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FOLOGHLENFB;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ItemDropEffectSetting; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM_GET_EFFECTPOSITION_OFFSET UNITYSDK_OFFSET(0x1C5ABB30)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM_ONBORNEFFECTCREATED_OFFSET UNITYSDK_OFFSET(0x1C5ABFA0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM_ONIDLEEFFECTCREATED_OFFSET UNITYSDK_OFFSET(0x1C5AC240)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM_RESET_OFFSET UNITYSDK_OFFSET(0x1C5AC490)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5ABE00)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int SimpleDropItemSubSystem_SimpleDropItem_TypeDefinitionIndex = 53113;

	class SimpleDropItemSubSystem_SimpleDropItem : public ::System::Object
	{
	public:
		::MoleMole::Config::SurfGameItemDataEntry SurfItemConfig; // 0x10
		::UnityEngine::GameObject* ModelGo; // 0x28
		::UnityEngine::Rigidbody* Rigidbody; // 0x30
		::UnityEngine::Collider* Collider; // 0x38
		::MoleMole::EntityHandle IdleEffect; // 0x40
		::MoleMole::EntityHandle CachedPickerEntity; // 0x50
		::FOLOGHLENFB* ItemTemplateConfig; // 0x60
		::Foundation::AssetPath PrefabPath; // 0x68
		::MoleMole::GameplayTag PickerTag; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Renderers; // 0x88
		::MoleMole::EntityHandle BornEffect; // 0x90
		::UnityEngine::Transform* EffectAttachTrans; // 0xA0
		::System::Action_1<::MoleMole::Battle::Entity*>* OnIdleEffectCreatedCallback; // 0xA8
		::System::Action_1<::MoleMole::Battle::Entity*>* OnBornEffectCreatedCallback; // 0xB0
		::MoleMole::Config::ItemDropEffectSetting* ItemDropSetting; // 0xB8
		::UnityEngine::Transform* Transform; // 0xC0
		::System::Single VelocityY; // 0xC8
		::System::Single GroundDistance; // 0xCC
		::System::Int32 HandleId; // 0xD0
		::System::Int32 ItemCount; // 0xD4
		::System::Single MotionGravity; // 0xD8
		::ONNKFCEDCPB PickType; // 0xDC
		::System::Int32 SurfItemID; // 0xE0
		::System::Single MotionEstLifeDuration; // 0xE4
		::UnityEngine::Vector3 AutoPickMoveVelocity; // 0xE8
		::System::Single WaitForAutoPickUpTimer; // 0xF4
		::System::Single JumpRepeatDelayTime; // 0xF8
		::System::Single LastAirTime; // 0xFC
		::System::Single InitPickUpPower; // 0x100
		::System::Single GravityMultiplier; // 0x104
		::System::Int32 ItemTemplateID; // 0x108
		::UnityEngine::Vector3 VerticalVelocity; // 0x10C
		::System::Boolean IsAutoRotateEnable; // 0x118
		::System::Boolean StartAutoPickUp; // 0x119
		::System::Byte _padding0[0x2];
		::System::Single BornEffectDuration; // 0x11C
		::System::Single ItemPickToTargetYOffset; // 0x120
		::System::Single WaitForAutoPickUpTime; // 0x124
		::System::Boolean HasColliderDefault; // 0x128
		::System::Boolean IsLoaded; // 0x129
		::System::Boolean Active; // 0x12A
		::System::Boolean ColliderDefaultEnabled; // 0x12B
		::UnityEngine::Vector3 Forward; // 0x12C
		::System::Single JumpEndTime; // 0x138
		::FKCPBAAEJJO DropSource; // 0x13C
		::System::Boolean IsTargetYOffsetInited; // 0x140
		::System::Boolean IsBornEffectEnable; // 0x141
		::System::Boolean HasSurfItemData; // 0x142
		::System::Boolean EnterTriggerBounds; // 0x143
		::System::Single PickUpFlyTimer; // 0x144
		::System::Boolean HasRegisterTrigger; // 0x148
		::System::Boolean IsReleased; // 0x149
		::System::Boolean OnGround; // 0x14A
		::System::Boolean ShouldUpdateLastMotionPosition; // 0x14B
		::System::Single MotionTime; // 0x14C
		::UnityEngine::Vector3 ModelForward; // 0x150
		::UnityEngine::Bounds TriggerBounds; // 0x15C
		::System::Single SqrMaxSpeedToPick; // 0x174
		::UnityEngine::Vector3 LastMotionPosition; // 0x178
		::UnityEngine::Vector3 MotionSpeed; // 0x184
		::System::Single LerpPickUpDirSpeed; // 0x190
		::UnityEngine::Vector3 BornVelocity; // 0x194
		::BAEEKGKDCJL DropEffect; // 0x1A0
		::UnityEngine::Vector3 Position; // 0x1A4
		::System::Single MotionPowerY; // 0x1B0
		::System::Single ClampPower; // 0x1B4
		::UnityEngine::LayerMask GroundLayers; // 0x1B8
		::System::Single JumpPower; // 0x1BC
		::System::Single MotionPowerXZ; // 0x1C0
		::DPINADAJFCO Stage; // 0x1C4
		::System::Nullable_1<::System::Object*> ServerIndex; // 0x1C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_EffectPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM_GET_EFFECTPOSITION_OFFSET))(this);
		}

		::System::Void OnBornEffectCreated(::MoleMole::Battle::Entity* effect)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM_ONBORNEFFECTCREATED_OFFSET))(this, effect);
		}

		::System::Void OnIdleEffectCreated(::MoleMole::Battle::Entity* effect)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM_ONIDLEEFFECTCREATED_OFFSET))(this, effect);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMPLEDROPITEM_RESET_OFFSET))(this);
		}
	};
}
