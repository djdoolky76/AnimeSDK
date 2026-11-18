#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeQueue_1.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_ADDLOOKATACTIVE_OFFSET UNITYSDK_OFFSET(0xE0BE6B0)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_BEGINDRAIN_OFFSET UNITYSDK_OFFSET(0xE0BEC10)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_CLEARMANAGEDSTATE_OFFSET UNITYSDK_OFFSET(0xE0BD850)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_COPYLOOKATACTIVE_OFFSET UNITYSDK_OFFSET(0xE0BEAB0)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_DISCARDPENDING_OFFSET UNITYSDK_OFFSET(0xE0BFA90)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0BD550)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_DRAINANDCOUNT_OFFSET UNITYSDK_OFFSET(0xE0C0550)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_ENQUEUEANIMATION_OFFSET UNITYSDK_OFFSET(0xE0BE210)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_ENQUEUELOD_OFFSET UNITYSDK_OFFSET(0xE0BE360)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_ENQUEUELOOKATONESHOT_OFFSET UNITYSDK_OFFSET(0xE0BE800)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_ENQUEUETRANSFORMRELATED_OFFSET UNITYSDK_OFFSET(0xE0BE0C0)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_HASPENDINGNATIVEWRITER_OFFSET UNITYSDK_OFFSET(0xE0BCC60)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_ISCREATED_OFFSET UNITYSDK_OFFSET(0xE0BCBA0)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_LASTANIMATIONRAWCOUNT_OFFSET UNITYSDK_OFFSET(0xE0BCEA0)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_LASTANIMATIONUNIQUECOUNT_OFFSET UNITYSDK_OFFSET(0xE0BCF60)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_LASTLODRAWCOUNT_OFFSET UNITYSDK_OFFSET(0xE0BD020)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_LASTLODUNIQUECOUNT_OFFSET UNITYSDK_OFFSET(0xE0BD0E0)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_LASTLOOKATRAWCOUNT_OFFSET UNITYSDK_OFFSET(0xE0BD1A0)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_LASTLOOKATUNIQUECOUNT_OFFSET UNITYSDK_OFFSET(0xE0BD260)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_LASTTRANSFORMRAWCOUNT_OFFSET UNITYSDK_OFFSET(0xE0BCD20)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_LASTTRANSFORMUNIQUECOUNT_OFFSET UNITYSDK_OFFSET(0xE0BCDE0)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE0BD320)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_MARKNATIVEWRITERSCHEDULED_OFFSET UNITYSDK_OFFSET(0xE0BDFF0)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_MERGEANDCLEAR_OFFSET UNITYSDK_OFFSET(0xE0BF950)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_REMOVEENTITY_OFFSET UNITYSDK_OFFSET(0xE0BE950)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SETLOOKATTARGET_OFFSET UNITYSDK_OFFSET(0xE0BE4B0)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_HASPENDINGNATIVEWRITER_OFFSET UNITYSDK_OFFSET(0xE0BCCC0)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_ISCREATED_OFFSET UNITYSDK_OFFSET(0xE0BCC00)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_LASTANIMATIONRAWCOUNT_OFFSET UNITYSDK_OFFSET(0xE0BCF00)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_LASTANIMATIONUNIQUECOUNT_OFFSET UNITYSDK_OFFSET(0xE0BCFC0)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_LASTLODRAWCOUNT_OFFSET UNITYSDK_OFFSET(0xE0BD080)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_LASTLODUNIQUECOUNT_OFFSET UNITYSDK_OFFSET(0xE0BD140)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_LASTLOOKATRAWCOUNT_OFFSET UNITYSDK_OFFSET(0xE0BD200)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_LASTLOOKATUNIQUECOUNT_OFFSET UNITYSDK_OFFSET(0xE0BD2C0)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_LASTTRANSFORMRAWCOUNT_OFFSET UNITYSDK_OFFSET(0xE0BCD80)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_LASTTRANSFORMUNIQUECOUNT_OFFSET UNITYSDK_OFFSET(0xE0BCE40)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_TRYGETPARALLELWRITERS_OFFSET UNITYSDK_OFFSET(0xE0BDE80)
#define NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0C05D0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AnimationCollectDirtyTracker_TypeDefinitionIndex = 73021;

	class AnimationCollectDirtyTracker : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_LookAtOneShot()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AnimationCollectDirtyTracker_TypeDefinitionIndex)->GetStaticField(0x47AA0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_LookAtActive()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AnimationCollectDirtyTracker_TypeDefinitionIndex)->GetStaticField(0x47AA8);
		}
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_TransformMain()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AnimationCollectDirtyTracker_TypeDefinitionIndex)->GetStaticField(0x47AB0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Lod()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AnimationCollectDirtyTracker_TypeDefinitionIndex)->GetStaticField(0x47AB8);
		}
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_AnimationMain()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AnimationCollectDirtyTracker_TypeDefinitionIndex)->GetStaticField(0x47AC0);
		}
		static ::System::Int32* StaticGet__LastAnimationRawCount_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationCollectDirtyTracker_TypeDefinitionIndex)->GetStaticField(0x10840);
		}
		static ::System::Int32* StaticGet__LastLookAtUniqueCount_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationCollectDirtyTracker_TypeDefinitionIndex)->GetStaticField(0x10844);
		}
		static ::System::Int32* StaticGet__LastLodRawCount_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationCollectDirtyTracker_TypeDefinitionIndex)->GetStaticField(0x10848);
		}
		static ::System::Int32* StaticGet__LastLookAtRawCount_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationCollectDirtyTracker_TypeDefinitionIndex)->GetStaticField(0x1084C);
		}
		static ::System::Int32* StaticGet__LastTransformRawCount_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationCollectDirtyTracker_TypeDefinitionIndex)->GetStaticField(0x10850);
		}
		static ::Unity::Collections::NativeQueue_1<::System::UInt32>* StaticGet__animationQueue()
		{
			return (::Unity::Collections::NativeQueue_1<::System::UInt32>*)Il2CppClass::FromTypeDefinitionIndex(AnimationCollectDirtyTracker_TypeDefinitionIndex)->GetStaticField(0x10858);
		}
		static ::Unity::Collections::NativeQueue_1<::System::UInt32>* StaticGet__transformQueue()
		{
			return (::Unity::Collections::NativeQueue_1<::System::UInt32>*)Il2CppClass::FromTypeDefinitionIndex(AnimationCollectDirtyTracker_TypeDefinitionIndex)->GetStaticField(0x10870);
		}
		static ::System::Boolean* StaticGet__IsCreated_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AnimationCollectDirtyTracker_TypeDefinitionIndex)->GetStaticField(0x10888);
		}
		static ::System::Boolean* StaticGet__HasPendingNativeWriter_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AnimationCollectDirtyTracker_TypeDefinitionIndex)->GetStaticField(0x10889);
		}
		static ::System::Int32* StaticGet__LastLodUniqueCount_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationCollectDirtyTracker_TypeDefinitionIndex)->GetStaticField(0x1088C);
		}
		static ::System::Int32* StaticGet__LastAnimationUniqueCount_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationCollectDirtyTracker_TypeDefinitionIndex)->GetStaticField(0x10890);
		}
		static ::System::Int32* StaticGet__LastTransformUniqueCount_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimationCollectDirtyTracker_TypeDefinitionIndex)->GetStaticField(0x10894);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsCreated()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_ISCREATED_OFFSET))();
		}

		static ::System::Void set_IsCreated(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_ISCREATED_OFFSET))(value);
		}

		static ::System::Boolean get_HasPendingNativeWriter()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_HASPENDINGNATIVEWRITER_OFFSET))();
		}

		static ::System::Void set_HasPendingNativeWriter(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_HASPENDINGNATIVEWRITER_OFFSET))(value);
		}

		static ::System::Int32 get_LastTransformRawCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_LASTTRANSFORMRAWCOUNT_OFFSET))();
		}

		static ::System::Void set_LastTransformRawCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_LASTTRANSFORMRAWCOUNT_OFFSET))(value);
		}

		static ::System::Int32 get_LastTransformUniqueCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_LASTTRANSFORMUNIQUECOUNT_OFFSET))();
		}

		static ::System::Void set_LastTransformUniqueCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_LASTTRANSFORMUNIQUECOUNT_OFFSET))(value);
		}

		static ::System::Int32 get_LastAnimationRawCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_LASTANIMATIONRAWCOUNT_OFFSET))();
		}

		static ::System::Void set_LastAnimationRawCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_LASTANIMATIONRAWCOUNT_OFFSET))(value);
		}

		static ::System::Int32 get_LastAnimationUniqueCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_LASTANIMATIONUNIQUECOUNT_OFFSET))();
		}

		static ::System::Void set_LastAnimationUniqueCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_LASTANIMATIONUNIQUECOUNT_OFFSET))(value);
		}

		static ::System::Int32 get_LastLodRawCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_LASTLODRAWCOUNT_OFFSET))();
		}

		static ::System::Void set_LastLodRawCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_LASTLODRAWCOUNT_OFFSET))(value);
		}

		static ::System::Int32 get_LastLodUniqueCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_LASTLODUNIQUECOUNT_OFFSET))();
		}

		static ::System::Void set_LastLodUniqueCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_LASTLODUNIQUECOUNT_OFFSET))(value);
		}

		static ::System::Int32 get_LastLookAtRawCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_LASTLOOKATRAWCOUNT_OFFSET))();
		}

		static ::System::Void set_LastLookAtRawCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_LASTLOOKATRAWCOUNT_OFFSET))(value);
		}

		static ::System::Int32 get_LastLookAtUniqueCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_GET_LASTLOOKATUNIQUECOUNT_OFFSET))();
		}

		static ::System::Void set_LastLookAtUniqueCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SET_LASTLOOKATUNIQUECOUNT_OFFSET))(value);
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_INITIALIZE_OFFSET))();
		}

		static ::System::Void Dispose()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_DISPOSE_OFFSET))();
		}

		static ::System::Void ClearManagedState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_CLEARMANAGEDSTATE_OFFSET))();
		}

		static ::System::Boolean TryGetParallelWriters(::System::Object*& transformWriter, ::System::Object*& animationWriter)
		{
			return ((::System::Boolean(*)(::System::Object*&, ::System::Object*&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_TRYGETPARALLELWRITERS_OFFSET))(transformWriter, animationWriter);
		}

		static ::System::Void MarkNativeWriterScheduled()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_MARKNATIVEWRITERSCHEDULED_OFFSET))();
		}

		static ::System::Void EnqueueTransformRelated(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_ENQUEUETRANSFORMRELATED_OFFSET))(entityId);
		}

		static ::System::Void EnqueueAnimation(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_ENQUEUEANIMATION_OFFSET))(entityId);
		}

		static ::System::Void EnqueueLod(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_ENQUEUELOD_OFFSET))(entityId);
		}

		static ::System::Void SetLookAtTarget(::System::UInt32 entityId, ::System::Boolean hasTarget)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_SETLOOKATTARGET_OFFSET))(entityId, hasTarget);
		}

		static ::System::Void AddLookAtActive(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_ADDLOOKATACTIVE_OFFSET))(entityId);
		}

		static ::System::Void EnqueueLookAtOneShot(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_ENQUEUELOOKATONESHOT_OFFSET))(entityId);
		}

		static ::System::Void RemoveEntity(::System::UInt32 entityId)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_REMOVEENTITY_OFFSET))(entityId);
		}

		static ::System::Void CopyLookAtActive(::System::Collections::Generic::HashSet_1<::System::UInt32>* destination)
		{
			return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_COPYLOOKATACTIVE_OFFSET))(destination);
		}

		static ::System::Void BeginDrain(::System::Collections::Generic::HashSet_1<::System::UInt32>* transformDirty, ::System::Collections::Generic::HashSet_1<::System::UInt32>* animationDirty, ::System::Collections::Generic::HashSet_1<::System::UInt32>* lodDirty, ::System::Collections::Generic::HashSet_1<::System::UInt32>* lookAtOneShotDirty)
		{
			return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_BEGINDRAIN_OFFSET))(transformDirty, animationDirty, lodDirty, lookAtOneShotDirty);
		}

		static ::System::Void DiscardPending()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_DISCARDPENDING_OFFSET))();
		}

		static ::System::Int32 DrainAndCount(::Unity::Collections::NativeQueue_1<::System::UInt32> queue)
		{
			return ((::System::Int32(*)(::Unity::Collections::NativeQueue_1<::System::UInt32>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_DRAINANDCOUNT_OFFSET))(queue);
		}

		static ::System::Int32 MergeAndClear(::System::Collections::Generic::HashSet_1<::System::UInt32>* source, ::System::Collections::Generic::HashSet_1<::System::UInt32>* destination)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ANIMATIONCOLLECTDIRTYTRACKER_MERGEANDCLEAR_OFFSET))(source, destination);
		}
	};
}
