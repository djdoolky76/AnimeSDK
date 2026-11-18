#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Unity/SettingsTriState.h"
#include "unitysdk/Spine/Unity/UpdateMode.h"
#include "unitysdk/Spine/Physics.h"
#include "unitysdk/UnityEngine/Rendering/CompareFunction.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/SpriteMaskInteraction.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Spine/Unity/CoroutineIterator.h"
#include "unitysdk/Spine/Unity/MeshGeneratorBuffers.h"
#include "unitysdk/Spine/Unity/SubmeshInstruction.h"

namespace Spine { class Skeleton; }
namespace Spine { class SkeletonClipping; }
namespace Spine { class SkeletonData; }
namespace Spine { class Slot; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace Spine::Unity { class AtlasAssetBase; }
namespace Spine::Unity { class ISkeletonAnimation; }
namespace Spine::Unity { class ISkeletonRenderer; }
namespace Spine::Unity { class InstructionDelegate; }
namespace Spine::Unity { class MaterialOverrideSet; }
namespace Spine::Unity { class MeshGenerator; }
namespace Spine::Unity { class MeshGeneratorDelegate; }
namespace Spine::Unity { class MeshGenerator_Settings; }
namespace Spine::Unity { class MeshRendererBuffers; }
namespace Spine::Unity { class MeshRendererBuffers_SmartMesh; }
namespace Spine::Unity { class SkeletonDataAsset; }
namespace Spine::Unity { class SkeletonRendererDelegate; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_SKELETONRENDERER_ADD_GENERATEMESHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1F5BEED0)
#define SPINE_UNITY_SKELETONRENDERER_ADD_GENERATEMESHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1F5BFEA0)
#define SPINE_UNITY_SKELETONRENDERER_ADD_ONINSTRUCTIONSPREPARED_OFFSET UNITYSDK_OFFSET(0x1F5C32D0)
#define SPINE_UNITY_SKELETONRENDERER_ADD_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x1F5C33D0)
#define SPINE_UNITY_SKELETONRENDERER_ADD_ONPOSTPROCESSVERTICES_OFFSET UNITYSDK_OFFSET(0x1F5C30D0)
#define SPINE_UNITY_SKELETONRENDERER_ADD_ONREBUILD_OFFSET UNITYSDK_OFFSET(0x1F5C31D0)
#define SPINE_UNITY_SKELETONRENDERER_ADD_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F5C2FD0)
#define SPINE_UNITY_SKELETONRENDERER_ADD_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1F5C2DD0)
#define SPINE_UNITY_SKELETONRENDERER_ADD_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1F5C2ED0)
#define SPINE_UNITY_SKELETONRENDERER_ADD__UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F5C2CD0)
#define SPINE_UNITY_SKELETONRENDERER_ADD__UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1F5C2AD0)
#define SPINE_UNITY_SKELETONRENDERER_ADD__UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1F5C2BD0)
#define SPINE_UNITY_SKELETONRENDERER_AFTERANIMATIONAPPLIEDSPLIT_OFFSET UNITYSDK_OFFSET(0x1F5C1C80)
#define SPINE_UNITY_SKELETONRENDERER_AFTERANIMATIONAPPLIED_OFFSET UNITYSDK_OFFSET(0x1F5C1BE0)
#define SPINE_UNITY_SKELETONRENDERER_APPLYTRANSFORMMOVEMENTTOPHYSICS_OFFSET UNITYSDK_OFFSET(0x1F5C1B30)
#define SPINE_UNITY_SKELETONRENDERER_ASSERTISMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1F5C2690)
#define SPINE_UNITY_SKELETONRENDERER_ASSERTISWORKERTHREAD_OFFSET UNITYSDK_OFFSET(0x1F5C28B0)
#define SPINE_UNITY_SKELETONRENDERER_ASSIGNINITIALSKIN_OFFSET UNITYSDK_OFFSET(0x1F5C1090)
#define SPINE_UNITY_SKELETONRENDERER_ASSIGNMESHATRENDERER_1_OFFSET UNITYSDK_OFFSET(0x1F5C48D0)
#define SPINE_UNITY_SKELETONRENDERER_ASSIGNMESHATRENDERER_OFFSET UNITYSDK_OFFSET(0x1F5C48A0)
#define SPINE_UNITY_SKELETONRENDERER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F5C3890)
#define SPINE_UNITY_SKELETONRENDERER_CLEARCOMMON_OFFSET UNITYSDK_OFFSET(0x1F5C0900)
#define SPINE_UNITY_SKELETONRENDERER_CLEARMESHATRENDERER_OFFSET UNITYSDK_OFFSET(0x1F5C3C60)
#define SPINE_UNITY_SKELETONRENDERER_CLEARMESHGENERATOR_OFFSET UNITYSDK_OFFSET(0x1F5C0B30)
#define SPINE_UNITY_SKELETONRENDERER_CLEARSKELETONSTATE_OFFSET UNITYSDK_OFFSET(0x1F5C4000)
#define SPINE_UNITY_SKELETONRENDERER_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x1F5C3F10)
#define SPINE_UNITY_SKELETONRENDERER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1F5C1000)
#define SPINE_UNITY_SKELETONRENDERER_CONFIGUREMATERIALS_1_OFFSET UNITYSDK_OFFSET(0x1F5C5C00)
#define SPINE_UNITY_SKELETONRENDERER_CONFIGUREMATERIALS_OFFSET UNITYSDK_OFFSET(0x1F5C5590)
#define SPINE_UNITY_SKELETONRENDERER_DISABLERENDERERS_OFFSET UNITYSDK_OFFSET(0x1F5C01B0)
#define SPINE_UNITY_SKELETONRENDERER_ENABLERENDERERS_OFFSET UNITYSDK_OFFSET(0x1F5C0310)
#define SPINE_UNITY_SKELETONRENDERER_FILLBUFFERSFROMSUBMESHINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x1F5C4560)
#define SPINE_UNITY_SKELETONRENDERER_FILLMESHFROMBUFFERS_OFFSET UNITYSDK_OFFSET(0x1F5C4820)
#define SPINE_UNITY_SKELETONRENDERER_FILLSINGLEBUFFERFROMINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x1F5C4580)
#define SPINE_UNITY_SKELETONRENDERER_FINDANDAPPLYSEPARATORSLOTS_1_OFFSET UNITYSDK_OFFSET(0x1F5C4FB0)
#define SPINE_UNITY_SKELETONRENDERER_FINDANDAPPLYSEPARATORSLOTS_OFFSET UNITYSDK_OFFSET(0x1F5C4EE0)
#define SPINE_UNITY_SKELETONRENDERER_GATHERTRANSFORMMOVEMENTFORPHYSICS_OFFSET UNITYSDK_OFFSET(0x1F5C1790)
#define SPINE_UNITY_SKELETONRENDERER_GENERATESKELETONRENDERERINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x1F5C44F0)
#define SPINE_UNITY_SKELETONRENDERER_GETCURRENTMESH_OFFSET UNITYSDK_OFFSET(0x1F5C4480)
#define SPINE_UNITY_SKELETONRENDERER_GETPHYSICSTRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0x1F5C1130)
#define SPINE_UNITY_SKELETONRENDERER_GETPHYSICSTRANSFORMROTATION_OFFSET UNITYSDK_OFFSET(0x1F5C1410)
#define SPINE_UNITY_SKELETONRENDERER_GET_ADDNORMALS_OFFSET UNITYSDK_OFFSET(0x1F5C3810)
#define SPINE_UNITY_SKELETONRENDERER_GET_ANIMATION_OFFSET UNITYSDK_OFFSET(0x1F5BFFC0)
#define SPINE_UNITY_SKELETONRENDERER_GET_CALCULATETANGENTS_OFFSET UNITYSDK_OFFSET(0x1F5C3850)
#define SPINE_UNITY_SKELETONRENDERER_GET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x1F5BFFB0)
#define SPINE_UNITY_SKELETONRENDERER_GET_CUSTOMMATERIALOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1F5C3500)
#define SPINE_UNITY_SKELETONRENDERER_GET_CUSTOMSLOTMATERIALS_OFFSET UNITYSDK_OFFSET(0x1F5C0470)
#define SPINE_UNITY_SKELETONRENDERER_GET_ENABLESEPARATORSLOTS_OFFSET UNITYSDK_OFFSET(0x1F5C0160)
#define SPINE_UNITY_SKELETONRENDERER_GET_FREEZE_OFFSET UNITYSDK_OFFSET(0x1F5C1030)
#define SPINE_UNITY_SKELETONRENDERER_GET_HASGENERATEMESHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1F5C0180)
#define SPINE_UNITY_SKELETONRENDERER_GET_IMMUTABLETRIANGLES_OFFSET UNITYSDK_OFFSET(0x1F5C3750)
#define SPINE_UNITY_SKELETONRENDERER_GET_INITIALFLIPX_OFFSET UNITYSDK_OFFSET(0x1F5C00B0)
#define SPINE_UNITY_SKELETONRENDERER_GET_INITIALFLIPY_OFFSET UNITYSDK_OFFSET(0x1F5C00D0)
#define SPINE_UNITY_SKELETONRENDERER_GET_INITIALSKINNAME_OFFSET UNITYSDK_OFFSET(0x1F5C0090)
#define SPINE_UNITY_SKELETONRENDERER_GET_ISUPDATEDEXTERNALLY_OFFSET UNITYSDK_OFFSET(0x1F5C06F0)
#define SPINE_UNITY_SKELETONRENDERER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F5C0080)
#define SPINE_UNITY_SKELETONRENDERER_GET_MASKINTERACTION_OFFSET UNITYSDK_OFFSET(0x1F5C34F0)
#define SPINE_UNITY_SKELETONRENDERER_GET_MATERIALSNEEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5C0190)
#define SPINE_UNITY_SKELETONRENDERER_GET_MESHOFFSET_OFFSET UNITYSDK_OFFSET(0x1F5C3530)
#define SPINE_UNITY_SKELETONRENDERER_GET_MESHSCALE_OFFSET UNITYSDK_OFFSET(0x1F5C1B20)
#define SPINE_UNITY_SKELETONRENDERER_GET_MESHSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F5C0130)
#define SPINE_UNITY_SKELETONRENDERER_GET_NEEDSMAINTHREADRENDERERPREPARATION_OFFSET UNITYSDK_OFFSET(0x1F5C36B0)
#define SPINE_UNITY_SKELETONRENDERER_GET_NEEDSTOGENERATEMESH_OFFSET UNITYSDK_OFFSET(0x1F5C3550)
#define SPINE_UNITY_SKELETONRENDERER_GET_PHYSICSMOVEMENTRELATIVETO_OFFSET UNITYSDK_OFFSET(0x1F5C0640)
#define SPINE_UNITY_SKELETONRENDERER_GET_PHYSICSPOSITIONINHERITANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x1F5C0480)
#define SPINE_UNITY_SKELETONRENDERER_GET_PHYSICSPOSITIONINHERITANCELIMIT_OFFSET UNITYSDK_OFFSET(0x1F5C0600)
#define SPINE_UNITY_SKELETONRENDERER_GET_PHYSICSROTATIONINHERITANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x1F5C0580)
#define SPINE_UNITY_SKELETONRENDERER_GET_PHYSICSROTATIONINHERITANCELIMIT_OFFSET UNITYSDK_OFFSET(0x1F5C0620)
#define SPINE_UNITY_SKELETONRENDERER_GET_PMAVERTEXCOLORS_OFFSET UNITYSDK_OFFSET(0x1F5C3790)
#define SPINE_UNITY_SKELETONRENDERER_GET_RENDERER_OFFSET UNITYSDK_OFFSET(0x1F5BFFA0)
#define SPINE_UNITY_SKELETONRENDERER_GET_REQUIRESMESHBUFFERASSIGNMENTMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1F5C0740)
#define SPINE_UNITY_SKELETONRENDERER_GET_SEPARATORSLOTS_OFFSET UNITYSDK_OFFSET(0x1F5C0150)
#define SPINE_UNITY_SKELETONRENDERER_GET_SKELETONCLIPPING_OFFSET UNITYSDK_OFFSET(0x1F5C3510)
#define SPINE_UNITY_SKELETONRENDERER_GET_SKELETONDATAASSET_OFFSET UNITYSDK_OFFSET(0x1F5BFFE0)
#define SPINE_UNITY_SKELETONRENDERER_GET_SKELETONDATA_OFFSET UNITYSDK_OFFSET(0x1F5C0040)
#define SPINE_UNITY_SKELETONRENDERER_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x1F5C0000)
#define SPINE_UNITY_SKELETONRENDERER_GET_THREADEDMESHGENERATION_OFFSET UNITYSDK_OFFSET(0x1F5C0750)
#define SPINE_UNITY_SKELETONRENDERER_GET_TINTBLACK_OFFSET UNITYSDK_OFFSET(0x1F5C37D0)
#define SPINE_UNITY_SKELETONRENDERER_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1F5C00F0)
#define SPINE_UNITY_SKELETONRENDERER_GET_UPDATEWHENINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1F5C0110)
#define SPINE_UNITY_SKELETONRENDERER_GET_USECLIPPING_OFFSET UNITYSDK_OFFSET(0x1F5C3710)
#define SPINE_UNITY_SKELETONRENDERER_GET_USESSINGLESUBMESH_OFFSET UNITYSDK_OFFSET(0x1F5C3540)
#define SPINE_UNITY_SKELETONRENDERER_GET_USESTHREADEDMESHGENERATION_OFFSET UNITYSDK_OFFSET(0x1F5C0710)
#define SPINE_UNITY_SKELETONRENDERER_GET_ZSPACING_OFFSET UNITYSDK_OFFSET(0x1F5C36D0)
#define SPINE_UNITY_SKELETONRENDERER_HANDLEONDEMANDLOADING_OFFSET UNITYSDK_OFFSET(0x1F5C2210)
#define SPINE_UNITY_SKELETONRENDERER_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1F5C0BB0)
#define SPINE_UNITY_SKELETONRENDERER_INITIALIZEMAINTHREADID_OFFSET UNITYSDK_OFFSET(0x1F5C2550)
#define SPINE_UNITY_SKELETONRENDERER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F5C3990)
#define SPINE_UNITY_SKELETONRENDERER_INITSPRITEMASKMATERIALSMASKMODE_OFFSET UNITYSDK_OFFSET(0x1F5C5990)
#define SPINE_UNITY_SKELETONRENDERER_INITSPRITEMASKOVERRIDESET_OFFSET UNITYSDK_OFFSET(0x1F5C5C40)
#define SPINE_UNITY_SKELETONRENDERER_ISSUEONPOSTPROCESSVERTICES_OFFSET UNITYSDK_OFFSET(0x1F5C1E50)
#define SPINE_UNITY_SKELETONRENDERER_LATEUPDATEIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1F5C6310)
#define SPINE_UNITY_SKELETONRENDERER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5C4450)
#define SPINE_UNITY_SKELETONRENDERER_MAINTHREADPREPARELATEUPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F5C62B0)
#define SPINE_UNITY_SKELETONRENDERER_ONBECAMEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1F5BF810)
#define SPINE_UNITY_SKELETONRENDERER_ONBECAMEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1F5BF7B0)
#define SPINE_UNITY_SKELETONRENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F5C43C0)
#define SPINE_UNITY_SKELETONRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F5C4210)
#define SPINE_UNITY_SKELETONRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F5C4080)
#define SPINE_UNITY_SKELETONRENDERER_PREPAREINSTRUCTIONSANDRENDERERS_OFFSET UNITYSDK_OFFSET(0x1F5C1F40)
#define SPINE_UNITY_SKELETONRENDERER_REAPPLYSEPARATORSLOTNAMES_OFFSET UNITYSDK_OFFSET(0x1F5C5430)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE_GENERATEMESHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1F5BE290)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE_GENERATEMESHOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1F5BFF20)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE_ONINSTRUCTIONSPREPARED_OFFSET UNITYSDK_OFFSET(0x1F5C3350)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET UNITYSDK_OFFSET(0x1F5C3450)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE_ONPOSTPROCESSVERTICES_OFFSET UNITYSDK_OFFSET(0x1F5C3150)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE_ONREBUILD_OFFSET UNITYSDK_OFFSET(0x1F5C3250)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE_UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F5C3050)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE_UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1F5C2E50)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE_UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1F5C2F50)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE__UPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F5C2D50)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE__UPDATELOCAL_OFFSET UNITYSDK_OFFSET(0x1F5C2B50)
#define SPINE_UNITY_SKELETONRENDERER_REMOVE__UPDATEWORLD_OFFSET UNITYSDK_OFFSET(0x1F5C2C50)
#define SPINE_UNITY_SKELETONRENDERER_REQUIRESMULTIPLESUBMESHESBYDRAWORDER_OFFSET UNITYSDK_OFFSET(0x1F5C44D0)
#define SPINE_UNITY_SKELETONRENDERER_RESETLASTPOSITIONANDROTATION_OFFSET UNITYSDK_OFFSET(0x1F5C1040)
#define SPINE_UNITY_SKELETONRENDERER_RESETLASTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F5C0540)
#define SPINE_UNITY_SKELETONRENDERER_RESETLASTROTATION_OFFSET UNITYSDK_OFFSET(0x1F5C05E0)
#define SPINE_UNITY_SKELETONRENDERER_SETMATERIALSETTINGSTOFIXDRAWORDER_OFFSET UNITYSDK_OFFSET(0x1F5C4B90)
#define SPINE_UNITY_SKELETONRENDERER_SETMESHSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F5C4470)
#define SPINE_UNITY_SKELETONRENDERER_SET_ADDNORMALS_OFFSET UNITYSDK_OFFSET(0x1F5C3830)
#define SPINE_UNITY_SKELETONRENDERER_SET_ANIMATION_OFFSET UNITYSDK_OFFSET(0x1F5BFFD0)
#define SPINE_UNITY_SKELETONRENDERER_SET_CALCULATETANGENTS_OFFSET UNITYSDK_OFFSET(0x1F5C3870)
#define SPINE_UNITY_SKELETONRENDERER_SET_ENABLESEPARATORSLOTS_OFFSET UNITYSDK_OFFSET(0x1F5C0170)
#define SPINE_UNITY_SKELETONRENDERER_SET_IMMUTABLETRIANGLES_OFFSET UNITYSDK_OFFSET(0x1F5C3770)
#define SPINE_UNITY_SKELETONRENDERER_SET_INITIALFLIPX_OFFSET UNITYSDK_OFFSET(0x1F5C00C0)
#define SPINE_UNITY_SKELETONRENDERER_SET_INITIALFLIPY_OFFSET UNITYSDK_OFFSET(0x1F5C00E0)
#define SPINE_UNITY_SKELETONRENDERER_SET_INITIALSKINNAME_OFFSET UNITYSDK_OFFSET(0x1F5C00A0)
#define SPINE_UNITY_SKELETONRENDERER_SET_ISUPDATEDEXTERNALLY_OFFSET UNITYSDK_OFFSET(0x1F5C0700)
#define SPINE_UNITY_SKELETONRENDERER_SET_MASKINTERACTION_OFFSET UNITYSDK_OFFSET(0x1F5C34D0)
#define SPINE_UNITY_SKELETONRENDERER_SET_MATERIALSNEEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5C01A0)
#define SPINE_UNITY_SKELETONRENDERER_SET_MESHSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F5C0140)
#define SPINE_UNITY_SKELETONRENDERER_SET_PHYSICSMOVEMENTRELATIVETO_OFFSET UNITYSDK_OFFSET(0x1F5C0650)
#define SPINE_UNITY_SKELETONRENDERER_SET_PHYSICSPOSITIONINHERITANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x1F5C0490)
#define SPINE_UNITY_SKELETONRENDERER_SET_PHYSICSPOSITIONINHERITANCELIMIT_OFFSET UNITYSDK_OFFSET(0x1F5C0610)
#define SPINE_UNITY_SKELETONRENDERER_SET_PHYSICSROTATIONINHERITANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x1F5C0590)
#define SPINE_UNITY_SKELETONRENDERER_SET_PHYSICSROTATIONINHERITANCELIMIT_OFFSET UNITYSDK_OFFSET(0x1F5C0630)
#define SPINE_UNITY_SKELETONRENDERER_SET_PMAVERTEXCOLORS_OFFSET UNITYSDK_OFFSET(0x1F5C37B0)
#define SPINE_UNITY_SKELETONRENDERER_SET_SKELETONDATAASSET_OFFSET UNITYSDK_OFFSET(0x1F5BFFF0)
#define SPINE_UNITY_SKELETONRENDERER_SET_SKELETON_OFFSET UNITYSDK_OFFSET(0x1F5C0030)
#define SPINE_UNITY_SKELETONRENDERER_SET_THREADEDMESHGENERATION_OFFSET UNITYSDK_OFFSET(0x1F5C0760)
#define SPINE_UNITY_SKELETONRENDERER_SET_TINTBLACK_OFFSET UNITYSDK_OFFSET(0x1F5C37F0)
#define SPINE_UNITY_SKELETONRENDERER_SET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1F5C0100)
#define SPINE_UNITY_SKELETONRENDERER_SET_UPDATEWHENINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1F5C0120)
#define SPINE_UNITY_SKELETONRENDERER_SET_USECLIPPING_OFFSET UNITYSDK_OFFSET(0x1F5C3730)
#define SPINE_UNITY_SKELETONRENDERER_SET_ZSPACING_OFFSET UNITYSDK_OFFSET(0x1F5C36F0)
#define SPINE_UNITY_SKELETONRENDERER_UPDATEBUFFERSTOINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x1F5C2000)
#define SPINE_UNITY_SKELETONRENDERER_UPDATEMATERIALS_OFFSET UNITYSDK_OFFSET(0x1F5C2520)
#define SPINE_UNITY_SKELETONRENDERER_UPDATEMESHANDMATERIALSTOBUFFERS_1_OFFSET UNITYSDK_OFFSET(0x1F5C2160)
#define SPINE_UNITY_SKELETONRENDERER_UPDATEMESHANDMATERIALSTOBUFFERS_OFFSET UNITYSDK_OFFSET(0x1F5C20F0)
#define SPINE_UNITY_SKELETONRENDERER_UPDATEMESH_OFFSET UNITYSDK_OFFSET(0x1F5C1EB0)
#define SPINE_UNITY_SKELETONRENDERER_UPDATEUSEDMATERIALSFORRENDERERS_OFFSET UNITYSDK_OFFSET(0x1F5C5540)
#define SPINE_UNITY_SKELETONRENDERER_UPDATEWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F5C1E90)
#define SPINE_UNITY_SKELETONRENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5C67F0)
#define SPINE_UNITY_SKELETONRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5C6500)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRenderer_TypeDefinitionIndex = 38150;

	class SkeletonRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_STENCIL_COMP_PARAM_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkeletonRenderer_TypeDefinitionIndex)->GetStaticField(0x9EC0);
		}
		static ::System::Int32* StaticGet_SUBMESH_DUMMY_PARAM_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkeletonRenderer_TypeDefinitionIndex)->GetStaticField(0x9EC4);
		}
		static ::System::Int32* StaticGet_mainThreadID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkeletonRenderer_TypeDefinitionIndex)->GetStaticField(0x9EC8);
		}
		// static const ::UnityEngine::Rendering::CompareFunction STENCIL_COMP_MASKINTERACTION_NONE = 0x8; // 0x0
		// static const ::UnityEngine::Rendering::CompareFunction STENCIL_COMP_MASKINTERACTION_VISIBLE_INSIDE = 0x4; // 0x0
		// static const ::UnityEngine::Rendering::CompareFunction STENCIL_COMP_MASKINTERACTION_VISIBLE_OUTSIDE = 0x5; // 0x0
		// static const ::System::String* MATERIAL_OVERRIDE_SET_INSIDE_MASK_NAME; // 0x0
		// static const ::System::String* MATERIAL_OVERRIDE_SET_OUTSIDE_MASK_NAME; // 0x0
		::Spine::Unity::ISkeletonAnimation* skeletonAnimation; // 0x18
		::Spine::Unity::SkeletonDataAsset* skeletonDataAsset; // 0x20
		::Spine::Skeleton* skeleton; // 0x28
		::System::Boolean valid; // 0x30
		::System::Boolean wasMeshUpdatedAfterInit; // 0x31
		::System::Boolean updateTriangles; // 0x32
		::System::Byte _padding0[0x5];
		::System::String* initialSkinName; // 0x38
		::System::Boolean initialFlipX; // 0x40
		::System::Boolean initialFlipY; // 0x41
		::System::Byte _padding1[0x6];
		::Spine::Unity::MeshGenerator_Settings* meshSettings; // 0x48
		::Spine::Unity::SkeletonRendererInstruction* currentInstructions; // 0x50
		::Spine::Unity::UpdateMode updateMode; // 0x58
		::Spine::Unity::UpdateMode updateWhenInvisible; // 0x5C
		::System::Boolean clearStateOnDisable; // 0x60
		::System::Byte _padding2[0x7];
		::Il2CppArray<::System::String*>* separatorSlotNames; // 0x68
		::System::Collections::Generic::List_1<::Spine::Slot*>* separatorSlots; // 0x70
		::System::Boolean enableSeparatorSlots; // 0x78
		::System::Boolean disableRenderingOnOverride; // 0x79
		::System::Byte _padding3[0x6];
		::Spine::Unity::InstructionDelegate* generateMeshOverride; // 0x80
		::System::Collections::Generic::Dictionary_2<::Spine::Slot*, ::UnityEngine::Material*>* customSlotMaterials; // 0x88
		::System::Boolean materialsNeedUpdate; // 0x90
		::System::Byte _padding4[0x3];
		::UnityEngine::Vector2 physicsPositionInheritanceFactor; // 0x94
		::System::Single physicsRotationInheritanceFactor; // 0x9C
		::UnityEngine::Vector2 physicsPositionInheritanceLimit; // 0xA0
		::System::Single physicsRotationInheritanceLimit; // 0xA8
		::System::Byte _padding5[0x4];
		::UnityEngine::Transform* physicsMovementRelativeTo; // 0xB0
		::UnityEngine::Vector3 lastPosition; // 0xB8
		::System::Single lastRotation; // 0xC4
		::UnityEngine::Vector3 positionDelta; // 0xC8
		::System::Single rotationDelta; // 0xD4
		::Spine::Unity::SettingsTriState threadedMeshGeneration; // 0xD8
		::System::Boolean isUpdatedExternally; // 0xDC
		::System::Boolean requiresMeshBufferAssignmentMainThread; // 0xDD
		::System::Byte _padding6[0x2];
		::Spine::Unity::SkeletonRendererDelegate* _UpdateLocal; // 0xE0
		::Spine::Unity::SkeletonRendererDelegate* _UpdateWorld; // 0xE8
		::Spine::Unity::SkeletonRendererDelegate* _UpdateComplete; // 0xF0
		::Spine::Unity::MeshGeneratorDelegate* OnPostProcessVertices; // 0xF8
		::Spine::Unity::SkeletonRendererDelegate* OnRebuild; // 0x100
		::Spine::Unity::InstructionDelegate* OnInstructionsPrepared; // 0x108
		::Spine::Unity::SkeletonRendererDelegate* OnMeshAndMaterialsUpdated; // 0x110
		::UnityEngine::MeshRenderer* meshRenderer; // 0x118
		::UnityEngine::MeshFilter* meshFilter; // 0x120
		::System::Boolean singleSubmesh; // 0x128
		::System::Byte _padding7[0x7];
		::Spine::Unity::MeshGenerator* meshGenerator; // 0x130
		::Spine::Unity::MeshRendererBuffers* rendererBuffers; // 0x138
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>* customMaterialOverride; // 0x140
		::System::Boolean fixDrawOrder; // 0x148
		::System::Byte _padding8[0x3];
		::UnityEngine::SpriteMaskInteraction maskInteraction; // 0x14C
		::Il2CppArray<::Spine::Unity::MaterialOverrideSet*>* insideMaskMaterials; // 0x150
		::Il2CppArray<::Spine::Unity::MaterialOverrideSet*>* outsideMaskMaterials; // 0x158
		::UnityEngine::MaterialPropertyBlock* reusedPropertyBlock; // 0x160

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER__CCTOR_OFFSET))();
		}

		::System::Void add_generateMeshOverride(::Spine::Unity::InstructionDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::InstructionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD_GENERATEMESHOVERRIDE_OFFSET))(this, value);
		}

		::System::Void remove_generateMeshOverride(::Spine::Unity::InstructionDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::InstructionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE_GENERATEMESHOVERRIDE_OFFSET))(this, value);
		}

		::Spine::Unity::ISkeletonRenderer* get_Renderer()
		{
			return ((::Spine::Unity::ISkeletonRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_RENDERER_OFFSET))(this);
		}

		::UnityEngine::MonoBehaviour* get_Component()
		{
			return ((::UnityEngine::MonoBehaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_COMPONENT_OFFSET))(this);
		}

		::Spine::Unity::ISkeletonAnimation* get_Animation()
		{
			return ((::Spine::Unity::ISkeletonAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_ANIMATION_OFFSET))(this);
		}

		::System::Void set_Animation(::Spine::Unity::ISkeletonAnimation* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_ANIMATION_OFFSET))(this, value);
		}

		::Spine::Unity::SkeletonDataAsset* get_SkeletonDataAsset()
		{
			return ((::Spine::Unity::SkeletonDataAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_SKELETONDATAASSET_OFFSET))(this);
		}

		::System::Void set_SkeletonDataAsset(::Spine::Unity::SkeletonDataAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonDataAsset*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_SKELETONDATAASSET_OFFSET))(this, value);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return ((::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_SKELETON_OFFSET))(this);
		}

		::System::Void set_Skeleton(::Spine::Skeleton* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_SKELETON_OFFSET))(this, value);
		}

		::Spine::SkeletonData* get_SkeletonData()
		{
			return ((::Spine::SkeletonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_SKELETONDATA_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_ISVALID_OFFSET))(this);
		}

		::System::String* get_InitialSkinName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_INITIALSKINNAME_OFFSET))(this);
		}

		::System::Void set_InitialSkinName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_INITIALSKINNAME_OFFSET))(this, value);
		}

		::System::Boolean get_InitialFlipX()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_INITIALFLIPX_OFFSET))(this);
		}

		::System::Void set_InitialFlipX(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_INITIALFLIPX_OFFSET))(this, value);
		}

		::System::Boolean get_InitialFlipY()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_INITIALFLIPY_OFFSET))(this);
		}

		::System::Void set_InitialFlipY(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_INITIALFLIPY_OFFSET))(this, value);
		}

		::Spine::Unity::UpdateMode get_UpdateMode()
		{
			return ((::Spine::Unity::UpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_UPDATEMODE_OFFSET))(this);
		}

		::System::Void set_UpdateMode(::Spine::Unity::UpdateMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateMode))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_UPDATEMODE_OFFSET))(this, value);
		}

		::Spine::Unity::UpdateMode get_UpdateWhenInvisible()
		{
			return ((::Spine::Unity::UpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_UPDATEWHENINVISIBLE_OFFSET))(this);
		}

		::System::Void set_UpdateWhenInvisible(::Spine::Unity::UpdateMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::UpdateMode))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_UPDATEWHENINVISIBLE_OFFSET))(this, value);
		}

		::Spine::Unity::MeshGenerator_Settings* get_MeshSettings()
		{
			return ((::Spine::Unity::MeshGenerator_Settings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_MESHSETTINGS_OFFSET))(this);
		}

		::System::Void set_MeshSettings(::Spine::Unity::MeshGenerator_Settings* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MeshGenerator_Settings*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_MESHSETTINGS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Spine::Slot*>* get_SeparatorSlots()
		{
			return ((::System::Collections::Generic::List_1<::Spine::Slot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_SEPARATORSLOTS_OFFSET))(this);
		}

		::System::Boolean get_EnableSeparatorSlots()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_ENABLESEPARATORSLOTS_OFFSET))(this);
		}

		::System::Void set_EnableSeparatorSlots(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_ENABLESEPARATORSLOTS_OFFSET))(this, value);
		}

		::System::Boolean get_HasGenerateMeshOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_HASGENERATEMESHOVERRIDE_OFFSET))(this);
		}

		::System::Boolean get_MaterialsNeedUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_MATERIALSNEEDUPDATE_OFFSET))(this);
		}

		::System::Void set_MaterialsNeedUpdate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_MATERIALSNEEDUPDATE_OFFSET))(this, value);
		}

		::System::Void add_GenerateMeshOverride(::Spine::Unity::InstructionDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::InstructionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD_GENERATEMESHOVERRIDE_OFFSET))(this, value);
		}

		::System::Void remove_GenerateMeshOverride(::Spine::Unity::InstructionDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::InstructionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE_GENERATEMESHOVERRIDE_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::Spine::Slot*, ::UnityEngine::Material*>* get_CustomSlotMaterials()
		{
			return ((::System::Collections::Generic::Dictionary_2<::Spine::Slot*, ::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_CUSTOMSLOTMATERIALS_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_PhysicsPositionInheritanceFactor()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_PHYSICSPOSITIONINHERITANCEFACTOR_OFFSET))(this);
		}

		::System::Void set_PhysicsPositionInheritanceFactor(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_PHYSICSPOSITIONINHERITANCEFACTOR_OFFSET))(this, value);
		}

		::System::Single get_PhysicsRotationInheritanceFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_PHYSICSROTATIONINHERITANCEFACTOR_OFFSET))(this);
		}

		::System::Void set_PhysicsRotationInheritanceFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_PHYSICSROTATIONINHERITANCEFACTOR_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_PhysicsPositionInheritanceLimit()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_PHYSICSPOSITIONINHERITANCELIMIT_OFFSET))(this);
		}

		::System::Void set_PhysicsPositionInheritanceLimit(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_PHYSICSPOSITIONINHERITANCELIMIT_OFFSET))(this, value);
		}

		::System::Single get_PhysicsRotationInheritanceLimit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_PHYSICSROTATIONINHERITANCELIMIT_OFFSET))(this);
		}

		::System::Void set_PhysicsRotationInheritanceLimit(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_PHYSICSROTATIONINHERITANCELIMIT_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_PhysicsMovementRelativeTo()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_PHYSICSMOVEMENTRELATIVETO_OFFSET))(this);
		}

		::System::Void set_PhysicsMovementRelativeTo(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_PHYSICSMOVEMENTRELATIVETO_OFFSET))(this, value);
		}

		::System::Boolean get_IsUpdatedExternally()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_ISUPDATEDEXTERNALLY_OFFSET))(this);
		}

		::System::Void set_IsUpdatedExternally(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_ISUPDATEDEXTERNALLY_OFFSET))(this, value);
		}

		::System::Boolean get_UsesThreadedMeshGeneration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_USESTHREADEDMESHGENERATION_OFFSET))(this);
		}

		::System::Boolean get_RequiresMeshBufferAssignmentMainThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_REQUIRESMESHBUFFERASSIGNMENTMAINTHREAD_OFFSET))(this);
		}

		::Spine::Unity::SettingsTriState get_ThreadedMeshGeneration()
		{
			return ((::Spine::Unity::SettingsTriState(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_THREADEDMESHGENERATION_OFFSET))(this);
		}

		::System::Void set_ThreadedMeshGeneration(::Spine::Unity::SettingsTriState value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SettingsTriState))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_THREADEDMESHGENERATION_OFFSET))(this, value);
		}

		::System::Void ClearCommon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_CLEARCOMMON_OFFSET))(this);
		}

		::System::Void InitializeCommon(::System::Boolean overwrite, ::System::Boolean quiet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_INITIALIZECOMMON_OFFSET))(this, overwrite, quiet);
		}

		::System::Void AssignInitialSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ASSIGNINITIALSKIN_OFFSET))(this);
		}

		::System::Void ResetLastPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_RESETLASTPOSITION_OFFSET))(this);
		}

		::System::Void ResetLastRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_RESETLASTROTATION_OFFSET))(this);
		}

		::System::Void ResetLastPositionAndRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_RESETLASTPOSITIONANDROTATION_OFFSET))(this);
		}

		::System::Void GatherTransformMovementForPhysics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GATHERTRANSFORMMOVEMENTFORPHYSICS_OFFSET))(this);
		}

		::System::Void ApplyTransformMovementToPhysics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_APPLYTRANSFORMMOVEMENTTOPHYSICS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPhysicsTransformPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GETPHYSICSTRANSFORMPOSITION_OFFSET))(this);
		}

		::System::Single GetPhysicsTransformRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GETPHYSICSTRANSFORMROTATION_OFFSET))(this);
		}

		::System::Void AfterAnimationApplied(::System::Boolean calledFromMainThread)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_AFTERANIMATIONAPPLIED_OFFSET))(this, calledFromMainThread);
		}

		::Spine::Unity::CoroutineIterator AfterAnimationAppliedSplit(::Spine::Unity::CoroutineIterator coroutineIterator)
		{
			return ((::Spine::Unity::CoroutineIterator(*)(::PVOID, ::Spine::Unity::CoroutineIterator))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_AFTERANIMATIONAPPLIEDSPLIT_OFFSET))(this, coroutineIterator);
		}

		::System::Void IssueOnPostProcessVertices(::Spine::Unity::MeshGeneratorBuffers buffers)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MeshGeneratorBuffers))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ISSUEONPOSTPROCESSVERTICES_OFFSET))(this, buffers);
		}

		::System::Void UpdateWorldTransform(::Spine::Physics physics)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Physics))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_UPDATEWORLDTRANSFORM_OFFSET))(this, physics);
		}

		::System::Void UpdateMesh(::System::Boolean calledFromMainThread)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_UPDATEMESH_OFFSET))(this, calledFromMainThread);
		}

		::System::Boolean UpdateBuffersToInstructions(::System::Boolean calledFromMainThread)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_UPDATEBUFFERSTOINSTRUCTIONS_OFFSET))(this, calledFromMainThread);
		}

		::System::Void UpdateMeshAndMaterialsToBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_UPDATEMESHANDMATERIALSTOBUFFERS_OFFSET))(this);
		}

		::System::Void UpdateMeshAndMaterialsToBuffers_1(::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>* workingSubmeshInstructions, ::Spine::Unity::MeshRendererBuffers_SmartMesh* currentSmartMesh, ::System::Boolean updateTriangles)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>*, ::Spine::Unity::MeshRendererBuffers_SmartMesh*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_UPDATEMESHANDMATERIALSTOBUFFERS_1_OFFSET))(this, workingSubmeshInstructions, currentSmartMesh, updateTriangles);
		}

		::System::Void UpdateMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_UPDATEMATERIALS_OFFSET))(this);
		}

		::System::Void InitializeMainThreadID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_INITIALIZEMAINTHREADID_OFFSET))(this);
		}

		::System::Void AssertIsMainThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ASSERTISMAINTHREAD_OFFSET))(this);
		}

		::System::Void AssertIsWorkerThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ASSERTISWORKERTHREAD_OFFSET))(this);
		}

		::System::Void add__UpdateLocal(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD__UPDATELOCAL_OFFSET))(this, value);
		}

		::System::Void remove__UpdateLocal(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE__UPDATELOCAL_OFFSET))(this, value);
		}

		::System::Void add__UpdateWorld(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD__UPDATEWORLD_OFFSET))(this, value);
		}

		::System::Void remove__UpdateWorld(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE__UPDATEWORLD_OFFSET))(this, value);
		}

		::System::Void add__UpdateComplete(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD__UPDATECOMPLETE_OFFSET))(this, value);
		}

		::System::Void remove__UpdateComplete(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE__UPDATECOMPLETE_OFFSET))(this, value);
		}

		::System::Void add_UpdateLocal(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD_UPDATELOCAL_OFFSET))(this, value);
		}

		::System::Void remove_UpdateLocal(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE_UPDATELOCAL_OFFSET))(this, value);
		}

		::System::Void add_UpdateWorld(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD_UPDATEWORLD_OFFSET))(this, value);
		}

		::System::Void remove_UpdateWorld(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE_UPDATEWORLD_OFFSET))(this, value);
		}

		::System::Void add_UpdateComplete(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD_UPDATECOMPLETE_OFFSET))(this, value);
		}

		::System::Void remove_UpdateComplete(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE_UPDATECOMPLETE_OFFSET))(this, value);
		}

		::System::Void add_OnPostProcessVertices(::Spine::Unity::MeshGeneratorDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MeshGeneratorDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD_ONPOSTPROCESSVERTICES_OFFSET))(this, value);
		}

		::System::Void remove_OnPostProcessVertices(::Spine::Unity::MeshGeneratorDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MeshGeneratorDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE_ONPOSTPROCESSVERTICES_OFFSET))(this, value);
		}

		::System::Void add_OnRebuild(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD_ONREBUILD_OFFSET))(this, value);
		}

		::System::Void remove_OnRebuild(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE_ONREBUILD_OFFSET))(this, value);
		}

		::System::Void add_OnInstructionsPrepared(::Spine::Unity::InstructionDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::InstructionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD_ONINSTRUCTIONSPREPARED_OFFSET))(this, value);
		}

		::System::Void remove_OnInstructionsPrepared(::Spine::Unity::InstructionDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::InstructionDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE_ONINSTRUCTIONSPREPARED_OFFSET))(this, value);
		}

		::System::Void add_OnMeshAndMaterialsUpdated(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ADD_ONMESHANDMATERIALSUPDATED_OFFSET))(this, value);
		}

		::System::Void remove_OnMeshAndMaterialsUpdated(::Spine::Unity::SkeletonRendererDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererDelegate*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REMOVE_ONMESHANDMATERIALSUPDATED_OFFSET))(this, value);
		}

		::System::Void set_MaskInteraction(::UnityEngine::SpriteMaskInteraction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteMaskInteraction))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_MASKINTERACTION_OFFSET))(this, value);
		}

		::UnityEngine::SpriteMaskInteraction get_MaskInteraction()
		{
			return ((::UnityEngine::SpriteMaskInteraction(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_MASKINTERACTION_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>* get_CustomMaterialOverride()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_CUSTOMMATERIALOVERRIDE_OFFSET))(this);
		}

		::Spine::SkeletonClipping* get_SkeletonClipping()
		{
			return ((::Spine::SkeletonClipping*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_SKELETONCLIPPING_OFFSET))(this);
		}

		::System::Boolean get_Freeze()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_FREEZE_OFFSET))(this);
		}

		::System::Single get_MeshScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_MESHSCALE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_MeshOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_MESHOFFSET_OFFSET))(this);
		}

		::System::Boolean get_UsesSingleSubmesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_USESSINGLESUBMESH_OFFSET))(this);
		}

		::System::Boolean get_NeedsToGenerateMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_NEEDSTOGENERATEMESH_OFFSET))(this);
		}

		::System::Boolean get_NeedsMainThreadRendererPreparation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_NEEDSMAINTHREADRENDERERPREPARATION_OFFSET))(this);
		}

		::System::Single get_zSpacing()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_ZSPACING_OFFSET))(this);
		}

		::System::Void set_zSpacing(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_ZSPACING_OFFSET))(this, value);
		}

		::System::Boolean get_useClipping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_USECLIPPING_OFFSET))(this);
		}

		::System::Void set_useClipping(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_USECLIPPING_OFFSET))(this, value);
		}

		::System::Boolean get_immutableTriangles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_IMMUTABLETRIANGLES_OFFSET))(this);
		}

		::System::Void set_immutableTriangles(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_IMMUTABLETRIANGLES_OFFSET))(this, value);
		}

		::System::Boolean get_pmaVertexColors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_PMAVERTEXCOLORS_OFFSET))(this);
		}

		::System::Void set_pmaVertexColors(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_PMAVERTEXCOLORS_OFFSET))(this, value);
		}

		::System::Boolean get_tintBlack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_TINTBLACK_OFFSET))(this);
		}

		::System::Void set_tintBlack(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_TINTBLACK_OFFSET))(this, value);
		}

		::System::Boolean get_addNormals()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_ADDNORMALS_OFFSET))(this);
		}

		::System::Void set_addNormals(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_ADDNORMALS_OFFSET))(this, value);
		}

		::System::Boolean get_calculateTangents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GET_CALCULATETANGENTS_OFFSET))(this);
		}

		::System::Void set_calculateTangents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SET_CALCULATETANGENTS_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_AWAKE_OFFSET))(this);
		}

		::System::Void Initialize(::System::Boolean overwrite, ::System::Boolean quiet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_INITIALIZE_OFFSET))(this, overwrite, quiet);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_CLEAR_OFFSET))(this);
		}

		::System::Void ClearState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_CLEARSTATE_OFFSET))(this);
		}

		::System::Void ClearSkeletonState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_CLEARSKELETONSTATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnBecameVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ONBECAMEVISIBLE_OFFSET))(this);
		}

		::System::Void OnBecameInvisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ONBECAMEINVISIBLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SetMeshSettings(::Spine::Unity::MeshGenerator_Settings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MeshGenerator_Settings*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SETMESHSETTINGS_OFFSET))(this, settings);
		}

		::System::Void ClearMeshGenerator()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_CLEARMESHGENERATOR_OFFSET))(this);
		}

		::UnityEngine::Mesh* GetCurrentMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GETCURRENTMESH_OFFSET))(this);
		}

		::System::Boolean RequiresMultipleSubmeshesByDrawOrder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REQUIRESMULTIPLESUBMESHESBYDRAWORDER_OFFSET))(this);
		}

		::System::Void PrepareInstructionsAndRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_PREPAREINSTRUCTIONSANDRENDERERS_OFFSET))(this);
		}

		::System::Void GenerateSkeletonRendererInstructions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_GENERATESKELETONRENDERERINSTRUCTIONS_OFFSET))(this);
		}

		::System::Boolean FillBuffersFromSubmeshInstructions(::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>* workingSubmeshInstructions, ::Spine::Unity::MeshRendererBuffers_SmartMesh* currentSmartMesh, ::System::Boolean updateTriangles)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>*, ::Spine::Unity::MeshRendererBuffers_SmartMesh*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_FILLBUFFERSFROMSUBMESHINSTRUCTIONS_OFFSET))(this, workingSubmeshInstructions, currentSmartMesh, updateTriangles);
		}

		::System::Boolean FillSingleBufferFromInstructions(::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>* workingSubmeshInstructions, ::Spine::Unity::MeshRendererBuffers_SmartMesh* currentSmartMesh, ::System::Boolean updateTriangles)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>*, ::Spine::Unity::MeshRendererBuffers_SmartMesh*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_FILLSINGLEBUFFERFROMINSTRUCTIONS_OFFSET))(this, workingSubmeshInstructions, currentSmartMesh, updateTriangles);
		}

		::System::Boolean FillMeshFromBuffers(::Spine::Unity::MeshRendererBuffers_SmartMesh* currentSmartMesh, ::System::Boolean updateTriangles)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Unity::MeshRendererBuffers_SmartMesh*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_FILLMESHFROMBUFFERS_OFFSET))(this, currentSmartMesh, updateTriangles);
		}

		::System::Void EnableRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ENABLERENDERERS_OFFSET))(this);
		}

		::System::Void DisableRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_DISABLERENDERERS_OFFSET))(this);
		}

		::System::Void AssignMeshAtRenderer(::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>* workingSubmeshInstructions, ::Spine::Unity::MeshRendererBuffers_SmartMesh* currentSmartMesh)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>*, ::Spine::Unity::MeshRendererBuffers_SmartMesh*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ASSIGNMESHATRENDERER_OFFSET))(this, workingSubmeshInstructions, currentSmartMesh);
		}

		::System::Void AssignMeshAtRenderer_1(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_ASSIGNMESHATRENDERER_1_OFFSET))(this, mesh);
		}

		::System::Void ClearMeshAtRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_CLEARMESHATRENDERER_OFFSET))(this);
		}

		::System::Void FindAndApplySeparatorSlots(::System::String* startsWith, ::System::Boolean clearExistingSeparators, ::System::Boolean updateStringArray)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_FINDANDAPPLYSEPARATORSLOTS_OFFSET))(this, startsWith, clearExistingSeparators, updateStringArray);
		}

		::System::Void FindAndApplySeparatorSlots_1(::System::Func_2<::System::String*, ::System::Boolean>* slotNamePredicate, ::System::Boolean clearExistingSeparators, ::System::Boolean updateStringArray)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::String*, ::System::Boolean>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_FINDANDAPPLYSEPARATORSLOTS_1_OFFSET))(this, slotNamePredicate, clearExistingSeparators, updateStringArray);
		}

		::System::Void ReapplySeparatorSlotNames()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_REAPPLYSEPARATORSLOTNAMES_OFFSET))(this);
		}

		::System::Void UpdateUsedMaterialsForRenderers(::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>* instructions)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_UPDATEUSEDMATERIALSFORRENDERERS_OFFSET))(this, instructions);
		}

		::System::Void ConfigureMaterials(::Il2CppArray<::UnityEngine::Material*>* sharedMaterials, ::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>* instructions)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*, ::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_CONFIGUREMATERIALS_OFFSET))(this, sharedMaterials, instructions);
		}

		::System::Void ConfigureMaterials_1(::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>* instructions)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_CONFIGUREMATERIALS_1_OFFSET))(this, instructions);
		}

		::System::Void InitSpriteMaskMaterialsMaskMode(::Il2CppArray<::Spine::Unity::MaterialOverrideSet*>*& maskMaterials, ::Spine::Unity::SkeletonRenderer* skeletonRenderer, ::System::String* overrideSetName, ::UnityEngine::Rendering::CompareFunction maskFunction)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Spine::Unity::MaterialOverrideSet*>*&, ::Spine::Unity::SkeletonRenderer*, ::System::String*, ::UnityEngine::Rendering::CompareFunction))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_INITSPRITEMASKMATERIALSMASKMODE_OFFSET))(this, maskMaterials, skeletonRenderer, overrideSetName, maskFunction);
		}

		static ::Spine::Unity::MaterialOverrideSet* InitSpriteMaskOverrideSet(::Spine::Unity::AtlasAssetBase* atlasAsset, ::System::String* overrideSetName, ::UnityEngine::Rendering::CompareFunction maskFunction)
		{
			return ((::Spine::Unity::MaterialOverrideSet*(*)(::Spine::Unity::AtlasAssetBase*, ::System::String*, ::UnityEngine::Rendering::CompareFunction))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_INITSPRITEMASKOVERRIDESET_OFFSET))(atlasAsset, overrideSetName, maskFunction);
		}

		::System::Void SetMaterialSettingsToFixDrawOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_SETMATERIALSETTINGSTOFIXDRAWORDER_OFFSET))(this);
		}

		::System::Void HandleOnDemandLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_HANDLEONDEMANDLOADING_OFFSET))(this);
		}

		::System::Void MainThreadPrepareLateUpdateInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_MAINTHREADPREPARELATEUPDATEINTERNAL_OFFSET))(this);
		}

		::System::Void LateUpdateImplementation(::System::Boolean calledFromMainThread)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER_LATEUPDATEIMPLEMENTATION_OFFSET))(this, calledFromMainThread);
		}
	};
}
