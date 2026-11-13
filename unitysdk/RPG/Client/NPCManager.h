#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/RPG/GameCore/ColliderEnableReason.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EKFMIDBJDIA;
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class StartFarmPhantomData; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureCharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class MapRotationEntityEffectConfig; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class NPCDataRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_NPCMANAGER_ACTIVEPHANTOM_OFFSET UNITYSDK_OFFSET(0x1C2C91F0)
#define RPG_CLIENT_NPCMANAGER_CLEARWARNINGPOWERFULENEMYCD_OFFSET UNITYSDK_OFFSET(0x1C2CA0F0)
#define RPG_CLIENT_NPCMANAGER_CREATENPCMONSTER_OFFSET UNITYSDK_OFFSET(0x1C2C5190)
#define RPG_CLIENT_NPCMANAGER_CREATENPC_OFFSET UNITYSDK_OFFSET(0x1C2C4840)
#define RPG_CLIENT_NPCMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C43B0)
#define RPG_CLIENT_NPCMANAGER_DEBUGACTIVEPHANTOM_OFFSET UNITYSDK_OFFSET(0x1C2C9580)
#define RPG_CLIENT_NPCMANAGER_DESTROYNPC_1_OFFSET UNITYSDK_OFFSET(0x1C2C5920)
#define RPG_CLIENT_NPCMANAGER_DESTROYNPC_OFFSET UNITYSDK_OFFSET(0x1C2C5530)
#define RPG_CLIENT_NPCMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C2C4640)
#define RPG_CLIENT_NPCMANAGER_DOACTIVEPHANTOM_OFFSET UNITYSDK_OFFSET(0x1C2C9900)
#define RPG_CLIENT_NPCMANAGER_ENABLEALLMONSTERNPCAI_OFFSET UNITYSDK_OFFSET(0x1C2C8870)
#define RPG_CLIENT_NPCMANAGER_GETALLMONSTERNPC_OFFSET UNITYSDK_OFFSET(0x1C2C6210)
#define RPG_CLIENT_NPCMANAGER_GETALLNORMALNPC_OFFSET UNITYSDK_OFFSET(0x1C2C6050)
#define RPG_CLIENT_NPCMANAGER_GETALLNPCS_OFFSET UNITYSDK_OFFSET(0x1C2C6010)
#define RPG_CLIENT_NPCMANAGER_GETENTITYBYNPCID_OFFSET UNITYSDK_OFFSET(0x1C2C5B80)
#define RPG_CLIENT_NPCMANAGER_GETFARMELEMENTENTITYID_OFFSET UNITYSDK_OFFSET(0x1C2C9EB0)
#define RPG_CLIENT_NPCMANAGER_GETFARMELEMENTENTITY_OFFSET UNITYSDK_OFFSET(0x1C2C9C10)
#define RPG_CLIENT_NPCMANAGER_GETNPCBYNPCID_1_OFFSET UNITYSDK_OFFSET(0x1C2C5DF0)
#define RPG_CLIENT_NPCMANAGER_GETNPCBYNPCID_OFFSET UNITYSDK_OFFSET(0x1C2C5C40)
#define RPG_CLIENT_NPCMANAGER_GETNPCNEAR_OFFSET UNITYSDK_OFFSET(0x1C2CA140)
#define RPG_CLIENT_NPCMANAGER_GET_ISWANINGCD_OFFSET UNITYSDK_OFFSET(0x1C2CA4D0)
#define RPG_CLIENT_NPCMANAGER_GET_PHANTOMENTITIES_OFFSET UNITYSDK_OFFSET(0x1C2C9110)
#define RPG_CLIENT_NPCMANAGER_HIDEALLMONSTERNPC_OFFSET UNITYSDK_OFFSET(0x1C2C85D0)
#define RPG_CLIENT_NPCMANAGER_HIDEALLNORMALNPCAI_OFFSET UNITYSDK_OFFSET(0x1C2C8720)
#define RPG_CLIENT_NPCMANAGER_HIDEALLNORMALNPC_OFFSET UNITYSDK_OFFSET(0x1C2C8480)
#define RPG_CLIENT_NPCMANAGER_HIDEALLNPCONLYVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C2C63D0)
#define RPG_CLIENT_NPCMANAGER_HIDEALLNPC_OFFSET UNITYSDK_OFFSET(0x1C2C66C0)
#define RPG_CLIENT_NPCMANAGER_REFRESHPHANTOM_OFFSET UNITYSDK_OFFSET(0x1C2C89C0)
#define RPG_CLIENT_NPCMANAGER_SETHIDENEWMONSTERBYVISIBLEREASON_OFFSET UNITYSDK_OFFSET(0x1C2CAE80)
#define RPG_CLIENT_NPCMANAGER_SETHIDENEWNPCBYVISIBLEREASON_OFFSET UNITYSDK_OFFSET(0x1C2CAD60)
#define RPG_CLIENT_NPCMANAGER_SET_PHANTOMENTITIES_OFFSET UNITYSDK_OFFSET(0x1C2CB6F0)
#define RPG_CLIENT_NPCMANAGER_SHOWALLNPC_OFFSET UNITYSDK_OFFSET(0x1C2C7680)
#define RPG_CLIENT_NPCMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x1C2C9F80)
#define RPG_CLIENT_NPCMANAGER_WARNINGPOWERFULENEMY_OFFSET UNITYSDK_OFFSET(0x1C2C9FE0)
#define RPG_CLIENT_NPCMANAGER__CREATESTILLNPC_OFFSET UNITYSDK_OFFSET(0x1C2C4EC0)
#define RPG_CLIENT_NPCMANAGER__GETHIDENPCEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0x1C2C8060)
#define RPG_CLIENT_NPCMANAGER__HIDENPC_OFFSET UNITYSDK_OFFSET(0x1C2C7010)
#define RPG_CLIENT_NPCMANAGER__ONLEVELENTITYDISPOSED_OFFSET UNITYSDK_OFFSET(0x1C2CB610)
#define RPG_CLIENT_NPCMANAGER__ONNPCMONSTERCREATE_OFFSET UNITYSDK_OFFSET(0x1C2C7BC0)
#define RPG_CLIENT_NPCMANAGER__POSTCREATENPCFORPERFORMANCEHIDE_OFFSET UNITYSDK_OFFSET(0x1C2CB240)
#define RPG_CLIENT_NPCMANAGER__POSTCREATENPCFORVISIBLEREASONHIDE_OFFSET UNITYSDK_OFFSET(0x1C2CAFA0)
#define RPG_CLIENT_NPCMANAGER__SETUPATLASFACEEMOTION_OFFSET UNITYSDK_OFFSET(0x1C2CAAE0)
#define RPG_CLIENT_NPCMANAGER__SETUPBONEEMOTIONNAME_OFFSET UNITYSDK_OFFSET(0x1C2CAA20)
#define RPG_CLIENT_NPCMANAGER__SETUPDEFAULTBLENDSHAPECONFIG_OFFSET UNITYSDK_OFFSET(0x1C2CA8B0)
#define RPG_CLIENT_NPCMANAGER__SETUPDEFAULTIDLESTATE_OFFSET UNITYSDK_OFFSET(0x1C2CA4E0)
#define RPG_CLIENT_NPCMANAGER__SETUPGROUPEDANIMATORSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x1C2CA6E0)
#define RPG_CLIENT_NPCMANAGER__SETUPINITIALHIDDENNODELIST_OFFSET UNITYSDK_OFFSET(0x1C2CB4B0)
#define RPG_CLIENT_NPCMANAGER__SHOWNPC_OFFSET UNITYSDK_OFFSET(0x1C2C7A30)
#define RPG_CLIENT_NPCMANAGER__TRIGGEREFFECTONHIDENPC_OFFSET UNITYSDK_OFFSET(0x1C2C71A0)
#define RPG_CLIENT_NPCMANAGER__TRIGGERHIDENPCEFFECT_OFFSET UNITYSDK_OFFSET(0x1C2C81E0)

namespace RPG::Client
{
	inline static constexpr unsigned int NPCManager_TypeDefinitionIndex = 62038;

	class NPCManager : public ::System::Object
	{
	public:
		::RPG::GameCore::GameWorld* _OwnerWorldRef; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* _EffectUniqueName; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::CharacterVisibleReason>* _HideNewNPCVisibleReason; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapNpcDef*>* _PhantomEntities; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::CharacterVisibleReason>* _HideNewMonsterVisibleReason; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* _NPCDictionary; // 0x38
		::RPG::GameCore::HoyoTag* _HideWithoutHoyoTag; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _NotHideNpcs; // 0x48
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _HideNpcs; // 0x50
		::System::Int32 _HideAllNPCAIBitset; // 0x58
		::System::Boolean _UnloadArt; // 0x5C
		::System::Boolean _IsHideAllNPC; // 0x5D
		::System::Boolean _HideAllCollider; // 0x5E
		::System::Byte _padding0[0x1];
		::System::Single _MonsterWarningCD; // 0x60
		::System::Boolean _HideNPCTriggerEffect; // 0x64
		::RPG::GameCore::CharacterVisibleReason _HideAllNPCReason; // 0x65
		::RPG::GameCore::ColliderEnableReason _HideAllColliderReason; // 0x68
		::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CreateNPC(::RPG::Client::MapNpcDef* a1, ::System::Action_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_CREATENPC_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* _CreateStillNPC(::RPG::Client::MapNpcDef* a1, ::RPG::GameCore::NPCDataRow* a2, ::System::Action_1<::RPG::GameCore::GameEntity*>* a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::RPG::GameCore::NPCDataRow*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__CREATESTILLNPC_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* CreateNPCMonster(::RPG::Client::MapNpcDef* a1, ::System::Action_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_CREATENPCMONSTER_OFFSET))(this, a1, a2);
		}

		::System::Void DestroyNPC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_DESTROYNPC_OFFSET))(this, a1);
		}

		::System::Void DestroyNPC_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_DESTROYNPC_1_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetEntityByNpcID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GETENTITYBYNPCID_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetNpcByNpcID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GETNPCBYNPCID_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetNpcByNpcID_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GETNPCBYNPCID_1_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* GetAllNpcs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GETALLNPCS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GetAllNormalNpc()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GETALLNORMALNPC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GetAllMonsterNpc()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GETALLMONSTERNPC_OFFSET))(this);
		}

		::System::Void HideAllNpcOnlyVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_HIDEALLNPCONLYVISIBLE_OFFSET))(this, a1);
		}

		::System::Void HideAllNpc(::RPG::GameCore::CharacterVisibleReason a1, ::System::Int32 a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::HoyoTag* a4, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>* a5, ::System::Boolean a6, ::RPG::GameCore::ColliderEnableReason a7, ::System::Boolean a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterVisibleReason, ::System::Int32, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::HoyoTag*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>*, ::System::Boolean, ::RPG::GameCore::ColliderEnableReason, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_HIDEALLNPC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void ShowAllNpc(::RPG::GameCore::CharacterVisibleReason a1, ::System::Int32 a2, ::System::Boolean a3, ::RPG::GameCore::ColliderEnableReason a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterVisibleReason, ::System::Int32, ::System::Boolean, ::RPG::GameCore::ColliderEnableReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_SHOWALLNPC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _OnNpcMonsterCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__ONNPCMONSTERCREATE_OFFSET))(this, a1);
		}

		::System::Void _ShowNpc(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::CharacterVisibleReason a2, ::System::Int32 a3, ::System::Boolean a4, ::RPG::GameCore::ColliderEnableReason a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterVisibleReason, ::System::Int32, ::System::Boolean, ::RPG::GameCore::ColliderEnableReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__SHOWNPC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _HideNpc(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::CharacterVisibleReason a2, ::System::Int32 a3, ::System::Boolean a4, ::RPG::GameCore::ColliderEnableReason a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterVisibleReason, ::System::Int32, ::System::Boolean, ::RPG::GameCore::ColliderEnableReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__HIDENPC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _TriggerEffectOnHideNpc(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__TRIGGEREFFECTONHIDENPC_OFFSET))(this, a1);
		}

		::RPG::GameCore::MapRotationEntityEffectConfig* _GetHideNPCEffectConfig(::RPG::Client::MapNpcDef* a1)
		{
			return ((::RPG::GameCore::MapRotationEntityEffectConfig*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__GETHIDENPCEFFECTCONFIG_OFFSET))(this, a1);
		}

		::System::Void _TriggerHideNPCEffect(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::String* a4, ::UnityEngine::Transform* a5, ::RPG::GameCore::GameEntity* a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::String*, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__TRIGGERHIDENPCEFFECT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void HideAllNormalNpc(::System::Boolean a1, ::RPG::GameCore::CharacterVisibleReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_HIDEALLNORMALNPC_OFFSET))(this, a1, a2);
		}

		::System::Void HideAllMonsterNpc(::System::Boolean a1, ::RPG::GameCore::CharacterVisibleReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_HIDEALLMONSTERNPC_OFFSET))(this, a1, a2);
		}

		::System::Void HideAllNormalNpcAI(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_HIDEALLNORMALNPCAI_OFFSET))(this, a1, a2);
		}

		::System::Void EnableAllMonsterNpcAI(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_ENABLEALLMONSTERNPCAI_OFFSET))(this, a1, a2);
		}

		::System::Boolean RefreshPhantom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_REFRESHPHANTOM_OFFSET))(this);
		}

		::System::Void ActivePhantom(::RPG::Client::StartFarmPhantomData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StartFarmPhantomData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_ACTIVEPHANTOM_OFFSET))(this, a1, a2);
		}

		::System::UInt32 DebugActivePhantom(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_DEBUGACTIVEPHANTOM_OFFSET))(this, a1, a2);
		}

		::System::Void DoActivePhantom(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_DOACTIVEPHANTOM_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* GetFarmElementEntity(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GETFARMELEMENTENTITY_OFFSET))(this, a1);
		}

		::System::UInt32 GetFarmElementEntityID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GETFARMELEMENTENTITYID_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void WarningPowerfulEnemy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_WARNINGPOWERFULENEMY_OFFSET))(this);
		}

		::System::Void ClearWarningPowerfulEnemyCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_CLEARWARNINGPOWERFULENEMYCD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GetNPCNear(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GETNPCNEAR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsWaningCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GET_ISWANINGCD_OFFSET))(this);
		}

		::System::Void _SetupDefaultIdleState(::RPG::GameCore::NPCComponent* a1, ::RPG::GameCore::AdventureCharacterController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCComponent*, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__SETUPDEFAULTIDLESTATE_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupGroupedAnimatorSpeedRatio(::RPG::GameCore::NPCComponent* a1, ::RPG::GameCore::AdventureCharacterController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCComponent*, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__SETUPGROUPEDANIMATORSPEEDRATIO_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupDefaultBlendShapeConfig(::RPG::GameCore::NPCComponent* a1, ::RPG::GameCore::AdventureCharacterController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCComponent*, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__SETUPDEFAULTBLENDSHAPECONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupBoneEmotionName(::RPG::GameCore::NPCComponent* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCComponent*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__SETUPBONEEMOTIONNAME_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupAtlasFaceEmotion(::RPG::GameCore::NPCComponent* a1, ::RPG::GameCore::AdventureCharacterDataComponent* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCComponent*, ::RPG::GameCore::AdventureCharacterDataComponent*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__SETUPATLASFACEEMOTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetHideNewNPCByVisibleReason(::System::Boolean a1, ::RPG::GameCore::CharacterVisibleReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_SETHIDENEWNPCBYVISIBLEREASON_OFFSET))(this, a1, a2);
		}

		::System::Void SetHideNewMonsterByVisibleReason(::System::Boolean a1, ::RPG::GameCore::CharacterVisibleReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_SETHIDENEWMONSTERBYVISIBLEREASON_OFFSET))(this, a1, a2);
		}

		::System::Void _PostCreateNPCForVisibleReasonHide(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__POSTCREATENPCFORVISIBLEREASONHIDE_OFFSET))(this, a1);
		}

		::System::Void _PostCreateNPCForPerformanceHide(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__POSTCREATENPCFORPERFORMANCEHIDE_OFFSET))(this, a1);
		}

		::System::Void _SetupInitialHiddenNodeList(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MapNpcDef* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__SETUPINITIALHIDDENNODELIST_OFFSET))(this, a1, a2);
		}

		::System::Void _OnLevelEntityDisposed(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER__ONLEVELENTITYDISPOSED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapNpcDef*>* get_PhantomEntities()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapNpcDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_GET_PHANTOMENTITIES_OFFSET))(this);
		}

		::System::Void set_PhantomEntities(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapNpcDef*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapNpcDef*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NPCMANAGER_SET_PHANTOMENTITIES_OFFSET))(this, a1);
		}

	};
}
