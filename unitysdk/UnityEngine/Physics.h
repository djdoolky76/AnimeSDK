#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/ModifiableContactPair.h"
#include "unitysdk/UnityEngine/PhysicsAnimatorInterpolation.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"
#include "unitysdk/UnityEngine/QueryTriggerInteraction.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/ColliderSnapshot.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Collider; }

#define UNITYENGINE_PHYSICS_ADD_CONTACTMODIFYEVENTCCD_OFFSET UNITYSDK_OFFSET(0x1F15AFC0)
#define UNITYENGINE_PHYSICS_ADD_CONTACTMODIFYEVENT_OFFSET UNITYSDK_OFFSET(0x1F15AE00)
#define UNITYENGINE_PHYSICS_BAKEMESH_OFFSET UNITYSDK_OFFSET(0x1F163A00)
#define UNITYENGINE_PHYSICS_BOXCASTNONALLOC_1_OFFSET UNITYSDK_OFFSET(0x1F163430)
#define UNITYENGINE_PHYSICS_BOXCASTNONALLOC_2_OFFSET UNITYSDK_OFFSET(0x1F1635A0)
#define UNITYENGINE_PHYSICS_BOXCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1F163120)
#define UNITYENGINE_PHYSICS_BOXCAST_OFFSET UNITYSDK_OFFSET(0x1F15ECB0)
#define UNITYENGINE_PHYSICS_CAPSULECASTNONALLOC_1_OFFSET UNITYSDK_OFFSET(0x1F162330)
#define UNITYENGINE_PHYSICS_CAPSULECASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1F162050)
#define UNITYENGINE_PHYSICS_CAPSULECAST_1_OFFSET UNITYSDK_OFFSET(0x1F15E4F0)
#define UNITYENGINE_PHYSICS_CAPSULECAST_OFFSET UNITYSDK_OFFSET(0x1F15E150)
#define UNITYENGINE_PHYSICS_CHECKSPHERE_1_OFFSET UNITYSDK_OFFSET(0x1F161FB0)
#define UNITYENGINE_PHYSICS_CHECKSPHERE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F161E20)
#define UNITYENGINE_PHYSICS_CHECKSPHERE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1F161D80)
#define UNITYENGINE_PHYSICS_CHECKSPHERE_OFFSET UNITYSDK_OFFSET(0x1F161E30)
#define UNITYENGINE_PHYSICS_CLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x1F1619B0)
#define UNITYENGINE_PHYSICS_COLLIDERAPPLYCOLLISIONS_OFFSET UNITYSDK_OFFSET(0x1F15B580)
#define UNITYENGINE_PHYSICS_COLLIDERAPPLYCOLLISIONWITHLAYERNODIRTY_OFFSET UNITYSDK_OFFSET(0x1F15B560)
#define UNITYENGINE_PHYSICS_COLLIDERAPPLYCOLLISIONWITHLAYER_OFFSET UNITYSDK_OFFSET(0x1F15B550)
#define UNITYENGINE_PHYSICS_COLLIDERIGNORECOLLISIONWITHLAYER_OFFSET UNITYSDK_OFFSET(0x1F15B790)
#define UNITYENGINE_PHYSICS_COMPUTEPENETRATION_OFFSET UNITYSDK_OFFSET(0x1F161740)
#define UNITYENGINE_PHYSICS_GETCOLLIDERSNAPSHOTTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1F163C50)
#define UNITYENGINE_PHYSICS_GETIGNORECOLLISIONTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1F163BE0)
#define UNITYENGINE_PHYSICS_GETIGNORECOLLISION_OFFSET UNITYSDK_OFFSET(0x1F15B7B0)
#define UNITYENGINE_PHYSICS_GETIGNORELAYERCOLLISION_OFFSET UNITYSDK_OFFSET(0x1F15B540)
#define UNITYENGINE_PHYSICS_GETRIGIDBODYVELOCITYTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1F163A90)
#define UNITYENGINE_PHYSICS_GET_DEFAULTCONTACTOFFSET_OFFSET UNITYSDK_OFFSET(0x1F15B3D0)
#define UNITYENGINE_PHYSICS_GET_DEFAULTPHYSICSSCENE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F15B4B0)
#define UNITYENGINE_PHYSICS_GET_DEFAULTPHYSICSSCENE_OFFSET UNITYSDK_OFFSET(0x1F15B440)
#define UNITYENGINE_PHYSICS_GET_ENABLEKINEMATICMOVESMOOTHFRAMESKIPFIX_OFFSET UNITYSDK_OFFSET(0x1F161660)
#define UNITYENGINE_PHYSICS_GET_FIXEDFRAMECOUNTER_OFFSET UNITYSDK_OFFSET(0x1F161690)
#define UNITYENGINE_PHYSICS_GET_GRAVITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F15B3C0)
#define UNITYENGINE_PHYSICS_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1F15B350)
#define UNITYENGINE_PHYSICS_GET_INTERPOLATEPHYSICSANIMATORSNAPTOFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1F15B400)
#define UNITYENGINE_PHYSICS_GET_INTERPOLATEPHYSICSANIMATOR_OFFSET UNITYSDK_OFFSET(0x1F15B3E0)
#define UNITYENGINE_PHYSICS_GET_PHYSICSSTEPFRAMESKIP_OFFSET UNITYSDK_OFFSET(0x1F161610)
#define UNITYENGINE_PHYSICS_GET_SKIPINTERPOLATEPASSIFALREADYEVALUATEDINFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1F15B420)
#define UNITYENGINE_PHYSICS_IGNORECOLLISION_1_OFFSET UNITYSDK_OFFSET(0x1F15B4D0)
#define UNITYENGINE_PHYSICS_IGNORECOLLISION_OFFSET UNITYSDK_OFFSET(0x1F15B4C0)
#define UNITYENGINE_PHYSICS_INTERNAL_GETCOLLIDERSNAPSHOTTHREADSAFE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F163DC0)
#define UNITYENGINE_PHYSICS_INTERNAL_GETCOLLIDERSNAPSHOTTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1F163D30)
#define UNITYENGINE_PHYSICS_INTERNAL_GETIGNORECOLLISIONTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1F163C40)
#define UNITYENGINE_PHYSICS_INTERNAL_GETRIGIDBODYVELOCITYTHREADSAFE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F163BD0)
#define UNITYENGINE_PHYSICS_INTERNAL_GETRIGIDBODYVELOCITYTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1F163B50)
#define UNITYENGINE_PHYSICS_INTERNAL_RAYCASTALL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F15F130)
#define UNITYENGINE_PHYSICS_INTERNAL_RAYCASTALL_OFFSET UNITYSDK_OFFSET(0x1F15F080)
#define UNITYENGINE_PHYSICS_INVOKEBEFOREPHYSICSFIXEDUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1F15B2D0)
#define UNITYENGINE_PHYSICS_INVOKEEARLYUPDATEBEFOREPHYSICSRESETINTERPOLATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F163A10)
#define UNITYENGINE_PHYSICS_LINECAST_1_OFFSET UNITYSDK_OFFSET(0x1F15DCE0)
#define UNITYENGINE_PHYSICS_LINECAST_2_OFFSET UNITYSDK_OFFSET(0x1F15DD90)
#define UNITYENGINE_PHYSICS_LINECAST_3_OFFSET UNITYSDK_OFFSET(0x1F15DFB0)
#define UNITYENGINE_PHYSICS_LINECAST_4_OFFSET UNITYSDK_OFFSET(0x1F15E080)
#define UNITYENGINE_PHYSICS_LINECAST_OFFSET UNITYSDK_OFFSET(0x1F15DB10)
#define UNITYENGINE_PHYSICS_MARKCOLLISIONSDIRTYWITHLAYER_OFFSET UNITYSDK_OFFSET(0x1F15B570)
#define UNITYENGINE_PHYSICS_NAMETOTAG_OFFSET UNITYSDK_OFFSET(0x1F1639F0)
#define UNITYENGINE_PHYSICS_ONSCENECONTACTMODIFY_OFFSET UNITYSDK_OFFSET(0x1F15B180)
#define UNITYENGINE_PHYSICS_OVERLAPBOXNONALLOC_1_OFFSET UNITYSDK_OFFSET(0x1F163020)
#define UNITYENGINE_PHYSICS_OVERLAPBOXNONALLOC_OFFSET UNITYSDK_OFFSET(0x1F162E10)
#define UNITYENGINE_PHYSICS_OVERLAPBOX_1_OFFSET UNITYSDK_OFFSET(0x1F162D20)
#define UNITYENGINE_PHYSICS_OVERLAPBOX_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F162B70)
#define UNITYENGINE_PHYSICS_OVERLAPBOX_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1F162AC0)
#define UNITYENGINE_PHYSICS_OVERLAPBOX_OFFSET UNITYSDK_OFFSET(0x1F162B80)
#define UNITYENGINE_PHYSICS_OVERLAPCAPSULENONALLOC_1_OFFSET UNITYSDK_OFFSET(0x1F163900)
#define UNITYENGINE_PHYSICS_OVERLAPCAPSULENONALLOC_OFFSET UNITYSDK_OFFSET(0x1F163710)
#define UNITYENGINE_PHYSICS_OVERLAPSPHERENONALLOC_1_OFFSET UNITYSDK_OFFSET(0x1F161CE0)
#define UNITYENGINE_PHYSICS_OVERLAPSPHERENONALLOC_OFFSET UNITYSDK_OFFSET(0x1F161B30)
#define UNITYENGINE_PHYSICS_OVERLAPSPHERE_1_OFFSET UNITYSDK_OFFSET(0x1F161370)
#define UNITYENGINE_PHYSICS_OVERLAPSPHERE_2_OFFSET UNITYSDK_OFFSET(0x1F161410)
#define UNITYENGINE_PHYSICS_OVERLAPSPHERE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1611E0)
#define UNITYENGINE_PHYSICS_OVERLAPSPHERE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1F161140)
#define UNITYENGINE_PHYSICS_OVERLAPSPHERE_OFFSET UNITYSDK_OFFSET(0x1F1611F0)
#define UNITYENGINE_PHYSICS_QUERY_CLOSESTPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F1619A0)
#define UNITYENGINE_PHYSICS_QUERY_CLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x1F161900)
#define UNITYENGINE_PHYSICS_QUERY_COMPUTEPENETRATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F161730)
#define UNITYENGINE_PHYSICS_QUERY_COMPUTEPENETRATION_OFFSET UNITYSDK_OFFSET(0x1F1616B0)
#define UNITYENGINE_PHYSICS_QUERY_SPHERECASTALL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F160D90)
#define UNITYENGINE_PHYSICS_QUERY_SPHERECASTALL_OFFSET UNITYSDK_OFFSET(0x1F160CC0)
#define UNITYENGINE_PHYSICS_RAYCASTALL_1_OFFSET UNITYSDK_OFFSET(0x1F15F3D0)
#define UNITYENGINE_PHYSICS_RAYCASTALL_2_OFFSET UNITYSDK_OFFSET(0x1F15F670)
#define UNITYENGINE_PHYSICS_RAYCASTALL_3_OFFSET UNITYSDK_OFFSET(0x1F15F750)
#define UNITYENGINE_PHYSICS_RAYCASTALL_4_OFFSET UNITYSDK_OFFSET(0x1F15F830)
#define UNITYENGINE_PHYSICS_RAYCASTALL_5_OFFSET UNITYSDK_OFFSET(0x1F15F8F0)
#define UNITYENGINE_PHYSICS_RAYCASTALL_6_OFFSET UNITYSDK_OFFSET(0x1F15F9E0)
#define UNITYENGINE_PHYSICS_RAYCASTALL_7_OFFSET UNITYSDK_OFFSET(0x1F15FAB0)
#define UNITYENGINE_PHYSICS_RAYCASTALL_8_OFFSET UNITYSDK_OFFSET(0x1F15FB80)
#define UNITYENGINE_PHYSICS_RAYCASTALL_OFFSET UNITYSDK_OFFSET(0x1F15F140)
#define UNITYENGINE_PHYSICS_RAYCASTNONALLOC_1_OFFSET UNITYSDK_OFFSET(0x1F15FF70)
#define UNITYENGINE_PHYSICS_RAYCASTNONALLOC_2_OFFSET UNITYSDK_OFFSET(0x1F160150)
#define UNITYENGINE_PHYSICS_RAYCASTNONALLOC_3_OFFSET UNITYSDK_OFFSET(0x1F160330)
#define UNITYENGINE_PHYSICS_RAYCASTNONALLOC_4_OFFSET UNITYSDK_OFFSET(0x1F160510)
#define UNITYENGINE_PHYSICS_RAYCASTNONALLOC_5_OFFSET UNITYSDK_OFFSET(0x1F160710)
#define UNITYENGINE_PHYSICS_RAYCASTNONALLOC_6_OFFSET UNITYSDK_OFFSET(0x1F160900)
#define UNITYENGINE_PHYSICS_RAYCASTNONALLOC_7_OFFSET UNITYSDK_OFFSET(0x1F160AE0)
#define UNITYENGINE_PHYSICS_RAYCASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1F15FC50)
#define UNITYENGINE_PHYSICS_RAYCAST_10_OFFSET UNITYSDK_OFFSET(0x1F15CD30)
#define UNITYENGINE_PHYSICS_RAYCAST_11_OFFSET UNITYSDK_OFFSET(0x1F15CF00)
#define UNITYENGINE_PHYSICS_RAYCAST_12_OFFSET UNITYSDK_OFFSET(0x1F15D0C0)
#define UNITYENGINE_PHYSICS_RAYCAST_13_OFFSET UNITYSDK_OFFSET(0x1F15D280)
#define UNITYENGINE_PHYSICS_RAYCAST_14_OFFSET UNITYSDK_OFFSET(0x1F15D430)
#define UNITYENGINE_PHYSICS_RAYCAST_15_OFFSET UNITYSDK_OFFSET(0x1F15D640)
#define UNITYENGINE_PHYSICS_RAYCAST_16_OFFSET UNITYSDK_OFFSET(0x1F15D720)
#define UNITYENGINE_PHYSICS_RAYCAST_17_OFFSET UNITYSDK_OFFSET(0x1F15D920)
#define UNITYENGINE_PHYSICS_RAYCAST_1_OFFSET UNITYSDK_OFFSET(0x1F15BA90)
#define UNITYENGINE_PHYSICS_RAYCAST_2_OFFSET UNITYSDK_OFFSET(0x1F15BC50)
#define UNITYENGINE_PHYSICS_RAYCAST_3_OFFSET UNITYSDK_OFFSET(0x1F15BE10)
#define UNITYENGINE_PHYSICS_RAYCAST_4_OFFSET UNITYSDK_OFFSET(0x1F15BFC0)
#define UNITYENGINE_PHYSICS_RAYCAST_5_OFFSET UNITYSDK_OFFSET(0x1F15C300)
#define UNITYENGINE_PHYSICS_RAYCAST_6_OFFSET UNITYSDK_OFFSET(0x1F15C520)
#define UNITYENGINE_PHYSICS_RAYCAST_7_OFFSET UNITYSDK_OFFSET(0x1F15C740)
#define UNITYENGINE_PHYSICS_RAYCAST_8_OFFSET UNITYSDK_OFFSET(0x1F15C940)
#define UNITYENGINE_PHYSICS_RAYCAST_9_OFFSET UNITYSDK_OFFSET(0x1F15CB40)
#define UNITYENGINE_PHYSICS_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1F15B7C0)
#define UNITYENGINE_PHYSICS_REGISTERASYNCQUERY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F161580)
#define UNITYENGINE_PHYSICS_REGISTERASYNCQUERY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1F161510)
#define UNITYENGINE_PHYSICS_REMOVE_CONTACTMODIFYEVENTCCD_OFFSET UNITYSDK_OFFSET(0x1F15B0A0)
#define UNITYENGINE_PHYSICS_REMOVE_CONTACTMODIFYEVENT_OFFSET UNITYSDK_OFFSET(0x1F15AEE0)
#define UNITYENGINE_PHYSICS_SETLOCKSCENE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F161500)
#define UNITYENGINE_PHYSICS_SETLOCKSCENE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1F1614A0)
#define UNITYENGINE_PHYSICS_SETPHYSICSTHREADINGMODE_OFFSET UNITYSDK_OFFSET(0x1F15B7A0)
#define UNITYENGINE_PHYSICS_SET_DETAILEDINTERPOLATIONFORFRAMESKIP_OFFSET UNITYSDK_OFFSET(0x1F161640)
#define UNITYENGINE_PHYSICS_SET_ENABLEKINEMATICMOVESMOOTHFRAMESKIPFIX_OFFSET UNITYSDK_OFFSET(0x1F161670)
#define UNITYENGINE_PHYSICS_SET_ENABLEMOVESMOOTHINTERPOLATION_OFFSET UNITYSDK_OFFSET(0x1F161650)
#define UNITYENGINE_PHYSICS_SET_EVENOUTVELOCITYFORFRAMESKIP_OFFSET UNITYSDK_OFFSET(0x1F161630)
#define UNITYENGINE_PHYSICS_SET_INTERPOLATEPHYSICSANIMATORSNAPTOFRAMERATE_OFFSET UNITYSDK_OFFSET(0x1F15B410)
#define UNITYENGINE_PHYSICS_SET_INTERPOLATEPHYSICSANIMATOR_OFFSET UNITYSDK_OFFSET(0x1F15B3F0)
#define UNITYENGINE_PHYSICS_SET_INTERPOLATIONOFFSETFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1F161680)
#define UNITYENGINE_PHYSICS_SET_PHYSICSSTEPFRAMESKIP_OFFSET UNITYSDK_OFFSET(0x1F161620)
#define UNITYENGINE_PHYSICS_SET_SKIPINTERPOLATEPASSIFALREADYEVALUATEDINFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1F15B430)
#define UNITYENGINE_PHYSICS_SPHERECASTALL_1_OFFSET UNITYSDK_OFFSET(0x1F161030)
#define UNITYENGINE_PHYSICS_SPHERECASTALL_OFFSET UNITYSDK_OFFSET(0x1F160DA0)
#define UNITYENGINE_PHYSICS_SPHERECASTNONALLOC_1_OFFSET UNITYSDK_OFFSET(0x1F162710)
#define UNITYENGINE_PHYSICS_SPHERECASTNONALLOC_2_OFFSET UNITYSDK_OFFSET(0x1F162820)
#define UNITYENGINE_PHYSICS_SPHERECASTNONALLOC_3_OFFSET UNITYSDK_OFFSET(0x1F162950)
#define UNITYENGINE_PHYSICS_SPHERECASTNONALLOC_OFFSET UNITYSDK_OFFSET(0x1F162490)
#define UNITYENGINE_PHYSICS_SPHERECAST_1_OFFSET UNITYSDK_OFFSET(0x1F15E950)
#define UNITYENGINE_PHYSICS_SPHERECAST_2_OFFSET UNITYSDK_OFFSET(0x1F15EA70)
#define UNITYENGINE_PHYSICS_SPHERECAST_3_OFFSET UNITYSDK_OFFSET(0x1F15EB80)
#define UNITYENGINE_PHYSICS_SPHERECAST_OFFSET UNITYSDK_OFFSET(0x1F15E650)
#define UNITYENGINE_PHYSICS_SYNCTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F1616A0)
#define UNITYENGINE_PHYSICS_UNREGISTERASYNCQUERY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F161600)
#define UNITYENGINE_PHYSICS_UNREGISTERASYNCQUERY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1F161590)
#define UNITYENGINE_PHYSICS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F15B250)
#define UNITYENGINE_PHYSICS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F163DD0)

namespace UnityEngine
{
	inline static constexpr unsigned int Physics_TypeDefinitionIndex = 7796;

	class Physics : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_EarlyUpdateBeforePhysicsResetInterpolation()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Physics_TypeDefinitionIndex)->GetStaticField(0x6600);
		}
		static ::System::Action** StaticGet_BeforePhysicsFixedUpdate()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Physics_TypeDefinitionIndex)->GetStaticField(0x6608);
		}
		static ::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>** StaticGet_ContactModifyEvent()
		{
			return (::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>**)Il2CppClass::FromTypeDefinitionIndex(Physics_TypeDefinitionIndex)->GetStaticField(0x6610);
		}
		static ::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>** StaticGet_ContactModifyEventCCD()
		{
			return (::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>**)Il2CppClass::FromTypeDefinitionIndex(Physics_TypeDefinitionIndex)->GetStaticField(0x6618);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS__CTOR_OFFSET))(this);
		}

		static ::System::Void add_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_ADD_CONTACTMODIFYEVENT_OFFSET))(value);
		}

		static ::System::Void remove_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_REMOVE_CONTACTMODIFYEVENT_OFFSET))(value);
		}

		static ::System::Void add_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_ADD_CONTACTMODIFYEVENTCCD_OFFSET))(value);
		}

		static ::System::Void remove_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_REMOVE_CONTACTMODIFYEVENTCCD_OFFSET))(value);
		}

		static ::System::Void OnSceneContactModify(::UnityEngine::PhysicsScene scene, ::System::IntPtr buffer, ::System::Int32 count, ::System::Boolean isCCD)
		{
			return ((::System::Void(*)(::UnityEngine::PhysicsScene, ::System::IntPtr, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_ONSCENECONTACTMODIFY_OFFSET))(scene, buffer, count, isCCD);
		}

		static ::UnityEngine::Vector3 get_gravity()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GET_GRAVITY_OFFSET))();
		}

		static ::System::Single get_defaultContactOffset()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GET_DEFAULTCONTACTOFFSET_OFFSET))();
		}

		static ::UnityEngine::PhysicsAnimatorInterpolation get_interpolatePhysicsAnimator()
		{
			return ((::UnityEngine::PhysicsAnimatorInterpolation(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GET_INTERPOLATEPHYSICSANIMATOR_OFFSET))();
		}

		static ::System::Void set_interpolatePhysicsAnimator(::UnityEngine::PhysicsAnimatorInterpolation value)
		{
			return ((::System::Void(*)(::UnityEngine::PhysicsAnimatorInterpolation))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SET_INTERPOLATEPHYSICSANIMATOR_OFFSET))(value);
		}

		static ::System::Boolean get_interpolatePhysicsAnimatorSnapToFrameRate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GET_INTERPOLATEPHYSICSANIMATORSNAPTOFRAMERATE_OFFSET))();
		}

		static ::System::Void set_interpolatePhysicsAnimatorSnapToFrameRate(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SET_INTERPOLATEPHYSICSANIMATORSNAPTOFRAMERATE_OFFSET))(value);
		}

		static ::System::Boolean get_skipInterpolatePassIfAlreadyEvaluatedInFixedUpdate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GET_SKIPINTERPOLATEPASSIFALREADYEVALUATEDINFIXEDUPDATE_OFFSET))();
		}

		static ::System::Void set_skipInterpolatePassIfAlreadyEvaluatedInFixedUpdate(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SET_SKIPINTERPOLATEPASSIFALREADYEVALUATEDINFIXEDUPDATE_OFFSET))(value);
		}

		static ::UnityEngine::PhysicsScene get_defaultPhysicsScene()
		{
			return ((::UnityEngine::PhysicsScene(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GET_DEFAULTPHYSICSSCENE_OFFSET))();
		}

		static ::System::Void IgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2, ::System::Boolean ignore)
		{
			return ((::System::Void(*)(::UnityEngine::Collider*, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_IGNORECOLLISION_OFFSET))(collider1, collider2, ignore);
		}

		static ::System::Void IgnoreCollision_1(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2)
		{
			return ((::System::Void(*)(::UnityEngine::Collider*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_IGNORECOLLISION_1_OFFSET))(collider1, collider2);
		}

		static ::System::Boolean GetIgnoreLayerCollision(::System::Int32 layer1, ::System::Int32 layer2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GETIGNORELAYERCOLLISION_OFFSET))(layer1, layer2);
		}

		static ::System::Void ColliderApplyCollisionWithLayer(::UnityEngine::Collider* collider, ::System::Int32 layer, ::System::Boolean apply)
		{
			return ((::System::Void(*)(::UnityEngine::Collider*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_COLLIDERAPPLYCOLLISIONWITHLAYER_OFFSET))(collider, layer, apply);
		}

		static ::System::Boolean ColliderApplyCollisionWithLayerNoDirty(::UnityEngine::Collider* collider, ::System::Int32 layer, ::System::Boolean apply)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_COLLIDERAPPLYCOLLISIONWITHLAYERNODIRTY_OFFSET))(collider, layer, apply);
		}

		static ::System::Void MarkCollisionsDirtyWithLayer(::System::Int32 layer)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_MARKCOLLISIONSDIRTYWITHLAYER_OFFSET))(layer);
		}

		static ::System::Void ColliderApplyCollisions(::Il2CppArray<::UnityEngine::Collider*>* colliders, ::System::Int32 layer, ::System::Boolean apply)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_COLLIDERAPPLYCOLLISIONS_OFFSET))(colliders, layer, apply);
		}

		static ::System::Void ColliderIgnoreCollisionWithLayer(::UnityEngine::Collider* collider, ::System::Int32 layer, ::System::Boolean ignore)
		{
			return ((::System::Void(*)(::UnityEngine::Collider*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_COLLIDERIGNORECOLLISIONWITHLAYER_OFFSET))(collider, layer, ignore);
		}

		static ::System::Void SetPhysicsThreadingMode(::System::Boolean useJob)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SETPHYSICSTHREADINGMODE_OFFSET))(useJob);
		}

		static ::System::Boolean GetIgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GETIGNORECOLLISION_OFFSET))(collider1, collider2);
		}

		static ::System::Boolean Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_OFFSET))(origin, direction, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Boolean Raycast_1(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::System::Int32 layerMask)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_1_OFFSET))(origin, direction, maxDistance, layerMask);
		}

		static ::System::Boolean Raycast_2(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::System::Single maxDistance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_2_OFFSET))(origin, direction, maxDistance);
		}

		static ::System::Boolean Raycast_3(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_3_OFFSET))(origin, direction);
		}

		static ::System::Boolean Raycast_4(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_4_OFFSET))(origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}

		static ::System::Boolean Raycast_5(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_5_OFFSET))(origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Boolean Raycast_6(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean isIkRaycast, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_6_OFFSET))(origin, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction, isIkRaycast, ignoreDynamic, ignoreStatic);
		}

		static ::System::Boolean Raycast_7(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_7_OFFSET))(origin, direction, hitInfo, maxDistance, layerMask);
		}

		static ::System::Boolean Raycast_8(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_8_OFFSET))(origin, direction, hitInfo, maxDistance);
		}

		static ::System::Boolean Raycast_9(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_9_OFFSET))(origin, direction, hitInfo);
		}

		static ::System::Boolean Raycast_10(::UnityEngine::Ray ray, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_10_OFFSET))(ray, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Boolean Raycast_11(::UnityEngine::Ray ray, ::System::Single maxDistance, ::System::Int32 layerMask)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_11_OFFSET))(ray, maxDistance, layerMask);
		}

		static ::System::Boolean Raycast_12(::UnityEngine::Ray ray, ::System::Single maxDistance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_12_OFFSET))(ray, maxDistance);
		}

		static ::System::Boolean Raycast_13(::UnityEngine::Ray ray)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_13_OFFSET))(ray);
		}

		static ::System::Boolean Raycast_14(::UnityEngine::Ray ray, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_14_OFFSET))(ray, hitInfo, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Boolean Raycast_15(::UnityEngine::Ray ray, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_15_OFFSET))(ray, hitInfo, maxDistance, layerMask);
		}

		static ::System::Boolean Raycast_16(::UnityEngine::Ray ray, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_16_OFFSET))(ray, hitInfo, maxDistance);
		}

		static ::System::Boolean Raycast_17(::UnityEngine::Ray ray, ::UnityEngine::RaycastHit& hitInfo)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCAST_17_OFFSET))(ray, hitInfo);
		}

		static ::System::Boolean Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_LINECAST_OFFSET))(start, end, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Boolean Linecast_1(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Int32 layerMask)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_LINECAST_1_OFFSET))(start, end, layerMask);
		}

		static ::System::Boolean Linecast_2(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::RaycastHit& hitInfo, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_LINECAST_2_OFFSET))(start, end, hitInfo, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Boolean Linecast_3(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::RaycastHit& hitInfo, ::System::Int32 layerMask)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_LINECAST_3_OFFSET))(start, end, hitInfo, layerMask);
		}

		static ::System::Boolean Linecast_4(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::RaycastHit& hitInfo)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_LINECAST_4_OFFSET))(start, end, hitInfo);
		}

		static ::System::Boolean CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_CAPSULECAST_OFFSET))(point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Boolean CapsuleCast_1(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_CAPSULECAST_1_OFFSET))(point1, point2, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}

		static ::System::Boolean SphereCast(::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SPHERECAST_OFFSET))(origin, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Boolean SphereCast_1(::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SPHERECAST_1_OFFSET))(origin, radius, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
		}

		static ::System::Boolean SphereCast_2(::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SPHERECAST_2_OFFSET))(origin, radius, direction, hitInfo, maxDistance, layerMask);
		}

		static ::System::Boolean SphereCast_3(::UnityEngine::Ray ray, ::System::Single radius, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SPHERECAST_3_OFFSET))(ray, radius, hitInfo, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Boolean BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_BOXCAST_OFFSET))(center, halfExtents, direction, hitInfo, orientation, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>* Internal_RaycastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreOverlap, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Ray, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_INTERNAL_RAYCASTALL_OFFSET))(physicsScene, ray, maxDistance, mask, queryTriggerInteraction, ignoreOverlap, ignoreDynamic, ignoreStatic);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>* RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTALL_OFFSET))(origin, direction, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>* RaycastAll_1(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreOverlap, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTALL_1_OFFSET))(origin, direction, maxDistance, layerMask, queryTriggerInteraction, ignoreOverlap, ignoreDynamic, ignoreStatic);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>* RaycastAll_2(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::System::Int32 layerMask)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTALL_2_OFFSET))(origin, direction, maxDistance, layerMask);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>* RaycastAll_3(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::System::Single maxDistance)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTALL_3_OFFSET))(origin, direction, maxDistance);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>* RaycastAll_4(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTALL_4_OFFSET))(origin, direction);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>* RaycastAll_5(::UnityEngine::Ray ray, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::UnityEngine::Ray, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTALL_5_OFFSET))(ray, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>* RaycastAll_6(::UnityEngine::Ray ray, ::System::Single maxDistance, ::System::Int32 layerMask)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::UnityEngine::Ray, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTALL_6_OFFSET))(ray, maxDistance, layerMask);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>* RaycastAll_7(::UnityEngine::Ray ray, ::System::Single maxDistance)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::UnityEngine::Ray, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTALL_7_OFFSET))(ray, maxDistance);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>* RaycastAll_8(::UnityEngine::Ray ray)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::UnityEngine::Ray))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTALL_8_OFFSET))(ray);
		}

		static ::System::Int32 RaycastNonAlloc(::UnityEngine::Ray ray, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTNONALLOC_OFFSET))(ray, results, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Int32 RaycastNonAlloc_1(::UnityEngine::Ray ray, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance, ::System::Int32 layerMask)
		{
			return ((::System::Int32(*)(::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTNONALLOC_1_OFFSET))(ray, results, maxDistance, layerMask);
		}

		static ::System::Int32 RaycastNonAlloc_2(::UnityEngine::Ray ray, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance)
		{
			return ((::System::Int32(*)(::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTNONALLOC_2_OFFSET))(ray, results, maxDistance);
		}

		static ::System::Int32 RaycastNonAlloc_3(::UnityEngine::Ray ray, ::Il2CppArray<::UnityEngine::RaycastHit>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTNONALLOC_3_OFFSET))(ray, results);
		}

		static ::System::Int32 RaycastNonAlloc_4(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTNONALLOC_4_OFFSET))(origin, direction, results, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Int32 RaycastNonAlloc_5(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance, ::System::Int32 layerMask)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTNONALLOC_5_OFFSET))(origin, direction, results, maxDistance, layerMask);
		}

		static ::System::Int32 RaycastNonAlloc_6(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTNONALLOC_6_OFFSET))(origin, direction, results, maxDistance);
		}

		static ::System::Int32 RaycastNonAlloc_7(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_RAYCASTNONALLOC_7_OFFSET))(origin, direction, results);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>* Query_SphereCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_QUERY_SPHERECASTALL_OFFSET))(physicsScene, origin, radius, direction, maxDistance, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>* SphereCastAll(::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SPHERECASTALL_OFFSET))(origin, radius, direction, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>* SphereCastAll_1(::UnityEngine::Ray ray, ::System::Single radius, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::UnityEngine::Ray, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SPHERECASTALL_1_OFFSET))(ray, radius, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>* OverlapSphere_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, ::System::Single radius, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPSPHERE_INTERNAL_OFFSET))(physicsScene, position, radius, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>* OverlapSphere(::UnityEngine::Vector3 position, ::System::Single radius, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPSPHERE_OFFSET))(position, radius, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>* OverlapSphere_1(::UnityEngine::Vector3 position, ::System::Single radius, ::System::Int32 layerMask)
		{
			return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPSPHERE_1_OFFSET))(position, radius, layerMask);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>* OverlapSphere_2(::UnityEngine::Vector3 position, ::System::Single radius)
		{
			return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPSPHERE_2_OFFSET))(position, radius);
		}

		static ::System::Void SetLockScene_Internal(::UnityEngine::PhysicsScene physicsScene, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::PhysicsScene, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SETLOCKSCENE_INTERNAL_OFFSET))(physicsScene, value);
		}

		static ::System::Void RegisterAsyncQuery_Internal(::Unity::Jobs::JobHandle jobHandle, ::UnityEngine::PhysicsScene physicsScene)
		{
			return ((::System::Void(*)(::Unity::Jobs::JobHandle, ::UnityEngine::PhysicsScene))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_REGISTERASYNCQUERY_INTERNAL_OFFSET))(jobHandle, physicsScene);
		}

		static ::System::Void UnRegisterAsyncQuery_Internal(::Unity::Jobs::JobHandle jobHandle, ::UnityEngine::PhysicsScene physicsScene)
		{
			return ((::System::Void(*)(::Unity::Jobs::JobHandle, ::UnityEngine::PhysicsScene))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_UNREGISTERASYNCQUERY_INTERNAL_OFFSET))(jobHandle, physicsScene);
		}

		static ::System::UInt32 get_physicsStepFrameSkip()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GET_PHYSICSSTEPFRAMESKIP_OFFSET))();
		}

		static ::System::Void set_physicsStepFrameSkip(::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SET_PHYSICSSTEPFRAMESKIP_OFFSET))(value);
		}

		static ::System::Void set_evenOutVelocityForFrameSkip(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SET_EVENOUTVELOCITYFORFRAMESKIP_OFFSET))(value);
		}

		static ::System::Void set_detailedInterpolationForFrameSkip(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SET_DETAILEDINTERPOLATIONFORFRAMESKIP_OFFSET))(value);
		}

		static ::System::Void set_enableMoveSmoothInterpolation(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SET_ENABLEMOVESMOOTHINTERPOLATION_OFFSET))(value);
		}

		static ::System::Boolean get_enableKinematicMoveSmoothFrameSkipFix()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GET_ENABLEKINEMATICMOVESMOOTHFRAMESKIPFIX_OFFSET))();
		}

		static ::System::Void set_enableKinematicMoveSmoothFrameSkipFix(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SET_ENABLEKINEMATICMOVESMOOTHFRAMESKIPFIX_OFFSET))(value);
		}

		static ::System::Void set_interpolationOffsetFrameCount(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SET_INTERPOLATIONOFFSETFRAMECOUNT_OFFSET))(value);
		}

		static ::System::UInt32 get_fixedFrameCounter()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GET_FIXEDFRAMECOUNTER_OFFSET))();
		}

		static ::System::Void SyncTransforms()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SYNCTRANSFORMS_OFFSET))();
		}

		static ::System::Boolean Query_ComputePenetration(::UnityEngine::Collider* colliderA, ::UnityEngine::Vector3 positionA, ::UnityEngine::Quaternion rotationA, ::UnityEngine::Collider* colliderB, ::UnityEngine::Vector3 positionB, ::UnityEngine::Quaternion rotationB, ::UnityEngine::Vector3& direction, ::System::Single& distance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_QUERY_COMPUTEPENETRATION_OFFSET))(colliderA, positionA, rotationA, colliderB, positionB, rotationB, direction, distance);
		}

		static ::System::Boolean ComputePenetration(::UnityEngine::Collider* colliderA, ::UnityEngine::Vector3 positionA, ::UnityEngine::Quaternion rotationA, ::UnityEngine::Collider* colliderB, ::UnityEngine::Vector3 positionB, ::UnityEngine::Quaternion rotationB, ::UnityEngine::Vector3& direction, ::System::Single& distance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_COMPUTEPENETRATION_OFFSET))(colliderA, positionA, rotationA, colliderB, positionB, rotationB, direction, distance);
		}

		static ::UnityEngine::Vector3 Query_ClosestPoint(::UnityEngine::Collider* collider, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_QUERY_CLOSESTPOINT_OFFSET))(collider, position, rotation, point);
		}

		static ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3 point, ::UnityEngine::Collider* collider, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_CLOSESTPOINT_OFFSET))(point, collider, position, rotation);
		}

		static ::System::Int32 OverlapSphereNonAlloc(::UnityEngine::Vector3 position, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPSPHERENONALLOC_OFFSET))(position, radius, results, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Int32 OverlapSphereNonAlloc_1(::UnityEngine::Vector3 position, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPSPHERENONALLOC_1_OFFSET))(position, radius, results, layerMask);
		}

		static ::System::Boolean CheckSphere_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, ::System::Single radius, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_CHECKSPHERE_INTERNAL_OFFSET))(physicsScene, position, radius, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Boolean CheckSphere(::UnityEngine::Vector3 position, ::System::Single radius, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_CHECKSPHERE_OFFSET))(position, radius, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Boolean CheckSphere_1(::UnityEngine::Vector3 position, ::System::Single radius, ::System::Int32 layerMask)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_CHECKSPHERE_1_OFFSET))(position, radius, layerMask);
		}

		static ::System::Int32 CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_CAPSULECASTNONALLOC_OFFSET))(point1, point2, radius, direction, results, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Int32 CapsuleCastNonAlloc_1(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance, ::System::Int32 layerMask)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_CAPSULECASTNONALLOC_1_OFFSET))(point1, point2, radius, direction, results, maxDistance, layerMask);
		}

		static ::System::Int32 SphereCastNonAlloc(::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SPHERECASTNONALLOC_OFFSET))(origin, radius, direction, results, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Int32 SphereCastNonAlloc_1(::UnityEngine::Vector3 origin, ::System::Single radius, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance, ::System::Int32 layerMask)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SPHERECASTNONALLOC_1_OFFSET))(origin, radius, direction, results, maxDistance, layerMask);
		}

		static ::System::Int32 SphereCastNonAlloc_2(::UnityEngine::Ray ray, ::System::Single radius, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::Ray, ::System::Single, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SPHERECASTNONALLOC_2_OFFSET))(ray, radius, results, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Int32 SphereCastNonAlloc_3(::UnityEngine::Ray ray, ::System::Single radius, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::System::Single maxDistance, ::System::Int32 layerMask)
		{
			return ((::System::Int32(*)(::UnityEngine::Ray, ::System::Single, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SPHERECASTNONALLOC_3_OFFSET))(ray, radius, results, maxDistance, layerMask);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>* OverlapBox_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::UnityEngine::PhysicsScene, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPBOX_INTERNAL_OFFSET))(physicsScene, center, halfExtents, orientation, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>* OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPBOX_OFFSET))(center, halfExtents, orientation, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>* OverlapBox_1(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation)
		{
			return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPBOX_1_OFFSET))(center, halfExtents, orientation);
		}

		static ::System::Int32 OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::Il2CppArray<::UnityEngine::Collider*>* results, ::UnityEngine::Quaternion orientation, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPBOXNONALLOC_OFFSET))(center, halfExtents, results, orientation, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Int32 OverlapBoxNonAlloc_1(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::Il2CppArray<::UnityEngine::Collider*>* results, ::UnityEngine::Quaternion orientation, ::System::Int32 mask)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Collider*>*, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPBOXNONALLOC_1_OFFSET))(center, halfExtents, results, orientation, mask);
		}

		static ::System::Int32 BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_BOXCASTNONALLOC_OFFSET))(center, halfExtents, direction, results, orientation, maxDistance, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Int32 BoxCastNonAlloc_1(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_BOXCASTNONALLOC_1_OFFSET))(center, halfExtents, direction, results, orientation, maxDistance);
		}

		static ::System::Int32 BoxCastNonAlloc_2(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::Il2CppArray<::UnityEngine::RaycastHit>* results, ::UnityEngine::Quaternion orientation, ::System::Single maxDistance, ::System::Int32 layerMask)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::UnityEngine::Quaternion, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_BOXCASTNONALLOC_2_OFFSET))(center, halfExtents, direction, results, orientation, maxDistance, layerMask);
		}

		static ::System::Int32 OverlapCapsuleNonAlloc(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPCAPSULENONALLOC_OFFSET))(point0, point1, radius, results, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Int32 OverlapCapsuleNonAlloc_1(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, ::System::Single radius, ::Il2CppArray<::UnityEngine::Collider*>* results, ::System::Int32 layerMask)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPCAPSULENONALLOC_1_OFFSET))(point0, point1, radius, results, layerMask);
		}

		static ::System::Int32 NameToTag(::System::String* tagName)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_NAMETOTAG_OFFSET))(tagName);
		}

		static ::System::Void BakeMesh(::System::Int32 meshID, ::System::Boolean convex)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_BAKEMESH_OFFSET))(meshID, convex);
		}

		static ::System::Void InvokeEarlyUpdateBeforePhysicsResetInterpolationCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_INVOKEEARLYUPDATEBEFOREPHYSICSRESETINTERPOLATIONCALLBACK_OFFSET))();
		}

		static ::System::Void InvokeBeforePhysicsFixedUpdateCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_INVOKEBEFOREPHYSICSFIXEDUPDATECALLBACK_OFFSET))();
		}

		static ::UnityEngine::Vector3 GetRigidbodyVelocityThreadSafe(::System::Int32 rigidbodyInstanceId)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GETRIGIDBODYVELOCITYTHREADSAFE_OFFSET))(rigidbodyInstanceId);
		}

		static ::UnityEngine::Vector3 Internal_GetRigidbodyVelocityThreadSafe(::System::Int32 rigidbodyInstanceId)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_INTERNAL_GETRIGIDBODYVELOCITYTHREADSAFE_OFFSET))(rigidbodyInstanceId);
		}

		static ::System::Boolean GetIgnoreCollisionThreadSafe(::System::Int32 colliderInstanceId0, ::System::Int32 colliderInstanceId1)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GETIGNORECOLLISIONTHREADSAFE_OFFSET))(colliderInstanceId0, colliderInstanceId1);
		}

		static ::System::Boolean Internal_GetIgnoreCollisionThreadSafe(::System::Int32 colliderInstanceId0, ::System::Int32 colliderInstanceId1)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_INTERNAL_GETIGNORECOLLISIONTHREADSAFE_OFFSET))(colliderInstanceId0, colliderInstanceId1);
		}

		static ::UnityEngine::ColliderSnapshot GetColliderSnapshotThreadSafe(::System::Int32 colliderInstanceId)
		{
			return ((::UnityEngine::ColliderSnapshot(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GETCOLLIDERSNAPSHOTTHREADSAFE_OFFSET))(colliderInstanceId);
		}

		static ::UnityEngine::ColliderSnapshot Internal_GetColliderSnapshotThreadSafe(::System::Int32 colliderInstanceId)
		{
			return ((::UnityEngine::ColliderSnapshot(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_INTERNAL_GETCOLLIDERSNAPSHOTTHREADSAFE_OFFSET))(colliderInstanceId);
		}

		static ::System::Void get_gravity_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GET_GRAVITY_INJECTED_OFFSET))(ret);
		}

		static ::System::Void get_defaultPhysicsScene_Injected(::UnityEngine::PhysicsScene& ret)
		{
			return ((::System::Void(*)(::UnityEngine::PhysicsScene&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_GET_DEFAULTPHYSICSSCENE_INJECTED_OFFSET))(ret);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>* Internal_RaycastAll_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Ray& ray, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreOverlap, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Ray&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_INTERNAL_RAYCASTALL_INJECTED_OFFSET))(physicsScene, ray, maxDistance, mask, queryTriggerInteraction, ignoreOverlap, ignoreDynamic, ignoreStatic);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>* Query_SphereCastAll_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& origin, ::System::Single radius, ::UnityEngine::Vector3& direction, ::System::Single maxDistance, ::System::Int32 mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Vector3&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_QUERY_SPHERECASTALL_INJECTED_OFFSET))(physicsScene, origin, radius, direction, maxDistance, mask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>* OverlapSphere_Internal_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& position, ::System::Single radius, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPSPHERE_INTERNAL_INJECTED_OFFSET))(physicsScene, position, radius, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Void SetLockScene_Internal_Injected(::UnityEngine::PhysicsScene& physicsScene, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::PhysicsScene&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_SETLOCKSCENE_INTERNAL_INJECTED_OFFSET))(physicsScene, value);
		}

		static ::System::Void RegisterAsyncQuery_Internal_Injected(::Unity::Jobs::JobHandle& jobHandle, ::UnityEngine::PhysicsScene& physicsScene)
		{
			return ((::System::Void(*)(::Unity::Jobs::JobHandle&, ::UnityEngine::PhysicsScene&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_REGISTERASYNCQUERY_INTERNAL_INJECTED_OFFSET))(jobHandle, physicsScene);
		}

		static ::System::Void UnRegisterAsyncQuery_Internal_Injected(::Unity::Jobs::JobHandle& jobHandle, ::UnityEngine::PhysicsScene& physicsScene)
		{
			return ((::System::Void(*)(::Unity::Jobs::JobHandle&, ::UnityEngine::PhysicsScene&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_UNREGISTERASYNCQUERY_INTERNAL_INJECTED_OFFSET))(jobHandle, physicsScene);
		}

		static ::System::Boolean Query_ComputePenetration_Injected(::UnityEngine::Collider* colliderA, ::UnityEngine::Vector3& positionA, ::UnityEngine::Quaternion& rotationA, ::UnityEngine::Collider* colliderB, ::UnityEngine::Vector3& positionB, ::UnityEngine::Quaternion& rotationB, ::UnityEngine::Vector3& direction, ::System::Single& distance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Collider*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_QUERY_COMPUTEPENETRATION_INJECTED_OFFSET))(colliderA, positionA, rotationA, colliderB, positionB, rotationB, direction, distance);
		}

		static ::System::Void Query_ClosestPoint_Injected(::UnityEngine::Collider* collider, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation, ::UnityEngine::Vector3& point, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Collider*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_QUERY_CLOSESTPOINT_INJECTED_OFFSET))(collider, position, rotation, point, ret);
		}

		static ::System::Boolean CheckSphere_Internal_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& position, ::System::Single radius, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::System::Boolean(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::System::Single, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_CHECKSPHERE_INTERNAL_INJECTED_OFFSET))(physicsScene, position, radius, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>* OverlapBox_Internal_Injected(::UnityEngine::PhysicsScene& physicsScene, ::UnityEngine::Vector3& center, ::UnityEngine::Vector3& halfExtents, ::UnityEngine::Quaternion& orientation, ::System::Int32 layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean ignoreDynamic, ::System::Boolean ignoreStatic)
		{
			return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::UnityEngine::PhysicsScene&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Int32, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_OVERLAPBOX_INTERNAL_INJECTED_OFFSET))(physicsScene, center, halfExtents, orientation, layerMask, queryTriggerInteraction, ignoreDynamic, ignoreStatic);
		}

		static ::System::Void Internal_GetRigidbodyVelocityThreadSafe_Injected(::System::Int32 rigidbodyInstanceId, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_INTERNAL_GETRIGIDBODYVELOCITYTHREADSAFE_INJECTED_OFFSET))(rigidbodyInstanceId, ret);
		}

		static ::System::Void Internal_GetColliderSnapshotThreadSafe_Injected(::System::Int32 colliderInstanceId, ::UnityEngine::ColliderSnapshot& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::ColliderSnapshot&))((::PBYTE)hIl2Cpp + UNITYENGINE_PHYSICS_INTERNAL_GETCOLLIDERSNAPSHOTTHREADSAFE_INJECTED_OFFSET))(colliderInstanceId, ret);
		}
	};
}
