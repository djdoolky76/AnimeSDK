#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SettingsTriState.h"
#include "unitysdk/Spine/Unity/UpdateMode.h"
#include "unitysdk/Spine/Unity/UpdateTiming.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/Spine/Unity/CoroutineIterator.h"

namespace Spine { class Skeleton; }
namespace Spine::Unity { class ISkeletonRenderer; }
namespace Spine::Unity { class SkeletonAnimationDelegate; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine::Unity { class SkeletonRendererDelegate; }

#define SPINE_UNITY_SKELETONANIMATIONBASE_ADD_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x1FAADCF0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_ADD_BEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1FAADBF0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_ADD_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x1FAADAF0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_ADD_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x1FAAE9F0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_ADD_ONREBUILD_OFFSET UNITYSDK_OFFSET(0x1FAAE6F0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_ADD_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1FAAE3F0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_ADD_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1FAADDF0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_ADD_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1FAAE0F0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_ADD__BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x1FAAD8F0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_ADD__BEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1FAAD7F0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_ADD__ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x1FAAD9F0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_APPLYANIMATIONSPLIT_OFFSET UNITYSDK_OFFSET(0x1FAB0480)
#define SPINE_UNITY_SKELETONANIMATIONBASE_APPLYANIMATION_OFFSET UNITYSDK_OFFSET(0x1FAB0370)
#define SPINE_UNITY_SKELETONANIMATIONBASE_ASSERTISMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1FAAC700)
#define SPINE_UNITY_SKELETONANIMATIONBASE_ASSERTISWORKERTHREAD_OFFSET UNITYSDK_OFFSET(0x1FAAC920)
#define SPINE_UNITY_SKELETONANIMATIONBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FAAEFF0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_CLEARANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1FAAF700)
#define SPINE_UNITY_SKELETONANIMATIONBASE_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x1FAAF610)
#define SPINE_UNITY_SKELETONANIMATIONBASE_ENSURERENDEREREVENTSSUBSCRIBED_OFFSET UNITYSDK_OFFSET(0x1FAAF000)
#define SPINE_UNITY_SKELETONANIMATIONBASE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1FAAFB20)
#define SPINE_UNITY_SKELETONANIMATIONBASE_GET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x1FAACB40)
#define SPINE_UNITY_SKELETONANIMATIONBASE_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x1FAB0610)
#define SPINE_UNITY_SKELETONANIMATIONBASE_GET_EXTERNALDELTATIME_OFFSET UNITYSDK_OFFSET(0x1FAAC1C0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_GET_EXTERNALUNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x1FAAC280)
#define SPINE_UNITY_SKELETONANIMATIONBASE_GET_ISUPDATEDEXTERNALLY_OFFSET UNITYSDK_OFFSET(0x1FAAC3F0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_GET_RENDERER_OFFSET UNITYSDK_OFFSET(0x1FAACB50)
#define SPINE_UNITY_SKELETONANIMATIONBASE_GET_SKELETONDATAASSET_OFFSET UNITYSDK_OFFSET(0x1FAAD1F0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_GET_SKELETONDATAASSET_OFFSET UNITYSDK_OFFSET(0x1FAAD4F0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x1FAACBF0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x1FAACEF0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_GET_THREADEDANIMATION_OFFSET UNITYSDK_OFFSET(0x1FAAC410)
#define SPINE_UNITY_SKELETONANIMATIONBASE_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1FAAECF0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_GET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x1FAABFD0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_GET_USEDEXTERNALDELTATIME_OFFSET UNITYSDK_OFFSET(0x1FAAC340)
#define SPINE_UNITY_SKELETONANIMATIONBASE_GET_USESTHREADEDANIMATION_OFFSET UNITYSDK_OFFSET(0x1FAAC190)
#define SPINE_UNITY_SKELETONANIMATIONBASE_INITIALIZEANIMATIONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1FAAF570)
#define SPINE_UNITY_SKELETONANIMATIONBASE_INITIALIZEMAINTHREADID_OFFSET UNITYSDK_OFFSET(0x1FAAC5C0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FAAF310)
#define SPINE_UNITY_SKELETONANIMATIONBASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1FAAFB70)
#define SPINE_UNITY_SKELETONANIMATIONBASE_MAINTHREADAFTERUPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FAAFF10)
#define SPINE_UNITY_SKELETONANIMATIONBASE_MAINTHREADBEFOREUPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FAAFC20)
#define SPINE_UNITY_SKELETONANIMATIONBASE_ONBECAMEVISIBLEFROMMODE_OFFSET UNITYSDK_OFFSET(0x1FAB05F0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1FAAF910)
#define SPINE_UNITY_SKELETONANIMATIONBASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1FAAF710)
#define SPINE_UNITY_SKELETONANIMATIONBASE_ONRENDERERREBUILD_OFFSET UNITYSDK_OFFSET(0x1FAAFAA0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x1FAADD70)
#define SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE_BEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1FAADC70)
#define SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x1FAADB70)
#define SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x1FAAEB70)
#define SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE_ONREBUILD_OFFSET UNITYSDK_OFFSET(0x1FAAE870)
#define SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1FAAE570)
#define SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1FAADF70)
#define SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1FAAE270)
#define SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE__BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x1FAAD970)
#define SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE__BEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1FAAD870)
#define SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE__ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x1FAADA70)
#define SPINE_UNITY_SKELETONANIMATIONBASE_SET_EXTERNALDELTATIME_OFFSET UNITYSDK_OFFSET(0x1FAAC220)
#define SPINE_UNITY_SKELETONANIMATIONBASE_SET_EXTERNALUNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0x1FAAC2E0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_SET_ISUPDATEDEXTERNALLY_OFFSET UNITYSDK_OFFSET(0x1FAAC400)
#define SPINE_UNITY_SKELETONANIMATIONBASE_SET_SKELETONDATAASSET_OFFSET UNITYSDK_OFFSET(0x1FAAD370)
#define SPINE_UNITY_SKELETONANIMATIONBASE_SET_SKELETONDATAASSET_OFFSET UNITYSDK_OFFSET(0x1FAAD670)
#define SPINE_UNITY_SKELETONANIMATIONBASE_SET_SKELETON_OFFSET UNITYSDK_OFFSET(0x1FAACD70)
#define SPINE_UNITY_SKELETONANIMATIONBASE_SET_SKELETON_OFFSET UNITYSDK_OFFSET(0x1FAAD070)
#define SPINE_UNITY_SKELETONANIMATIONBASE_SET_THREADEDANIMATION_OFFSET UNITYSDK_OFFSET(0x1FAAC420)
#define SPINE_UNITY_SKELETONANIMATIONBASE_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1FAAEE70)
#define SPINE_UNITY_SKELETONANIMATIONBASE_SET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x1FAABFE0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_UPDATEEXTERNAL_OFFSET UNITYSDK_OFFSET(0x1FAAFF20)
#define SPINE_UNITY_SKELETONANIMATIONBASE_UPDATEINTERNALSPLIT_OFFSET UNITYSDK_OFFSET(0x1FAB0130)
#define SPINE_UNITY_SKELETONANIMATIONBASE_UPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FAAFF70)
#define SPINE_UNITY_SKELETONANIMATIONBASE_UPDATEONCEPERFRAME_OFFSET UNITYSDK_OFFSET(0x1FAAFBC0)
#define SPINE_UNITY_SKELETONANIMATIONBASE_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1FAB0320)
#define SPINE_UNITY_SKELETONANIMATIONBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FAAFAD0)
#define SPINE_UNITY_SKELETONANIMATIONBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAB0690)
#define SPINE_UNITY_SKELETONANIMATIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAB0620)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonAnimationBase_TypeDefinitionIndex = 38118;

	class SkeletonAnimationBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Single* StaticGet_externalDeltaTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(SkeletonAnimationBase_TypeDefinitionIndex)->GetStaticField(0x9E90);
		}
		static ::System::Single* StaticGet_unscaledDeltaTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(SkeletonAnimationBase_TypeDefinitionIndex)->GetStaticField(0x9E94);
		}
		static ::System::Int32* StaticGet_mainThreadID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkeletonAnimationBase_TypeDefinitionIndex)->GetStaticField(0x9E98);
		}
		::Spine::Unity::UpdateTiming updateTiming; // 0x18
		::System::Int32 frameOfLastUpdate; // 0x1C
		::Spine::Unity::ISkeletonRenderer* skeletonRenderer; // 0x20
		::System::Boolean skipUpdate; // 0x28
		::System::Byte _padding0[0x3];
		::Spine::Unity::SettingsTriState threadedAnimation; // 0x2C
		::System::Boolean isUpdatedExternally; // 0x30
		::System::Byte _padding1[0x7];
		::Spine::Unity::SkeletonAnimationDelegate* _BeforeUpdate; // 0x38
		::Spine::Unity::SkeletonAnimationDelegate* _BeforeApply; // 0x40
		::Spine::Unity::SkeletonAnimationDelegate* _OnAnimationRebuild; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE__CCTOR_OFFSET))();
		}

		::Spine::Unity::UpdateTiming get_UpdateTiming()
		{
			return ((::Spine::Unity::UpdateTiming(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_GET_UPDATETIMING_OFFSET))(this);
		}

		::System::Void set_UpdateTiming(::Spine::Unity::UpdateTiming value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateTiming))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_SET_UPDATETIMING_OFFSET))(this, value);
		}

		static ::System::Single get_ExternalDeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_GET_EXTERNALDELTATIME_OFFSET))();
		}

		static ::System::Void set_ExternalDeltaTime(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_SET_EXTERNALDELTATIME_OFFSET))(value);
		}

		static ::System::Single get_ExternalUnscaledDeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_GET_EXTERNALUNSCALEDDELTATIME_OFFSET))();
		}

		static ::System::Void set_ExternalUnscaledDeltaTime(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_SET_EXTERNALUNSCALEDDELTATIME_OFFSET))(value);
		}

		::System::Single get_UsedExternalDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_GET_USEDEXTERNALDELTATIME_OFFSET))(this);
		}

		::System::Boolean get_IsUpdatedExternally()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_GET_ISUPDATEDEXTERNALLY_OFFSET))(this);
		}

		::System::Void set_IsUpdatedExternally(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_SET_ISUPDATEDEXTERNALLY_OFFSET))(this, value);
		}

		::System::Boolean get_UsesThreadedAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_GET_USESTHREADEDANIMATION_OFFSET))(this);
		}

		::Spine::Unity::SettingsTriState get_ThreadedAnimation()
		{
			return ((::Spine::Unity::SettingsTriState(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_GET_THREADEDANIMATION_OFFSET))(this);
		}

		::System::Void set_ThreadedAnimation(::Spine::Unity::SettingsTriState value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SettingsTriState))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_SET_THREADEDANIMATION_OFFSET))(this, value);
		}

		::System::Void InitializeMainThreadID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_INITIALIZEMAINTHREADID_OFFSET))(this);
		}

		::System::Void AssertIsMainThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_ASSERTISMAINTHREAD_OFFSET))(this);
		}

		::System::Void AssertIsWorkerThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_ASSERTISWORKERTHREAD_OFFSET))(this);
		}

		::UnityEngine::MonoBehaviour* get_Component()
		{
			return ((::UnityEngine::MonoBehaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_GET_COMPONENT_OFFSET))(this);
		}

		::Spine::Unity::ISkeletonRenderer* get_Renderer()
		{
			return ((::Spine::Unity::ISkeletonRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_GET_RENDERER_OFFSET))(this);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return ((::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_GET_SKELETON_OFFSET))(this);
		}

		::System::Void set_Skeleton(::Spine::Skeleton* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_SET_SKELETON_OFFSET))(this, value);
		}

		::Spine::Skeleton* get_skeleton()
		{
			return ((::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_GET_SKELETON_OFFSET))(this);
		}

		::System::Void set_skeleton(::Spine::Skeleton* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_SET_SKELETON_OFFSET))(this, value);
		}

		::Spine::Unity::SkeletonDataAsset* get_SkeletonDataAsset()
		{
			return ((::Spine::Unity::SkeletonDataAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_GET_SKELETONDATAASSET_OFFSET))(this);
		}

		::System::Void set_SkeletonDataAsset(::Spine::Unity::SkeletonDataAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonDataAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_SET_SKELETONDATAASSET_OFFSET))(this, value);
		}

		::Spine::Unity::SkeletonDataAsset* get_skeletonDataAsset()
		{
			return ((::Spine::Unity::SkeletonDataAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_GET_SKELETONDATAASSET_OFFSET))(this);
		}

		::System::Void set_skeletonDataAsset(::Spine::Unity::SkeletonDataAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonDataAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_SET_SKELETONDATAASSET_OFFSET))(this, value);
		}

		::System::Void add__BeforeUpdate(::Spine::Unity::SkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_ADD__BEFOREUPDATE_OFFSET))(this, value);
		}

		::System::Void remove__BeforeUpdate(::Spine::Unity::SkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE__BEFOREUPDATE_OFFSET))(this, value);
		}

		::System::Void add__BeforeApply(::Spine::Unity::SkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_ADD__BEFOREAPPLY_OFFSET))(this, value);
		}

		::System::Void remove__BeforeApply(::Spine::Unity::SkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE__BEFOREAPPLY_OFFSET))(this, value);
		}

		::System::Void add__OnAnimationRebuild(::Spine::Unity::SkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_ADD__ONANIMATIONREBUILD_OFFSET))(this, value);
		}

		::System::Void remove__OnAnimationRebuild(::Spine::Unity::SkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE__ONANIMATIONREBUILD_OFFSET))(this, value);
		}

		::System::Void add_OnAnimationRebuild(::Spine::Unity::SkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_ADD_ONANIMATIONREBUILD_OFFSET))(this, value);
		}

		::System::Void remove_OnAnimationRebuild(::Spine::Unity::SkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE_ONANIMATIONREBUILD_OFFSET))(this, value);
		}

		::System::Void add_BeforeUpdate(::Spine::Unity::SkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_ADD_BEFOREUPDATE_OFFSET))(this, value);
		}

		::System::Void remove_BeforeUpdate(::Spine::Unity::SkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE_BEFOREUPDATE_OFFSET))(this, value);
		}

		::System::Void add_BeforeApply(::Spine::Unity::SkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_ADD_BEFOREAPPLY_OFFSET))(this, value);
		}

		::System::Void remove_BeforeApply(::Spine::Unity::SkeletonAnimationDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE_BEFOREAPPLY_OFFSET))(this, value);
		}

		::System::Void add_UpdateLocal(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_ADD_UPDATELOCAL_OFFSET))(this, value);
		}

		::System::Void remove_UpdateLocal(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE_UPDATELOCAL_OFFSET))(this, value);
		}

		::System::Void add_UpdateWorld(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_ADD_UPDATEWORLD_OFFSET))(this, value);
		}

		::System::Void remove_UpdateWorld(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE_UPDATEWORLD_OFFSET))(this, value);
		}

		::System::Void add_UpdateComplete(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_ADD_UPDATECOMPLETE_OFFSET))(this, value);
		}

		::System::Void remove_UpdateComplete(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE_UPDATECOMPLETE_OFFSET))(this, value);
		}

		::System::Void add_OnRebuild(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_ADD_ONREBUILD_OFFSET))(this, value);
		}

		::System::Void remove_OnRebuild(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE_ONREBUILD_OFFSET))(this, value);
		}

		::System::Void add_OnMeshAndMaterialsUpdated(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_ADD_ONMESHANDMATERIALSUPDATED_OFFSET))(this, value);
		}

		::System::Void remove_OnMeshAndMaterialsUpdated(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET))(this, value);
		}

		::Spine::Unity::UpdateMode get_UpdateMode()
		{
			return ((::Spine::Unity::UpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_GET_UPDATEMODE_OFFSET))(this);
		}

		::System::Void set_UpdateMode(::Spine::Unity::UpdateMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateMode))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_SET_UPDATEMODE_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_AWAKE_OFFSET))(this);
		}

		::System::Void EnsureRendererEventsSubscribed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_ENSURERENDEREREVENTSSUBSCRIBED_OFFSET))(this);
		}

		::System::Void Initialize(::System::Boolean overwrite, ::System::Boolean quiet, ::System::Boolean calledFromRendererCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_INITIALIZE_OFFSET))(this, overwrite, quiet, calledFromRendererCallback);
		}

		::System::Void InitializeAnimationComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_INITIALIZEANIMATIONCOMPONENT_OFFSET))(this);
		}

		::System::Void ClearState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_CLEARSTATE_OFFSET))(this);
		}

		::System::Void ClearAnimationState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_CLEARANIMATIONSTATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnRendererRebuild(::Spine::Unity::ISkeletonRenderer* skeletonRenderer)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonRenderer*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_ONRENDERERREBUILD_OFFSET))(this, skeletonRenderer);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void UpdateOncePerFrame(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_UPDATEONCEPERFRAME_OFFSET))(this, deltaTime);
		}

		::System::Void MainThreadBeforeUpdateInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_MAINTHREADBEFOREUPDATEINTERNAL_OFFSET))(this);
		}

		::System::Void MainThreadAfterUpdateInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_MAINTHREADAFTERUPDATEINTERNAL_OFFSET))(this);
		}

		::System::Void UpdateExternal(::System::Int32 currentFrameCount, ::System::Boolean calledFromOnlyMainThread)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_UPDATEEXTERNAL_OFFSET))(this, currentFrameCount, calledFromOnlyMainThread);
		}

		::System::Void UpdateInternal(::System::Single deltaTime, ::System::Int32 currentFrameCount, ::System::Boolean calledFromOnlyMainThread)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_UPDATEINTERNAL_OFFSET))(this, deltaTime, currentFrameCount, calledFromOnlyMainThread);
		}

		::Spine::Unity::CoroutineIterator UpdateInternalSplit(::Spine::Unity::CoroutineIterator coroutineIterator, ::System::Int32 currentFrameCount)
		{
			return ((::Spine::Unity::CoroutineIterator(*)(::PVOID, ::Spine::Unity::CoroutineIterator, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_UPDATEINTERNALSPLIT_OFFSET))(this, coroutineIterator, currentFrameCount);
		}

		::System::Void Update_1(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_UPDATE_1_OFFSET))(this, deltaTime);
		}

		::System::Void ApplyAnimation(::System::Boolean calledFromMainThread)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_APPLYANIMATION_OFFSET))(this, calledFromMainThread);
		}

		::Spine::Unity::CoroutineIterator ApplyAnimationSplit(::Spine::Unity::CoroutineIterator coroutineIterator)
		{
			return ((::Spine::Unity::CoroutineIterator(*)(::PVOID, ::Spine::Unity::CoroutineIterator))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_APPLYANIMATIONSPLIT_OFFSET))(this, coroutineIterator);
		}

		::System::Void OnBecameVisibleFromMode(::Spine::Unity::UpdateMode previousUpdateMode)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateMode))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_ONBECAMEVISIBLEFROMMODE_OFFSET))(this, previousUpdateMode);
		}

		::System::Single get_DeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONANIMATIONBASE_GET_DELTATIME_OFFSET))(this);
		}
	};
}
