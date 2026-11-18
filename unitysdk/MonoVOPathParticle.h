#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SubdivisionMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/ParticleSystem_EmissionModule.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemRenderer; }

#define MONOVOPATHPARTICLE_APPLYMATERIALOVERRIDE_OFFSET UNITYSDK_OFFSET(0x13EC4820)
#define MONOVOPATHPARTICLE_APPLYMOBILEPLATFORMOVERRIDEMATERIALS_OFFSET UNITYSDK_OFFSET(0x13EC6AC0)
#define MONOVOPATHPARTICLE_APPLYOVERRIDEMATERIALS_OFFSET UNITYSDK_OFFSET(0x13EC6650)
#define MONOVOPATHPARTICLE_CALCULATECATMULLROMCURVE_OFFSET UNITYSDK_OFFSET(0x13EC4B90)
#define MONOVOPATHPARTICLE_CALCULATECATMULLROMPOINT_OFFSET UNITYSDK_OFFSET(0x13EC60C0)
#define MONOVOPATHPARTICLE_CALCULATECURVELENGTH_OFFSET UNITYSDK_OFFSET(0x13EC6360)
#define MONOVOPATHPARTICLE_CLEANSEGMENTPOINTS_OFFSET UNITYSDK_OFFSET(0x13EC6B30)
#define MONOVOPATHPARTICLE_CLEARMESH_OFFSET UNITYSDK_OFFSET(0x13EC3BE0)
#define MONOVOPATHPARTICLE_DELTAPOSITION_OFFSET UNITYSDK_OFFSET(0x13EC41B0)
#define MONOVOPATHPARTICLE_DRAWMULTIPLEPASS_OFFSET UNITYSDK_OFFSET(0x13EC4A60)
#define MONOVOPATHPARTICLE_FADEOUT_OFFSET UNITYSDK_OFFSET(0x13EC48B0)
#define MONOVOPATHPARTICLE_GENERATEMESH_OFFSET UNITYSDK_OFFSET(0x13EC5580)
#define MONOVOPATHPARTICLE_GET_CURVEPOINTS_OFFSET UNITYSDK_OFFSET(0x13EC3950)
#define MONOVOPATHPARTICLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x13EC3960)
#define MONOVOPATHPARTICLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13EC3B30)
#define MONOVOPATHPARTICLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x13EC3700)
#define MONOVOPATHPARTICLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13EC35B0)
#define MONOVOPATHPARTICLE_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x13EC3870)
#define MONOVOPATHPARTICLE_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x13EC38F0)
#define MONOVOPATHPARTICLE_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x13EC37C0)
#define MONOVOPATHPARTICLE_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x13EC36B0)
#define MONOVOPATHPARTICLE_SETCONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x13EC4AD0)
#define MONOVOPATHPARTICLE_SETUPPARTICLEMESHSOURCE_OFFSET UNITYSDK_OFFSET(0x13EC4300)
#define MONOVOPATHPARTICLE_STARTSPAWNPARTICLE_OFFSET UNITYSDK_OFFSET(0x13EC5F10)
#define MONOVOPATHPARTICLE_STOPPARTICLE_OFFSET UNITYSDK_OFFSET(0x13EC6060)
#define MONOVOPATHPARTICLE_STOPSPAWNPARTICLE_OFFSET UNITYSDK_OFFSET(0x13EC5FC0)
#define MONOVOPATHPARTICLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x13EC3F10)
#define MONOVOPATHPARTICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EC6CD0)

inline static constexpr unsigned int MonoVOPathParticle_TypeDefinitionIndex = 78870;

class MonoVOPathParticle : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::ParticleSystem* ps; // 0x18
	::System::Single delta; // 0x20
	::SubdivisionMode subdivisionMode; // 0x24
	::System::Int32 curveSegments; // 0x28
	::System::Single subdivisionDistance; // 0x2C
	::System::Single autoSubdivisionDistance; // 0x30
	::System::Boolean enableDebug; // 0x34
	::System::Boolean showPoints; // 0x35
	::System::Boolean showSegments; // 0x36
	::System::Boolean showCurve; // 0x37
	::System::Boolean showDeltaPosition; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 pointCount; // 0x3C
	::UnityEngine::Vector3 spawnArea; // 0x40
	::System::Single sphereSize; // 0x4C
	::System::Boolean autoAnimate; // 0x50
	::System::Byte _padding1[0x3];
	::System::Single animationSpeed; // 0x54
	::System::Single heightOffset; // 0x58
	::System::Byte _padding2[0x4];
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* controlPoints; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* curvePoints; // 0x68
	::System::Boolean isInitialized; // 0x70
	::System::Byte _padding3[0x7];
	::UnityEngine::GameObject* particle; // 0x78
	::System::Single lifeTime; // 0x80
	::System::Byte _padding4[0x4];
	::UnityEngine::ParticleSystem_EmissionModule emission; // 0x88
	::System::Single estimatedTotalLength; // 0x90
	::System::Byte _padding5[0x4];
	::FluffyUnderware::Curvy::CurvySpline* curvySpline; // 0x98
	::UnityEngine::GameObject* prefabInstance; // 0xA0
	::UnityEngine::MeshRenderer* generatedMeshRenderer; // 0xA8
	::System::Boolean particleMeshSetup; // 0xB0
	::System::Boolean materialOverrideSetup; // 0xB1
	::System::Byte _padding6[0x6];
	::UnityEngine::MaterialPropertyBlock* mpb; // 0xB8
	::System::Int32 _AlphaFade; // 0xC0
	::System::Boolean generateMesh; // 0xC4
	::System::Byte _padding7[0x3];
	::UnityEngine::GameObject* curvyPrefab; // 0xC8
	::System::Boolean meshClosed; // 0xD0
	::System::Byte _padding8[0x3];
	::System::Single maxPointsPerUnit; // 0xD4
	::System::Boolean spawnParticleFromMesh; // 0xD8
	::System::Byte _padding9[0x7];
	::UnityEngine::ParticleSystem* meshParticleSystem; // 0xE0
	::System::Boolean mobilePlatformOverrideMaterial; // 0xE8
	::System::Byte _padding10[0x7];
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* mobilePlatformOverrideMaterials; // 0xF0
	::System::Boolean drawMultiPass; // 0xF8
	::System::Byte _padding11[0x7];
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* multiPassMaterials; // 0x100
	::UnityEngine::ParticleSystemRenderer* psr; // 0x108

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* get_CurvePoints()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_GET_CURVEPOINTS_OFFSET))(this);
	}

	::System::Void OnRealEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_ONREALENABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnRealDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_ONREALDISABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_UPDATE_OFFSET))(this);
	}

	::System::Void ApplyMaterialOverride()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_APPLYMATERIALOVERRIDE_OFFSET))(this);
	}

	::System::Void SetControlPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_SETCONTROLPOINTS_OFFSET))(this, points);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_INITIALIZE_OFFSET))(this);
	}

	::System::Void StartSpawnParticle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_STARTSPAWNPARTICLE_OFFSET))(this);
	}

	::System::Void StopSpawnParticle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_STOPSPAWNPARTICLE_OFFSET))(this);
	}

	::System::Void StopParticle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_STOPPARTICLE_OFFSET))(this);
	}

	::System::Void CalculateCatmullRomCurve()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_CALCULATECATMULLROMCURVE_OFFSET))(this);
	}

	::UnityEngine::Vector3 CalculateCatmullRomPoint(::System::Single t, ::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_CALCULATECATMULLROMPOINT_OFFSET))(this, t, p0, p1, p2, p3);
	}

	::System::Single CalculateCurveLength(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_CALCULATECURVELENGTH_OFFSET))(this, p0, p1, p2, p3);
	}

	::UnityEngine::Vector3 DeltaPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_DELTAPOSITION_OFFSET))(this);
	}

	::System::Void GenerateMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_GENERATEMESH_OFFSET))(this);
	}

	::System::Void SetupParticleMeshSource()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_SETUPPARTICLEMESHSOURCE_OFFSET))(this);
	}

	::System::Void DrawMultiplePass()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_DRAWMULTIPLEPASS_OFFSET))(this);
	}

	::System::Void ApplyMobilePlatformOverrideMaterials()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_APPLYMOBILEPLATFORMOVERRIDEMATERIALS_OFFSET))(this);
	}

	::System::Void ApplyOverrideMaterials(::System::Collections::Generic::List_1<::UnityEngine::Material*>* materials)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_APPLYOVERRIDEMATERIALS_OFFSET))(this, materials);
	}

	::System::Void FadeOut()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_FADEOUT_OFFSET))(this);
	}

	::System::Void ClearMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_CLEARMESH_OFFSET))(this);
	}

	::System::Void CleanSegmentPoints()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOVOPATHPARTICLE_CLEANSEGMENTPOINTS_OFFSET))(this);
	}
};
