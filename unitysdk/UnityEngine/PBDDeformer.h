#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/PBDMassUseType.h"
#include "unitysdk/UnityEngine/PBDMeshCurveType.h"
#include "unitysdk/UnityEngine/PBDMeshGeneartionType.h"
#include "unitysdk/UnityEngine/PBDRotationMethod.h"
#include "unitysdk/UnityEngine/PBDUpdateStage.h"
#include "unitysdk/UnityEngine/PBDParticleHook.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class PBDDeformAsset; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SphereCollider; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_PBDDEFORMER_APPLYIMPULSEALL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FFD0840)
#define UNITYENGINE_PBDDEFORMER_APPLYIMPULSEALL_OFFSET UNITYSDK_OFFSET(0x1FFD0830)
#define UNITYENGINE_PBDDEFORMER_APPLYIMPULSE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FFD0820)
#define UNITYENGINE_PBDDEFORMER_APPLYIMPULSE_OFFSET UNITYSDK_OFFSET(0x1FFD0810)
#define UNITYENGINE_PBDDEFORMER_BREAKCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1FFD0850)
#define UNITYENGINE_PBDDEFORMER_GETPARTICLEPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1FFD0860)
#define UNITYENGINE_PBDDEFORMER_GETPARTICLEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FFD08C0)
#define UNITYENGINE_PBDDEFORMER_GETPARTICLEPOSITION_OFFSET UNITYSDK_OFFSET(0x1FFD0870)
#define UNITYENGINE_PBDDEFORMER_GET_BOXCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1FFD0220)
#define UNITYENGINE_PBDDEFORMER_GET_CAMERATRANS_OFFSET UNITYSDK_OFFSET(0x1FFD00A0)
#define UNITYENGINE_PBDDEFORMER_GET_CAPSULECOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1FFD01F0)
#define UNITYENGINE_PBDDEFORMER_GET_COLLISIONADDITIONALSCOPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FFD0590)
#define UNITYENGINE_PBDDEFORMER_GET_COLLISIONADDITIONALSCOPE_OFFSET UNITYSDK_OFFSET(0x1FFD0540)
#define UNITYENGINE_PBDDEFORMER_GET_DAMPINGSCALE_OFFSET UNITYSDK_OFFSET(0x1FFD03F0)
#define UNITYENGINE_PBDDEFORMER_GET_DEBUGDRAW_OFFSET UNITYSDK_OFFSET(0x1FFD0460)
#define UNITYENGINE_PBDDEFORMER_GET_DEFORMASSET_OFFSET UNITYSDK_OFFSET(0x1FFCFF30)
#define UNITYENGINE_PBDDEFORMER_GET_DISTANCECOMPLIANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x1FFD04E0)
#define UNITYENGINE_PBDDEFORMER_GET_DISTANCESCALE_OFFSET UNITYSDK_OFFSET(0x1FFD07A0)
#define UNITYENGINE_PBDDEFORMER_GET_ENABLECOLLISION_OFFSET UNITYSDK_OFFSET(0x1FFD0440)
#define UNITYENGINE_PBDDEFORMER_GET_ENABLEMANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x1FFD04A0)
#define UNITYENGINE_PBDDEFORMER_GET_GENERATEDOUBLESIDEDMESH_OFFSET UNITYSDK_OFFSET(0x1FFD0160)
#define UNITYENGINE_PBDDEFORMER_GET_GENERATEVERTEXNORMAL_OFFSET UNITYSDK_OFFSET(0x1FFD0180)
#define UNITYENGINE_PBDDEFORMER_GET_GRAVITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FFD02E0)
#define UNITYENGINE_PBDDEFORMER_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1FFD0290)
#define UNITYENGINE_PBDDEFORMER_GET_HOOKS_OFFSET UNITYSDK_OFFSET(0x1FFD01A0)
#define UNITYENGINE_PBDDEFORMER_GET_ITERATION_OFFSET UNITYSDK_OFFSET(0x1FFD0310)
#define UNITYENGINE_PBDDEFORMER_GET_LOCALSIMULATION_OFFSET UNITYSDK_OFFSET(0x1FFD0410)
#define UNITYENGINE_PBDDEFORMER_GET_MAXCONSTRAINTSCALE_OFFSET UNITYSDK_OFFSET(0x1FFD0390)
#define UNITYENGINE_PBDDEFORMER_GET_MAXVELOCITY_OFFSET UNITYSDK_OFFSET(0x1FFD03D0)
#define UNITYENGINE_PBDDEFORMER_GET_MESHGENERATIONCURVETYPE_OFFSET UNITYSDK_OFFSET(0x1FFCFF80)
#define UNITYENGINE_PBDDEFORMER_GET_MESHGENERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1FFCFF60)
#define UNITYENGINE_PBDDEFORMER_GET_MINCONSTRAINTSCALE_OFFSET UNITYSDK_OFFSET(0x1FFD0370)
#define UNITYENGINE_PBDDEFORMER_GET_PARTICLESPHERERADIUS_OFFSET UNITYSDK_OFFSET(0x1FFD03B0)
#define UNITYENGINE_PBDDEFORMER_GET_POSTRESPONSESIMULATION_OFFSET UNITYSDK_OFFSET(0x1FFD0520)
#define UNITYENGINE_PBDDEFORMER_GET_PREVIEWEDITMODE_OFFSET UNITYSDK_OFFSET(0x1FFD0480)
#define UNITYENGINE_PBDDEFORMER_GET_RECTANGLEHORIZONTALSEGMENT_OFFSET UNITYSDK_OFFSET(0x1FFD0120)
#define UNITYENGINE_PBDDEFORMER_GET_RECTANGLEVERTICALSEGMENT_OFFSET UNITYSDK_OFFSET(0x1FFD0140)
#define UNITYENGINE_PBDDEFORMER_GET_RIBBONSECTIONDENSITY_OFFSET UNITYSDK_OFFSET(0x1FFD0100)
#define UNITYENGINE_PBDDEFORMER_GET_RIBBONSEGMENTRADIUS_OFFSET UNITYSDK_OFFSET(0x1FFD00E0)
#define UNITYENGINE_PBDDEFORMER_GET_RIBBONSEGMENT_OFFSET UNITYSDK_OFFSET(0x1FFD00C0)
#define UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYCOLLISIONNORMAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FFD0710)
#define UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYCOLLISIONNORMAL_OFFSET UNITYSDK_OFFSET(0x1FFD06C0)
#define UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYCOLLISIONSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FFD0610)
#define UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYCOLLISIONSIZE_OFFSET UNITYSDK_OFFSET(0x1FFD05C0)
#define UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYFIXBOXSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FFD0690)
#define UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYFIXBOXSIZE_OFFSET UNITYSDK_OFFSET(0x1FFD0640)
#define UNITYENGINE_PBDDEFORMER_GET_ROTATIONMETHOD_OFFSET UNITYSDK_OFFSET(0x1FFD0270)
#define UNITYENGINE_PBDDEFORMER_GET_SIMULATERECOVERFRAME_OFFSET UNITYSDK_OFFSET(0x1FFD0740)
#define UNITYENGINE_PBDDEFORMER_GET_SIMULATING_OFFSET UNITYSDK_OFFSET(0x1FFD0430)
#define UNITYENGINE_PBDDEFORMER_GET_SPHERECOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1FFD01C0)
#define UNITYENGINE_PBDDEFORMER_GET_STATICBATCHGROUP_OFFSET UNITYSDK_OFFSET(0x1FFD0350)
#define UNITYENGINE_PBDDEFORMER_GET_SUBSTEP_OFFSET UNITYSDK_OFFSET(0x1FFD0330)
#define UNITYENGINE_PBDDEFORMER_GET_TARGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1FFCFF50)
#define UNITYENGINE_PBDDEFORMER_GET_UPDATESTAGE_OFFSET UNITYSDK_OFFSET(0x1FFD0250)
#define UNITYENGINE_PBDDEFORMER_GET_USEDYNAMICCOMPLIANCE_OFFSET UNITYSDK_OFFSET(0x1FFD0500)
#define UNITYENGINE_PBDDEFORMER_GET_USEORIGINALNORMALFORCOLLISION_OFFSET UNITYSDK_OFFSET(0x1FFD0780)
#define UNITYENGINE_PBDDEFORMER_GET_USESTABLECOLLISION_OFFSET UNITYSDK_OFFSET(0x1FFD0760)
#define UNITYENGINE_PBDDEFORMER_GET_UVAXISSWAP_OFFSET UNITYSDK_OFFSET(0x1FFD0080)
#define UNITYENGINE_PBDDEFORMER_GET_UVOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FFD0040)
#define UNITYENGINE_PBDDEFORMER_GET_UVOFFSET_OFFSET UNITYSDK_OFFSET(0x1FFD0010)
#define UNITYENGINE_PBDDEFORMER_GET_UVTILLING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FFCFFD0)
#define UNITYENGINE_PBDDEFORMER_GET_UVTILLING_OFFSET UNITYSDK_OFFSET(0x1FFCFFA0)
#define UNITYENGINE_PBDDEFORMER_GET_VOLUMECOMPLIANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x1FFD04C0)
#define UNITYENGINE_PBDDEFORMER_GET_VOLUMESCALE_OFFSET UNITYSDK_OFFSET(0x1FFD07C0)
#define UNITYENGINE_PBDDEFORMER_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1FFD07F0)
#define UNITYENGINE_PBDDEFORMER_RESETSOLVER_OFFSET UNITYSDK_OFFSET(0x1FFD0800)
#define UNITYENGINE_PBDDEFORMER_SETBOXCOLLIDERDETAILED_OFFSET UNITYSDK_OFFSET(0x1FFD0240)
#define UNITYENGINE_PBDDEFORMER_SETCAPSULECOLLIDERDETAILED_OFFSET UNITYSDK_OFFSET(0x1FFD0210)
#define UNITYENGINE_PBDDEFORMER_SETSPHERECOLLIDERDETAILED_OFFSET UNITYSDK_OFFSET(0x1FFD01E0)
#define UNITYENGINE_PBDDEFORMER_SET_BOXCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1FFD0230)
#define UNITYENGINE_PBDDEFORMER_SET_CAMERATRANS_OFFSET UNITYSDK_OFFSET(0x1FFD00B0)
#define UNITYENGINE_PBDDEFORMER_SET_CAPSULECOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1FFD0200)
#define UNITYENGINE_PBDDEFORMER_SET_COLLISIONADDITIONALSCOPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FFD05B0)
#define UNITYENGINE_PBDDEFORMER_SET_COLLISIONADDITIONALSCOPE_OFFSET UNITYSDK_OFFSET(0x1FFD05A0)
#define UNITYENGINE_PBDDEFORMER_SET_DAMPINGSCALE_OFFSET UNITYSDK_OFFSET(0x1FFD0400)
#define UNITYENGINE_PBDDEFORMER_SET_DEBUGDRAW_OFFSET UNITYSDK_OFFSET(0x1FFD0470)
#define UNITYENGINE_PBDDEFORMER_SET_DEFORMASSET_OFFSET UNITYSDK_OFFSET(0x1FFCFF40)
#define UNITYENGINE_PBDDEFORMER_SET_DISTANCECOMPLIANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x1FFD04F0)
#define UNITYENGINE_PBDDEFORMER_SET_DISTANCESCALE_OFFSET UNITYSDK_OFFSET(0x1FFD07B0)
#define UNITYENGINE_PBDDEFORMER_SET_ENABLECOLLISION_OFFSET UNITYSDK_OFFSET(0x1FFD0450)
#define UNITYENGINE_PBDDEFORMER_SET_ENABLEMANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x1FFD04B0)
#define UNITYENGINE_PBDDEFORMER_SET_GENERATEDOUBLESIDEDMESH_OFFSET UNITYSDK_OFFSET(0x1FFD0170)
#define UNITYENGINE_PBDDEFORMER_SET_GENERATEVERTEXNORMAL_OFFSET UNITYSDK_OFFSET(0x1FFD0190)
#define UNITYENGINE_PBDDEFORMER_SET_GRAVITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FFD0300)
#define UNITYENGINE_PBDDEFORMER_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1FFD02F0)
#define UNITYENGINE_PBDDEFORMER_SET_HOOKS_OFFSET UNITYSDK_OFFSET(0x1FFD01B0)
#define UNITYENGINE_PBDDEFORMER_SET_ITERATION_OFFSET UNITYSDK_OFFSET(0x1FFD0320)
#define UNITYENGINE_PBDDEFORMER_SET_LOCALSIMULATION_OFFSET UNITYSDK_OFFSET(0x1FFD0420)
#define UNITYENGINE_PBDDEFORMER_SET_MAXCONSTRAINTSCALE_OFFSET UNITYSDK_OFFSET(0x1FFD03A0)
#define UNITYENGINE_PBDDEFORMER_SET_MAXVELOCITY_OFFSET UNITYSDK_OFFSET(0x1FFD03E0)
#define UNITYENGINE_PBDDEFORMER_SET_MESHGENERATIONCURVETYPE_OFFSET UNITYSDK_OFFSET(0x1FFCFF90)
#define UNITYENGINE_PBDDEFORMER_SET_MESHGENERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1FFCFF70)
#define UNITYENGINE_PBDDEFORMER_SET_MINCONSTRAINTSCALE_OFFSET UNITYSDK_OFFSET(0x1FFD0380)
#define UNITYENGINE_PBDDEFORMER_SET_PARTICLESPHERERADIUS_OFFSET UNITYSDK_OFFSET(0x1FFD03C0)
#define UNITYENGINE_PBDDEFORMER_SET_POSTRESPONSESIMULATION_OFFSET UNITYSDK_OFFSET(0x1FFD0530)
#define UNITYENGINE_PBDDEFORMER_SET_PREVIEWEDITMODE_OFFSET UNITYSDK_OFFSET(0x1FFD0490)
#define UNITYENGINE_PBDDEFORMER_SET_RECTANGLEHORIZONTALSEGMENT_OFFSET UNITYSDK_OFFSET(0x1FFD0130)
#define UNITYENGINE_PBDDEFORMER_SET_RECTANGLEVERTICALSEGMENT_OFFSET UNITYSDK_OFFSET(0x1FFD0150)
#define UNITYENGINE_PBDDEFORMER_SET_RIBBONSECTIONDENSITY_OFFSET UNITYSDK_OFFSET(0x1FFD0110)
#define UNITYENGINE_PBDDEFORMER_SET_RIBBONSEGMENTRADIUS_OFFSET UNITYSDK_OFFSET(0x1FFD00F0)
#define UNITYENGINE_PBDDEFORMER_SET_RIBBONSEGMENT_OFFSET UNITYSDK_OFFSET(0x1FFD00D0)
#define UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYCOLLISIONNORMAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FFD0730)
#define UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYCOLLISIONNORMAL_OFFSET UNITYSDK_OFFSET(0x1FFD0720)
#define UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYCOLLISIONSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FFD0630)
#define UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYCOLLISIONSIZE_OFFSET UNITYSDK_OFFSET(0x1FFD0620)
#define UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYFIXBOXSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FFD06B0)
#define UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYFIXBOXSIZE_OFFSET UNITYSDK_OFFSET(0x1FFD06A0)
#define UNITYENGINE_PBDDEFORMER_SET_ROTATIONMETHOD_OFFSET UNITYSDK_OFFSET(0x1FFD0280)
#define UNITYENGINE_PBDDEFORMER_SET_SIMULATERECOVERFRAME_OFFSET UNITYSDK_OFFSET(0x1FFD0750)
#define UNITYENGINE_PBDDEFORMER_SET_SPHERECOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1FFD01D0)
#define UNITYENGINE_PBDDEFORMER_SET_STATICBATCHGROUP_OFFSET UNITYSDK_OFFSET(0x1FFD0360)
#define UNITYENGINE_PBDDEFORMER_SET_SUBSTEP_OFFSET UNITYSDK_OFFSET(0x1FFD0340)
#define UNITYENGINE_PBDDEFORMER_SET_UPDATESTAGE_OFFSET UNITYSDK_OFFSET(0x1FFD0260)
#define UNITYENGINE_PBDDEFORMER_SET_USEDYNAMICCOMPLIANCE_OFFSET UNITYSDK_OFFSET(0x1FFD0510)
#define UNITYENGINE_PBDDEFORMER_SET_USEORIGINALNORMALFORCOLLISION_OFFSET UNITYSDK_OFFSET(0x1FFD0790)
#define UNITYENGINE_PBDDEFORMER_SET_USESTABLECOLLISION_OFFSET UNITYSDK_OFFSET(0x1FFD0770)
#define UNITYENGINE_PBDDEFORMER_SET_UVAXISSWAP_OFFSET UNITYSDK_OFFSET(0x1FFD0090)
#define UNITYENGINE_PBDDEFORMER_SET_UVOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FFD0070)
#define UNITYENGINE_PBDDEFORMER_SET_UVOFFSET_OFFSET UNITYSDK_OFFSET(0x1FFD0050)
#define UNITYENGINE_PBDDEFORMER_SET_UVTILLING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FFD0000)
#define UNITYENGINE_PBDDEFORMER_SET_UVTILLING_OFFSET UNITYSDK_OFFSET(0x1FFCFFE0)
#define UNITYENGINE_PBDDEFORMER_SET_VOLUMECOMPLIANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x1FFD04D0)
#define UNITYENGINE_PBDDEFORMER_SET_VOLUMESCALE_OFFSET UNITYSDK_OFFSET(0x1FFD07D0)
#define UNITYENGINE_PBDDEFORMER_SHOULDGENERATESTATICMESH_OFFSET UNITYSDK_OFFSET(0x1FFD08D0)
#define UNITYENGINE_PBDDEFORMER_SHOULDSOLVEROTATION_OFFSET UNITYSDK_OFFSET(0x1FFD08E0)
#define UNITYENGINE_PBDDEFORMER_UPDATEINEDITMODE_OFFSET UNITYSDK_OFFSET(0x1FFD08F0)
#define UNITYENGINE_PBDDEFORMER_UPDATEMANUALLY_OFFSET UNITYSDK_OFFSET(0x1FFD0900)
#define UNITYENGINE_PBDDEFORMER_UPDATETARGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1FFD07E0)
#define UNITYENGINE_PBDDEFORMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFD0910)

namespace UnityEngine
{
	inline static constexpr unsigned int PBDDeformer_TypeDefinitionIndex = 18308;

	class PBDDeformer : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER__CTOR_OFFSET))(this);
		}

		::UnityEngine::PBDDeformAsset* get_deformAsset()
		{
			return ((::UnityEngine::PBDDeformAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_DEFORMASSET_OFFSET))(this);
		}

		::System::Void set_deformAsset(::UnityEngine::PBDDeformAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PBDDeformAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_DEFORMASSET_OFFSET))(this, value);
		}

		::UnityEngine::Renderer* get_targetComponent()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_TARGETCOMPONENT_OFFSET))(this);
		}

		::UnityEngine::PBDMeshGeneartionType get_meshGenerationType()
		{
			return ((::UnityEngine::PBDMeshGeneartionType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_MESHGENERATIONTYPE_OFFSET))(this);
		}

		::System::Void set_meshGenerationType(::UnityEngine::PBDMeshGeneartionType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PBDMeshGeneartionType))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_MESHGENERATIONTYPE_OFFSET))(this, value);
		}

		::UnityEngine::PBDMeshCurveType get_meshGenerationCurveType()
		{
			return ((::UnityEngine::PBDMeshCurveType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_MESHGENERATIONCURVETYPE_OFFSET))(this);
		}

		::System::Void set_meshGenerationCurveType(::UnityEngine::PBDMeshCurveType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PBDMeshCurveType))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_MESHGENERATIONCURVETYPE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_uvTilling()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_UVTILLING_OFFSET))(this);
		}

		::System::Void set_uvTilling(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_UVTILLING_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_uvOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_UVOFFSET_OFFSET))(this);
		}

		::System::Void set_uvOffset(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_UVOFFSET_OFFSET))(this, value);
		}

		::System::Boolean get_uvAxisSwap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_UVAXISSWAP_OFFSET))(this);
		}

		::System::Void set_uvAxisSwap(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_UVAXISSWAP_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_cameraTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_CAMERATRANS_OFFSET))(this);
		}

		::System::Void set_cameraTrans(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_CAMERATRANS_OFFSET))(this, value);
		}

		::System::UInt32 get_ribbonSegment()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RIBBONSEGMENT_OFFSET))(this);
		}

		::System::Void set_ribbonSegment(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RIBBONSEGMENT_OFFSET))(this, value);
		}

		::System::Single get_ribbonSegmentRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RIBBONSEGMENTRADIUS_OFFSET))(this);
		}

		::System::Void set_ribbonSegmentRadius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RIBBONSEGMENTRADIUS_OFFSET))(this, value);
		}

		::System::Single get_ribbonSectionDensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RIBBONSECTIONDENSITY_OFFSET))(this);
		}

		::System::Void set_ribbonSectionDensity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RIBBONSECTIONDENSITY_OFFSET))(this, value);
		}

		::System::UInt32 get_rectangleHorizontalSegment()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RECTANGLEHORIZONTALSEGMENT_OFFSET))(this);
		}

		::System::Void set_rectangleHorizontalSegment(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RECTANGLEHORIZONTALSEGMENT_OFFSET))(this, value);
		}

		::System::UInt32 get_rectangleVerticalSegment()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RECTANGLEVERTICALSEGMENT_OFFSET))(this);
		}

		::System::Void set_rectangleVerticalSegment(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RECTANGLEVERTICALSEGMENT_OFFSET))(this, value);
		}

		::System::Boolean get_generateDoubleSidedMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_GENERATEDOUBLESIDEDMESH_OFFSET))(this);
		}

		::System::Void set_generateDoubleSidedMesh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_GENERATEDOUBLESIDEDMESH_OFFSET))(this, value);
		}

		::System::Boolean get_generateVertexNormal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_GENERATEVERTEXNORMAL_OFFSET))(this);
		}

		::System::Void set_generateVertexNormal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_GENERATEVERTEXNORMAL_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::PBDParticleHook>* get_hooks()
		{
			return ((::Il2CppArray<::UnityEngine::PBDParticleHook>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_HOOKS_OFFSET))(this);
		}

		::System::Void set_hooks(::Il2CppArray<::UnityEngine::PBDParticleHook>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::PBDParticleHook>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_HOOKS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::SphereCollider*>* get_sphereColliders()
		{
			return ((::Il2CppArray<::UnityEngine::SphereCollider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_SPHERECOLLIDERS_OFFSET))(this);
		}

		::System::Void set_sphereColliders(::Il2CppArray<::UnityEngine::SphereCollider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::SphereCollider*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_SPHERECOLLIDERS_OFFSET))(this, value);
		}

		::System::Void SetSphereColliderDetailed(::Il2CppArray<::UnityEngine::SphereCollider*>* colliders, ::Il2CppArray<::System::Boolean>* isDynamic)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::SphereCollider*>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SETSPHERECOLLIDERDETAILED_OFFSET))(this, colliders, isDynamic);
		}

		::Il2CppArray<::UnityEngine::CapsuleCollider*>* get_capsuleColliders()
		{
			return ((::Il2CppArray<::UnityEngine::CapsuleCollider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_CAPSULECOLLIDERS_OFFSET))(this);
		}

		::System::Void set_capsuleColliders(::Il2CppArray<::UnityEngine::CapsuleCollider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::CapsuleCollider*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_CAPSULECOLLIDERS_OFFSET))(this, value);
		}

		::System::Void SetCapsuleColliderDetailed(::Il2CppArray<::UnityEngine::CapsuleCollider*>* colliders, ::Il2CppArray<::System::Boolean>* isDynamic)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::CapsuleCollider*>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SETCAPSULECOLLIDERDETAILED_OFFSET))(this, colliders, isDynamic);
		}

		::Il2CppArray<::UnityEngine::BoxCollider*>* get_boxColliders()
		{
			return ((::Il2CppArray<::UnityEngine::BoxCollider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_BOXCOLLIDERS_OFFSET))(this);
		}

		::System::Void set_boxColliders(::Il2CppArray<::UnityEngine::BoxCollider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::BoxCollider*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_BOXCOLLIDERS_OFFSET))(this, value);
		}

		::System::Void SetBoxColliderDetailed(::Il2CppArray<::UnityEngine::BoxCollider*>* colliders, ::Il2CppArray<::System::Boolean>* isDynamic)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::BoxCollider*>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SETBOXCOLLIDERDETAILED_OFFSET))(this, colliders, isDynamic);
		}

		::UnityEngine::PBDUpdateStage get_updateStage()
		{
			return ((::UnityEngine::PBDUpdateStage(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_UPDATESTAGE_OFFSET))(this);
		}

		::System::Void set_updateStage(::UnityEngine::PBDUpdateStage value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PBDUpdateStage))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_UPDATESTAGE_OFFSET))(this, value);
		}

		::UnityEngine::PBDRotationMethod get_rotationMethod()
		{
			return ((::UnityEngine::PBDRotationMethod(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_ROTATIONMETHOD_OFFSET))(this);
		}

		::System::Void set_rotationMethod(::UnityEngine::PBDRotationMethod value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PBDRotationMethod))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_ROTATIONMETHOD_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_gravity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_GRAVITY_OFFSET))(this);
		}

		::System::Void set_gravity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_GRAVITY_OFFSET))(this, value);
		}

		::System::UInt32 get_iteration()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_ITERATION_OFFSET))(this);
		}

		::System::Void set_iteration(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_ITERATION_OFFSET))(this, value);
		}

		::System::UInt32 get_substep()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_SUBSTEP_OFFSET))(this);
		}

		::System::Void set_substep(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_SUBSTEP_OFFSET))(this, value);
		}

		::System::Int32 get_staticBatchGroup()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_STATICBATCHGROUP_OFFSET))(this);
		}

		::System::Void set_staticBatchGroup(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_STATICBATCHGROUP_OFFSET))(this, value);
		}

		::System::Single get_minConstraintScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_MINCONSTRAINTSCALE_OFFSET))(this);
		}

		::System::Void set_minConstraintScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_MINCONSTRAINTSCALE_OFFSET))(this, value);
		}

		::System::Single get_maxConstraintScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_MAXCONSTRAINTSCALE_OFFSET))(this);
		}

		::System::Void set_maxConstraintScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_MAXCONSTRAINTSCALE_OFFSET))(this, value);
		}

		::System::Single get_particleSphereRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_PARTICLESPHERERADIUS_OFFSET))(this);
		}

		::System::Void set_particleSphereRadius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_PARTICLESPHERERADIUS_OFFSET))(this, value);
		}

		::System::Single get_maxVelocity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_MAXVELOCITY_OFFSET))(this);
		}

		::System::Void set_maxVelocity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_MAXVELOCITY_OFFSET))(this, value);
		}

		::System::Single get_dampingScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_DAMPINGSCALE_OFFSET))(this);
		}

		::System::Void set_dampingScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_DAMPINGSCALE_OFFSET))(this, value);
		}

		::System::Boolean get_localSimulation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_LOCALSIMULATION_OFFSET))(this);
		}

		::System::Void set_localSimulation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_LOCALSIMULATION_OFFSET))(this, value);
		}

		::System::Boolean get_simulating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_SIMULATING_OFFSET))(this);
		}

		::System::Boolean get_enableCollision()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_ENABLECOLLISION_OFFSET))(this);
		}

		::System::Void set_enableCollision(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_ENABLECOLLISION_OFFSET))(this, value);
		}

		::System::Boolean get_debugDraw()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_DEBUGDRAW_OFFSET))(this);
		}

		::System::Void set_debugDraw(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_DEBUGDRAW_OFFSET))(this, value);
		}

		::System::Boolean get_previewEditMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_PREVIEWEDITMODE_OFFSET))(this);
		}

		::System::Void set_previewEditMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_PREVIEWEDITMODE_OFFSET))(this, value);
		}

		::System::Boolean get_enableManualUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_ENABLEMANUALUPDATE_OFFSET))(this);
		}

		::System::Void set_enableManualUpdate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_ENABLEMANUALUPDATE_OFFSET))(this, value);
		}

		::System::Single get_volumeComplianceFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_VOLUMECOMPLIANCEFACTOR_OFFSET))(this);
		}

		::System::Void set_volumeComplianceFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_VOLUMECOMPLIANCEFACTOR_OFFSET))(this, value);
		}

		::System::Single get_distanceComplianceFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_DISTANCECOMPLIANCEFACTOR_OFFSET))(this);
		}

		::System::Void set_distanceComplianceFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_DISTANCECOMPLIANCEFACTOR_OFFSET))(this, value);
		}

		::System::Boolean get_useDynamicCompliance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_USEDYNAMICCOMPLIANCE_OFFSET))(this);
		}

		::System::Void set_useDynamicCompliance(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_USEDYNAMICCOMPLIANCE_OFFSET))(this, value);
		}

		::System::Boolean get_postResponseSimulation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_POSTRESPONSESIMULATION_OFFSET))(this);
		}

		::System::Void set_postResponseSimulation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_POSTRESPONSESIMULATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_collisionAdditionalScope()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_COLLISIONADDITIONALSCOPE_OFFSET))(this);
		}

		::System::Void set_collisionAdditionalScope(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_COLLISIONADDITIONALSCOPE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_rigidBodyCollisionSize()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYCOLLISIONSIZE_OFFSET))(this);
		}

		::System::Void set_rigidBodyCollisionSize(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYCOLLISIONSIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_rigidBodyFixBoxSize()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYFIXBOXSIZE_OFFSET))(this);
		}

		::System::Void set_rigidBodyFixBoxSize(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYFIXBOXSIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_rigidBodyCollisionNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYCOLLISIONNORMAL_OFFSET))(this);
		}

		::System::Void set_rigidBodyCollisionNormal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYCOLLISIONNORMAL_OFFSET))(this, value);
		}

		::System::UInt32 get_simulateRecoverFrame()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_SIMULATERECOVERFRAME_OFFSET))(this);
		}

		::System::Void set_simulateRecoverFrame(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_SIMULATERECOVERFRAME_OFFSET))(this, value);
		}

		::System::Boolean get_useStableCollision()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_USESTABLECOLLISION_OFFSET))(this);
		}

		::System::Void set_useStableCollision(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_USESTABLECOLLISION_OFFSET))(this, value);
		}

		::System::Boolean get_useOriginalNormalForCollision()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_USEORIGINALNORMALFORCOLLISION_OFFSET))(this);
		}

		::System::Void set_useOriginalNormalForCollision(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_USEORIGINALNORMALFORCOLLISION_OFFSET))(this, value);
		}

		::System::Single get_distanceScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_DISTANCESCALE_OFFSET))(this);
		}

		::System::Void set_distanceScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_DISTANCESCALE_OFFSET))(this, value);
		}

		::System::Single get_volumeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_VOLUMESCALE_OFFSET))(this);
		}

		::System::Void set_volumeScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_VOLUMESCALE_OFFSET))(this, value);
		}

		::System::Void UpdateTargetComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_UPDATETARGETCOMPONENT_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_ISVISIBLE_OFFSET))(this);
		}

		::System::Void ResetSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_RESETSOLVER_OFFSET))(this);
		}

		::System::Void ApplyImpulse(::UnityEngine::Vector3 impulse, ::Il2CppArray<::System::UInt32>* particleIndicies, ::UnityEngine::PBDMassUseType massType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Il2CppArray<::System::UInt32>*, ::UnityEngine::PBDMassUseType))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_APPLYIMPULSE_OFFSET))(this, impulse, particleIndicies, massType);
		}

		::System::Void ApplyImpulseAll(::UnityEngine::Vector3 impulse, ::System::Single forceDeviation, ::System::Single directionDeviation, ::UnityEngine::PBDMassUseType massType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::PBDMassUseType))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_APPLYIMPULSEALL_OFFSET))(this, impulse, forceDeviation, directionDeviation, massType);
		}

		::System::Void BreakConstraints(::Il2CppArray<::System::UInt32>* constraints)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_BREAKCONSTRAINTS_OFFSET))(this, constraints);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetParticlePositions()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GETPARTICLEPOSITIONS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetParticlePosition(::System::UInt32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GETPARTICLEPOSITION_OFFSET))(this, index);
		}

		::System::Boolean ShouldGenerateStaticMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SHOULDGENERATESTATICMESH_OFFSET))(this);
		}

		::System::Boolean ShouldSolveRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SHOULDSOLVEROTATION_OFFSET))(this);
		}

		::System::Void UpdateInEditMode(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_UPDATEINEDITMODE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateManually(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_UPDATEMANUALLY_OFFSET))(this, deltaTime);
		}

		::System::Void get_uvTilling_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_UVTILLING_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_uvTilling_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_UVTILLING_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_uvOffset_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_UVOFFSET_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_uvOffset_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_UVOFFSET_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_gravity_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_GRAVITY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_gravity_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_GRAVITY_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_collisionAdditionalScope_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_COLLISIONADDITIONALSCOPE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_collisionAdditionalScope_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_COLLISIONADDITIONALSCOPE_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_rigidBodyCollisionSize_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYCOLLISIONSIZE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rigidBodyCollisionSize_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYCOLLISIONSIZE_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_rigidBodyFixBoxSize_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYFIXBOXSIZE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rigidBodyFixBoxSize_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYFIXBOXSIZE_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_rigidBodyCollisionNormal_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYCOLLISIONNORMAL_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rigidBodyCollisionNormal_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYCOLLISIONNORMAL_INJECTED_OFFSET))(this, value);
		}

		::System::Void ApplyImpulse_Injected(::UnityEngine::Vector3& impulse, ::Il2CppArray<::System::UInt32>* particleIndicies, ::UnityEngine::PBDMassUseType massType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::Il2CppArray<::System::UInt32>*, ::UnityEngine::PBDMassUseType))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_APPLYIMPULSE_INJECTED_OFFSET))(this, impulse, particleIndicies, massType);
		}

		::System::Void ApplyImpulseAll_Injected(::UnityEngine::Vector3& impulse, ::System::Single forceDeviation, ::System::Single directionDeviation, ::UnityEngine::PBDMassUseType massType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::UnityEngine::PBDMassUseType))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_APPLYIMPULSEALL_INJECTED_OFFSET))(this, impulse, forceDeviation, directionDeviation, massType);
		}

		::System::Void GetParticlePosition_Injected(::System::UInt32 index, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GETPARTICLEPOSITION_INJECTED_OFFSET))(this, index, ret);
		}
	};
}
