#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace Spine { class Attachment; }
namespace Spine { class BoundingBoxAttachment; }
namespace Spine { class Skin; }
namespace Spine { class Slot; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class PolygonCollider2D; }

#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_ADDCOLLIDERSFORSKIN_OFFSET UNITYSDK_OFFSET(0x191E2110)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x191E2F40)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x191E2860)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_CTOR_OFFSET UNITYSDK_OFFSET(0x191E2E30)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_DISPOSEEXCESSCOLLIDERSAFTER_OFFSET UNITYSDK_OFFSET(0x191E2680)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_CURRENTATTACHMENTNAME_OFFSET UNITYSDK_OFFSET(0x191E1210)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_CURRENTATTACHMENT_OFFSET UNITYSDK_OFFSET(0x191E1200)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_CURRENTCOLLIDER_OFFSET UNITYSDK_OFFSET(0x191E1220)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x191E1230)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x191E11F0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_HANDLEREBUILD_OFFSET UNITYSDK_OFFSET(0x191E1B30)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x191E1250)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x191E2A20)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_MATCHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x191E2A40)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x191E2770)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x191E18D0)
#define SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_START_OFFSET UNITYSDK_OFFSET(0x191E1240)

namespace Spine::Unity
{
	inline static constexpr unsigned int BoundingBoxFollowerGraphic_TypeDefinitionIndex = 46092;

	class BoundingBoxFollowerGraphic : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Spine::Unity::SkeletonGraphic* skeletonGraphic; // 0x18
		::System::String* slotName; // 0x20
		::System::Boolean isTrigger; // 0x28
		::System::Boolean usedByEffector; // 0x29
		::System::Boolean usedByComposite; // 0x2A
		::System::Boolean clearStateOnDisable; // 0x2B
		::System::Byte _padding0[0x4];
		::Spine::Slot* slot; // 0x30
		::Spine::BoundingBoxAttachment* currentAttachment; // 0x38
		::System::String* currentAttachmentName; // 0x40
		::UnityEngine::PolygonCollider2D* currentCollider; // 0x48
		::System::Collections::Generic::Dictionary_2<::Spine::BoundingBoxAttachment*, ::UnityEngine::PolygonCollider2D*>* colliderTable; // 0x50
		::System::Collections::Generic::Dictionary_2<::Spine::BoundingBoxAttachment*, ::System::String*>* nameTable; // 0x58
		static ::System::Boolean* StaticGet_DebugMessages()
		{
			return (::System::Boolean*)UnitySDK::FromName("Spine.Unity", "BoundingBoxFollowerGraphic")->GetStaticField(0x2EE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_CCTOR_OFFSET))();
		}

		::Spine::Slot* get_Slot()
		{
			return ((::Spine::Slot*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_SLOT_OFFSET))(this);
		}

		::Spine::BoundingBoxAttachment* get_CurrentAttachment()
		{
			return ((::Spine::BoundingBoxAttachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_CURRENTATTACHMENT_OFFSET))(this);
		}

		::System::String* get_CurrentAttachmentName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_CURRENTATTACHMENTNAME_OFFSET))(this);
		}

		::UnityEngine::PolygonCollider2D* get_CurrentCollider()
		{
			return ((::UnityEngine::PolygonCollider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_CURRENTCOLLIDER_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_ONENABLE_OFFSET))(this);
		}

		::System::Void HandleRebuild(::Spine::Unity::SkeletonGraphic* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_HANDLEREBUILD_OFFSET))(this, a1);
		}

		::System::Void Initialize(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void AddCollidersForSkin(::Spine::Skin* a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::PolygonCollider2D*>* a3, ::System::Single a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skin*, ::System::Int32, ::Il2CppArray<::UnityEngine::PolygonCollider2D*>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_ADDCOLLIDERSFORSKIN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_ONDISABLE_OFFSET))(this);
		}

		::System::Void ClearState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_CLEARSTATE_OFFSET))(this);
		}

		::System::Void DisposeExcessCollidersAfter(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_DISPOSEEXCESSCOLLIDERSAFTER_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_LATEUPDATE_OFFSET))(this);
		}

		::System::Void MatchAttachment(::Spine::Attachment* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Attachment*))((::PBYTE)hIl2Cpp + SPINE_UNITY_BOUNDINGBOXFOLLOWERGRAPHIC_MATCHATTACHMENT_OFFSET))(this, a1);
		}

	};
}
