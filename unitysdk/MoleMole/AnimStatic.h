#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ANIMSTATIC_BUILDANIMSTATEMAP_OFFSET UNITYSDK_OFFSET(0x18B6D0B0)
#define MOLEMOLE_ANIMSTATIC_BUILDANIMTAGMAP_OFFSET UNITYSDK_OFFSET(0x18B6F0A0)
#define MOLEMOLE_ANIMSTATIC_BUILDOBJECTTAGMAP_OFFSET UNITYSDK_OFFSET(0x18B6CE60)
#define MOLEMOLE_ANIMSTATIC_BUILDPARAMMAP_OFFSET UNITYSDK_OFFSET(0x18B6F650)
#define MOLEMOLE_ANIMSTATIC_BUILDSTATEGROUP_OFFSET UNITYSDK_OFFSET(0x18B73240)
#define MOLEMOLE_ANIMSTATIC_BUILDTAGGROUP_OFFSET UNITYSDK_OFFSET(0x18B6C990)
#define MOLEMOLE_ANIMSTATIC_CLEANANIMSTATICDATA_OFFSET UNITYSDK_OFFSET(0x18B72FA0)
#define MOLEMOLE_ANIMSTATIC_GETPARAMNAMEBYHASH_OFFSET UNITYSDK_OFFSET(0x18B73760)
#define MOLEMOLE_ANIMSTATIC_GETSTATENAMEBYHASH_OFFSET UNITYSDK_OFFSET(0x18B73620)
#define MOLEMOLE_ANIMSTATIC_GETTAGNAMEBYHASH_OFFSET UNITYSDK_OFFSET(0x18B739B0)
#define MOLEMOLE_ANIMSTATIC_INITANIMSTATICDATA_OFFSET UNITYSDK_OFFSET(0x18B6C8D0)
#define MOLEMOLE_ANIMSTATIC_ISANIMATORINTAG_OFFSET UNITYSDK_OFFSET(0x18B738A0)
#define MOLEMOLE_ANIMSTATIC_NORMALIZEDTIMEGREATEQUAL_OFFSET UNITYSDK_OFFSET(0x18B73BF0)
#define MOLEMOLE_ANIMSTATIC_NORMALIZEDTIMELESSEQUAL_OFFSET UNITYSDK_OFFSET(0x18B73B50)
#define MOLEMOLE_ANIMSTATIC_NORMALIZEDTIMEPERCENT_OFFSET UNITYSDK_OFFSET(0x18B73AF0)
#define MOLEMOLE_ANIMSTATIC_ONASSETREADY_OFFSET UNITYSDK_OFFSET(0x18B72DB0)
#define MOLEMOLE_ANIMSTATIC_TRYCACHEALLOWPUSHSTATEHASH_OFFSET UNITYSDK_OFFSET(0x18B73C90)
#define MOLEMOLE_ANIMSTATIC_TRYCACHEIMMTURNFACEANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x18B73E80)
#define MOLEMOLE_ANIMSTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B74080)
#define MOLEMOLE_ANIMSTATIC__CTOR_OFFSET UNITYSDK_OFFSET(0x18B74070)

namespace MoleMole
{
	inline static constexpr unsigned int AnimStatic_TypeDefinitionIndex = 64173;

	class AnimStatic : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_HitDown_OnGround_B_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F190);
		}
		static ::System::String** StaticGet_TriggerAtkB_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F198);
		}
		static ::System::String** StaticGet_StageDynamicObject_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F1A0);
		}
		static ::System::String** StaticGet_Float_JoyStickForce_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F1A8);
		}
		static ::System::String** StaticGet_Idle_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F1B0);
		}
		static ::System::String** StaticGet_TransType_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F1B8);
		}
		static ::System::String** StaticGet_Attack_Branch_01_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F1C0);
		}
		static ::System::String** StaticGet_Trigger_Action_Revive_MP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F1C8);
		}
		static ::System::String** StaticGet_Die_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F1D0);
		}
		static ::System::String** StaticGet_Float_JoyStickDir_CameraX_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F1D8);
		}
		static ::System::String** StaticGet_Trigger_Execute_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F1E0);
		}
		static ::System::String** StaticGet_Bool_LoginIdle()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F1E8);
		}
		static ::System::String** StaticGet_TriggerTurnBack_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F1F0);
		}
		static ::System::String** StaticGet_TriggerDirectionSkillRight_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F1F8);
		}
		static ::System::String** StaticGet_FrameCount_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F200);
		}
		static ::System::String** StaticGet_TriggerPressExQTE_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F208);
		}
		static ::System::String** StaticGet_BoolIsOnGround_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F210);
		}
		static ::System::String** StaticGet_HitGround_H_B_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F218);
		}
		static ::System::String** StaticGet_HitThrowStart_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F220);
		}
		static ::System::String** StaticGet_RunStart_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F228);
		}
		static ::System::String** StaticGet_Float_Aim_Pitch()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F230);
		}
		static ::System::String** StaticGet_Float_FlyingRotationWeightString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F238);
		}
		static ::System::String** StaticGet_Trigger_Action_Start_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F240);
		}
		static ::System::String** StaticGet_IntGroundHitIndex_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F248);
		}
		static ::System::String** StaticGet_TriggerHit_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F250);
		}
		static ::System::String** StaticGet_CharSkillRef_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F258);
		}
		static ::System::String** StaticGet_Int_ResistStaggerLevel_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F260);
		}
		static ::System::String** StaticGet_HitEffect_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F268);
		}
		static ::System::String** StaticGet_Float_FlyingRotationHeightString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F270);
		}
		static ::System::String** StaticGet_IsHoldAtkC_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F278);
		}
		static ::System::String** StaticGet_Evade_Back_End_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F280);
		}
		static ::System::String** StaticGet_TriggerAid_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F288);
		}
		static ::System::String** StaticGet_SwithInAttack_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F290);
		}
		static ::System::String** StaticGet_HitFly_OnGround_B_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F298);
		}
		static ::System::String** StaticGet_Float_JoyStickDir_Camera_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F2A0);
		}
		static ::System::String** StaticGet_TransOff_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F2A8);
		}
		static ::System::String** StaticGet_Idle_ZoneTagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F2B0);
		}
		static ::System::String** StaticGet_HitDirY_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F2B8);
		}
		static ::System::String** StaticGet_UI_Avatar_Control_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F2C0);
		}
		static ::System::String** StaticGet_JumpStartDown_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F2C8);
		}
		static ::System::String** StaticGet_IsAttack_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F2D0);
		}
		static ::System::String** StaticGet_TriggerWallHit_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F2D8);
		}
		static ::System::String** StaticGet_HitFly_Death_Front_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F2E0);
		}
		static ::System::String** StaticGet_RunStartEnd_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F2E8);
		}
		static ::System::String** StaticGet_BoolIsOnFloor_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F2F0);
		}
		static ::System::String** StaticGet_IntAIMoveType_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F2F8);
		}
		static ::System::String** StaticGet_TriggerReleaseEvade_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F300);
		}
		static ::System::String** StaticGet_Hit_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F308);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_s_AnimTagMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F310);
		}
		static ::System::String** StaticGet_BoolIsEnergyFull_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F318);
		}
		static ::System::String** StaticGet_Int_PlayedFrameCount_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F320);
		}
		static ::System::String** StaticGet_Trigger_SwitchPhase_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F328);
		}
		static ::System::String** StaticGet_WalkEnd_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F330);
		}
		static ::System::String** StaticGet_Trigger_SpecialFeedback_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F338);
		}
		static ::System::String** StaticGet_AttackNormal05_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F340);
		}
		static ::System::String** StaticGet_TriggerAirHitOnFloat_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F348);
		}
		static ::System::String** StaticGet_Trigger_Login()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F350);
		}
		static ::System::String** StaticGet_Bool_IsInOverload_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F358);
		}
		static ::System::String** StaticGet_TriggerVisible_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F360);
		}
		static ::System::String** StaticGet_Trigger_Action_Revive()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F368);
		}
		static ::System::String** StaticGet_TriggerTransOff_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F370);
		}
		static ::System::String** StaticGet_Trigger_Action_End_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F378);
		}
		static ::System::String** StaticGet_Bool_ReverseFlyingString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F380);
		}
		static ::System::String** StaticGet_Stun_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F388);
		}
		static ::System::String** StaticGet_RobotSkillRef_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F390);
		}
		static ::System::String** StaticGet_BoolIsInStun_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F398);
		}
		static ::System::String** StaticGet_Trigger_BreakStun_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F3A0);
		}
		static ::System::String** StaticGet_Float_TimeScaleRatio_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F3A8);
		}
		static ::System::String** StaticGet_WalkStart_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F3B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_paramMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F3B8);
		}
		static ::System::String** StaticGet_TriggerBreakShield_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F3C0);
		}
		static ::System::String** StaticGet_BoolEasyAssaultAid_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F3C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_s_AnimStateMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F3D0);
		}
		static ::System::String** StaticGet_IsHoldEvade_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F3D8);
		}
		static ::System::String** StaticGet_TriggerHitFlyEnd_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F3E0);
		}
		static ::System::String** StaticGet_Trigger_SwitchPhaseByHit_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F3E8);
		}
		static ::System::String** StaticGet_WalkStartEnd_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F3F0);
		}
		static ::System::String** StaticGet_SwitchOutNormal_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F3F8);
		}
		static ::System::String** StaticGet_TriggerSelfDestruction_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F400);
		}
		static ::System::String** StaticGet_Bool_IsInOverload__Paralysis_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F408);
		}
		static ::System::String** StaticGet_CanUseRobot_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F410);
		}
		static ::System::String** StaticGet_Float_JoyStickDir_Temp_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F418);
		}
		static ::System::String** StaticGet_TriggerReleaseAtkC_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F420);
		}
		static ::System::String** StaticGet_TriggerDirectionSkillDown_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F428);
		}
		static ::System::String** StaticGet_HitFly_Death_Back_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F430);
		}
		static ::System::String** StaticGet_TriggerSwitchIn_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F438);
		}
		static ::System::String** StaticGet_Revive01_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F440);
		}
		static ::System::String** StaticGet_HitThrow_OnGround_B_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F448);
		}
		static ::System::String** StaticGet_TriggerDissolve_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F450);
		}
		static ::System::String** StaticGet_TriggerAirHitOnFall_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F458);
		}
		static ::System::String** StaticGet_TriggerCardsContainer1_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F460);
		}
		static ::System::String** StaticGet_Trigger_Overload_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F468);
		}
		static ::System::String** StaticGet_CharacterSelect_Loop_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F470);
		}
		static ::System::String** StaticGet_TriggerDisappear_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F478);
		}
		static ::System::String** StaticGet_EvadeEnd_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F480);
		}
		static ::System::String** StaticGet_Run_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F488);
		}
		static ::Il2CppArray<::System::Collections::Generic::HashSet_1<::System::Int32>*>** StaticGet_s_AnimTagGroup()
		{
			return (::Il2CppArray<::System::Collections::Generic::HashSet_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F490);
		}
		static ::System::String** StaticGet_IsMoving_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F498);
		}
		static ::System::String** StaticGet_BoolIsFrozen_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F4A0);
		}
		static ::System::String** StaticGet_TriggerDashAttack_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F4A8);
		}
		static ::System::String** StaticGet_SwitchToRobotNormal_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F4B0);
		}
		static ::System::String** StaticGet_TriggerCardsContainer2_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F4B8);
		}
		static ::System::String** StaticGet_JumpStart_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F4C0);
		}
		static ::System::String** StaticGet_IsCounter_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F4C8);
		}
		static ::System::String** StaticGet_Float_JoyStickDir_CameraVectorY_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F4D0);
		}
		static ::System::String** StaticGet_FastMove_ZoneTagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F4D8);
		}
		static ::System::String** StaticGet_Float_LockTargetDir_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F4E0);
		}
		static ::System::String** StaticGet_Int_LivingState_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F4E8);
		}
		static ::System::String** StaticGet_TriggerHitThrowEnd_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F4F0);
		}
		static ::System::String** StaticGet_Move_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F4F8);
		}
		static ::System::String** StaticGet_Bool_IsLockZoneRotate_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F500);
		}
		static ::System::String** StaticGet_TriggerSlideAtkBUp_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F508);
		}
		static ::System::String** StaticGet_SwitchOutAttack_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F510);
		}
		static ::System::String** StaticGet_IsOperating_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F518);
		}
		static ::System::String** StaticGet_Evade_Back_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F520);
		}
		static ::System::String** StaticGet_TriggerCardsContainer3_Quick_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F528);
		}
		static ::System::String** StaticGet_TriggerDie_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F530);
		}
		static ::System::String** StaticGet_HitFlyEnd_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F538);
		}
		static ::System::String** StaticGet_HitGround_L_B_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F540);
		}
		static ::System::String** StaticGet_RunEnd_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F548);
		}
		static ::System::String** StaticGet_BoolIsCollideGroundParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F550);
		}
		static ::System::String** StaticGet_TriggerDirectionSkillUp_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F558);
		}
		static ::System::String** StaticGet_Bool_IsInChaos_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F560);
		}
		static ::System::String** StaticGet_HitGround_L_F_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F568);
		}
		static ::System::String** StaticGet_HitFlyStartFront_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F570);
		}
		static ::System::String** StaticGet_Bool_HasLockTarget_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F578);
		}
		static ::System::String** StaticGet_NormalizedTime_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F580);
		}
		static ::System::String** StaticGet_Trigger_Ignite_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F588);
		}
		static ::System::String** StaticGet_Int_LoginPos()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F590);
		}
		static ::System::String** StaticGet_Int_CurEp_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F598);
		}
		static ::System::String** StaticGet_Idle_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F5A0);
		}
		static ::System::String** StaticGet_MoveSpeedRatio_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F5A8);
		}
		static ::System::String** StaticGet_Trigger_SwitchPhaseNormal_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F5B0);
		}
		static ::System::String** StaticGet_BoolIsCollideWall_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F5B8);
		}
		static ::System::String** StaticGet_AirHitEndIndex_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F5C0);
		}
		static ::System::String** StaticGet_HitDown_OnGround_F_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F5C8);
		}
		static ::System::String** StaticGet_IsTryMoving_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F5D0);
		}
		static ::System::String** StaticGet_Move_ZoneTagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F5D8);
		}
		static ::System::String** StaticGet_TriggerAtkA_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F5E0);
		}
		static ::System::String** StaticGet_TriggerReleaseExQTE_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F5E8);
		}
		static ::System::String** StaticGet_TriggerCardsContainer2_Quick_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F5F0);
		}
		static ::System::String** StaticGet_BoolIsCD_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F5F8);
		}
		static ::System::String** StaticGet_SwitchOutInstant_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F600);
		}
		static ::System::String** StaticGet_BranchIndex_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F608);
		}
		static ::System::String** StaticGet_HitDown_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F610);
		}
		static ::System::String** StaticGet_TriggerEvade_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F618);
		}
		static ::System::String** StaticGet_Attack_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F620);
		}
		static ::System::String** StaticGet_Float_JoyStickDir_CameraVectorX_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F628);
		}
		static ::System::String** StaticGet_IsHoldAtkA_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F630);
		}
		static ::System::String** StaticGet_SwitchToRobotUltimate_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F638);
		}
		static ::System::String** StaticGet_Float_LookAvatarDir_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F640);
		}
		static ::System::String** StaticGet_IntAirHitIndex_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F648);
		}
		static ::System::String** StaticGet_IsHoldExQTE_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F650);
		}
		static ::System::String** StaticGet_BoolIsStun_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F658);
		}
		static ::System::String** StaticGet_HitShake_HitShakeLayer_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F660);
		}
		static ::System::String** StaticGet_WeaponIndex_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F668);
		}
		static ::System::String** StaticGet_ReflectBullet_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F670);
		}
		static ::System::String** StaticGet_Int_TextureSheetType_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F678);
		}
		static ::System::String** StaticGet_WalkLoop_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F680);
		}
		static ::System::String** StaticGet_Bool_AIEnabled_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F688);
		}
		static ::System::String** StaticGet_FastMove_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F690);
		}
		static ::System::String** StaticGet_AttackNormal06_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F698);
		}
		static ::System::String** StaticGet_Trigger_Ultimate_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F6A0);
		}
		static ::System::String** StaticGet_HitGround_H_F_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F6A8);
		}
		static ::System::String** StaticGet_IsShooting_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F6B0);
		}
		static ::System::String** StaticGet_TriggerAtkC_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F6B8);
		}
		static ::System::String** StaticGet_BuffIndex_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F6C0);
		}
		static ::System::String** StaticGet_Sprint_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F6C8);
		}
		static ::System::String** StaticGet_FastRun_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F6D0);
		}
		static ::System::String** StaticGet_Int_AttackIndex_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F6D8);
		}
		static ::System::String** StaticGet_Reflector_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F6E0);
		}
		static ::System::String** StaticGet_IsEnergyEmpty_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F6E8);
		}
		static ::System::String** StaticGet_IsActive_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F6F0);
		}
		static ::System::String** StaticGet_IntSwitchTypeIn_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F6F8);
		}
		static ::System::String** StaticGet_Trigger_Action_ReviveEnd()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F700);
		}
		static ::System::String** StaticGet_ReflectBulletEnd_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F708);
		}
		static ::System::String** StaticGet_AttackRush_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F710);
		}
		static ::System::String** StaticGet_Trigger_Action_SkipEndPose_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F718);
		}
		static ::System::String** StaticGet_HitShake_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F720);
		}
		static ::System::String** StaticGet_IntMoveType_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F728);
		}
		static ::System::String** StaticGet_Bool_IsInIgnite_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F730);
		}
		static ::System::String** StaticGet_HitThrow_Death_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F738);
		}
		static ::System::String** StaticGet_HitFlyLoop_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F740);
		}
		static ::System::String** StaticGet_AttackSpecialStart_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F748);
		}
		static ::System::String** StaticGet_IntSwitchTypeOut_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F750);
		}
		static ::System::String** StaticGet_IsDissolve_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F758);
		}
		static ::System::String** StaticGet_FloatBlendDirLeft_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F760);
		}
		static ::System::String** StaticGet_Trigger_Chaos_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F768);
		}
		static ::System::String** StaticGet_Float_JoyStickDir_CameraY_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F770);
		}
		static ::System::String** StaticGet_Death_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F778);
		}
		static ::System::String** StaticGet_Float_TargetDirY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F780);
		}
		static ::System::String** StaticGet_HitThrow_OnGround_F_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F788);
		}
		static ::System::String** StaticGet_IntShootType_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F790);
		}
		static ::System::String** StaticGet_HitGroundH_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F798);
		}
		static ::System::String** StaticGet_AttackSpecialL_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F7A0);
		}
		static ::System::String** StaticGet_Trigger_Convert()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F7A8);
		}
		static ::System::String** StaticGet_HitDown_Death_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F7B0);
		}
		static ::System::String** StaticGet_Death_Loop_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F7B8);
		}
		static ::System::String** StaticGet_TriggerLevelUp_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F7C0);
		}
		static ::System::String** StaticGet_TriggerCardsContainer3_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F7C8);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_AllowPushAnimationStateHashList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F7D0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_ImmTurnFaceAnimationStateList()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F7D8);
		}
		static ::System::String** StaticGet_Int_CurrentPhase_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F7E0);
		}
		static ::System::String** StaticGet_TriggerHitShake_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F7E8);
		}
		static ::System::String** StaticGet_PlaceHolder_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F7F0);
		}
		static ::System::String** StaticGet_FloatBlendTime_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F7F8);
		}
		static ::System::String** StaticGet_Trigger_Exhausted_End_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F800);
		}
		static ::System::String** StaticGet_Trigger_Action_IdlePose_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F808);
		}
		static ::System::String** StaticGet_MoveRunStart_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F810);
		}
		static ::System::String** StaticGet_IntAirHitIndexThrowType_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F818);
		}
		static ::System::String** StaticGet_IsHoldAid_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F820);
		}
		static ::System::String** StaticGet_TriggerEnterAtk_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F828);
		}
		static ::System::String** StaticGet_HitForwardType_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F830);
		}
		static ::System::String** StaticGet_Bool_IsGachaPerform_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F838);
		}
		static ::System::String** StaticGet_TriggerReflectBullet_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F840);
		}
		static ::System::String** StaticGet_TriggerShoot_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F848);
		}
		static ::System::String** StaticGet_Bool_IsExhausted_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F850);
		}
		static ::System::String** StaticGet_TriggerSlideAtkBLeft_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F858);
		}
		static ::System::String** StaticGet_AttackNormal03_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F860);
		}
		static ::System::String** StaticGet_SkillDir_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F868);
		}
		static ::System::String** StaticGet_TriggerSwitchOut_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F870);
		}
		static ::System::String** StaticGet_Trigger_Exhausted_Start_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F878);
		}
		static ::System::String** StaticGet_SwitchInNormal_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F880);
		}
		static ::System::String** StaticGet_Trigger_PartDestroyed_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F888);
		}
		static ::System::String** StaticGet_Dodge_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F890);
		}
		static ::System::String** StaticGet_TriggerReleaseAid_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F898);
		}
		static ::System::String** StaticGet_CanUseRobotUlt_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F8A0);
		}
		static ::System::String** StaticGet_TriggerCardsContainer1_Quick_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F8A8);
		}
		static ::System::String** StaticGet_BoolMainCityKeepRunning_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F8B0);
		}
		static ::System::String** StaticGet_TriggerBuff_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F8B8);
		}
		static ::System::String** StaticGet_Born_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F8C0);
		}
		static ::System::String** StaticGet_RunLoop_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F8C8);
		}
		static ::System::String** StaticGet_TriggerInstantOut_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F8D0);
		}
		static ::System::String** StaticGet_AttackCounter_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F8D8);
		}
		static ::System::String** StaticGet_IntDeathWay_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F8E0);
		}
		static ::System::String** StaticGet_Die_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F8E8);
		}
		static ::System::String** StaticGet_HitThrowLoop_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F8F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_objectTagmap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F8F8);
		}
		static ::System::String** StaticGet_TurnBack_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F900);
		}
		static ::System::String** StaticGet_HitGroundL_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F908);
		}
		static ::System::String** StaticGet_HitFly_OnGround_F_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F910);
		}
		static ::System::String** StaticGet_IntActionIndex_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F918);
		}
		static ::System::String** StaticGet_Trigger_Gacha_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F920);
		}
		static ::System::String** StaticGet_TriggerDirectionSkillLeft_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F928);
		}
		static ::System::String** StaticGet_TurnBack_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F930);
		}
		static ::System::String** StaticGet_HitThrowEnd_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F938);
		}
		static ::System::String** StaticGet_TriggerPerfectEvade_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F940);
		}
		static ::System::String** StaticGet_TriggerReleaseAtkB_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F948);
		}
		static ::System::String** StaticGet_Float_JoyStickDir_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F950);
		}
		static ::System::String** StaticGet_TriggerSkillGet_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F958);
		}
		static ::System::String** StaticGet_DodgeDummy_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F960);
		}
		static ::System::String** StaticGet_Death_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F968);
		}
		static ::System::String** StaticGet_Trigger_TurnAround()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F970);
		}
		static ::System::String** StaticGet_IsMegaSkill_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F978);
		}
		static ::System::String** StaticGet_Bool_SkipBorn_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F980);
		}
		static ::System::String** StaticGet_BoolIsBulletHit_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F988);
		}
		static ::System::String** StaticGet_Bool_IsInPerform_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F990);
		}
		static ::System::String** StaticGet_RandomSkillType_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F998);
		}
		static ::System::String** StaticGet_RandomSkillGenre_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F9A0);
		}
		static ::System::String** StaticGet_IsHoldAtkB_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F9A8);
		}
		static ::System::String** StaticGet_IntDashLevel_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F9B0);
		}
		static ::System::String** StaticGet_BoolIsWalking_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F9B8);
		}
		static ::System::String** StaticGet_AttackNormal04_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F9C0);
		}
		static ::System::String** StaticGet_TriggerSkillEnd_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F9C8);
		}
		static ::System::String** StaticGet_Evade_Back_Start_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F9D0);
		}
		static ::System::String** StaticGet_Float_JoyStickDir_Camera_Temp_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F9D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Byte, ::System::Collections::Generic::HashSet_1<::System::Int32>*>** StaticGet_animStateGroup()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Byte, ::System::Collections::Generic::HashSet_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F9E0);
		}
		static ::System::String** StaticGet_DieLoop_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F9E8);
		}
		static ::System::String** StaticGet_HitDirX_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F9F0);
		}
		static ::System::String** StaticGet_MoveRunLoop_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2F9F8);
		}
		static ::System::String** StaticGet_FloatBlendDirRight_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2FA00);
		}
		static ::System::String** StaticGet_Float_SlidingDirectionString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2FA08);
		}
		static ::System::String** StaticGet_AttackNormal02_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2FA10);
		}
		static ::System::String** StaticGet_Trigger_TurnAround_Success()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2FA18);
		}
		static ::System::String** StaticGet_MoveRunEnd_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2FA20);
		}
		static ::System::String** StaticGet_NPC_Trigger_OpenBox_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2FA28);
		}
		static ::System::String** StaticGet_EvadeFront_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2FA30);
		}
		static ::System::String** StaticGet_TriggerHitDownEnd_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2FA38);
		}
		static ::System::String** StaticGet_TriggerAction_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2FA40);
		}
		static ::System::String** StaticGet_Evade_TagString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2FA48);
		}
		static ::System::String** StaticGet_IsQTEWindowOpen_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2FA50);
		}
		static ::System::String** StaticGet_TriggerDying_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2FA58);
		}
		static ::System::String** StaticGet_AttackNormal01_StateString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2FA60);
		}
		static ::System::String** StaticGet_IsAlive_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2FA68);
		}
		static ::System::String** StaticGet_TriggerShowUp_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2FA70);
		}
		static ::System::String** StaticGet_TriggerReleaseAtkA_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2FA78);
		}
		static ::System::String** StaticGet_TriggerAttackLanded_ParamString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x2FA80);
		}
		static ::System::Int32* StaticGet_FastRun_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F30);
		}
		static ::System::Int32* StaticGet_Trigger_Login_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F34);
		}
		static ::System::Int32* StaticGet_FloatBlendDirLeft_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F38);
		}
		static ::System::Int32* StaticGet_Trigger_PartDestroyed_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F3C);
		}
		static ::System::Int32* StaticGet_HitFly_Death_Back_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F40);
		}
		static ::System::Int32* StaticGet_HitFly_OnGround_F_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F44);
		}
		static ::System::Int32* StaticGet_HitForwardType_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F48);
		}
		static ::System::Int32* StaticGet_TriggerAtkC_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F4C);
		}
		static ::System::Int32* StaticGet_IsMegaSkill_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F50);
		}
		static ::System::Int32* StaticGet_TriggerSkillGet_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F54);
		}
		static ::System::Int32* StaticGet_ReflectBullet_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F58);
		}
		static ::System::Int32* StaticGet_Trigger_Action_Start_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F5C);
		}
		static ::System::Int32* StaticGet_HitGround_L_F_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F60);
		}
		static ::System::Int32* StaticGet_HitDirX_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F64);
		}
		static ::System::Int32* StaticGet_HitDirY_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F68);
		}
		static ::System::Int32* StaticGet_RunLoop_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F6C);
		}
		static ::System::Int32* StaticGet_BoolIsCollideGround_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F70);
		}
		static ::System::Int32* StaticGet_Int_PlayedFrameCount_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F74);
		}
		static ::System::Int32* StaticGet_IsHoldEvade_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F78);
		}
		static ::System::Int32* StaticGet_RunEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F7C);
		}
		static ::System::Int32* StaticGet_TriggerSlideAtkBLeft_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F80);
		}
		static ::System::Int32* StaticGet_CharacterSelect_Loop_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F84);
		}
		static ::System::Int32* StaticGet_TriggerAid_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F88);
		}
		static ::System::Int32* StaticGet_AttackCounter_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F8C);
		}
		static ::System::Int32* StaticGet_TriggerPressExQTE_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F90);
		}
		static ::System::Int32* StaticGet_Trigger_Action_IdlePose_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F94);
		}
		static ::System::Int32* StaticGet_TriggerSkillEnd_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F98);
		}
		static ::System::Int32* StaticGet_Trigger_SwitchPhaseByHit_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9F9C);
		}
		static ::System::Int32* StaticGet_Int_LivingState_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FA0);
		}
		static ::System::Int32* StaticGet_Death_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FA4);
		}
		static ::System::Int32* StaticGet_Trigger_Action_ReviveEnd_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FA8);
		}
		static ::System::Int32* StaticGet_Born_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FAC);
		}
		static ::System::Int32* StaticGet_HitThrow_OnGround_F_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FB0);
		}
		static ::System::Int32* StaticGet_FloatBlendTime_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FB4);
		}
		static ::System::Int32* StaticGet_TriggerCardsContainer2_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FB8);
		}
		static ::System::Int32* StaticGet_Bool_IsLockZoneRotate_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FBC);
		}
		static ::System::Int32* StaticGet_FloatBlendDirRight_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FC0);
		}
		static ::System::Int32* StaticGet_TriggerDying_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FC4);
		}
		static ::System::Int32* StaticGet_Int_TextureSheetType_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FC8);
		}
		static ::System::Int32* StaticGet_TriggerPerfectEvade_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FCC);
		}
		static ::System::Int32* StaticGet_Float_TargetDirY_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FD0);
		}
		static ::System::Int32* StaticGet_Trigger_SpecialFeedback_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FD4);
		}
		static ::System::Int32* StaticGet_Trigger_Exhausted_End_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FD8);
		}
		static ::System::Int32* StaticGet_BoolIsWalking_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FDC);
		}
		static ::System::Int32* StaticGet_TriggerReleaseAtkB_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FE0);
		}
		static ::System::Int32* StaticGet_IntAirHitIndexThrowType_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FE4);
		}
		static ::System::Int32* StaticGet_Int_CurrentPhase_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FE8);
		}
		static ::System::Int32* StaticGet_RobotSkillRef_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FEC);
		}
		static ::System::Int32* StaticGet_SkillDir_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FF0);
		}
		static ::System::Int32* StaticGet_Death_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FF4);
		}
		static ::System::Int32* StaticGet_Bool_IsGachaPerform_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FF8);
		}
		static ::System::Int32* StaticGet_Trigger_Gacha_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0x9FFC);
		}
		static ::System::Int32* StaticGet_HitFlyEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA000);
		}
		static ::System::Int32* StaticGet_HitGround_H_F_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA004);
		}
		static ::System::Int32* StaticGet_Evade_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA008);
		}
		static ::System::Int32* StaticGet_TriggerCardsContainer3_Quick_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA00C);
		}
		static ::System::Int32* StaticGet_AirHitEndIndex_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA010);
		}
		static ::System::Int32* StaticGet_Trigger_Action_SkipEndPose_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA014);
		}
		static ::System::Int32* StaticGet_BoolIsInStun_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA018);
		}
		static ::System::Int32* StaticGet_Bool_ReverseFlying_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA01C);
		}
		static ::System::Int32* StaticGet_TriggerDirectionSkillLeft_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA020);
		}
		static ::System::Int32* StaticGet_MoveRunEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA024);
		}
		static ::System::Int32* StaticGet_IntGroundHitIndex_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA028);
		}
		static ::System::Int32* StaticGet_Trigger_Convert_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA02C);
		}
		static ::System::Int32* StaticGet_IntActionIndex_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA030);
		}
		static ::System::Int32* StaticGet_TriggerReflectBullet_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA034);
		}
		static ::System::Int32* StaticGet_TriggerReleaseAid_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA038);
		}
		static ::System::Int32* StaticGet_IntShootType_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA03C);
		}
		static ::System::Int32* StaticGet_Bool_IsInOverload__Paralysis_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA040);
		}
		static ::System::Int32* StaticGet_IsHoldAtkB_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA044);
		}
		static ::System::Int32* StaticGet_JumpStart_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA048);
		}
		static ::System::Int32* StaticGet_IsOperating_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA04C);
		}
		static ::System::Int32* StaticGet_Bool_HasLockTarget_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA050);
		}
		static ::System::Int32* StaticGet_TriggerAtkB_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA054);
		}
		static ::System::Int32* StaticGet_HitEffect_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA058);
		}
		static ::System::Int32* StaticGet_NormalizedTime_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA05C);
		}
		static ::System::Int32* StaticGet_Attack_Branch_01_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA060);
		}
		static ::System::Int32* StaticGet_IsHoldAid_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA064);
		}
		static ::System::Int32* StaticGet_Trigger_TurnAround_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA068);
		}
		static ::System::Int32* StaticGet_MoveSpeedRatio_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA06C);
		}
		static ::System::Int32* StaticGet_Revive01_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA070);
		}
		static ::System::Int32* StaticGet_TriggerHitFlyEnd_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA074);
		}
		static ::System::Int32* StaticGet_RunStartEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA078);
		}
		static ::System::Int32* StaticGet_Trigger_TurnAround_Success_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA07C);
		}
		static ::System::Int32* StaticGet_HitFlyStartFront_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA080);
		}
		static ::System::Int32* StaticGet_HitThrowEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA084);
		}
		static ::System::Int32* StaticGet_TriggerBreakShield_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA088);
		}
		static ::System::Int32* StaticGet_TransType_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA08C);
		}
		static ::System::Boolean* StaticGet_dataInited()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA090);
		}
		static ::System::Int32* StaticGet_PlaceHolder_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA094);
		}
		static ::System::Int32* StaticGet_TriggerShoot_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA098);
		}
		static ::System::Int32* StaticGet_MoveRunStart_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA09C);
		}
		static ::System::Int32* StaticGet_TriggerTransOff_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0A0);
		}
		static ::System::Int32* StaticGet_Float_JoyStickDir_Camera_Temp_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0A4);
		}
		static ::System::Int32* StaticGet_TriggerDirectionSkillUp_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0A8);
		}
		static ::System::Int32* StaticGet_HitGround_H_B_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0AC);
		}
		static ::System::Int32* StaticGet_BoolIsEnergyFull_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0B0);
		}
		static ::System::Int32* StaticGet_TriggerDirectionSkillDown_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0B4);
		}
		static ::System::Int32* StaticGet_SwitchOutAttack_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0B8);
		}
		static ::System::Int32* StaticGet_CanUseRobotUlt_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0BC);
		}
		static ::System::Int32* StaticGet_Idle_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0C0);
		}
		static ::System::Int32* StaticGet_TriggerHit_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0C4);
		}
		static ::System::Int32* StaticGet_TriggerEvade_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0C8);
		}
		static ::System::Int32* StaticGet_IntSwitchTypeOut_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0CC);
		}
		static ::System::Int32* StaticGet_IsHoldExQTE_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0D0);
		}
		static ::System::Int32* StaticGet_AttackNormal04_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0D4);
		}
		static ::System::Int32* StaticGet_TriggerLevelUp_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0D8);
		}
		static ::System::Int32* StaticGet_WalkLoop_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0DC);
		}
		static ::System::Int32* StaticGet_TriggerCardsContainer1_Quick_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0E0);
		}
		static ::System::Int32* StaticGet_AttackNormal05_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0E4);
		}
		static ::System::Int32* StaticGet_AttackNormal02_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0E8);
		}
		static ::System::Int32* StaticGet_TriggerDissolve_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0EC);
		}
		static ::System::Int32* StaticGet_RandomSkillGenre_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0F0);
		}
		static ::System::Int32* StaticGet_SwitchOutNormal_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0F4);
		}
		static ::System::Int32* StaticGet_EvadeBackEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0F8);
		}
		static ::System::Int32* StaticGet_ANIMATOR_STATE_TYPE_INDEX_FLY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA0FC);
		}
		static ::System::Int32* StaticGet_HitShake_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA100);
		}
		static ::System::Int32* StaticGet_HitFlyLoop_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA104);
		}
		static ::System::Int32* StaticGet_TriggerAirHitOnFloat_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA108);
		}
		static ::System::Int32* StaticGet_IsHoldAtkA_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA10C);
		}
		static ::System::Int32* StaticGet_SwitchToRobotNormal_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA110);
		}
		static ::System::Int32* StaticGet_IsQTEWindowOpen_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA114);
		}
		static ::System::Int32* StaticGet_IsAttack_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA118);
		}
		static ::System::Int32* StaticGet_MoveRunLoop_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA11C);
		}
		static ::System::Int32* StaticGet_SwitchInAttack_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA120);
		}
		static ::System::Int32* StaticGet_Die_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA124);
		}
		static ::System::Int32* StaticGet_BoolIsCD_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA128);
		}
		static ::System::Int32* StaticGet_HitDown_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA12C);
		}
		static ::System::Int32* StaticGet_WalkStartEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA130);
		}
		static ::System::Int32* StaticGet_TriggerDisappear_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA134);
		}
		static ::System::Int32* StaticGet_TriggerReleaseAtkC_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA138);
		}
		static ::System::Int32* StaticGet_WeaponIndex_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA13C);
		}
		static ::System::Int32* StaticGet_Trigger_Ignite_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA140);
		}
		static ::System::Int32* StaticGet_TriggerCardsContainer3_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA144);
		}
		static ::System::Int32* StaticGet_IsMoving_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA148);
		}
		static ::System::Int32* StaticGet_Trigger_Action_End_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA14C);
		}
		static ::System::Int32* StaticGet_Float_TimeScaleRatio_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA150);
		}
		static ::System::Int32* StaticGet_Bool_IsInOverload_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA154);
		}
		static ::System::Int32* StaticGet_IsCounter_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA158);
		}
		static ::System::Int32* StaticGet_IntDashLevel_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA15C);
		}
		static ::System::Int32* StaticGet_Sprint_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA160);
		}
		static ::System::Int32* StaticGet_TriggerAction_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA164);
		}
		static ::System::Int32* StaticGet_Trigger_Action_Revive_MP_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA168);
		}
		static ::System::Int32* StaticGet_TriggerShowUp_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA16C);
		}
		static ::System::Int32* StaticGet_Die_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA170);
		}
		static ::System::Int32* StaticGet_TriggerWallHit_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA174);
		}
		static ::System::Int32* StaticGet_Bool_IsExhausted_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA178);
		}
		static ::System::Int32* StaticGet_Int_LoginPos_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA17C);
		}
		static ::System::Int32* StaticGet_Bool_IsInChaos_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA180);
		}
		static ::System::Int32* StaticGet_BoolIsCollideWall_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA184);
		}
		static ::System::Int32* StaticGet_SwitchOutInstant_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA188);
		}
		static ::System::Int32* StaticGet_HitThrowLoop_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA18C);
		}
		static ::System::Int32* StaticGet_AttackNormal06_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA190);
		}
		static ::System::Int32* StaticGet_HitGround_L_B_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA194);
		}
		static ::System::Int32* StaticGet_TriggerEnterAtk_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA198);
		}
		static ::System::Int32* StaticGet_IsTryMoving_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA19C);
		}
		static ::System::Int32* StaticGet_BoolIsFrozen_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1A0);
		}
		static ::System::Int32* StaticGet_TriggerHitDownEnd_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1A4);
		}
		static ::System::Int32* StaticGet_Float_FlyingRotationHeight_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1A8);
		}
		static ::System::Int32* StaticGet_TriggerInstantOut_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1AC);
		}
		static ::System::Int32* StaticGet_HitDown_OnGround_F_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1B0);
		}
		static ::System::Int32* StaticGet_Move_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1B4);
		}
		static ::System::Int32* StaticGet_IsShooting_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1B8);
		}
		static ::System::Int32* StaticGet_EvadeBackStart_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1BC);
		}
		static ::System::Int32* StaticGet_BoolMainCityKeepRunning_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1C0);
		}
		static ::System::Int32* StaticGet_Float_LookAvatarDir_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1C4);
		}
		static ::System::Int32* StaticGet_TriggerAirHitOnFall_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1C8);
		}
		static ::System::Int32* StaticGet_TriggerHitThrowEnd_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1CC);
		}
		static ::System::Int32* StaticGet_TriggerVisible_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1D0);
		}
		static ::System::Int32* StaticGet_IsDissolve_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1D4);
		}
		static ::System::Int32* StaticGet_Float_SlidingDirection_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1D8);
		}
		static ::System::Int32* StaticGet_CharSkillRef_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1DC);
		}
		static ::System::Int32* StaticGet_HitGroundL_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1E0);
		}
		static ::System::Int32* StaticGet_UI_Avatar_Control_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1E4);
		}
		static ::System::Int32* StaticGet_Run_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1E8);
		}
		static ::System::Int32* StaticGet_Dodge_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1EC);
		}
		static ::System::Int32* StaticGet_Attack_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1F0);
		}
		static ::System::Int32* StaticGet_IntDeathWay_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1F4);
		}
		static ::System::Int32* StaticGet_TriggerCardsContainer2_Quick_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1F8);
		}
		static ::System::Int32* StaticGet_TriggerDirectionSkillRight_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA1FC);
		}
		static ::System::Int32* StaticGet_TriggerSwitchOut_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA200);
		}
		static ::System::Int32* StaticGet_Float_JoyStickDir_CameraVectorX_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA204);
		}
		static ::System::Int32* StaticGet_WalkStart_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA208);
		}
		static ::System::Int32* StaticGet_JumpStartDown_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA20C);
		}
		static ::System::Int32* StaticGet_IntAirHitIndex_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA210);
		}
		static ::System::Int32* StaticGet_BoolIsAlive_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA214);
		}
		static ::System::Int32* StaticGet_AttackNormal01_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA218);
		}
		static ::System::Int32* StaticGet_AttackRush_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA21C);
		}
		static ::System::Int32* StaticGet_HitFly_Death_Front_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA220);
		}
		static ::System::Int32* StaticGet_FrameCount_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA224);
		}
		static ::System::Int32* StaticGet_HitDown_OnGround_B_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA228);
		}
		static ::System::Int32* StaticGet_TriggerTurnBack_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA22C);
		}
		static ::System::Int32* StaticGet_HitDown_Death_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA230);
		}
		static ::System::Int32* StaticGet_IntAIMoveType_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA234);
		}
		static ::System::Int32* StaticGet_HitThrow_OnGround_B_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA238);
		}
		static ::System::Int32* StaticGet_Float_LockTargetDir_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA23C);
		}
		static ::System::Int32* StaticGet_TriggerReleaseEvade_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA240);
		}
		static ::System::Int32* StaticGet_BuffIndex_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA244);
		}
		static ::System::Int32* StaticGet_BoolIsBulletHit_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA248);
		}
		static ::System::Int32* StaticGet_Stun_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA24C);
		}
		static ::System::Int32* StaticGet_IntAttackIndex_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA250);
		}
		static ::System::Int32* StaticGet_Float_Aim_Pitch_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA254);
		}
		static ::System::Int32* StaticGet_BranchIndex_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA258);
		}
		static ::System::Int32* StaticGet_HitThrowStart_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA25C);
		}
		static ::System::Int32* StaticGet_IsActive_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA260);
		}
		static ::System::Int32* StaticGet_Float_JoyStickDir_Camera_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA264);
		}
		static ::System::Int32* StaticGet_BoolIsOnGround_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA268);
		}
		static ::System::Int32* StaticGet_Trigger_Chaos_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA26C);
		}
		static ::System::Int32* StaticGet_HitThrow_Death_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA270);
		}
		static ::System::Int32* StaticGet_Idle_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA274);
		}
		static ::System::Int32* StaticGet_Bool_SkipBorn_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA278);
		}
		static ::System::Int32* StaticGet_WalkEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA27C);
		}
		static ::System::Int32* StaticGet_HitShake_HitShakeLayer_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA280);
		}
		static ::System::Int32* StaticGet_Trigger_Ultimate_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA284);
		}
		static ::System::Int32* StaticGet_Bool_IsInIgnite_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA288);
		}
		static ::System::Int32* StaticGet_AttackNormal03_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA28C);
		}
		static ::System::Int32* StaticGet_Trigger_BreakStun_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA290);
		}
		static ::System::Int32* StaticGet_Float_FlyingRotationWeight_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA294);
		}
		static ::System::Int32* StaticGet_BoolEasyAssaultAid_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA298);
		}
		static ::System::Int32* StaticGet_RandomSkillType_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA29C);
		}
		static ::System::Int32* StaticGet_BoolIsOnFloor_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2A0);
		}
		static ::System::Int32* StaticGet_ANIMATOR_STATE_TYPE_INDEX_STAND()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2A4);
		}
		static ::System::Int32* StaticGet_BoolIsStun_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2A8);
		}
		static ::System::Int32* StaticGet_FastMove_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2AC);
		}
		static ::System::Int32* StaticGet_Int_ResistStaggerLevel_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2B0);
		}
		static ::System::Int32* StaticGet_Trigger_Action_Revive_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2B4);
		}
		static ::System::Int32* StaticGet_EvadeBack_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2B8);
		}
		static ::System::Int32* StaticGet_Empty_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2BC);
		}
		static ::System::Int32* StaticGet_CanUseRobot_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2C0);
		}
		static ::System::Int32* StaticGet_DieLoop_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2C4);
		}
		static ::System::Int32* StaticGet_IsEnergyEmpty_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2C8);
		}
		static ::System::Int32* StaticGet_TriggerCardsContainer1_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2CC);
		}
		static ::System::Int32* StaticGet_StageDynamicObject_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2D0);
		}
		static ::System::Int32* StaticGet_TriggerSelfDestruction_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2D4);
		}
		static ::System::Int32* StaticGet_Trigger_SwitchPhaseNormal_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2D8);
		}
		static ::System::Int32* StaticGet_Float_JoyStickForce_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2DC);
		}
		static ::System::Int32* StaticGet_Float_JoyStickDir_CameraX_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2E0);
		}
		static ::System::Int32* StaticGet_AttackSpecialStart_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2E4);
		}
		static ::System::Int32* StaticGet_EvadeFront_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2E8);
		}
		static ::System::Int32* StaticGet_ReflectBulletEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2EC);
		}
		static ::System::Int32* StaticGet_ANIMATOR_STATE_TYPE_INDEX_DOWN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2F0);
		}
		static ::System::Int32* StaticGet_AttackSpecialL_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2F4);
		}
		static ::System::Int32* StaticGet_HitGroundH_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2F8);
		}
		static ::System::Int32* StaticGet_Float_JoyStickDir_CameraY_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA2FC);
		}
		static ::System::Int32* StaticGet_TurnBack_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA300);
		}
		static ::System::Int32* StaticGet_Hit_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA304);
		}
		static ::System::Int32* StaticGet_TriggerHitShake_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA308);
		}
		static ::System::Int32* StaticGet_RunStart_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA30C);
		}
		static ::System::Int32* StaticGet_TransOff_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA310);
		}
		static ::System::Int32* StaticGet_TriggerAttackLanded_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA314);
		}
		static ::System::Int32* StaticGet_IsHoldAtkC_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA318);
		}
		static ::System::Int32* StaticGet_TriggerBuff_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA31C);
		}
		static ::System::Int32* StaticGet_Trigger_Execute_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA320);
		}
		static ::System::Int32* StaticGet_TriggerSwitchIn_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA324);
		}
		static ::System::Int32* StaticGet_TriggerDashAttack_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA328);
		}
		static ::System::Int32* StaticGet_TriggerDie_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA32C);
		}
		static ::System::Int32* StaticGet_TriggerReleaseExQTE_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA330);
		}
		static ::System::Int32* StaticGet_TriggerAtkA_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA334);
		}
		static ::System::Int32* StaticGet_Death_Loop_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA338);
		}
		static ::System::Int32* StaticGet_Bool_LoginIdle_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA33C);
		}
		static ::System::Int32* StaticGet_Float_JoyStickDir_CameraVectorY_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA340);
		}
		static ::System::Int32* StaticGet_Reflector_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA344);
		}
		static ::System::Int32* StaticGet_TriggerReleaseAtkA_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA348);
		}
		static ::System::Int32* StaticGet_EvadeEnd_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA34C);
		}
		static ::System::Int32* StaticGet_SwitchInNormal_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA350);
		}
		static ::System::Int32* StaticGet_DodgeDummy_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA354);
		}
		static ::System::Int32* StaticGet_TriggerSlideAtkBUp_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA358);
		}
		static ::System::Int32* StaticGet_Trigger_Overload_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA35C);
		}
		static ::System::Int32* StaticGet_HitFly_OnGround_B_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA360);
		}
		static ::System::Int32* StaticGet_NPC_Trigger_OpenBox_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA364);
		}
		static ::System::Int32* StaticGet_IntMoveType_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA368);
		}
		static ::System::Int32* StaticGet_Trigger_Exhausted_Start_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA36C);
		}
		static ::System::Int32* StaticGet_Trigger_SwitchPhase_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA370);
		}
		static ::System::Int32* StaticGet_SwitchToRobotUltimate_StateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA374);
		}
		static ::System::Int32* StaticGet_IntSwitchTypeIn_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA378);
		}
		static ::System::Int32* StaticGet_Bool_IsInPerform_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA37C);
		}
		static ::System::Int32* StaticGet_Bool_AIEnabled_ParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA380);
		}
		static ::System::Int32* StaticGet_TurnBack_TagHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimStatic_TypeDefinitionIndex)->GetStaticField(0xA384);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC__CCTOR_OFFSET))();
		}

		static ::System::Void InitAnimStaticData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_INITANIMSTATICDATA_OFFSET))();
		}

		static ::System::Void OnAssetReady()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_ONASSETREADY_OFFSET))();
		}

		static ::System::Void CleanAnimStaticData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_CLEANANIMSTATICDATA_OFFSET))();
		}

		static ::System::Void BuildTagGroup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_BUILDTAGGROUP_OFFSET))();
		}

		static ::System::Void BuildObjectTagMap()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_BUILDOBJECTTAGMAP_OFFSET))();
		}

		static ::System::Void BuildStateGroup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_BUILDSTATEGROUP_OFFSET))();
		}

		static ::System::Void BuildAnimStateMap()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_BUILDANIMSTATEMAP_OFFSET))();
		}

		static ::System::Void BuildAnimTagMap()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_BUILDANIMTAGMAP_OFFSET))();
		}

		static ::System::Void BuildParamMap()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_BUILDPARAMMAP_OFFSET))();
		}

		static ::System::String* GetStateNameByHash(::System::Int32 nStateHash)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_GETSTATENAMEBYHASH_OFFSET))(nStateHash);
		}

		static ::System::String* GetParamNameByHash(::System::Int32 nParamHash)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_GETPARAMNAMEBYHASH_OFFSET))(nParamHash);
		}

		::System::Boolean IsAnimatorInTag(::UnityEngine::AnimatorStateInfo stateInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_ISANIMATORINTAG_OFFSET))(this, stateInfo);
		}

		static ::System::String* GetTagNameByHash(::System::Int32 nTagHash)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_GETTAGNAMEBYHASH_OFFSET))(nTagHash);
		}

		static ::System::Single NormalizedTimePercent(::System::Single fNormalizedTime)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_NORMALIZEDTIMEPERCENT_OFFSET))(fNormalizedTime);
		}

		static ::System::Boolean NormalizedTimeLessEqual(::System::Single fTime1, ::System::Single fTime2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_NORMALIZEDTIMELESSEQUAL_OFFSET))(fTime1, fTime2);
		}

		static ::System::Boolean NormalizedTimeGreatEqual(::System::Single fTime1, ::System::Single fTime2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_NORMALIZEDTIMEGREATEQUAL_OFFSET))(fTime1, fTime2);
		}

		static ::System::Void TryCacheAllowPushStateHash(::System::Collections::Generic::List_1<::System::String*>* configs)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_TRYCACHEALLOWPUSHSTATEHASH_OFFSET))(configs);
		}

		static ::System::Void TryCacheImmTurnFaceAnimationState(::System::Collections::Generic::List_1<::System::String*>* configs)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMSTATIC_TRYCACHEIMMTURNFACEANIMATIONSTATE_OFFSET))(configs);
		}
	};
}
