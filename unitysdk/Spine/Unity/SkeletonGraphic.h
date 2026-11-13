#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SkeletonGraphic_LayoutMode.h"
#include "unitysdk/Spine/Unity/UpdateMode.h"
#include "unitysdk/Spine/Unity/UpdateTiming.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace Spine { class AnimationState; }
namespace Spine { class Skeleton; }
namespace Spine { class SkeletonData; }
namespace Spine { class Slot; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace Spine::Unity { class ISkeletonAnimationDelegate; }
namespace Spine::Unity { class MeshGenerator; }
namespace Spine::Unity { class MeshGeneratorDelegate; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace Spine::Unity { class SkeletonGraphic_InstructionDelegate; }
namespace Spine::Unity { class SkeletonGraphic_MeshAssignmentDelegateMultiple; }
namespace Spine::Unity { class SkeletonGraphic_MeshAssignmentDelegateSingle; }
namespace Spine::Unity { class SkeletonGraphic_SkeletonRendererDelegate; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace Spine::Unity { class SkeletonSubmeshGraphic; }
namespace Spine::Unity { class UpdateBonesDelegate; }
namespace Spine::Unity { template <typename T> class DoubleBuffered_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Graphic; }

#define SPINE_UNITY_SKELETONGRAPHIC_ADDSKELETONGRAPHICCOMPONENT_OFFSET UNITYSDK_OFFSET(0x191F1A70)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDEMULTIPLERENDERERS_OFFSET UNITYSDK_OFFSET(0x191F1E60)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDEMULTIPLE_OFFSET UNITYSDK_OFFSET(0x191F1C60)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDESINGLERENDERER_OFFSET UNITYSDK_OFFSET(0x191F1D40)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDESINGLE_OFFSET UNITYSDK_OFFSET(0x191F1B80)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x191F44C0)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x191F43E0)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ONINSTRUCTIONSPREPARED_OFFSET UNITYSDK_OFFSET(0x191F3380)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x191F3460)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ONPOSTPROCESSVERTICES_OFFSET UNITYSDK_OFFSET(0x191F4880)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_ONREBUILD_OFFSET UNITYSDK_OFFSET(0x191E1AC0)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x191F4760)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x191F45A0)
#define SPINE_UNITY_SKELETONGRAPHIC_ADD_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x191F4680)
#define SPINE_UNITY_SKELETONGRAPHIC_APPLYANIMATION_OFFSET UNITYSDK_OFFSET(0x191F2B30)
#define SPINE_UNITY_SKELETONGRAPHIC_AWAKE_OFFSET UNITYSDK_OFFSET(0x191F20D0)
#define SPINE_UNITY_SKELETONGRAPHIC_CLEAR_OFFSET UNITYSDK_OFFSET(0x191F25B0)
#define SPINE_UNITY_SKELETONGRAPHIC_CTOR_OFFSET UNITYSDK_OFFSET(0x191F7F50)
#define SPINE_UNITY_SKELETONGRAPHIC_DESTROYMESHES_OFFSET UNITYSDK_OFFSET(0x191F4960)
#define SPINE_UNITY_SKELETONGRAPHIC_DISABLEUNUSEDCANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x191F4ED0)
#define SPINE_UNITY_SKELETONGRAPHIC_DISPOSEMESHBUFFERS_OFFSET UNITYSDK_OFFSET(0x191F4A50)
#define SPINE_UNITY_SKELETONGRAPHIC_ENSURECANVASRENDERERCOUNT_OFFSET UNITYSDK_OFFSET(0x191F4FB0)
#define SPINE_UNITY_SKELETONGRAPHIC_ENSUREMESHESCOUNT_OFFSET UNITYSDK_OFFSET(0x191F5370)
#define SPINE_UNITY_SKELETONGRAPHIC_ENSURESEPARATORPARTCOUNT_OFFSET UNITYSDK_OFFSET(0x191F5570)
#define SPINE_UNITY_SKELETONGRAPHIC_ENSUREUSEDTEXTURESANDMATERIALSCOUNT_OFFSET UNITYSDK_OFFSET(0x191F5490)
#define SPINE_UNITY_SKELETONGRAPHIC_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x191F29A0)
#define SPINE_UNITY_SKELETONGRAPHIC_GETCURRENTRECTSIZE_OFFSET UNITYSDK_OFFSET(0x191F7EB0)
#define SPINE_UNITY_SKELETONGRAPHIC_GETLASTMESH_OFFSET UNITYSDK_OFFSET(0x191F35A0)
#define SPINE_UNITY_SKELETONGRAPHIC_GETLAYOUTSCALE_OFFSET UNITYSDK_OFFSET(0x191F7BB0)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_ANIMATIONSTATE_OFFSET UNITYSDK_OFFSET(0x191F3540)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_CUSTOMMATERIALOVERRIDE_OFFSET UNITYSDK_OFFSET(0x191F1F90)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_CUSTOMTEXTUREOVERRIDE_OFFSET UNITYSDK_OFFSET(0x191F1F80)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x191DF020)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x191F2090)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_MATERIALSMULTIPLECANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x191F3580)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_MESHESMULTIPLECANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x191F3570)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_MESHGENERATOR_OFFSET UNITYSDK_OFFSET(0x191F3560)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_OVERRIDETEXTURE_OFFSET UNITYSDK_OFFSET(0x191F1FA0)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_SEPARATORPARTS_OFFSET UNITYSDK_OFFSET(0x191F19B0)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETONDATAASSET_OFFSET UNITYSDK_OFFSET(0x191F1980)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETONDATA_OFFSET UNITYSDK_OFFSET(0x191F3350)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x191DEFF0)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_TEXTURESMULTIPLECANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x191F3590)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x191F4860)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x191F1990)
#define SPINE_UNITY_SKELETONGRAPHIC_GET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x191F4840)
#define SPINE_UNITY_SKELETONGRAPHIC_HASMULTIPLESUBMESHINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x191F79A0)
#define SPINE_UNITY_SKELETONGRAPHIC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x191E1B40)
#define SPINE_UNITY_SKELETONGRAPHIC_INITMESHBUFFERS_OFFSET UNITYSDK_OFFSET(0x191F4D40)
#define SPINE_UNITY_SKELETONGRAPHIC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x191F2C40)
#define SPINE_UNITY_SKELETONGRAPHIC_MATCHRECTTRANSFORMMULTIPLERENDERERS_OFFSET UNITYSDK_OFFSET(0x191F38B0)
#define SPINE_UNITY_SKELETONGRAPHIC_MATCHRECTTRANSFORMSINGLERENDERER_OFFSET UNITYSDK_OFFSET(0x191F36C0)
#define SPINE_UNITY_SKELETONGRAPHIC_MATCHRECTTRANSFORMWITHBOUNDS_OFFSET UNITYSDK_OFFSET(0x191F35E0)
#define SPINE_UNITY_SKELETONGRAPHIC_NEWSKELETONGRAPHICGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x191F19C0)
#define SPINE_UNITY_SKELETONGRAPHIC_ONBECAMEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x191F2F20)
#define SPINE_UNITY_SKELETONGRAPHIC_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x191F2F30)
#define SPINE_UNITY_SKELETONGRAPHIC_ONCULLSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x191F2F00)
#define SPINE_UNITY_SKELETONGRAPHIC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x191F2570)
#define SPINE_UNITY_SKELETONGRAPHIC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x191F2800)
#define SPINE_UNITY_SKELETONGRAPHIC_PREPAREINSTRUCTIONSANDRENDERERS_OFFSET UNITYSDK_OFFSET(0x191F2D80)
#define SPINE_UNITY_SKELETONGRAPHIC_PREPARERENDERERGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x191F5870)
#define SPINE_UNITY_SKELETONGRAPHIC_REAPPLYSEPARATORSLOTNAMES_OFFSET UNITYSDK_OFFSET(0x191F2F40)
#define SPINE_UNITY_SKELETONGRAPHIC_REBUILD_OFFSET UNITYSDK_OFFSET(0x191F2430)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDEMULTIPLERENDERERS_OFFSET UNITYSDK_OFFSET(0x191F1EF0)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDEMULTIPLE_OFFSET UNITYSDK_OFFSET(0x191F1CD0)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDESINGLERENDERER_OFFSET UNITYSDK_OFFSET(0x191F1DD0)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDESINGLE_OFFSET UNITYSDK_OFFSET(0x191F1BF0)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_BEFOREAPPLY_OFFSET UNITYSDK_OFFSET(0x191F4530)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONANIMATIONREBUILD_OFFSET UNITYSDK_OFFSET(0x191F4450)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONINSTRUCTIONSPREPARED_OFFSET UNITYSDK_OFFSET(0x191F33F0)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x191F34D0)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONPOSTPROCESSVERTICES_OFFSET UNITYSDK_OFFSET(0x191F48F0)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONREBUILD_OFFSET UNITYSDK_OFFSET(0x191E1A50)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x191F47D0)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x191F4610)
#define SPINE_UNITY_SKELETONGRAPHIC_REMOVE_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x191F46F0)
#define SPINE_UNITY_SKELETONGRAPHIC_SETRECTTRANSFORMBOUNDS_OFFSET UNITYSDK_OFFSET(0x191F3D10)
#define SPINE_UNITY_SKELETONGRAPHIC_SETRECTTRANSFORMSIZE_OFFSET UNITYSDK_OFFSET(0x191F3FC0)
#define SPINE_UNITY_SKELETONGRAPHIC_SET_OVERRIDETEXTURE_OFFSET UNITYSDK_OFFSET(0x191F1FB0)
#define SPINE_UNITY_SKELETONGRAPHIC_SET_SKELETON_OFFSET UNITYSDK_OFFSET(0x191F3340)
#define SPINE_UNITY_SKELETONGRAPHIC_SET_UNSCALEDTIME_OFFSET UNITYSDK_OFFSET(0x191F4870)
#define SPINE_UNITY_SKELETONGRAPHIC_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x191F19A0)
#define SPINE_UNITY_SKELETONGRAPHIC_SET_UPDATETIMING_OFFSET UNITYSDK_OFFSET(0x191F4850)
#define SPINE_UNITY_SKELETONGRAPHIC_SYNCSUBMESHGRAPHICSWITHCANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x191F2190)
#define SPINE_UNITY_SKELETONGRAPHIC_TRIMRENDERERS_OFFSET UNITYSDK_OFFSET(0x191F4B20)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATEANIMATIONSTATUS_OFFSET UNITYSDK_OFFSET(0x191F2B00)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATEMATERIALSMULTIPLECANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x191F6750)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESHMULTIPLECANVASRENDERERS_OFFSET UNITYSDK_OFFSET(0x191F7030)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESHSINGLECANVASRENDERER_OFFSET UNITYSDK_OFFSET(0x191F5F80)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESHTOINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x191F2750)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESH_OFFSET UNITYSDK_OFFSET(0x191F36A0)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATESEPARATORPARTPARENTS_OFFSET UNITYSDK_OFFSET(0x191F30F0)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x191F2A70)
#define SPINE_UNITY_SKELETONGRAPHIC_UPDATE_OFFSET UNITYSDK_OFFSET(0x191F28D0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphic_TypeDefinitionIndex = 46102;

	class SkeletonGraphic : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::Spine::Unity::SkeletonDataAsset* skeletonDataAsset; // 0xF0
		::UnityEngine::Material* additiveMaterial; // 0xF8
		::UnityEngine::Material* multiplyMaterial; // 0x100
		::UnityEngine::Material* screenMaterial; // 0x108
		::System::String* initialSkinName; // 0x110
		::System::Boolean initialFlipX; // 0x118
		::System::Boolean initialFlipY; // 0x119
		::System::Byte _padding0[0x6];
		::System::String* startingAnimation; // 0x120
		::System::Boolean startingLoop; // 0x128
		::System::Byte _padding1[0x3];
		::System::Single timeScale; // 0x12C
		::System::Boolean freeze; // 0x130
		::System::Byte _padding2[0x3];
		::Spine::Unity::SkeletonGraphic_LayoutMode layoutScaleMode; // 0x134
		::UnityEngine::Vector2 referenceSize; // 0x138
		::System::Single referenceScale; // 0x140
		::Spine::Unity::UpdateMode updateMode; // 0x144
		::Spine::Unity::UpdateMode updateWhenInvisible; // 0x148
		::System::Boolean allowMultipleCanvasRenderers; // 0x14C
		::System::Byte _padding3[0x3];
		::System::Collections::Generic::List_1<::UnityEngine::CanvasRenderer*>* canvasRenderers; // 0x150
		::System::Collections::Generic::List_1<::Spine::Unity::SkeletonSubmeshGraphic*>* submeshGraphics; // 0x158
		::System::Int32 usedRenderersCount; // 0x160
		::System::Byte _padding4[0x4];
		::Il2CppArray<::System::String*>* separatorSlotNames; // 0x168
		::System::Collections::Generic::List_1<::Spine::Slot*>* separatorSlots; // 0x170
		::System::Boolean enableSeparatorSlots; // 0x178
		::System::Byte _padding5[0x7];
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* separatorParts; // 0x180
		::System::Boolean updateSeparatorPartLocation; // 0x188
		::System::Boolean wasUpdatedAfterInit; // 0x189
		::System::Byte _padding6[0x6];
		::UnityEngine::Texture* baseTexture; // 0x190
		::System::Boolean disableMeshAssignmentOnOverride; // 0x198
		::System::Byte _padding7[0x7];
		::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateSingle* assignMeshOverrideSingle; // 0x1A0
		::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateMultiple* assignMeshOverrideMultiple; // 0x1A8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*, ::UnityEngine::Texture*>* customTextureOverride; // 0x1B0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*, ::UnityEngine::Material*>* customMaterialOverride; // 0x1B8
		::UnityEngine::Texture* overrideTexture; // 0x1C0
		::Spine::Skeleton* skeleton; // 0x1C8
		::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate* OnRebuild; // 0x1D0
		::Spine::Unity::SkeletonGraphic_InstructionDelegate* OnInstructionsPrepared; // 0x1D8
		::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate* OnMeshAndMaterialsUpdated; // 0x1E0
		::Spine::AnimationState* state; // 0x1E8
		::Spine::Unity::MeshGenerator* meshGenerator; // 0x1F0
		::Spine::Unity::DoubleBuffered_1<::System::Object*>* meshBuffers; // 0x1F8
		::Spine::Unity::SkeletonRendererInstruction* currentInstructions; // 0x200
		::Spine::ExposedList_1<::UnityEngine::Mesh*>* meshes; // 0x208
		::Spine::ExposedList_1<::UnityEngine::Material*>* usedMaterials; // 0x210
		::Spine::ExposedList_1<::UnityEngine::Texture*>* usedTextures; // 0x218
		::Spine::Unity::ISkeletonAnimationDelegate* OnAnimationRebuild; // 0x220
		::Spine::Unity::UpdateBonesDelegate* BeforeApply; // 0x228
		::Spine::Unity::UpdateBonesDelegate* UpdateLocal; // 0x230
		::Spine::Unity::UpdateBonesDelegate* UpdateWorld; // 0x238
		::Spine::Unity::UpdateBonesDelegate* UpdateComplete; // 0x240
		::Spine::Unity::UpdateTiming updateTiming; // 0x248
		::System::Boolean unscaledTime; // 0x24C
		::System::Byte _padding8[0x3];
		::Spine::Unity::MeshGeneratorDelegate* OnPostProcessVertices; // 0x250
		// static const ::System::Object EditReferenceRect; // 0x0
		// static const ::System::String* SeparatorPartGameObjectName; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_CTOR_OFFSET))(this);
		}

		::Spine::Unity::SkeletonDataAsset* get_SkeletonDataAsset()
		{
			return ((::Spine::Unity::SkeletonDataAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETONDATAASSET_OFFSET))(this);
		}

		::Spine::Unity::UpdateMode get_UpdateMode()
		{
			return ((::Spine::Unity::UpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_UPDATEMODE_OFFSET))(this);
		}

		::System::Void set_UpdateMode(::Spine::Unity::UpdateMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateMode))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SET_UPDATEMODE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* get_SeparatorParts()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_SEPARATORPARTS_OFFSET))(this);
		}

		static ::Spine::Unity::SkeletonGraphic* NewSkeletonGraphicGameObject(::Spine::Unity::SkeletonDataAsset* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Material* a3)
		{
			return ((::Spine::Unity::SkeletonGraphic*(*)(::Spine::Unity::SkeletonDataAsset*, ::UnityEngine::Transform*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_NEWSKELETONGRAPHICGAMEOBJECT_OFFSET))(a1, a2, a3);
		}

		static ::Spine::Unity::SkeletonGraphic* AddSkeletonGraphicComponent(::UnityEngine::GameObject* a1, ::Spine::Unity::SkeletonDataAsset* a2, ::UnityEngine::Material* a3)
		{
			return ((::Spine::Unity::SkeletonGraphic*(*)(::UnityEngine::GameObject*, ::Spine::Unity::SkeletonDataAsset*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADDSKELETONGRAPHICCOMPONENT_OFFSET))(a1, a2, a3);
		}

		::System::Void add_assignMeshOverrideSingle(::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateSingle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateSingle*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDESINGLE_OFFSET))(this, a1);
		}

		::System::Void remove_assignMeshOverrideSingle(::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateSingle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateSingle*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDESINGLE_OFFSET))(this, a1);
		}

		::System::Void add_assignMeshOverrideMultiple(::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateMultiple* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateMultiple*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDEMULTIPLE_OFFSET))(this, a1);
		}

		::System::Void remove_assignMeshOverrideMultiple(::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateMultiple* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateMultiple*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDEMULTIPLE_OFFSET))(this, a1);
		}

		::System::Void add_AssignMeshOverrideSingleRenderer(::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateSingle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateSingle*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDESINGLERENDERER_OFFSET))(this, a1);
		}

		::System::Void remove_AssignMeshOverrideSingleRenderer(::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateSingle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateSingle*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDESINGLERENDERER_OFFSET))(this, a1);
		}

		::System::Void add_AssignMeshOverrideMultipleRenderers(::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateMultiple* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateMultiple*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ASSIGNMESHOVERRIDEMULTIPLERENDERERS_OFFSET))(this, a1);
		}

		::System::Void remove_AssignMeshOverrideMultipleRenderers(::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateMultiple* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_MeshAssignmentDelegateMultiple*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ASSIGNMESHOVERRIDEMULTIPLERENDERERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*, ::UnityEngine::Texture*>* get_CustomTextureOverride()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*, ::UnityEngine::Texture*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_CUSTOMTEXTUREOVERRIDE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*, ::UnityEngine::Material*>* get_CustomMaterialOverride()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture*, ::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_CUSTOMMATERIALOVERRIDE_OFFSET))(this);
		}

		::UnityEngine::Texture* get_OverrideTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_OVERRIDETEXTURE_OFFSET))(this);
		}

		::System::Void set_OverrideTexture(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SET_OVERRIDETEXTURE_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ONDESTROY_OFFSET))(this);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REBUILD_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Update_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATE_1_OFFSET))(this, a1);
		}

		::System::Void SyncSubmeshGraphicsWithCanvasRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SYNCSUBMESHGRAPHICSWITHCANVASRENDERERS_OFFSET))(this);
		}

		::System::Void UpdateAnimationStatus(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATEANIMATIONSTATUS_OFFSET))(this, a1);
		}

		::System::Void ApplyAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_APPLYANIMATION_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnCullStateChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ONCULLSTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void OnBecameVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ONBECAMEVISIBLE_OFFSET))(this);
		}

		::System::Void OnBecameInvisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ONBECAMEINVISIBLE_OFFSET))(this);
		}

		::System::Void ReapplySeparatorSlotNames()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REAPPLYSEPARATORSLOTNAMES_OFFSET))(this);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return ((::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETON_OFFSET))(this);
		}

		::System::Void set_Skeleton(::Spine::Skeleton* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SET_SKELETON_OFFSET))(this, a1);
		}

		::Spine::SkeletonData* get_SkeletonData()
		{
			return ((::Spine::SkeletonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_SKELETONDATA_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_ISVALID_OFFSET))(this);
		}

		::System::Void add_OnRebuild(::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ONREBUILD_OFFSET))(this, a1);
		}

		::System::Void remove_OnRebuild(::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONREBUILD_OFFSET))(this, a1);
		}

		::System::Void add_OnInstructionsPrepared(::Spine::Unity::SkeletonGraphic_InstructionDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_InstructionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ONINSTRUCTIONSPREPARED_OFFSET))(this, a1);
		}

		::System::Void remove_OnInstructionsPrepared(::Spine::Unity::SkeletonGraphic_InstructionDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_InstructionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONINSTRUCTIONSPREPARED_OFFSET))(this, a1);
		}

		::System::Void add_OnMeshAndMaterialsUpdated(::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ONMESHANDMATERIALSUPDATED_OFFSET))(this, a1);
		}

		::System::Void remove_OnMeshAndMaterialsUpdated(::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET))(this, a1);
		}

		::Spine::AnimationState* get_AnimationState()
		{
			return ((::Spine::AnimationState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_ANIMATIONSTATE_OFFSET))(this);
		}

		::Spine::Unity::MeshGenerator* get_MeshGenerator()
		{
			return ((::Spine::Unity::MeshGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_MESHGENERATOR_OFFSET))(this);
		}

		::Spine::ExposedList_1<::UnityEngine::Mesh*>* get_MeshesMultipleCanvasRenderers()
		{
			return ((::Spine::ExposedList_1<::UnityEngine::Mesh*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_MESHESMULTIPLECANVASRENDERERS_OFFSET))(this);
		}

		::Spine::ExposedList_1<::UnityEngine::Material*>* get_MaterialsMultipleCanvasRenderers()
		{
			return ((::Spine::ExposedList_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_MATERIALSMULTIPLECANVASRENDERERS_OFFSET))(this);
		}

		::Spine::ExposedList_1<::UnityEngine::Texture*>* get_TexturesMultipleCanvasRenderers()
		{
			return ((::Spine::ExposedList_1<::UnityEngine::Texture*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_TEXTURESMULTIPLECANVASRENDERERS_OFFSET))(this);
		}

		::UnityEngine::Mesh* GetLastMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GETLASTMESH_OFFSET))(this);
		}

		::System::Boolean MatchRectTransformWithBounds()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MATCHRECTTRANSFORMWITHBOUNDS_OFFSET))(this);
		}

		::System::Boolean MatchRectTransformSingleRenderer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MATCHRECTTRANSFORMSINGLERENDERER_OFFSET))(this);
		}

		::System::Boolean MatchRectTransformMultipleRenderers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_MATCHRECTTRANSFORMMULTIPLERENDERERS_OFFSET))(this);
		}

		::System::Void SetRectTransformBounds(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SETRECTTRANSFORMBOUNDS_OFFSET))(this, a1);
		}

		static ::System::Void SetRectTransformSize(::UnityEngine::UI::Graphic* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Graphic*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SETRECTTRANSFORMSIZE_OFFSET))(a1, a2);
		}

		::System::Void add_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ONANIMATIONREBUILD_OFFSET))(this, a1);
		}

		::System::Void remove_OnAnimationRebuild(::Spine::Unity::ISkeletonAnimationDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimationDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONANIMATIONREBUILD_OFFSET))(this, a1);
		}

		::System::Void add_BeforeApply(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_BEFOREAPPLY_OFFSET))(this, a1);
		}

		::System::Void remove_BeforeApply(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_BEFOREAPPLY_OFFSET))(this, a1);
		}

		::System::Void add_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_UPDATELOCAL_OFFSET))(this, a1);
		}

		::System::Void remove_UpdateLocal(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_UPDATELOCAL_OFFSET))(this, a1);
		}

		::System::Void add_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_UPDATEWORLD_OFFSET))(this, a1);
		}

		::System::Void remove_UpdateWorld(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_UPDATEWORLD_OFFSET))(this, a1);
		}

		::System::Void add_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_UPDATECOMPLETE_OFFSET))(this, a1);
		}

		::System::Void remove_UpdateComplete(::Spine::Unity::UpdateBonesDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateBonesDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_UPDATECOMPLETE_OFFSET))(this, a1);
		}

		::Spine::Unity::UpdateTiming get_UpdateTiming()
		{
			return ((::Spine::Unity::UpdateTiming(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_UPDATETIMING_OFFSET))(this);
		}

		::System::Void set_UpdateTiming(::Spine::Unity::UpdateTiming a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateTiming))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SET_UPDATETIMING_OFFSET))(this, a1);
		}

		::System::Boolean get_UnscaledTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GET_UNSCALEDTIME_OFFSET))(this);
		}

		::System::Void set_UnscaledTime(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_SET_UNSCALEDTIME_OFFSET))(this, a1);
		}

		::System::Void add_OnPostProcessVertices(::Spine::Unity::MeshGeneratorDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MeshGeneratorDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ADD_ONPOSTPROCESSVERTICES_OFFSET))(this, a1);
		}

		::System::Void remove_OnPostProcessVertices(::Spine::Unity::MeshGeneratorDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MeshGeneratorDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_REMOVE_ONPOSTPROCESSVERTICES_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_CLEAR_OFFSET))(this);
		}

		::System::Void TrimRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_TRIMRENDERERS_OFFSET))(this);
		}

		::System::Void Initialize(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void PrepareInstructionsAndRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_PREPAREINSTRUCTIONSANDRENDERERS_OFFSET))(this);
		}

		::System::Void UpdateMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESH_OFFSET))(this);
		}

		::System::Void UpdateMeshToInstructions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESHTOINSTRUCTIONS_OFFSET))(this);
		}

		::System::Boolean HasMultipleSubmeshInstructions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_HASMULTIPLESUBMESHINSTRUCTIONS_OFFSET))(this);
		}

		::System::Void InitMeshBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_INITMESHBUFFERS_OFFSET))(this);
		}

		::System::Void DisposeMeshBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_DISPOSEMESHBUFFERS_OFFSET))(this);
		}

		::System::Void UpdateMeshSingleCanvasRenderer(::Spine::Unity::SkeletonRendererInstruction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESHSINGLECANVASRENDERER_OFFSET))(this, a1);
		}

		::System::Void UpdateMaterialsMultipleCanvasRenderers(::Spine::Unity::SkeletonRendererInstruction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATEMATERIALSMULTIPLECANVASRENDERERS_OFFSET))(this, a1);
		}

		::System::Void UpdateMeshMultipleCanvasRenderers(::Spine::Unity::SkeletonRendererInstruction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATEMESHMULTIPLECANVASRENDERERS_OFFSET))(this, a1);
		}

		::System::Void EnsureCanvasRendererCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ENSURECANVASRENDERERCOUNT_OFFSET))(this, a1);
		}

		::System::Void PrepareRendererGameObjects(::Spine::Unity::SkeletonRendererInstruction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_PREPARERENDERERGAMEOBJECTS_OFFSET))(this, a1);
		}

		::System::Void DisableUnusedCanvasRenderers(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_DISABLEUNUSEDCANVASRENDERERS_OFFSET))(this, a1);
		}

		::System::Void EnsureMeshesCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ENSUREMESHESCOUNT_OFFSET))(this, a1);
		}

		::System::Void EnsureUsedTexturesAndMaterialsCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ENSUREUSEDTEXTURESANDMATERIALSCOUNT_OFFSET))(this, a1);
		}

		::System::Void DestroyMeshes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_DESTROYMESHES_OFFSET))(this);
		}

		::System::Void EnsureSeparatorPartCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_ENSURESEPARATORPARTCOUNT_OFFSET))(this);
		}

		::System::Void UpdateSeparatorPartParents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_UPDATESEPARATORPARTPARENTS_OFFSET))(this);
		}

		::System::Single GetLayoutScale(::Spine::Unity::SkeletonGraphic_LayoutMode a1)
		{
			return ((::System::Single(*)(::PVOID, ::Spine::Unity::SkeletonGraphic_LayoutMode))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GETLAYOUTSCALE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetCurrentRectSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC_GETCURRENTRECTSIZE_OFFSET))(this);
		}

	};
}
