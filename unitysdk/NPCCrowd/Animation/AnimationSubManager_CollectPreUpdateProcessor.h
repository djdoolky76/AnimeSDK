#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/EnumAsFlag_1.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationProcessPhase.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_CollectPreUpdateProcessor_BlendShapeRefreshResult.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_NoDispatchable.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_IndexData.h"

class COCJHGGDBCA;
namespace NPCCrowd::Animation { class AnimationControllerInstanceConfig; }
namespace NPCCrowd::Animation { class AnimationSubManager; }
namespace NPCCrowd::Animation { class AnimationSubManager_AnimationArchetypeData; }
namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }
namespace NPCCrowd::Animation { class AnimationSubManager_CollectPreUpdateProcessor_BlendShapeCollectCache; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_BUILDTURNAROUNDFLAGS_OFFSET UNITYSDK_OFFSET(0xE1D0AD0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTANIMATIONDATAFROMCOMPONENTLEGACY_OFFSET UNITYSDK_OFFSET(0xF134520)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTANIMATIONDATAFROMDIRTY_OFFSET UNITYSDK_OFFSET(0xE1CD3D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTANIMATIONVISIBLECOUNT_OFFSET UNITYSDK_OFFSET(0xE1CF180)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTAVATARDATA_OFFSET UNITYSDK_OFFSET(0xE1CFD90)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTDATA_OFFSET UNITYSDK_OFFSET(0xE1CBB00)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTMONTAGEDATA_OFFSET UNITYSDK_OFFSET(0xE1D0530)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTSTATEMACHINEDATA_OFFSET UNITYSDK_OFFSET(0xE1CF6A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0xE1CACB0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_GET_PHASE_OFFSET UNITYSDK_OFFSET(0xE1CACA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEBLENDSHAPE_OFFSET UNITYSDK_OFFSET(0xF136730)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLELOOKATIK_OFFSET UNITYSDK_OFFSET(0xF138870)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEMONTAGE_OFFSET UNITYSDK_OFFSET(0xF1362A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLETURNINGAROUND_OFFSET UNITYSDK_OFFSET(0xF1352B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEWALKINGSTAIRS_OFFSET UNITYSDK_OFFSET(0xF135B40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEWARPING_OFFSET UNITYSDK_OFFSET(0xF134C70)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HASVALIDABILITY_OFFSET UNITYSDK_OFFSET(0xF1344A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_ISPAUSED_OFFSET UNITYSDK_OFFSET(0xF134440)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_MARKALLENTITIESDIRTY_OFFSET UNITYSDK_OFFSET(0xE1CD210)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_ONINIT_OFFSET UNITYSDK_OFFSET(0xE1CAD10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0xE1CAE30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_TRYRESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0xF134150)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xF138EE0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xF138D50)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex = 81234;

	class AnimationSubManager_CollectPreUpdateProcessor : public ::NPCCrowd::Animation::AnimationSubManager_NoDispatchable
	{
	public:
		static ::Il2CppArray<::System::ValueTuple_2<::System::Object*, ::System::Func_2<::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::String*>*>>** StaticGet_TurnAroundBoneMap()
		{
			return (::Il2CppArray<::System::ValueTuple_2<::System::Object*, ::System::Func_2<::NPCCrowd::Animation::AnimationControllerInstanceConfig*, ::System::String*>*>>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0x476A0);
		}
		static ::System::Int32* StaticGet_TriggerTurnAroundHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0x10720);
		}
		static ::System::Int32* StaticGet_IsMovingHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0x10724);
		}
		static ::System::Int32* StaticGet_TurnAngleHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0x10728);
		}
		static ::Foundation::EnumAsFlag_1<::System::Object*>* StaticGet_StopBoneFlags()
		{
			return (::Foundation::EnumAsFlag_1<::System::Object*>*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0x1072C);
		}
		static ::Foundation::EnumAsFlag_1<::System::Object*>* StaticGet_TurnAroundBoneFlags()
		{
			return (::Foundation::EnumAsFlag_1<::System::Object*>*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0x10730);
		}
		static ::System::Int32* StaticGet_IntMoveValueHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0x10734);
		}
		static ::System::Int32* StaticGet_IsOnStairsHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_CollectPreUpdateProcessor_TypeDefinitionIndex)->GetStaticField(0x10738);
		}
		// static const ::System::String* IsMoving; // 0x0
		// static const ::System::String* TriggerTurnAround; // 0x0
		// static const ::System::String* TurnAngle; // 0x0
		// static const ::System::String* IsOnStairs; // 0x0
		// static const ::System::String* IntMoveValue; // 0x0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _blendShapeRefreshSet; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _blendShapeRetrySet; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _transformDirty; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _lodDirty; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _lookAtWork; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _lookAtOneShotDirty; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _animationDirty; // 0x40
		::NPCCrowd::Animation::AnimationSubManager_CollectPreUpdateProcessor_BlendShapeCollectCache* _blendShapeCache; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::NPCCrowd::Animation::AnimationControllerInstanceConfig*>* _avatarCurveDirtyConfigs; // 0x50
		::System::Boolean _lastDirtyCollectEnabled; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR__CCTOR_OFFSET))();
		}

		::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase get_Phase()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AnimationProcessPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_GET_PHASE_OFFSET))(this);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void OnInit(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_ONINIT_OFFSET))(this, manager);
		}

		::System::Void Process(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_PROCESS_OFFSET))(this, manager);
		}

		static ::System::Void MarkAllEntitiesDirty(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_MARKALLENTITIESDIRTY_OFFSET))(manager);
		}

		::System::Boolean CollectData(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTDATA_OFFSET))(this, manager);
		}

		static ::System::Void CollectAnimationVisibleCount(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTANIMATIONVISIBLECOUNT_OFFSET))(manager);
		}

		static ::System::Boolean CollectStateMachineData(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTSTATEMACHINEDATA_OFFSET))(manager);
		}

		static ::System::Boolean CollectAvatarData(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTAVATARDATA_OFFSET))(manager);
		}

		static ::System::Boolean CollectMontageData(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTMONTAGEDATA_OFFSET))(manager);
		}

		static ::Foundation::EnumAsFlag_1<::System::Object*> BuildTurnAroundFlags(::NPCCrowd::Animation::AnimationControllerInstanceConfig* config)
		{
			return ((::Foundation::EnumAsFlag_1<::System::Object*>(*)(::NPCCrowd::Animation::AnimationControllerInstanceConfig*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_BUILDTURNAROUNDFLAGS_OFFSET))(config);
		}

		::System::Void CollectAnimationDataFromDirty(::NPCCrowd::Animation::AnimationSubManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTANIMATIONDATAFROMDIRTY_OFFSET))(this, manager);
		}

		static ::System::Boolean TryResolveEntity(::NPCCrowd::Animation::AnimationSubManager* manager, ::System::UInt32 entityId, ::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*& animation, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*& avatar, ::NPCCrowd::Animation::AnimationSubManager_IndexData& indexData, ::System::Int32& instanceId)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::AnimationSubManager*, ::System::UInt32, ::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*&, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*&, ::NPCCrowd::Animation::AnimationSubManager_IndexData&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_TRYRESOLVEENTITY_OFFSET))(manager, entityId, animation, avatar, indexData, instanceId);
		}

		static ::System::Boolean IsPaused(::COCJHGGDBCA* npcComponent)
		{
			return ((::System::Boolean(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_ISPAUSED_OFFSET))(npcComponent);
		}

		static ::System::Boolean HasValidAbility(::COCJHGGDBCA* npcComponent)
		{
			return ((::System::Boolean(*)(::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HASVALIDABILITY_OFFSET))(npcComponent);
		}

		::System::Void CollectAnimationDataFromComponentLegacy(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_COLLECTANIMATIONDATAFROMCOMPONENTLEGACY_OFFSET))(this, animation, avatar);
		}

		static ::System::Void HandleWarping(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::System::Int32 instanceId)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEWARPING_OFFSET))(animation, instanceId);
		}

		static ::System::Void HandleTurningAround(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::System::Int32 instanceId)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLETURNINGAROUND_OFFSET))(animation, instanceId);
		}

		static ::System::Void HandleWalkingStairs(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::System::Int32 instanceId)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEWALKINGSTAIRS_OFFSET))(animation, instanceId);
		}

		static ::System::Void HandleMontage(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar, ::System::Int32 instanceId, ::System::Boolean& addedClip, ::System::Boolean& animationChanged)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*, ::System::Int32, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEMONTAGE_OFFSET))(animation, avatar, instanceId, addedClip, animationChanged);
		}

		static ::NPCCrowd::Animation::AnimationSubManager_CollectPreUpdateProcessor_BlendShapeRefreshResult HandleBlendShape(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar, ::System::Int32 instanceId, ::NPCCrowd::Animation::AnimationSubManager_CollectPreUpdateProcessor_BlendShapeCollectCache* cache, ::System::Boolean forceRefresh)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_CollectPreUpdateProcessor_BlendShapeRefreshResult(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*, ::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_CollectPreUpdateProcessor_BlendShapeCollectCache*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLEBLENDSHAPE_OFFSET))(animation, avatar, instanceId, cache, forceRefresh);
		}

		static ::System::Void HandleLookAtIK(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData* animation, ::System::Int32 instanceId)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AnimationArchetypeData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_COLLECTPREUPDATEPROCESSOR_HANDLELOOKATIK_OFFSET))(animation, instanceId);
		}
	};
}
