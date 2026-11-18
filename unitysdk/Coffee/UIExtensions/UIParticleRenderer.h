#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Coffee/UIExtensions/AnimatableProperty_ShaderPropertyType.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleRenderer_JobMeshUpdateState.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleRenderer_JobRendererData.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/CombineInstance.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/ParticleSystemVertexStream.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleRenderer_JobRendererUpdate.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleRenderer_JobTransformSnapshot.h"
#include "unitysdk/UnityEngine/ParticleSystemRenderer_UIParticleRendererFullJobData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace Coffee::UIExtensions { class UIParticle; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ACQUIREOPTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E1FBE60)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ACQUIRERENDERERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E1F0B80)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ADDRENDERER_OFFSET UNITYSDK_OFFSET(0x1E1E3CA0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_APPLYJOBMESHUPDATE_OFFSET UNITYSDK_OFFSET(0x1E202120)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_APPLYMESHANDFINALIZE_OFFSET UNITYSDK_OFFSET(0x1E1FE1F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_APPLYPREPARERESULT_OFFSET UNITYSDK_OFFSET(0x1E1FB8B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_APPLYREQUIREDVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1E1F0230)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_BAKEMESHOLDWAY_OFFSET UNITYSDK_OFFSET(0x1E1F5330)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_BUILDJOBDATA_OFFSET UNITYSDK_OFFSET(0x1E1E9450)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E1F8C00)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATECOMBINEMESHMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1E1F7FD0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATECOMBINEMESHMATRIX_OFFSET UNITYSDK_OFFSET(0x1E1F7BF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATEJOBBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E203A00)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATEJOBCOMBINEMESHMATRIX_OFFSET UNITYSDK_OFFSET(0x1E202FE0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATEJOBWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x1E2036B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CHECKKEYWORDSET_OFFSET UNITYSDK_OFFSET(0x1E1F4FF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEANUPOPTSTATEONMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E1F0950)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEANUPOPTSTATE_OFFSET UNITYSDK_OFFSET(0x1E1EE060)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEARJOBMATERIALUPDATES_OFFSET UNITYSDK_OFFSET(0x1E202900)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEARMESH_OFFSET UNITYSDK_OFFSET(0x1E1F3B50)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_COMPLETEJOBSIMULATEPARTICLES_OFFSET UNITYSDK_OFFSET(0x1E200E80)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_COMPLETEMATERIALJOB_OFFSET UNITYSDK_OFFSET(0x1E2042C0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_COMPLETEMATRIXBOUNDSJOB_OFFSET UNITYSDK_OFFSET(0x1E202F40)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CREATEJOBRENDERERUPDATE_OFFSET UNITYSDK_OFFSET(0x1E1E7B50)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_DISPATCHMATERIALJOB_OFFSET UNITYSDK_OFFSET(0x1E2040A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_DODEFERREDJOBUIPARTICLEMATERIALUPDATETHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1E2075A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_DOUIPARTICLEMATERIALUPDATE_OFFSET UNITYSDK_OFFSET(0x1E1F92C0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ENABLEUIVERTEXCOLORCALC_OFFSET UNITYSDK_OFFSET(0x1E1EEC60)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ENSUREJOBTRANSFORMCACHE_OFFSET UNITYSDK_OFFSET(0x1E204700)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ENSUREJOBTRANSFORMSNAPSHOTCOUNT_OFFSET UNITYSDK_OFFSET(0x1E205140)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_FINALIZEEACHPARTICLE_OFFSET UNITYSDK_OFFSET(0x1E1FD6C0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_FINALIZEKEYWORDSANDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E1FE8B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_FINALIZEOPT_OFFSET UNITYSDK_OFFSET(0x1E1FCCB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_FINALIZETRAILBAKE_OFFSET UNITYSDK_OFFSET(0x1E1FCE80)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_FULLJOBFINALIZEEACHRENDERER_OFFSET UNITYSDK_OFFSET(0x1E1FC6A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_FULLJOBHASSUBEMITTER_OFFSET UNITYSDK_OFFSET(0x1E1E8DF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBCUSTOMSIMULATIONSPACEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E1FFBD0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBCUSTOMSIMULATIONSPACETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E205690)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBPARTICLEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E1FF370)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBPARTICLEROTATION_OFFSET UNITYSDK_OFFSET(0x1E1FF4D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBRENDERERWORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x1E1FF810)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E1F14F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETPARTICLESYSTEMINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1E1E8EB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETPSLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E1F7970)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETUIPARTICLEOPTSTATE_OFFSET UNITYSDK_OFFSET(0x1E1F1AB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x1E1F8760)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDSCALE_OFFSET UNITYSDK_OFFSET(0x1E1F3260)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E1DD430)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_RAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0x1E1ECC70)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_ROOTCANVASRECT_OFFSET UNITYSDK_OFFSET(0x1E1ECC80)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_INVALIDATEJOBTRANSFORMCACHE_OFFSET UNITYSDK_OFFSET(0x1E1DEBF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_INVALIDATESMOOTHMASKCACHE_OFFSET UNITYSDK_OFFSET(0x1E1EE010)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ISINVALIDFORJOB_OFFSET UNITYSDK_OFFSET(0x1E1FEAF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ISINVALID_OFFSET UNITYSDK_OFFSET(0x1E1F33B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ISJOBRENDERERSCALEVISIBLE_OFFSET UNITYSDK_OFFSET(0x1E1E7740)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E1EFF60)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E1EF590)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E1EF360)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E1EEE60)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E1EF850)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREDEFERREDJOBUIPARTICLEMATERIALUPDATE_1_OFFSET UNITYSDK_OFFSET(0x1E2023D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREDEFERREDJOBUIPARTICLEMATERIALUPDATE_OFFSET UNITYSDK_OFFSET(0x1E206B80)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBMESHCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E200BD0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBMESHUPDATE_OFFSET UNITYSDK_OFFSET(0x1E200460)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBPARTICLERENDERERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E201890)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBPARTICLERENDERERMATRIX_OFFSET UNITYSDK_OFFSET(0x1E201320)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBPARTICLESYSTEMCONFIGDATAFORFRAME_OFFSET UNITYSDK_OFFSET(0x1E2001F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBPRIMARYSIMULATE_OFFSET UNITYSDK_OFFSET(0x1E2060F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBSIMULATEPARTICLES_1_OFFSET UNITYSDK_OFFSET(0x1E2007E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBSIMULATEPARTICLES_OFFSET UNITYSDK_OFFSET(0x1E200AE0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PUSHOPTMATERIALPARAMS_OFFSET UNITYSDK_OFFSET(0x1E1FDA70)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PUSHSMOOTHMASKDYNAMICPARAMSTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1E207E20)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PUSHSMOOTHMASKDYNAMICPARAMS_OFFSET UNITYSDK_OFFSET(0x1E1F2A60)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REBUILDJOBTRANSFORMCACHE_OFFSET UNITYSDK_OFFSET(0x1E204A60)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0x1E1F0180)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHCLIPANCESTOR_OFFSET UNITYSDK_OFFSET(0x1E1EF200)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHJOBPARTICLESYSTEMCONFIGCACHE_OFFSET UNITYSDK_OFFSET(0x1E1F3080)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHJOBPARTICLESYSTEMCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x1E1FFE10)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHJOBTRANSFORMSNAPSHOTS_OFFSET UNITYSDK_OFFSET(0x1E2044A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHOWNSMOOTHMASKRENDERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E1F2470)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHSMOOTHMASKONRENDERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E1F2180)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REGISTERCOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1E204360)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REGISTERJOBTRANSFORMCACHE_OFFSET UNITYSDK_OFFSET(0x1E1E53D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REGISTERJOBTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E1E5130)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RELEASEJOBTRANSFORMCACHE_OFFSET UNITYSDK_OFFSET(0x1E204840)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RELEASERENDERERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E1EE430)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESET_OFFSET UNITYSDK_OFFSET(0x1E1E0A40)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVEHASSUBEMITTER_OFFSET UNITYSDK_OFFSET(0x1E1FB260)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVEJOBRESOLUTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1E205B40)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVERESOLUTIONCHANGE_1_OFFSET UNITYSDK_OFFSET(0x1E1FA6B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVERESOLUTIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1E1F4500)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVESMOOTHMASK_OFFSET UNITYSDK_OFFSET(0x1E1EFCB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESTOREVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1E1F0680)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SCHEDULEMATRIXBOUNDSJOB_OFFSET UNITYSDK_OFFSET(0x1E202CF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SETJOBSCREENSIZE_OFFSET UNITYSDK_OFFSET(0x1E202B00)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SETUPPARTICLERENDERER_OFFSET UNITYSDK_OFFSET(0x1E1F6CB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SET_OFFSET UNITYSDK_OFFSET(0x1E1E1310)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SHADERPROPERTYTYPETOINT_OFFSET UNITYSDK_OFFSET(0x1E1E93F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SIMULATEJOBPREPAREDPARTICLES_OFFSET UNITYSDK_OFFSET(0x1E200930)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SIMULATEPARTICLES_OFFSET UNITYSDK_OFFSET(0x1E1F3F90)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1E1F46E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_START_OFFSET UNITYSDK_OFFSET(0x1E1EEDF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_TRYGETJOBTRANSFORMSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1E1E4A20)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_TRYSETCANVASRENDERERMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E1EDC40)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1E1FA460)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E1FA0A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMESHINNER_OFFSET UNITYSDK_OFFSET(0x1E1F5140)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMESH_OFFSET UNITYSDK_OFFSET(0x1E1E36F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E208070)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E208040)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E208630)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E2085D0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E208640)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E208710)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E208720)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E208730)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E208740)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0x1E208810)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_START_OFFSET UNITYSDK_OFFSET(0x1E2088A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1E208930)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRenderer_TypeDefinitionIndex = 34409;

	class UIParticleRenderer : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_s_JobTransformIndexMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x2A300);
		}
		static ::Il2CppArray<::UnityEngine::CombineInstance>** StaticGet_s_CombineInstances()
		{
			return (::Il2CppArray<::UnityEngine::CombineInstance>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x2A308);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>** StaticGet_s_JobTransformCacheTransforms()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x2A310);
		}
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_s_JobTransformSnapshots()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x2A318);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystemRenderer*, ::System::Object*>** StaticGet_s_RendererMaterialEntries()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystemRenderer*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x2A320);
		}
		static ::Il2CppArray<::UnityEngine::Transform*>** StaticGet_s_JobTransformArray()
		{
			return (::Il2CppArray<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x2A328);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystemRenderer*, ::System::Object*>** StaticGet_s_OverrideEntries()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::ParticleSystemRenderer*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x2A330);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>** StaticGet_s_RequiredStreams()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x2A338);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_s_Corners()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x2A340);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_s_Materials()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x2A348);
		}
		static ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>** StaticGet_s_Renderers()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x2A350);
		}
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_s_Mpb()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x2A358);
		}
		static ::System::Int32* StaticGet__MultipliedColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x87B0);
		}
		static ::System::Int32* StaticGet__SmoothMaskScreenRow2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x87B4);
		}
		static ::Unity::Jobs::JobHandle* StaticGet__matrixBoundsJobHandle()
		{
			return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x87B8);
		}
		static ::System::Int32* StaticGet__ClipRect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x87C8);
		}
		static ::System::Int32* StaticGet__SmoothMaskScreenRow1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x87CC);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_JobScreenSize()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x87D0);
		}
		static ::System::Boolean* StaticGet__init()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x87D8);
		}
		static ::System::Boolean* StaticGet_s_JobTransformCacheDirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x87D9);
		}
		static ::System::Boolean* StaticGet_useJobParticleSystemConfigCache()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x87DA);
		}
		static ::System::Boolean* StaticGet_useJobRefresh()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x87DB);
		}
		static ::System::Int32* StaticGet__UITransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x87DC);
		}
		static ::System::Int32* StaticGet__CanvasMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x87E0);
		}
		static ::System::Int32* StaticGet__SmoothMaskScreenSpace()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x87E4);
		}
		static ::System::Int32* StaticGet__SmoothMaskScreenRow0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x87E8);
		}
		static ::UnityEngine::Jobs::TransformAccessArray* StaticGet_s_JobTransformAccessArray()
		{
			return (::UnityEngine::Jobs::TransformAccessArray*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x87F0);
		}
		static ::System::Int32* StaticGet__BakeCameraTransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x87F8);
		}
		static ::System::Int32* StaticGet__CombineMeshMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x87FC);
		}
		static ::Unity::Jobs::JobHandle* StaticGet__matJobHandle()
		{
			return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRenderer_TypeDefinitionIndex)->GetStaticField(0x8800);
		}
		::UnityEngine::Material* _currentMaterialForRendering; // 0xF8
		::System::Boolean _delay; // 0x100
		::System::Byte _padding0[0x3];
		::System::Int32 _index; // 0x104
		::System::Boolean _isTrail; // 0x108
		::System::Byte _padding1[0x3];
		::UnityEngine::Bounds _lastBounds; // 0x10C
		::System::Byte _padding2[0x4];
		::UnityEngine::Material* _modifiedMaterial; // 0x128
		::Coffee::UIExtensions::UIParticle* _parent; // 0x130
		::UnityEngine::ParticleSystem* _particleSystem; // 0x138
		::UnityEngine::Vector3 _prevPsPos; // 0x140
		::UnityEngine::Vector3 _prevScale; // 0x14C
		::UnityEngine::Vector2Int _prevScreenSize; // 0x158
		::System::Boolean _prewarm; // 0x160
		::System::Byte _padding3[0x7];
		::UnityEngine::ParticleSystemRenderer* _renderer; // 0x168
		::System::Boolean m_SmoothMaskResolved; // 0x170
		::System::Byte _padding4[0x7];
		::UnityEngine::Material* _rendererMaterial; // 0x178
		::System::Boolean _rendererMaterialAcquired; // 0x180
		::System::Byte _padding5[0x7];
		::UnityEngine::Material* _rendererSharedAsset; // 0x188
		::UnityEngine::ParticleSystemRenderer* _rendererSharedAssetPsr; // 0x190
		::System::Boolean _lastOptState; // 0x198
		::System::Boolean _initResetKeyword; // 0x199
		::System::Boolean disableOpt; // 0x19A
		::System::Boolean _hasClipAncestor; // 0x19B
		::System::Boolean _streamsOverridden; // 0x19C
		::System::Boolean _lastIsInvalid; // 0x19D
		::System::Byte _padding6[0x2];
		::UnityEngine::Mesh* fullJobBakeMesh; // 0x1A0
		::UnityEngine::Camera* fullJobBakeCamera; // 0x1A8
		::UnityEngine::Material* fullJobOptMaterial; // 0x1B0
		::System::Int32 _fullJobSubEmitterPsId; // 0x1B8
		::System::Boolean _fullJobHasSubEmitter; // 0x1BC
		::System::Byte _padding7[0x3];
		::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState _jobMeshUpdateState; // 0x1C0
		::Coffee::UIExtensions::UIParticleRenderer_JobRendererData _jobData; // 0x220
		::UnityEngine::Matrix4x4 _jobCombineMeshMatrix; // 0x2E8
		::UnityEngine::Bounds _jobBounds; // 0x328
		::System::Boolean _smoothMaskEnabled; // 0x340
		::System::Byte _padding8[0x3];
		::System::Int32 _jobRendererTransformIndex; // 0x344
		::System::Int32 _jobParticleTransformIndex; // 0x348
		::System::Int32 _jobCustomSimulationSpaceTransformIndex; // 0x34C
		::System::Boolean _jobRendererDirectChild; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER__CCTOR_OFFSET))();
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Boolean get_raycastTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_RAYCASTTARGET_OFFSET))(this);
		}

		::UnityEngine::Rect get_rootCanvasRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GET_ROOTCANVASRECT_OFFSET))(this);
		}

		static ::System::Boolean TrySetCanvasRendererMaterial(::UnityEngine::CanvasRenderer* renderer, ::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::UnityEngine::CanvasRenderer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_TRYSETCANVASRENDERERMATERIAL_OFFSET))(renderer, material);
		}

		::System::Void Reset(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESET_OFFSET))(this, index);
		}

		::System::Void EnableUIVertexColorCalc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ENABLEUIVERTEXCOLORCALC_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void RecalculateClipping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RECALCULATECLIPPING_OFFSET))(this);
		}

		::System::Void RefreshClipAncestor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHCLIPANCESTOR_OFFSET))(this);
		}

		::System::Void ApplyRequiredVertexStreams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_APPLYREQUIREDVERTEXSTREAMS_OFFSET))(this);
		}

		::System::Void RestoreVertexStreams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESTOREVERTEXSTREAMS_OFFSET))(this);
		}

		::System::Void CleanupOptStateOnMaterial(::UnityEngine::Material* m)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEANUPOPTSTATEONMATERIAL_OFFSET))(this, m);
		}

		::System::Void AcquireRendererMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ACQUIRERENDERERMATERIAL_OFFSET))(this);
		}

		::System::Void ReleaseRendererMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RELEASERENDERERMATERIAL_OFFSET))(this);
		}

		::System::Void CleanupOptState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEANUPOPTSTATE_OFFSET))(this);
		}

		static ::Coffee::UIExtensions::UIParticleRenderer* AddRenderer(::Coffee::UIExtensions::UIParticle* parent, ::System::Int32 index)
		{
			return ((::Coffee::UIExtensions::UIParticleRenderer*(*)(::Coffee::UIExtensions::UIParticle*, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ADDRENDERER_OFFSET))(parent, index);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Void RefreshSmoothMaskOnRenderMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHSMOOTHMASKONRENDERMATERIAL_OFFSET))(this);
		}

		::System::Void InvalidateSmoothMaskCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_INVALIDATESMOOTHMASKCACHE_OFFSET))(this);
		}

		::System::Void ResolveSmoothMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVESMOOTHMASK_OFFSET))(this);
		}

		::System::Void RefreshOwnSmoothMaskRenderMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHOWNSMOOTHMASKRENDERMATERIAL_OFFSET))(this);
		}

		::System::Void PushSmoothMaskDynamicParams(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PUSHSMOOTHMASKDYNAMICPARAMS_OFFSET))(this, mat);
		}

		::System::Boolean GetUIParticleOptState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETUIPARTICLEOPTSTATE_OFFSET))(this);
		}

		::System::Void Set(::Coffee::UIExtensions::UIParticle* parent, ::UnityEngine::ParticleSystem* ps, ::System::Boolean isTrail)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticle*, ::UnityEngine::ParticleSystem*, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SET_OFFSET))(this, parent, ps, isTrail);
		}

		::System::Boolean IsInvalid(::UnityEngine::Camera* bakeCamera)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ISINVALID_OFFSET))(this, bakeCamera);
		}

		::System::Void ClearMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEARMESH_OFFSET))(this);
		}

		::System::Void SimulateParticles(::UnityEngine::Vector3 scale, ::UnityEngine::Vector3 psPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SIMULATEPARTICLES_OFFSET))(this, scale, psPos);
		}

		::System::Void CheckKeywordSet(::System::Boolean enableUIParticleOpt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CHECKKEYWORDSET_OFFSET))(this, enableUIParticleOpt);
		}

		::System::Void UpdateMeshInner(::UnityEngine::Camera* bakeCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMESHINNER_OFFSET))(this, bakeCamera);
		}

		static ::UnityEngine::Bounds GetPsLocalBounds(::UnityEngine::ParticleSystemRenderer* renderer)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::ParticleSystemRenderer*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETPSLOCALBOUNDS_OFFSET))(renderer);
		}

		::UnityEngine::Matrix4x4 CalculateCombineMeshMatrix(::UnityEngine::Vector3 scale, ::UnityEngine::Vector3 psPos)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATECOMBINEMESHMATRIX_OFFSET))(this, scale, psPos);
		}

		::UnityEngine::Matrix4x4 CalculateCombineMeshMatrix_1(::UnityEngine::Vector3 scale, ::UnityEngine::Vector3 psPos, ::UnityEngine::Vector3 parentPos)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATECOMBINEMESHMATRIX_1_OFFSET))(this, scale, psPos, parentPos);
		}

		::UnityEngine::Bounds CalculateBounds(::UnityEngine::Matrix4x4 combineMeshMatrix)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATEBOUNDS_OFFSET))(this, combineMeshMatrix);
		}

		::System::Void SetUpParticleRenderer(::UnityEngine::Vector3 scale, ::UnityEngine::Vector3 psPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SETUPPARTICLERENDERER_OFFSET))(this, scale, psPos);
		}

		::System::Void DoUIParticleMaterialUpdate(::UnityEngine::Material* modifiedMaterial, ::UnityEngine::Matrix4x4 combineMeshMatrix)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_DOUIPARTICLEMATERIALUPDATE_OFFSET))(this, modifiedMaterial, combineMeshMatrix);
		}

		::System::Void BakeMeshOldWay(::UnityEngine::Camera* bakeCamera, ::UnityEngine::Vector3 scale, ::UnityEngine::Vector3 psPos, ::System::Boolean needSetKeywords)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_BAKEMESHOLDWAY_OFFSET))(this, bakeCamera, scale, psPos, needSetKeywords);
		}

		::System::Void UpdateMesh(::UnityEngine::Camera* bakeCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMESH_OFFSET))(this, bakeCamera);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEGEOMETRY_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetWorldScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDSCALE_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetWorldMatrix(::UnityEngine::Vector3 psPos, ::UnityEngine::Vector3 scale)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETWORLDMATRIX_OFFSET))(this, psPos, scale);
		}

		::System::Void ResolveResolutionChange(::UnityEngine::Vector3 psPos, ::UnityEngine::Vector3 scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVERESOLUTIONCHANGE_OFFSET))(this, psPos, scale);
		}

		::System::Void ResolveResolutionChange_1(::UnityEngine::Vector3 psPos, ::UnityEngine::Vector3 scale, ::UnityEngine::Vector2Int screenSize, ::System::Boolean isWorldSpace)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2Int, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVERESOLUTIONCHANGE_1_OFFSET))(this, psPos, scale, screenSize, isWorldSpace);
		}

		::System::Void Simulate(::UnityEngine::Vector3 scale, ::System::Boolean paused)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SIMULATE_OFFSET))(this, scale, paused);
		}

		::System::Void UpdateMaterialProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_UPDATEMATERIALPROPERTIES_OFFSET))(this);
		}

		::System::Int32 GetParticleSystemInstanceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETPARTICLESYSTEMINSTANCEID_OFFSET))(this);
		}

		::System::Boolean FullJobHasSubEmitter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_FULLJOBHASSUBEMITTER_OFFSET))(this);
		}

		static ::System::Boolean ResolveHasSubEmitter(::UnityEngine::ParticleSystem* ps)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVEHASSUBEMITTER_OFFSET))(ps);
		}

		static ::System::Int32 ShaderPropertyTypeToInt(::Coffee::UIExtensions::AnimatableProperty_ShaderPropertyType t)
		{
			return ((::System::Int32(*)(::Coffee::UIExtensions::AnimatableProperty_ShaderPropertyType))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SHADERPROPERTYTYPETOINT_OFFSET))(t);
		}

		::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData BuildJobData(::UnityEngine::Camera* bakeCamera, ::System::Int32 cameraID, ::System::Int32 psInstanceID, ::UnityEngine::Vector3 parentPos, ::UnityEngine::Vector3 worldScale, ::Coffee::UIExtensions::UIParticle* parent, ::System::Int32 sharedPropertyStart, ::System::Int32 propCount, ::System::Int32 canvasLayer)
		{
			return ((::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData(*)(::PVOID, ::UnityEngine::Camera*, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Coffee::UIExtensions::UIParticle*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_BUILDJOBDATA_OFFSET))(this, bakeCamera, cameraID, psInstanceID, parentPos, worldScale, parent, sharedPropertyStart, propCount, canvasLayer);
		}

		::System::Void ApplyPrepareResult(::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData& data, ::System::Int32& bakeMeshCounter)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData&, ::System::Int32&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_APPLYPREPARERESULT_OFFSET))(this, data, bakeMeshCounter);
		}

		::System::Void FullJobFinalizeEachRenderer(::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_FULLJOBFINALIZEEACHRENDERER_OFFSET))(this, data);
		}

		::System::Void AcquireOptMaterial(::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ACQUIREOPTMATERIAL_OFFSET))(this, data);
		}

		::System::Void FinalizeOpt(::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_FINALIZEOPT_OFFSET))(this, data);
		}

		::System::Void PushOptMaterialParams(::UnityEngine::Matrix4x4 combineMeshMatrix)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PUSHOPTMATERIALPARAMS_OFFSET))(this, combineMeshMatrix);
		}

		::System::Void FinalizeEachParticle(::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_FINALIZEEACHPARTICLE_OFFSET))(this, data);
		}

		::System::Void FinalizeTrailBake(::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_FINALIZETRAILBAKE_OFFSET))(this, data);
		}

		::System::Void ApplyMeshAndFinalize(::UnityEngine::Mesh* mesh, ::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_APPLYMESHANDFINALIZE_OFFSET))(this, mesh, data);
		}

		::System::Void FinalizeKeywordsAndMaterial(::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderer_UIParticleRendererFullJobData&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_FINALIZEKEYWORDSANDMATERIAL_OFFSET))(this, data);
		}

		::System::Boolean IsInvalidForJob(::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate update)
		{
			return ((::System::Boolean(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ISINVALIDFORJOB_OFFSET))(this, update);
		}

		::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate CreateJobRendererUpdate(::UnityEngine::Camera* bakeCamera, ::System::Boolean parentIsValid, ::System::Boolean parentIsReplica, ::System::Boolean visibleScale)
		{
			return ((::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate(*)(::PVOID, ::UnityEngine::Camera*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CREATEJOBRENDERERUPDATE_OFFSET))(this, bakeCamera, parentIsValid, parentIsReplica, visibleScale);
		}

		::UnityEngine::Vector3 GetJobParticlePosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBPARTICLEPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetJobParticleRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBPARTICLEROTATION_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetJobRendererWorldToLocalMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBRENDERERWORLDTOLOCALMATRIX_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetJobCustomSimulationSpacePosition(::UnityEngine::Transform* customSimulationSpace)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBCUSTOMSIMULATIONSPACEPOSITION_OFFSET))(this, customSimulationSpace);
		}

		::System::Void RefreshJobParticleSystemConfigCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHJOBPARTICLESYSTEMCONFIGCACHE_OFFSET))(this);
		}

		::System::Void PrepareJobParticleSystemConfigDataForFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBPARTICLESYSTEMCONFIGDATAFORFRAME_OFFSET))(this);
		}

		::System::Void RefreshJobParticleSystemConfigData(::System::Boolean cacheForReuse)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHJOBPARTICLESYSTEMCONFIGDATA_OFFSET))(this, cacheForReuse);
		}

		::System::Boolean IsJobRendererScaleVisible(::UnityEngine::Vector3 visibleBaseScale, ::UnityEngine::Vector3 fallbackScale)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ISJOBRENDERERSCALEVISIBLE_OFFSET))(this, visibleBaseScale, fallbackScale);
		}

		::System::Boolean PrepareJobMeshUpdate(::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate update)
		{
			return ((::System::Boolean(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer_JobRendererUpdate))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBMESHUPDATE_OFFSET))(this, update);
		}

		::System::Void SimulateJobPreparedParticles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SIMULATEJOBPREPAREDPARTICLES_OFFSET))(this);
		}

		::System::Void PrepareJobSimulateParticles(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* jobParticleSystems, ::System::Collections::Generic::List_1<::System::Single>* jobParticlesTimes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBSIMULATEPARTICLES_OFFSET))(this, jobParticleSystems, jobParticlesTimes);
		}

		::System::Void PrepareJobMeshComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBMESHCOMPLETE_OFFSET))(this);
		}

		::System::Void PrepareJobParticleRendererMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBPARTICLERENDERERMATERIAL_OFFSET))(this);
		}

		::System::Void ApplyJobMeshUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_APPLYJOBMESHUPDATE_OFFSET))(this);
		}

		static ::System::Void ClearJobMaterialUpdates()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CLEARJOBMATERIALUPDATES_OFFSET))();
		}

		static ::System::Void SetJobScreenSize(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SETJOBSCREENSIZE_OFFSET))(width, height);
		}

		static ::System::Void ScheduleMatrixBoundsJob(::System::Int32 rendererUpdateCount)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_SCHEDULEMATRIXBOUNDSJOB_OFFSET))(rendererUpdateCount);
		}

		static ::System::Void CompleteMatrixBoundsJob()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_COMPLETEMATRIXBOUNDSJOB_OFFSET))();
		}

		static ::UnityEngine::Matrix4x4 CalculateJobCombineMeshMatrix(::Coffee::UIExtensions::UIParticleRenderer_JobRendererData& update)
		{
			return ((::UnityEngine::Matrix4x4(*)(::Coffee::UIExtensions::UIParticleRenderer_JobRendererData&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATEJOBCOMBINEMESHMATRIX_OFFSET))(update);
		}

		static ::UnityEngine::Matrix4x4 CalculateJobWorldMatrix(::Coffee::UIExtensions::UIParticleRenderer_JobRendererData& update)
		{
			return ((::UnityEngine::Matrix4x4(*)(::Coffee::UIExtensions::UIParticleRenderer_JobRendererData&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATEJOBWORLDMATRIX_OFFSET))(update);
		}

		static ::UnityEngine::Bounds CalculateJobBounds(::UnityEngine::Bounds psLocalBounds, ::UnityEngine::Matrix4x4 combineMeshMatrix)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Bounds, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_CALCULATEJOBBOUNDS_OFFSET))(psLocalBounds, combineMeshMatrix);
		}

		static ::System::Void DispatchMaterialJob()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_DISPATCHMATERIALJOB_OFFSET))();
		}

		static ::System::Void CompleteMaterialJob()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_COMPLETEMATERIALJOB_OFFSET))();
		}

		static ::System::Void RegisterCompleteCallback()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REGISTERCOMPLETECALLBACK_OFFSET))();
		}

		static ::System::Void InvalidateJobTransformCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_INVALIDATEJOBTRANSFORMCACHE_OFFSET))();
		}

		static ::System::Void RefreshJobTransformSnapshots(::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>* activeParticles)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REFRESHJOBTRANSFORMSNAPSHOTS_OFFSET))(activeParticles);
		}

		static ::System::Void EnsureJobTransformCache(::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>* activeParticles)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ENSUREJOBTRANSFORMCACHE_OFFSET))(activeParticles);
		}

		static ::System::Void ReleaseJobTransformCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RELEASEJOBTRANSFORMCACHE_OFFSET))();
		}

		static ::System::Void RebuildJobTransformCache(::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>* activeParticles)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REBUILDJOBTRANSFORMCACHE_OFFSET))(activeParticles);
		}

		static ::System::Void EnsureJobTransformSnapshotCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_ENSUREJOBTRANSFORMSNAPSHOTCOUNT_OFFSET))(count);
		}

		static ::System::Int32 RegisterJobTransform(::UnityEngine::Transform* transform)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REGISTERJOBTRANSFORM_OFFSET))(transform);
		}

		static ::System::Boolean TryGetJobTransformSnapshot(::System::Int32 index, ::Coffee::UIExtensions::UIParticleRenderer_JobTransformSnapshot& snapshot)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Coffee::UIExtensions::UIParticleRenderer_JobTransformSnapshot&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_TRYGETJOBTRANSFORMSNAPSHOT_OFFSET))(index, snapshot);
		}

		::System::Void RegisterJobTransformCache(::Coffee::UIExtensions::UIParticle* parent)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticle*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_REGISTERJOBTRANSFORMCACHE_OFFSET))(this, parent);
		}

		::UnityEngine::Transform* GetJobCustomSimulationSpaceTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_GETJOBCUSTOMSIMULATIONSPACETRANSFORM_OFFSET))(this);
		}

		::System::Void PrepareJobSimulateParticles_1(::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState& state)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBSIMULATEPARTICLES_1_OFFSET))(this, state);
		}

		::System::Void ResolveJobResolutionChange(::UnityEngine::Vector3 psPos, ::UnityEngine::Vector3 scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_RESOLVEJOBRESOLUTIONCHANGE_OFFSET))(this, psPos, scale);
		}

		::System::Void PrepareJobPrimarySimulate(::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState& state, ::System::Boolean paused)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState&, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBPRIMARYSIMULATE_OFFSET))(this, state, paused);
		}

		::System::Void CompleteJobSimulateParticles(::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState state)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_COMPLETEJOBSIMULATEPARTICLES_OFFSET))(this, state);
		}

		::System::Void PrepareJobParticleRendererMatrix(::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState& state)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREJOBPARTICLERENDERERMATRIX_OFFSET))(this, state);
		}

		::System::Void PrepareDeferredJobUIParticleMaterialUpdate(::UnityEngine::Material* modifiedMaterial, ::UnityEngine::Matrix4x4& combineMeshMatrix)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREDEFERREDJOBUIPARTICLEMATERIALUPDATE_OFFSET))(this, modifiedMaterial, combineMeshMatrix);
		}

		::System::Void PrepareDeferredJobUIParticleMaterialUpdate_1(::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState& state)
		{
			return ((::System::Void(*)(::PVOID, ::Coffee::UIExtensions::UIParticleRenderer_JobMeshUpdateState&))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PREPAREDEFERREDJOBUIPARTICLEMATERIALUPDATE_1_OFFSET))(this, state);
		}

		::System::Void DoDeferredJobUIParticleMaterialUpdateThreadSafe(::System::Int32 materialInstanceId, ::UnityEngine::Matrix4x4& combineMeshMatrix, ::System::Int32 rendererInstanceId, ::System::Boolean smoothMaskEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_DODEFERREDJOBUIPARTICLEMATERIALUPDATETHREADSAFE_OFFSET))(this, materialInstanceId, combineMeshMatrix, rendererInstanceId, smoothMaskEnabled);
		}

		::System::Void PushSmoothMaskDynamicParamsThreadSafe(::System::Int32 materialInstanceId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER_PUSHSMOOTHMASKDYNAMICPARAMSTHREADSAFE_OFFSET))(this, materialInstanceId);
		}

		::UnityEngine::Texture* __base_get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Material* __base_GetModifiedMaterial(::UnityEngine::Material* P0)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_GETMODIFIEDMATERIAL_OFFSET))(this, P0);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_RecalculateClipping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_RECALCULATECLIPPING_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_START_OFFSET))(this);
		}

		::System::Void __base_UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___BASE_UPDATEGEOMETRY_OFFSET))(this);
		}
	};
}
