#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPKENDHJIDC.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

class ENGKPGFGGLM;
class GEIHCPAOKKK;
class JFBNBOHNJBF;
class NLNIIPDCABP;
class PCNKBFEBILF;
namespace MoleMole { class UIInLevelGamePlayButtonSoloAidChildWindowController; }
namespace MoleMole { class UIInLevelRamielCrosshairChildWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigBossAirCombatParryAttack; }
namespace MoleMole::Config { class HighLightAirCombatConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class GJBGAGHHABE_1;

#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ADDCIRCLECOUNT_OFFSET UNITYSDK_OFFSET(0x1650B3E0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_APPLYCROSSHAIRPOSITION_OFFSET UNITYSDK_OFFSET(0x164FCB90)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CALCPARRYTARGETWORLDPOS_OFFSET UNITYSDK_OFFSET(0x165014C0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CHANGEANIMATORPARAM_1_OFFSET UNITYSDK_OFFSET(0x1650A0D0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CHANGEANIMATORPARAM_2_OFFSET UNITYSDK_OFFSET(0x1650A550)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CHANGEANIMATORPARAM_3_OFFSET UNITYSDK_OFFSET(0x1650A9E0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CHANGEANIMATORPARAM_OFFSET UNITYSDK_OFFSET(0x16509C40)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CLOSECROSSHAIRCONTROLLER_OFFSET UNITYSDK_OFFSET(0x164FB970)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CLOSECROSSHAIRWINDOW_OFFSET UNITYSDK_OFFSET(0x164FB2D0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CREATEMONSTERBYGROUP_OFFSET UNITYSDK_OFFSET(0x1650AE50)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEAIM_OFFSET UNITYSDK_OFFSET(0x164FABC0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEAVATARMOVEVELOCITY_OFFSET UNITYSDK_OFFSET(0x164FD930)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEAVATARROTATIONRESET_OFFSET UNITYSDK_OFFSET(0x164FDB20)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEPARRYAID_OFFSET UNITYSDK_OFFSET(0x164FF1C0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEPARRYATTACK_OFFSET UNITYSDK_OFFSET(0x165034F0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16508AA0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_FINISHBOSSPARRYMOVE_OFFSET UNITYSDK_OFFSET(0x16501AB0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_FINISHBOSSPARRYRETURN_OFFSET UNITYSDK_OFFSET(0x16503110)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETAVATARBOSSMIDDLEPOINT_OFFSET UNITYSDK_OFFSET(0x1650B430)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETBATTLESKILLUILOGIC_OFFSET UNITYSDK_OFFSET(0x164FE760)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETCROSSHAIRWORLDPOS_OFFSET UNITYSDK_OFFSET(0x164FD140)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETENTITYHUDLOCALPOS_OFFSET UNITYSDK_OFFSET(0x164FC550)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETENTITYSCREENPOS_OFFSET UNITYSDK_OFFSET(0x164FD450)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETENTITYWORLDPOS_OFFSET UNITYSDK_OFFSET(0x164FCFC0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x16509AC0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x16504F40)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_BOSS_OFFSET UNITYSDK_OFFSET(0x16504F50)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_ENABLEUPDATEWHENGAMEPAUSE_OFFSET UNITYSDK_OFFSET(0x16504F20)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x16504F30)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_ISMUTECAMERAFIELDQUADRANT_OFFSET UNITYSDK_OFFSET(0x164FF950)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x16504F60)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GOTOLENGTH_OFFSET UNITYSDK_OFFSET(0x1650B2F0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITAIM_OFFSET UNITYSDK_OFFSET(0x164F9BF0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITAVATARMOVEVELOCITY_OFFSET UNITYSDK_OFFSET(0x164FD8C0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITCROSSHAIRFOLLOW_OFFSET UNITYSDK_OFFSET(0x164FBF30)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITPARRYAID_OFFSET UNITYSDK_OFFSET(0x164FE9A0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITPARRYATTACK_OFFSET UNITYSDK_OFFSET(0x16500740)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x16507690)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ISINPARRYMODE_OFFSET UNITYSDK_OFFSET(0x16504F70)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ISPARRYMOVING_OFFSET UNITYSDK_OFFSET(0x16502470)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_MUTEDITHER_OFFSET UNITYSDK_OFFSET(0x16506C80)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_MUTEMOVETIPS_OFFSET UNITYSDK_OFFSET(0x1650B390)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONAFTERLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16501F90)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONAIMPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0x164FD6C0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONAVATARENABLE_OFFSET UNITYSDK_OFFSET(0x16506D90)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONBOSSENABLE_OFFSET UNITYSDK_OFFSET(0x16506840)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONBOSSPARRYFRAMEEND_OFFSET UNITYSDK_OFFSET(0x165004A0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONBOSSPARRYMOVECOMPLETE_OFFSET UNITYSDK_OFFSET(0x16502420)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1650BAD0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x164FFDB0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16505FC0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONMONSTERENABLE_OFFSET UNITYSDK_OFFSET(0x16506530)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONPARRYAIDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x164FF740)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONPARRYBEINGHIT_OFFSET UNITYSDK_OFFSET(0x165003B0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16504FF0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_OPENCROSSHAIRWINDOW_OFFSET UNITYSDK_OFFSET(0x164FA5F0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REFRESHCROSSHAIRPROGRESS_OFFSET UNITYSDK_OFFSET(0x164FA350)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REGISTERAIMCUSTOMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x164F9EA0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x164FF9C0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REMOVEMONSTERBYGROUP_OFFSET UNITYSDK_OFFSET(0x1650AEE0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REPARENT_OFFSET UNITYSDK_OFFSET(0x16507540)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_RESETCROSSHAIRFOLLOW_OFFSET UNITYSDK_OFFSET(0x164F9E00)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETAVATARPARRYANIMPARAM_OFFSET UNITYSDK_OFFSET(0x16504B20)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETBOSSPARRYANIMPARAM_OFFSET UNITYSDK_OFFSET(0x16504D30)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETCROSSHAIRPROGRESS_OFFSET UNITYSDK_OFFSET(0x164FB8B0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETCROSSHAIRVISIBLE_OFFSET UNITYSDK_OFFSET(0x164FBB80)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETMONOTRIGGEREVENTSUBPROXYSWEEPCHECK_OFFSET UNITYSDK_OFFSET(0x16509A20)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETMUTECAMERAFIELDQUADRANT_OFFSET UNITYSDK_OFFSET(0x164FF970)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x16505DA0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SET_ISMUTECAMERAFIELDQUADRANT_OFFSET UNITYSDK_OFFSET(0x164FF960)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_STARTAVATARRESETLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x164FE3C0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_STARTBOSSPARRYATTACKMOVE_OFFSET UNITYSDK_OFFSET(0x16503CE0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_STARTBOSSPARRYATTACK_OFFSET UNITYSDK_OFFSET(0x16503910)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_STARTBOSSRETURNPARENT_OFFSET UNITYSDK_OFFSET(0x16504640)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SUBSCRIBEAIMPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0x164FA1B0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SYNCLASERTARGETTOAVATARLOCALPOS_OFFSET UNITYSDK_OFFSET(0x1650B740)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_TRYSUBSCRIBEBOSSAIMMOVE_OFFSET UNITYSDK_OFFSET(0x164FB610)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UNREGISTERAIMCUSTOMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x164FB0C0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x164FFBD0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UNSUBSCRIBEBOSSAIMMOVE_OFFSET UNITYSDK_OFFSET(0x164FAEF0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEAIMPOSITION_OFFSET UNITYSDK_OFFSET(0x164FCE90)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEAIM_OFFSET UNITYSDK_OFFSET(0x164FBFA0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEAVATARMOVEVELOCITY_OFFSET UNITYSDK_OFFSET(0x164FDB90)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEAVATARROTATIONRESET_OFFSET UNITYSDK_OFFSET(0x164FDF10)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATELOCKTARGET_OFFSET UNITYSDK_OFFSET(0x164FC130)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEPARRYATTACK_OFFSET UNITYSDK_OFFSET(0x16500840)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEPARRYRETURN_OFFSET UNITYSDK_OFFSET(0x165024D0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1650BE00)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1650BB40)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM__INIT_B__133_2_OFFSET UNITYSDK_OFFSET(0x1650BE10)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1650BEE0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1650BF70)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1650C000)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1650C0A0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1650C130)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x1650C1C0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int HighLightAirCombatSubSystem_TypeDefinitionIndex = 83426;

	class HighLightAirCombatSubSystem
	{
	public:
		static ::System::Boolean* StaticGet_OffsetByAvatarUseLocalAix()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HighLightAirCombatSubSystem_TypeDefinitionIndex)->GetStaticField(0xE520);
		}
		// static const ::System::Single CrosshairFollowSharpness; // 0x0
		// static const ::System::Single CrosshairMaxMovePerSecond; // 0x0
		::System::Collections::Generic::Dictionary_2<::LPKENDHJIDC, ::System::Collections::Generic::List_1<::UnityEngine::Animator*>*>* _dicAnimators; // 0x10
		::MoleMole::EntityHandle _boss; // 0x18
		::MoleMole::Config::ConfigBossAirCombatParryAttack* _currentParryConfig; // 0x28
		::System::Collections::Generic::Queue_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::Vector3>>* _avatarVelocityWindow; // 0x30
		::GEIHCPAOKKK* _avatarModel; // 0x38
		::UnityEngine::AnimationCurve* _parryMoveCurve; // 0x40
		::MoleMole::Config::HighLightAirCombatConfig* _config; // 0x48
		::System::Collections::Generic::Dictionary_2<::LPKENDHJIDC, ::GJBGAGHHABE_1<::System::Single>*>* _dicTimeScales; // 0x50
		::UnityEngine::AnimationCurve* _parryReturnCurveObj; // 0x58
		::UnityEngine::Transform* _avatarRoot; // 0x60
		::JFBNBOHNJBF* _bossFinalMoveComponent; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _dicRuntimeMonsters; // 0x70
		::UnityEngine::Transform* _bossModelTransform; // 0x78
		::UnityEngine::GameObject* _root; // 0x80
		::UnityEngine::Transform* _laserTargetAttachPoint; // 0x88
		::MoleMole::UIInLevelRamielCrosshairChildWindowController* _crosshairController; // 0x90
		::UnityEngine::Transform* _bossModelOriginalParent; // 0x98
		::UnityEngine::AnimationCurve* _avatarRotationResetCurve; // 0xA0
		::NLNIIPDCABP* _bossAnimatorCom; // 0xA8
		::UnityEngine::Transform* _bossParryChasePoint; // 0xB0
		::MoleMole::EntityHandle _avatar; // 0xB8
		::MoleMole::UIInLevelGamePlayButtonSoloAidChildWindowController* _cachedSoloAidBtnCtrl; // 0xC8
		::MoleMole::EntityHandle _crosshairHudTarget; // 0xD0
		::MoleMole::EntityHandle _aimTrackedBossHandle; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* _dicMonsterConfigs; // 0xF0
		::MoleMole::EntityHandle _lockedEntity; // 0xF8
		::System::Boolean _IsMuteCameraFieldQuadrant_k__BackingField; // 0x108
		::System::Boolean _isParryMoving; // 0x109
		::System::Boolean _isParrying; // 0x10A
		::System::Boolean _crosshairVisible; // 0x10B
		::System::Boolean _parryAidBtnCreatedByUs; // 0x10C
		::System::Boolean _crosshairEnabled; // 0x10D
		::System::Byte _padding0[0x2];
		::UnityEngine::Quaternion _avatarRotationResetStartRot; // 0x110
		::System::Single _parryMoveTimer; // 0x120
		::System::Boolean useFirstFrame; // 0x124
		::System::Boolean _hasCrosshairHudPos; // 0x125
		::System::Boolean _showTips; // 0x126
		::System::Boolean useFirstReturnFrame; // 0x127
		::System::Single _avatarRotationResetTimer; // 0x128
		::System::Single _pauseLength; // 0x12C
		::System::Int32 CircleCount; // 0x130
		::System::Single _parryReturnTimer; // 0x134
		::System::Single _curTime; // 0x138
		::System::Single maxWarpSpeed; // 0x13C
		::System::Single _parryRootMotionOffsetZScale; // 0x140
		::System::Boolean _isLastFramePause; // 0x144
		::System::Boolean setBossParryParent; // 0x145
		::System::Boolean _isAvatarRotationResetting; // 0x146
		::System::Boolean _isParryReturning; // 0x147
		::System::Single _avatarRotationResetDuration; // 0x148
		::UnityEngine::Vector2 _crosshairHudPos; // 0x14C
		::UnityEngine::Vector3 _parryReturnStartPos; // 0x154

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void InitAim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITAIM_OFFSET))(this);
		}

		::System::Void DisposeAim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEAIM_OFFSET))(this);
		}

		::System::Void TrySubscribeBossAimMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_TRYSUBSCRIBEBOSSAIMMOVE_OFFSET))(this);
		}

		::System::Void UnsubscribeBossAimMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UNSUBSCRIBEBOSSAIMMOVE_OFFSET))(this);
		}

		::System::Void RegisterAimCustomProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REGISTERAIMCUSTOMPROPERTIES_OFFSET))(this);
		}

		::System::Void UnregisterAimCustomProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UNREGISTERAIMCUSTOMPROPERTIES_OFFSET))(this);
		}

		::System::Void SubscribeAimPropertyChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SUBSCRIBEAIMPROPERTYCHANGE_OFFSET))(this);
		}

		::System::Void OpenCrosshairWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_OPENCROSSHAIRWINDOW_OFFSET))(this);
		}

		::System::Void CloseCrosshairWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CLOSECROSSHAIRWINDOW_OFFSET))(this);
		}

		::System::Void CloseCrosshairController(::MoleMole::UIInLevelRamielCrosshairChildWindowController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelRamielCrosshairChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CLOSECROSSHAIRCONTROLLER_OFFSET))(this, controller);
		}

		::System::Void SetCrosshairVisible(::System::Boolean visible, ::UnityEngine::Vector2 visibleHudPos, ::System::Boolean hasVisibleHudPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETCROSSHAIRVISIBLE_OFFSET))(this, visible, visibleHudPos, hasVisibleHudPos);
		}

		::System::Void InitCrosshairFollow(::UnityEngine::Vector2 hudPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITCROSSHAIRFOLLOW_OFFSET))(this, hudPos);
		}

		::System::Void ResetCrosshairFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_RESETCROSSHAIRFOLLOW_OFFSET))(this);
		}

		::System::Void UpdateAim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEAIM_OFFSET))(this);
		}

		::System::Void UpdateAimPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEAIMPOSITION_OFFSET))(this);
		}

		::System::Void ApplyCrosshairPosition(::UnityEngine::Vector2 rawHudPos, ::System::Boolean immediate)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_APPLYCROSSHAIRPOSITION_OFFSET))(this, rawHudPos, immediate);
		}

		::System::Void UpdateLockTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATELOCKTARGET_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetEntityWorldPos(::MoleMole::EntityHandle handle)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETENTITYWORLDPOS_OFFSET))(this, handle);
		}

		::UnityEngine::Vector3 GetCrosshairWorldPos(::MoleMole::EntityHandle handle)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETCROSSHAIRWORLDPOS_OFFSET))(this, handle);
		}

		::UnityEngine::Vector2 GetEntityScreenPos(::MoleMole::EntityHandle handle)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETENTITYSCREENPOS_OFFSET))(this, handle);
		}

		::UnityEngine::Vector2 GetEntityHudLocalPos(::MoleMole::EntityHandle handle)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETENTITYHUDLOCALPOS_OFFSET))(this, handle);
		}

		::System::Void OnAimPropertyChange(::System::UInt32 fighterID, ::MoleMole::Config::BaseProperty propertyType, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONAIMPROPERTYCHANGE_OFFSET))(this, fighterID, propertyType, customType, oldValue, newValue);
		}

		::System::Void RefreshCrosshairProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REFRESHCROSSHAIRPROGRESS_OFFSET))(this);
		}

		::System::Void SetCrosshairProgress(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETCROSSHAIRPROGRESS_OFFSET))(this, ratio);
		}

		::System::Void InitAvatarMoveVelocity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITAVATARMOVEVELOCITY_OFFSET))(this);
		}

		::System::Void DisposeAvatarMoveVelocity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEAVATARMOVEVELOCITY_OFFSET))(this);
		}

		::System::Void DisposeAvatarRotationReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEAVATARROTATIONRESET_OFFSET))(this);
		}

		::System::Void UpdateAvatarMoveVelocity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEAVATARMOVEVELOCITY_OFFSET))(this);
		}

		::System::Void UpdateAvatarRotationReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEAVATARROTATIONRESET_OFFSET))(this);
		}

		::System::Void StartAvatarResetLocalRotation(::System::Single duration, ::System::String* curveName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_STARTAVATARRESETLOCALROTATION_OFFSET))(this, duration, curveName);
		}

		::PCNKBFEBILF* GetBattleSkillUILogic()
		{
			return ((::PCNKBFEBILF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETBATTLESKILLUILOGIC_OFFSET))(this);
		}

		::System::Void InitParryAid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITPARRYAID_OFFSET))(this);
		}

		::System::Void DisposeParryAid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEPARRYAID_OFFSET))(this);
		}

		::System::Void OnParryAidBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONPARRYAIDBTNCLICKED_OFFSET))(this);
		}

		::System::Boolean get_IsMuteCameraFieldQuadrant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_ISMUTECAMERAFIELDQUADRANT_OFFSET))(this);
		}

		::System::Void set_IsMuteCameraFieldQuadrant(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SET_ISMUTECAMERAFIELDQUADRANT_OFFSET))(this, value);
		}

		::System::Void SetMuteCameraFieldQuadrant(::System::Boolean mute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETMUTECAMERAFIELDQUADRANT_OFFSET))(this, mute);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnBossParryFrameEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONBOSSPARRYFRAMEEND_OFFSET))(this);
		}

		::System::Void InitParryAttack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INITPARRYATTACK_OFFSET))(this);
		}

		::System::Void UpdateParryAttack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEPARRYATTACK_OFFSET))(this);
		}

		::System::Void OnAfterLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONAFTERLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void FinishBossParryMove(::UnityEngine::Vector3 targetWorldPos, ::UnityEngine::Vector3 offsetLocal)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_FINISHBOSSPARRYMOVE_OFFSET))(this, targetWorldPos, offsetLocal);
		}

		::UnityEngine::Vector3 CalcParryTargetWorldPos(::UnityEngine::Vector3 offset)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CALCPARRYTARGETWORLDPOS_OFFSET))(this, offset);
		}

		::System::Boolean IsParryMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ISPARRYMOVING_OFFSET))(this);
		}

		::System::Void UpdateParryReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_UPDATEPARRYRETURN_OFFSET))(this);
		}

		::System::Void FinishBossParryReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_FINISHBOSSPARRYRETURN_OFFSET))(this);
		}

		::System::Void DisposeParryAttack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSEPARRYATTACK_OFFSET))(this);
		}

		::System::Void StartBossParryAttack(::System::String* configKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_STARTBOSSPARRYATTACK_OFFSET))(this, configKey);
		}

		::System::Void StartBossReturnParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_STARTBOSSRETURNPARENT_OFFSET))(this);
		}

		::System::Void OnParryBeingHit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONPARRYBEINGHIT_OFFSET))(this);
		}

		::System::Void StartBossParryAttackMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_STARTBOSSPARRYATTACKMOVE_OFFSET))(this);
		}

		::System::Void OnBossParryMoveComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONBOSSPARRYMOVECOMPLETE_OFFSET))(this);
		}

		::System::Void SetAvatarParryAnimParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETAVATARPARRYANIMPARAM_OFFSET))(this);
		}

		::System::Void SetBossParryAnimParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETBOSSPARRYANIMPARAM_OFFSET))(this);
		}

		::System::Boolean get_EnableUpdateWhenGamePause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_ENABLEUPDATEWHENGAMEPAUSE_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_ISACTIVE_OFFSET))(this);
		}

		::MoleMole::EntityHandle get_Avatar()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_AVATAR_OFFSET))(this);
		}

		::MoleMole::EntityHandle get_Boss()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_BOSS_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_Root()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GET_ROOT_OFFSET))(this);
		}

		static ::System::Boolean IsInParryMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ISINPARRYMODE_OFFSET))();
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnMonsterEnable(::System::Boolean enable, ::MoleMole::Battle::Entity* monster)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONMONSTERENABLE_OFFSET))(this, enable, monster);
		}

		::System::Void OnBossEnable(::System::Boolean enable, ::MoleMole::Battle::Entity* monster)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONBOSSENABLE_OFFSET))(this, enable, monster);
		}

		::System::Void OnAvatarEnable(::MoleMole::Battle::Entity* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONAVATARENABLE_OFFSET))(this, avatar);
		}

		::System::Void MuteDither(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_MUTEDITHER_OFFSET))(this, entity);
		}

		::System::Void Reparent(::MoleMole::Battle::Entity* e)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REPARENT_OFFSET))(this, e);
		}

		::System::Void Init(::UnityEngine::GameObject* g, ::MoleMole::Config::HighLightAirCombatConfig* c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Config::HighLightAirCombatConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_INIT_OFFSET))(this, g, c);
		}

		::System::Void SetMonoTriggerEventSubProxySweepCheck(::MoleMole::Config::HighLightAirCombatConfig* c)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HighLightAirCombatConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETMONOTRIGGEREVENTSUBPROXYSWEEPCHECK_OFFSET))(this, c);
		}

		::System::Void SetTimeScale(::LPKENDHJIDC timeScaleType, ::System::Single timeScale, ::System::Single duration, ::System::String* curve)
		{
			return ((::System::Void(*)(::PVOID, ::LPKENDHJIDC, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SETTIMESCALE_OFFSET))(this, timeScaleType, timeScale, duration, curve);
		}

		::System::Single GetTimeScale(::LPKENDHJIDC timeScaleType)
		{
			return ((::System::Single(*)(::PVOID, ::LPKENDHJIDC))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETTIMESCALE_OFFSET))(this, timeScaleType);
		}

		::System::Void ChangeAnimatorParam(::System::String* ani, ::System::String* name, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CHANGEANIMATORPARAM_OFFSET))(this, ani, name, value);
		}

		::System::Void ChangeAnimatorParam_1(::System::String* ani, ::System::String* name, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CHANGEANIMATORPARAM_1_OFFSET))(this, ani, name, value);
		}

		::System::Void ChangeAnimatorParam_2(::System::String* ani, ::System::String* name, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CHANGEANIMATORPARAM_2_OFFSET))(this, ani, name, value);
		}

		::System::Void ChangeAnimatorParam_3(::System::String* ani, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CHANGEANIMATORPARAM_3_OFFSET))(this, ani, name);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid CreateMonsterByGroup(::System::String* name)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_CREATEMONSTERBYGROUP_OFFSET))(this, name);
		}

		::System::Void RemoveMonsterByGroup(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_REMOVEMONSTERBYGROUP_OFFSET))(this, name);
		}

		::System::Void GotoLength(::System::Single length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GOTOLENGTH_OFFSET))(this, length);
		}

		::System::Void MuteMoveTips(::System::Boolean mute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_MUTEMOVETIPS_OFFSET))(this, mute);
		}

		::System::Void AddCircleCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ADDCIRCLECOUNT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetAvatarBossMiddlePoint(::System::Single ratio)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_GETAVATARBOSSMIDDLEPOINT_OFFSET))(this, ratio);
		}

		::System::Void SyncLaserTargetToAvatarLocalPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_SYNCLASERTARGETTOAVATARLOCALPOS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void _Init_b__133_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM__INIT_B__133_2_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::ENGKPGFGGLM* P0)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_ONLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
