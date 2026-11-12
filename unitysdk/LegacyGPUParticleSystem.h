#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LegacyGPUParticleSystem_DeltaTimeMode.h"
#include "unitysdk/LegacyGPUParticleSystem_EmitterShape.h"
#include "unitysdk/LegacyGPUParticleSystem_ParticleType.h"
#include "unitysdk/LegacyGPUParticleSystem_ScalingMode.h"
#include "unitysdk/LegacyGPUParticleSystem_SkinMeshDataType.h"
#include "unitysdk/RefGPUParticleSystem_CollisionType.h"
#include "unitysdk/RefGPUParticleSystem_CurveMode.h"
#include "unitysdk/RefGPUParticleSystem_GPUParticleBlendMode.h"
#include "unitysdk/RefGPUParticleSystem_GPUParticleSystemState.h"
#include "unitysdk/RefGPUParticleSystem_GPUSimulationSpace.h"
#include "unitysdk/RefGPUParticleSystem_MeshBakeType.h"
#include "unitysdk/RefGPUParticleSystem_RenderTexturePrecision.h"
#include "unitysdk/RefGPUParticleSystem_TextureSheetMode.h"
#include "unitysdk/RefGPUParticleSystem_TurbulenceType.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
class Attractor;
class ColorGradientBundle;
class FloatCurveBundle;
class LegacyGPUParticleSystem;
class RefGPUParticleSystemBuffer;
class RefGPUParticleSystemBurst;
class ShaderCurveBundle;
class SingleFloatCurveBundle;
class Vector3CurveBundle;
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::Client { class BezierCurve; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define LEGACYGPUPARTICLESYSTEM_ADDATTRACTOR_OFFSET UNITYSDK_OFFSET(0x1FE89600)
#define LEGACYGPUPARTICLESYSTEM_ADDBURST_OFFSET UNITYSDK_OFFSET(0x1FE88560)
#define LEGACYGPUPARTICLESYSTEM_AEAGMHLEDCI_OFFSET UNITYSDK_OFFSET(0x1FE8BEB0)
#define LEGACYGPUPARTICLESYSTEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FE7CC00)
#define LEGACYGPUPARTICLESYSTEM_BAKEBEZIERCURVE_OFFSET UNITYSDK_OFFSET(0x1FE7F040)
#define LEGACYGPUPARTICLESYSTEM_BOJIHBJFAIP_OFFSET UNITYSDK_OFFSET(0x1FE7D870)
#define LEGACYGPUPARTICLESYSTEM_CALCULATEROTATEEXTENTS_OFFSET UNITYSDK_OFFSET(0x1FE84580)
#define LEGACYGPUPARTICLESYSTEM_CBHNKPOCDED_OFFSET UNITYSDK_OFFSET(0x1FE80990)
#define LEGACYGPUPARTICLESYSTEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE8EE00)
#define LEGACYGPUPARTICLESYSTEM_CHEBHEBLBJL_OFFSET UNITYSDK_OFFSET(0x1FE8BD00)
#define LEGACYGPUPARTICLESYSTEM_CLEARPARTICLEDATA_OFFSET UNITYSDK_OFFSET(0x1FE7C5F0)
#define LEGACYGPUPARTICLESYSTEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE8CA20)
#define LEGACYGPUPARTICLESYSTEM_DAJNLLIKPHI_OFFSET UNITYSDK_OFFSET(0x1FE7C9E0)
#define LEGACYGPUPARTICLESYSTEM_DJHPHNEOALJ_OFFSET UNITYSDK_OFFSET(0x1FE807C0)
#define LEGACYGPUPARTICLESYSTEM_DPCOAPJDDFO_OFFSET UNITYSDK_OFFSET(0x1FE7D740)
#define LEGACYGPUPARTICLESYSTEM_EBJLLAIJEDI_OFFSET UNITYSDK_OFFSET(0x1FE7DA80)
#define LEGACYGPUPARTICLESYSTEM_EMITNUMPARTICLES_OFFSET UNITYSDK_OFFSET(0x1FE86AC0)
#define LEGACYGPUPARTICLESYSTEM_EMIT_OFFSET UNITYSDK_OFFSET(0x1FE86AB0)
#define LEGACYGPUPARTICLESYSTEM_EPJCPCAMGFH_OFFSET UNITYSDK_OFFSET(0x1FE8C070)
#define LEGACYGPUPARTICLESYSTEM_FHAGOKJEMPC_OFFSET UNITYSDK_OFFSET(0x1FE83390)
#define LEGACYGPUPARTICLESYSTEM_FORCERECREATEPARTICLES_OFFSET UNITYSDK_OFFSET(0x1FE88190)
#define LEGACYGPUPARTICLESYSTEM_GAEFENIFALD_OFFSET UNITYSDK_OFFSET(0x1FE80E20)
#define LEGACYGPUPARTICLESYSTEM_GETWSBOUNDS_OFFSET UNITYSDK_OFFSET(0x1FE8C230)
#define LEGACYGPUPARTICLESYSTEM_GFLOPJEKLGC_OFFSET UNITYSDK_OFFSET(0x1FE7B910)
#define LEGACYGPUPARTICLESYSTEM_GHJCIIIILEG_OFFSET UNITYSDK_OFFSET(0x1FE80A70)
#define LEGACYGPUPARTICLESYSTEM_HBHAFLFLBJH_OFFSET UNITYSDK_OFFSET(0x1FE80840)
#define LEGACYGPUPARTICLESYSTEM_HINMFJCPDHI_OFFSET UNITYSDK_OFFSET(0x1FE80590)
#define LEGACYGPUPARTICLESYSTEM_KCIGLFGLKHK_OFFSET UNITYSDK_OFFSET(0x1FE80660)
#define LEGACYGPUPARTICLESYSTEM_KPOPHEJEOEM_OFFSET UNITYSDK_OFFSET(0x1FE7D9C0)
#define LEGACYGPUPARTICLESYSTEM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1FE7FF00)
#define LEGACYGPUPARTICLESYSTEM_LPKJADHHIDD_OFFSET UNITYSDK_OFFSET(0x1FE80130)
#define LEGACYGPUPARTICLESYSTEM_MAGKGOJIBCJ_OFFSET UNITYSDK_OFFSET(0x1FE7D230)
#define LEGACYGPUPARTICLESYSTEM_MFEOIBCNMNC_OFFSET UNITYSDK_OFFSET(0x1FE80240)
#define LEGACYGPUPARTICLESYSTEM_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1FE7C0C0)
#define LEGACYGPUPARTICLESYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1FE7D1D0)
#define LEGACYGPUPARTICLESYSTEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1FE7C560)
#define LEGACYGPUPARTICLESYSTEM_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1FE8C790)
#define LEGACYGPUPARTICLESYSTEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1FE7B4E0)
#define LEGACYGPUPARTICLESYSTEM_PAUSE_OFFSET UNITYSDK_OFFSET(0x1FE80B20)
#define LEGACYGPUPARTICLESYSTEM_PLAY_OFFSET UNITYSDK_OFFSET(0x1FE7C4F0)
#define LEGACYGPUPARTICLESYSTEM_PREPAREPARTICLEDATA_OFFSET UNITYSDK_OFFSET(0x1FE7B720)
#define LEGACYGPUPARTICLESYSTEM_PREPARESKINNEDMESH_OFFSET UNITYSDK_OFFSET(0x1FE7E890)
#define LEGACYGPUPARTICLESYSTEM_REMOVEATTRACTOR_OFFSET UNITYSDK_OFFSET(0x1FE89560)
#define LEGACYGPUPARTICLESYSTEM_REMOVELASTATTRACTOR_OFFSET UNITYSDK_OFFSET(0x1FE89850)
#define LEGACYGPUPARTICLESYSTEM_REMOVELASTBURST_OFFSET UNITYSDK_OFFSET(0x1FE88640)
#define LEGACYGPUPARTICLESYSTEM_RENDERSKINNEDMESHEMITTERPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1FE836D0)
#define LEGACYGPUPARTICLESYSTEM_RESEED_OFFSET UNITYSDK_OFFSET(0x1FE7CEC0)
#define LEGACYGPUPARTICLESYSTEM_RESETSEED_OFFSET UNITYSDK_OFFSET(0x1FE881C0)
#define LEGACYGPUPARTICLESYSTEM_RESTART_OFFSET UNITYSDK_OFFSET(0x1FE80DB0)
#define LEGACYGPUPARTICLESYSTEM_SETATTRACTORKEYWORD_OFFSET UNITYSDK_OFFSET(0x1FE896F0)
#define LEGACYGPUPARTICLESYSTEM_SETBLENDMODE_OFFSET UNITYSDK_OFFSET(0x1FE8A3F0)
#define LEGACYGPUPARTICLESYSTEM_SETCIRCULARFORCE_OFFSET UNITYSDK_OFFSET(0x1FE7DDA0)
#define LEGACYGPUPARTICLESYSTEM_SETCOLLISIONTYPE_OFFSET UNITYSDK_OFFSET(0x1FE89EC0)
#define LEGACYGPUPARTICLESYSTEM_SETCURVEPOINTDATA_OFFSET UNITYSDK_OFFSET(0x1FE8C4A0)
#define LEGACYGPUPARTICLESYSTEM_SETEMISSIONKEYWORD_OFFSET UNITYSDK_OFFSET(0x1FE8B2E0)
#define LEGACYGPUPARTICLESYSTEM_SETEMISSIONMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE8B1D0)
#define LEGACYGPUPARTICLESYSTEM_SETEMITFROMBASE_OFFSET UNITYSDK_OFFSET(0x1FE8B790)
#define LEGACYGPUPARTICLESYSTEM_SETEMITFROMSHELL_OFFSET UNITYSDK_OFFSET(0x1FE8B680)
#define LEGACYGPUPARTICLESYSTEM_SETEMITTERSHAPEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1FE7F5B0)
#define LEGACYGPUPARTICLESYSTEM_SETLAYER_OFFSET UNITYSDK_OFFSET(0x1FE844F0)
#define LEGACYGPUPARTICLESYSTEM_SETLIGHTMODE_OFFSET UNITYSDK_OFFSET(0x1FE7DB40)
#define LEGACYGPUPARTICLESYSTEM_SETLIMITVELOCITY_OFFSET UNITYSDK_OFFSET(0x1FE89280)
#define LEGACYGPUPARTICLESYSTEM_SETMAINTEXTUREKEYWORD_OFFSET UNITYSDK_OFFSET(0x1FE8A8C0)
#define LEGACYGPUPARTICLESYSTEM_SETMAINTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE7D750)
#define LEGACYGPUPARTICLESYSTEM_SETMESHTARGETKEYWORD_OFFSET UNITYSDK_OFFSET(0x1FE8B360)
#define LEGACYGPUPARTICLESYSTEM_SETMETALLICSMOOTHNESSKEYWORD_OFFSET UNITYSDK_OFFSET(0x1FE8AEE0)
#define LEGACYGPUPARTICLESYSTEM_SETMETALLICSMOOTHNESSMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE8ADD0)
#define LEGACYGPUPARTICLESYSTEM_SETMETALLICSMOOTHNESSVALUE_OFFSET UNITYSDK_OFFSET(0x1FE8AD40)
#define LEGACYGPUPARTICLESYSTEM_SETNORMALKEYWORD_OFFSET UNITYSDK_OFFSET(0x1FE8B150)
#define LEGACYGPUPARTICLESYSTEM_SETNORMALMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE8B040)
#define LEGACYGPUPARTICLESYSTEM_SETPARTICLETYPEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1FE7F620)
#define LEGACYGPUPARTICLESYSTEM_SETPARTICLETYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1FE87300)
#define LEGACYGPUPARTICLESYSTEM_SETRANDOMINDEXKEYWORD_OFFSET UNITYSDK_OFFSET(0x1FE8AB20)
#define LEGACYGPUPARTICLESYSTEM_SETREFRACTIONMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE8AF60)
#define LEGACYGPUPARTICLESYSTEM_SETRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0x1FE7C4C0)
#define LEGACYGPUPARTICLESYSTEM_SETROTATIONKEYWORD_OFFSET UNITYSDK_OFFSET(0x1FE886A0)
#define LEGACYGPUPARTICLESYSTEM_SETROTATIONOVERLIFETIMEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1FE89000)
#define LEGACYGPUPARTICLESYSTEM_SETSIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0x1FE7F860)
#define LEGACYGPUPARTICLESYSTEM_SETSIZEOVERLIFETIMEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1FE889B0)
#define LEGACYGPUPARTICLESYSTEM_SETTEXTURESHEETKEYWORD_OFFSET UNITYSDK_OFFSET(0x1FE8A910)
#define LEGACYGPUPARTICLESYSTEM_SETTURBULENCEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1FE7DBB0)
#define LEGACYGPUPARTICLESYSTEM_SETUPSKINNEDMESHEMITTERCAMERA_OFFSET UNITYSDK_OFFSET(0x1FE8B8A0)
#define LEGACYGPUPARTICLESYSTEM_SETWAVEINTERACTION_OFFSET UNITYSDK_OFFSET(0x1FE7FE00)
#define LEGACYGPUPARTICLESYSTEM_SETZBUFFER_OFFSET UNITYSDK_OFFSET(0x1FE8A370)
#define LEGACYGPUPARTICLESYSTEM_STOP_OFFSET UNITYSDK_OFFSET(0x1FE7C5B0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEAIRRESISTANCE_OFFSET UNITYSDK_OFFSET(0x1FE831E0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEAMPLITUDE_OFFSET UNITYSDK_OFFSET(0x1FE82DE0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1FE835A0)
#define LEGACYGPUPARTICLESYSTEM_UPDATECIRCULARFORCEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1FE832C0)
#define LEGACYGPUPARTICLESYSTEM_UPDATECOLLISIONCAMERA_OFFSET UNITYSDK_OFFSET(0x1FE8A040)
#define LEGACYGPUPARTICLESYSTEM_UPDATECOLORINTENSITY_OFFSET UNITYSDK_OFFSET(0x1FE82D40)
#define LEGACYGPUPARTICLESYSTEM_UPDATECOLOROVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1FE7DE20)
#define LEGACYGPUPARTICLESYSTEM_UPDATECUSTOMDATASTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1FE871E0)
#define LEGACYGPUPARTICLESYSTEM_UPDATECUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x1FE82620)
#define LEGACYGPUPARTICLESYSTEM_UPDATEDEPTHCOLLISIONVALUES_OFFSET UNITYSDK_OFFSET(0x1FE8A0B0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEEMITTERMATRIX_OFFSET UNITYSDK_OFFSET(0x1FE81F80)
#define LEGACYGPUPARTICLESYSTEM_UPDATEEMITTERTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE7DF30)
#define LEGACYGPUPARTICLESYSTEM_UPDATEEMITTER_OFFSET UNITYSDK_OFFSET(0x1FE81DA0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEFORCEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1FE83600)
#define LEGACYGPUPARTICLESYSTEM_UPDATEFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1FE83000)
#define LEGACYGPUPARTICLESYSTEM_UPDATEGRAVITY_OFFSET UNITYSDK_OFFSET(0x1FE82590)
#define LEGACYGPUPARTICLESYSTEM_UPDATEINDEXOFREFRACTION_OFFSET UNITYSDK_OFFSET(0x1FE8AFE0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEMAXVELOCITYOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1FE834E0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEMESHTARGETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1FE89D60)
#define LEGACYGPUPARTICLESYSTEM_UPDATEMESHTARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE898D0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEMOTIONVECTORSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1FE8ACE0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEMOTIONVECTORTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE8AC30)
#define LEGACYGPUPARTICLESYSTEM_UPDATEOFFSET_OFFSET UNITYSDK_OFFSET(0x1FE83130)
#define LEGACYGPUPARTICLESYSTEM_UPDATEPARTICLETYPEKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1FE8A200)
#define LEGACYGPUPARTICLESYSTEM_UPDATEPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1FE8A2F0)
#define LEGACYGPUPARTICLESYSTEM_UPDATEROTATIONOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1FE88AF0)
#define LEGACYGPUPARTICLESYSTEM_UPDATESIZEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1FE826F0)
#define LEGACYGPUPARTICLESYSTEM_UPDATESKINNEDMESHEMITTERPOSITIONTEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE8BB40)
#define LEGACYGPUPARTICLESYSTEM_UPDATESKINNEDMESHEMITTERTEXTURES_OFFSET UNITYSDK_OFFSET(0x1FE84F90)
#define LEGACYGPUPARTICLESYSTEM_UPDATESTARTSIZEANDROTATION_OFFSET UNITYSDK_OFFSET(0x1FE82380)
#define LEGACYGPUPARTICLESYSTEM_UPDATESTARTSIZE_OFFSET UNITYSDK_OFFSET(0x1FE87160)
#define LEGACYGPUPARTICLESYSTEM_UPDATESTARTSPEEDANDLIFETIME_OFFSET UNITYSDK_OFFSET(0x1FE82340)
#define LEGACYGPUPARTICLESYSTEM_UPDATESTRETCHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1FE8B4B0)
#define LEGACYGPUPARTICLESYSTEM_UPDATETEXTURESHEETDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x1FE8ABA0)
#define LEGACYGPUPARTICLESYSTEM_UPDATETIGHTNESS_OFFSET UNITYSDK_OFFSET(0x1FE830B0)
#define LEGACYGPUPARTICLESYSTEM_UPDATETRAILVALUES_OFFSET UNITYSDK_OFFSET(0x1FE8B550)
#define LEGACYGPUPARTICLESYSTEM_UPDATETURBULENCETEXTURE_OFFSET UNITYSDK_OFFSET(0x1FE7DD30)
#define LEGACYGPUPARTICLESYSTEM_UPDATEVECTORFIELDFILE_OFFSET UNITYSDK_OFFSET(0x1FE89530)
#define LEGACYGPUPARTICLESYSTEM_UPDATEVECTORFIELDMATRIX_OFFSET UNITYSDK_OFFSET(0x1FE7F470)
#define LEGACYGPUPARTICLESYSTEM_UPDATEVECTORFIELD_OFFSET UNITYSDK_OFFSET(0x1FE7F400)
#define LEGACYGPUPARTICLESYSTEM_UPDATEWAVESIM_OFFSET UNITYSDK_OFFSET(0x1FE87B00)
#define LEGACYGPUPARTICLESYSTEM_UPDATEWORLDSPACEBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1FE802D0)

inline static constexpr unsigned int LegacyGPUParticleSystem_TypeDefinitionIndex = 45064;

	class LegacyGPUParticleSystem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Shader* pDefault; // 0x18
		::UnityEngine::Shader* pSkinMeshPosPoint; // 0x20
		::UnityEngine::Shader* pSkinMeshPos; // 0x28
		::UnityEngine::Shader* pVelocity; // 0x30
		::UnityEngine::Shader* pPosition; // 0x38
		::UnityEngine::Shader* pResetPosBuffer; // 0x40
		::UnityEngine::Shader* pResetMetaBuffer; // 0x48
		::UnityEngine::Shader* pSpawner; // 0x50
		::UnityEngine::Shader* pMeta; // 0x58
		::UnityEngine::GameObject* HJIDMHNDDKC; // 0x60
		::System::Single maxMemberRatio; // 0x68
		::System::Boolean positionAlongNormal; // 0x6C
		::System::Byte _padding0[0x3];
		::System::Int32 maxParticles; // 0x70
		::System::Int32 meshEmitterResolution; // 0x74
		::RefGPUParticleSystem_MeshBakeType meshBakeType; // 0x78
		::System::Byte _padding1[0x4];
		::UnityEngine::SkinnedMeshRenderer* meshEmitterBakeSource; // 0x80
		::UnityEngine::Mesh* meshEmitter; // 0x88
		::UnityEngine::Mesh* meshParticle; // 0x90
		::LegacyGPUParticleSystem_EmitterShape emitterShape; // 0x98
		::System::Int32 renderQueue; // 0x9C
		::System::Int32 bufferWidth; // 0xA0
		::System::Int32 bufferHeight; // 0xA4
		::LegacyGPUParticleSystem_ParticleType particleType; // 0xA8
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* vertexStreamList; // 0xB0
		::UnityEngine::Material* particleMaterial; // 0xB8
		::RefGPUParticleSystemBuffer* particleData; // 0xC0
		::RefGPUParticleSystem_GPUSimulationSpace simulationSpace; // 0xC8
		::System::Single simulationSpeed; // 0xCC
		::UnityEngine::Vector3 center; // 0xD0
		::UnityEngine::Vector3 extents; // 0xDC
		::UnityEngine::Vector3 transformExtents; // 0xE8
		::System::Boolean optimizeUpdate; // 0xF4
		::System::Byte _padding3[0x3];
		::System::Int32 OrderLayerID; // 0xF8
		::System::Boolean particleMeshesInheritLayer; // 0xFC
		::System::Byte _padding4[0x3];
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* LAGOJCLIDDA; // 0x100
		::RefGPUParticleSystem_RenderTexturePrecision precision; // 0x108
		::System::Boolean autoRandomSeed; // 0x10C
		::System::Byte _padding5[0x3];
		::System::Int32 seed; // 0x110
		::System::Boolean waveInteraction; // 0x114
		::System::Byte _padding6[0x3];
		::LegacyGPUParticleSystem_DeltaTimeMode deltaTimeMode; // 0x118
		::LegacyGPUParticleSystem_ScalingMode scalingMode; // 0x11C
		::System::Boolean useFixedDeltaTime; // 0x120
		::System::Byte _padding7[0x3];
		::System::Single fixedDeltaTime; // 0x124
		::System::Single timeScale; // 0x128
		::RefGPUParticleSystem_GPUParticleSystemState state; // 0x12C
		::System::Collections::Generic::List_1<::RefGPUParticleSystemBurst*>* PEKKIFDLFHC; // 0x130
		::System::Collections::Generic::List_1<::RefGPUParticleSystemBurst*>* bursts; // 0x138
		::System::Single progress; // 0x140
		::System::Single DGNCAICELJM; // 0x144
		::System::Single effectLength; // 0x148
		::System::Boolean loop; // 0x14C
		::System::Byte _padding8[0x3];
		::ColorGradientBundle* startColorBundle; // 0x150
		::ColorGradientBundle* colorOverLifetime; // 0x158
		::UnityEngine::Texture2D* IDCMLHDNFFH; // 0x160
		::System::Boolean emit; // 0x168
		::System::Byte _padding9[0x3];
		::UnityEngine::Vector4 metaBufConfig; // 0x16C
		::System::Boolean startRotation3D; // 0x17C
		::System::Byte _padding10[0x3];
		::System::Single startDelay; // 0x180
		::UnityEngine::Color startColor; // 0x184
		::System::Byte _padding11[0x4];
		::FloatCurveBundle* emissionRate; // 0x198
		::FloatCurveBundle* startLifetime; // 0x1A0
		::FloatCurveBundle* startSize; // 0x1A8
		::FloatCurveBundle* startSize2; // 0x1B0
		::FloatCurveBundle* startSize3; // 0x1B8
		::FloatCurveBundle* customData1x; // 0x1C0
		::FloatCurveBundle* customData1y; // 0x1C8
		::FloatCurveBundle* customData1z; // 0x1D0
		::FloatCurveBundle* customData1w; // 0x1D8
		::FloatCurveBundle* customData2x; // 0x1E0
		::FloatCurveBundle* customData2y; // 0x1E8
		::FloatCurveBundle* customData2z; // 0x1F0
		::FloatCurveBundle* customData2w; // 0x1F8
		::FloatCurveBundle* startSpeed; // 0x200
		::FloatCurveBundle* startRotation; // 0x208
		::FloatCurveBundle* gravityModifier; // 0x210
		::System::Single PNOMONOCJPE; // 0x218
		::System::Single JNENLJGGFOA; // 0x21C
		::System::Int32 NBPMDGAFFKO; // 0x220
		::System::Single customTime; // 0x224
		::System::Single absCustomTime; // 0x228
		::System::Single KNOFOKJDAHJ; // 0x22C
		::System::Single LBLBBAGHOKA; // 0x230
		::System::Single JJGBLKNIHFD; // 0x234
		::UnityEngine::GameObject* LOCNDMHEJKH; // 0x238
		::UnityEngine::Bounds LANPMLIFOAH; // 0x240
		::Il2CppArray<::UnityEngine::GameObject*>* FGONMEEJKIL; // 0x258
		::Il2CppArray<::UnityEngine::MeshFilter*>* PDELHIBPCAM; // 0x260
		::Il2CppArray<::UnityEngine::MeshRenderer*>* KACCJFICDHI; // 0x268
		::UnityEngine::Texture2D* meshEmitterPositionTexture; // 0x270
		::UnityEngine::Texture2D* meshEmitterNormalTexture; // 0x278
		::UnityEngine::MeshFilter* meshFilterEmitter; // 0x280
		::UnityEngine::Transform* skinnedMeshEmitterTransform; // 0x288
		::SingleFloatCurveBundle* gravity; // 0x290
		::RefGPUParticleSystem_TurbulenceType noiseType; // 0x298
		::System::Byte _padding12[0x4];
		::UnityEngine::TextAsset* fgaFile; // 0x2A0
		::UnityEngine::Texture3D* vectorField; // 0x2A8
		::UnityEngine::Texture2D* vectorNoise; // 0x2B0
		::System::Single Tightness; // 0x2B8
		::System::Boolean noiseAmplitudeAlongNormal; // 0x2BC
		::System::Byte _padding13[0x3];
		::Vector3CurveBundle* turbulenceAmplitude; // 0x2C0
		::Vector3CurveBundle* turbulenceFrequency; // 0x2C8
		::Vector3CurveBundle* turbulenceOffset; // 0x2D0
		::Vector3CurveBundle* turbulenceRotation; // 0x2D8
		::UnityEngine::Transform* vectorFieldObject; // 0x2E0
		::System::Boolean useRotation; // 0x2E8
		::System::Byte _padding14[0x7];
		::ShaderCurveBundle* sizeOverLifetime; // 0x2F0
		::ShaderCurveBundle* rotationOverLifetime; // 0x2F8
		::SingleFloatCurveBundle* colorIntensityOverLifetime; // 0x300
		::SingleFloatCurveBundle* maxVelocity; // 0x308
		::SingleFloatCurveBundle* airResistance; // 0x310
		::Vector3CurveBundle* forceOverLifetime; // 0x318
		::System::Boolean useMaxVelocity; // 0x320
		::System::Boolean useCircularForce; // 0x321
		::System::Byte _padding15[0x6];
		::Vector3CurveBundle* circularForce; // 0x328
		::System::Collections::Generic::List_1<::Attractor*>* attractors; // 0x330
		::SingleFloatCurveBundle* inheritVelocityMultiplyer; // 0x338
		::SingleFloatCurveBundle* meshTargetStrength; // 0x340
		::SingleFloatCurveBundle* onTarget; // 0x348
		::System::Boolean useMeshTarget; // 0x350
		::System::Boolean useMeshFilter; // 0x351
		::System::Boolean targetIsSameMeshAsEmitter; // 0x352
		::System::Byte _padding16[0x5];
		::UnityEngine::Mesh* meshTarget; // 0x358
		::UnityEngine::MeshFilter* meshFilterTarget; // 0x360
		::UnityEngine::Texture2D* meshTargetPositionTexture; // 0x368
		::System::Int32 meshTargetResolution; // 0x370
		::RefGPUParticleSystem_MeshBakeType targetBakeType; // 0x374
		::UnityEngine::Camera* collisionCamera; // 0x378
		::RefGPUParticleSystem_CollisionType collisionType; // 0x380
		::System::Byte _padding17[0x4];
		::UnityEngine::Transform* collisionCameraTransform; // 0x388
		::System::Single depthCollisionDamping; // 0x390
		::System::Single dampingRandomness; // 0x394
		::System::Single depthCollisionDistance; // 0x398
		::UnityEngine::Vector3 offset; // 0x39C
		::System::Boolean useZbuffer; // 0x3A8
		::System::Byte _padding18[0x3];
		::RefGPUParticleSystem_GPUParticleBlendMode blendMode; // 0x3AC
		::UnityEngine::Texture2D* mainTexture; // 0x3B0
		::UnityEngine::Texture2D* mainTexture2; // 0x3B8
		::UnityEngine::Texture2D* motionVectors; // 0x3C0
		::System::Single aspectRatio; // 0x3C8
		::System::Single metallic; // 0x3CC
		::System::Single smoothness; // 0x3D0
		::System::Byte _padding19[0x4];
		::UnityEngine::Texture2D* normalMap; // 0x3D8
		::UnityEngine::Texture2D* emissionMap; // 0x3E0
		::UnityEngine::Texture2D* metallicSmoothness; // 0x3E8
		::UnityEngine::Texture2D* refractionNormals; // 0x3F0
		::System::Single motionVectorStrength; // 0x3F8
		::System::Single indexOfRefraction; // 0x3FC
		::System::Single stretchMultiplier; // 0x400
		::UnityEngine::Vector2 minMaxStretch; // 0x404
		::System::Boolean receiveShadows; // 0x40C
		::System::Byte _padding20[0x3];
		::UnityEngine::Rendering::ShadowCastingMode castShadows; // 0x410
		::System::Single followSpeed; // 0x414
		::System::Int32 skinnedMeshEmitterResolution; // 0x418
		::System::Byte _padding21[0x4];
		::UnityEngine::SkinnedMeshRenderer* skinnedMeshEmitter; // 0x420
		::RPG::Client::BezierCurve* bezierCurve; // 0x428
		::BansheeGz::BGSpline::Curve::BGCurve* bgCurve; // 0x430
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* curvePointList; // 0x438
		::System::Int32 posUVRandom; // 0x440
		::System::Int32 posUVReverse; // 0x444
		::System::Single debugPointSize; // 0x448
		::System::Byte _padding22[0x4];
		::UnityEngine::Texture2D* HNNDAHKCDCI; // 0x450
		::UnityEngine::SkinnedMeshRenderer* CKIACKMJEEM; // 0x458
		::UnityEngine::Camera* skinnedMeshEmitterCam; // 0x460
		::UnityEngine::Transform* skinnedMeshEmitterCamTransform; // 0x468
		::LegacyGPUParticleSystem_SkinMeshDataType skinMeshDataType; // 0x470
		::System::Byte _padding23[0x4];
		::UnityEngine::Material* JCMHLENNCGM; // 0x478
		::UnityEngine::RenderTexture* PBFMIDEKODA; // 0x480
		::UnityEngine::RenderTexture* LENADLJJNAG; // 0x488
		::UnityEngine::RenderTexture* MLMPCNCAHIJ; // 0x490
		::UnityEngine::RenderTexture* NLHPDFKMOLD; // 0x498
		::UnityEngine::Mesh* skinnedMeshEmitterConvertedMesh; // 0x4A0
		::System::Boolean playOnAwake; // 0x4A8
		::System::Byte _padding24[0x3];
		::System::Single param2; // 0x4AC
		::System::Single param3; // 0x4B0
		::System::Single param4; // 0x4B4
		::System::Single randomness; // 0x4B8
		::System::Boolean emitFromShell; // 0x4BC
		::System::Boolean emitFromBase; // 0x4BD
		::System::Byte _padding25[0x2];
		::UnityEngine::Transform* circularForceCenter; // 0x4C0
		::System::Boolean useInheritVelocity; // 0x4C8
		::System::Byte _padding26[0x3];
		::System::Single inheritVelocity; // 0x4CC
		::RefGPUParticleSystem_TextureSheetMode textureSheetMode; // 0x4D0
		::System::Boolean textureSheetRandomIndex; // 0x4D4
		::System::Byte _padding27[0x3];
		::System::Int32 rows; // 0x4D8
		::System::Int32 columns; // 0x4DC
		::Il2CppArray<::UnityEngine::Vector4>* planePositions; // 0x4E0
		::Il2CppArray<::UnityEngine::Vector4>* planeNormals; // 0x4E8
		::Il2CppArray<::UnityEngine::Transform*>* planes; // 0x4F0
		::Il2CppArray<::System::Single>* collisionDamping; // 0x4F8
		::UnityEngine::Vector3 forwardVector; // 0x500
		::UnityEngine::Vector3 AKIBNHPMLHF; // 0x50C
		::System::Boolean ForcesTab; // 0x518
		::System::Boolean timeOffset; // 0x519
		::System::Boolean NOMCHBCOGEB; // 0x51A
		::System::Byte _padding28[0x1];
		::System::Single param1; // 0x51C
		static ::UnityEngine::Shader** StaticGet_gpuPSkinMeshPosPoint()
		{
			return (::UnityEngine::Shader**)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x61D30);
		}

		static ::UnityEngine::Shader** StaticGet_gpuPMeta()
		{
			return (::UnityEngine::Shader**)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x61D38);
		}

		static ::UnityEngine::Shader** StaticGet_gpuPVelocity()
		{
			return (::UnityEngine::Shader**)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x61D40);
		}

		static ::UnityEngine::Shader** StaticGet_gpuPResetMetaBuffer()
		{
			return (::UnityEngine::Shader**)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x61D48);
		}

		static ::UnityEngine::Shader** StaticGet_gpuPDefault()
		{
			return (::UnityEngine::Shader**)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x61D50);
		}

		static ::UnityEngine::Shader** StaticGet_gpuPPosition()
		{
			return (::UnityEngine::Shader**)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x61D58);
		}

		static ::UnityEngine::Shader** StaticGet_gpuPSkinMeshPos()
		{
			return (::UnityEngine::Shader**)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x61D60);
		}

		static ::UnityEngine::Shader** StaticGet_gpuPSpawner()
		{
			return (::UnityEngine::Shader**)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x61D68);
		}

		static ::UnityEngine::Shader** StaticGet_gpuPResetPosBuffer()
		{
			return (::UnityEngine::Shader**)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x61D70);
		}

		static ::System::Collections::Generic::List_1<::LegacyGPUParticleSystem*>** StaticGet_instanceList()
		{
			return (::System::Collections::Generic::List_1<::LegacyGPUParticleSystem*>**)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x61D78);
		}

		static ::System::Int32* StaticGet_FBIHKOOCJJP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x14380);
		}

		static ::System::Int32* StaticGet_CFJCNLHGFJM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x14384);
		}

		static ::System::Int32* StaticGet_DOPMEHHOLLC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x14388);
		}

		static ::System::Int32* StaticGet_IBDGJOOBALL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x1438C);
		}

		static ::System::Int32* StaticGet_CBHCPCONCEM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x14390);
		}

		static ::System::Int32* StaticGet_ELJIDCEFKHG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x14394);
		}

		static ::System::Int32* StaticGet_EFBLGFOJJEM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x14398);
		}

		static ::System::Int32* StaticGet_NLENMAKOOCL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x1439C);
		}

		static ::System::Int32* StaticGet_NEEEEEOHMNK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143A0);
		}

		static ::System::Int32* StaticGet_JJKOBAOBGKM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143A4);
		}

		static ::System::Int32* StaticGet_DBLJMLMIIIL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143A8);
		}

		static ::System::Int32* StaticGet_AEIJAIMCBHK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143AC);
		}

		static ::System::Int32* StaticGet_FPGFIKCAMFK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143B0);
		}

		static ::System::Int32* StaticGet_IOCEDHMAPIG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143B4);
		}

		static ::System::Int32* StaticGet_EDILKGAGMNK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143B8);
		}

		static ::System::Int32* StaticGet_HAJJJLIAHED()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143BC);
		}

		static ::System::Int32* StaticGet_LMOCGOEAJFI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143C0);
		}

		static ::System::Int32* StaticGet_JKMGENMIKIN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143C4);
		}

		static ::System::Int32* StaticGet_HCGLJPAMNKE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143C8);
		}

		static ::System::Int32* StaticGet_FLPLGEMIMCJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143CC);
		}

		static ::System::Int32* StaticGet_JNMACHIHELO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143D0);
		}

		static ::System::Int32* StaticGet_NEHGAPHJMPA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143D4);
		}

		static ::System::Int32* StaticGet_CIOBMHEJFLC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143D8);
		}

		static ::System::Single* StaticGet_maxNormalRatio()
		{
			return (::System::Single*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143DC);
		}

		static ::System::Int32* StaticGet_DFOJCFCJFPL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143E0);
		}

		static ::System::Int32* StaticGet_BIGCONIFBJB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143E4);
		}

		static ::System::Int32* StaticGet_AMEHEHGGMFG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143E8);
		}

		static ::System::Int32* StaticGet_LKAKDPACGLA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143EC);
		}

		static ::System::Int32* StaticGet_LEGLDGNPIHD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143F0);
		}

		static ::System::Int32* StaticGet_NEHBPFLCLLJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143F4);
		}

		static ::System::Int32* StaticGet_BJGJKPDHECD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143F8);
		}

		static ::System::UInt32* StaticGet_instanceNum()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x143FC);
		}

		static ::System::Int32* StaticGet_FJLGLEIFKDC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x14400);
		}

		static ::System::Int32* StaticGet_OHMCGCGPPKN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x14404);
		}

		static ::System::Int32* StaticGet_DLLPGIFLGCI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x14408);
		}

		static ::System::Int32* StaticGet_DHILAHPKMAB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x1440C);
		}

		static ::System::Int32* StaticGet_AFDCOJHACNJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x14410);
		}

		static ::System::Int32* StaticGet_COGBJEFFFLG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x14414);
		}

		static ::System::Int32* StaticGet_NJPDPGLKDMI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x14418);
		}

		static ::System::Int32* StaticGet_AKGCOGEBHLH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x1441C);
		}

		static ::System::Int32* StaticGet_JHPIBNMJFCM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x14420);
		}

		static ::System::Int32* StaticGet_ILAIPCEJOCN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x14424);
		}

		static ::System::Int32* StaticGet_ONGBGAPKAFD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LegacyGPUParticleSystem")->GetStaticField(0x14428);
		}

		// static const ::System::String* JGCHDKLBMKM; // 0x0
		// static const ::System::Object LPOFCJJLIMN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_ONDISABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void MAGKGOJIBCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_MAGKGOJIBCJ_OFFSET))(this);
		}

		::System::Void DPCOAPJDDFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_DPCOAPJDDFO_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_LATEUPDATE_OFFSET))(this);
		}

		::System::Void ReSeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_RESEED_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_PLAY_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_PAUSE_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_STOP_OFFSET))(this);
		}

		::System::Void Restart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_RESTART_OFFSET))(this);
		}

		::System::Void GHJCIIIILEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_GHJCIIIILEG_OFFSET))(this);
		}

		::System::Void GAEFENIFALD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_GAEFENIFALD_OFFSET))(this);
		}

		::System::Void SetWaveInteraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETWAVEINTERACTION_OFFSET))(this);
		}

		::System::Void UpdateStartSpeedAndLifetime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATESTARTSPEEDANDLIFETIME_OFFSET))(this);
		}

		::System::Void GFLOPJEKLGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_GFLOPJEKLGC_OFFSET))(this);
		}

		::System::Void DAJNLLIKPHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_DAJNLLIKPHI_OFFSET))(this);
		}

		::System::Void SetRenderQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETRENDERQUEUE_OFFSET))(this);
		}

		::System::Void SetSimulationSpace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETSIMULATIONSPACE_OFFSET))(this);
		}

		::System::Void UpdateEmitterTexture(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEEMITTERTEXTURE_OFFSET))(this, a1);
		}

		::System::Void SetLightMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETLIGHTMODE_OFFSET))(this);
		}

		::System::Void PrepareParticleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_PREPAREPARTICLEDATA_OFFSET))(this);
		}

		::System::Void ClearParticleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_CLEARPARTICLEDATA_OFFSET))(this);
		}

		::System::Void EBJLLAIJEDI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_EBJLLAIJEDI_OFFSET))(this, a1);
		}

		::System::Void KPOPHEJEOEM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_KPOPHEJEOEM_OFFSET))(this, a1);
		}

		::System::Void BOJIHBJFAIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_BOJIHBJFAIP_OFFSET))(this, a1);
		}

		::System::Void HINMFJCPDHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_HINMFJCPDHI_OFFSET))(this);
		}

		::System::Void KCIGLFGLKHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_KCIGLFGLKHK_OFFSET))(this);
		}

		::System::Void DJHPHNEOALJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_DJHPHNEOALJ_OFFSET))(this);
		}

		::System::Void HBHAFLFLBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_HBHAFLFLBJH_OFFSET))(this);
		}

		::System::Void Emit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_EMIT_OFFSET))(this, a1);
		}

		::System::Void EmitNumParticles(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_EMITNUMPARTICLES_OFFSET))(this, a1);
		}

		::System::Void CBHNKPOCDED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_CBHNKPOCDED_OFFSET))(this);
		}

		::System::Void SetEmitterShapeKeyword()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETEMITTERSHAPEKEYWORD_OFFSET))(this);
		}

		::System::Void UpdateStartSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATESTARTSIZE_OFFSET))(this);
		}

		::System::Void UpdateCustomDataStartValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATECUSTOMDATASTARTVALUE_OFFSET))(this);
		}

		::System::Void SetParticleTypeKeyword(::LegacyGPUParticleSystem_ParticleType a1)
		{
			return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem_ParticleType))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETPARTICLETYPEKEYWORD_OFFSET))(this, a1);
		}

		::System::Void SetParticleTypeVector(::LegacyGPUParticleSystem_ParticleType a1)
		{
			return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem_ParticleType))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETPARTICLETYPEVECTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateEmitterMatrix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEEMITTERMATRIX_OFFSET))(this);
		}

		::System::Void UpdateGravity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEGRAVITY_OFFSET))(this);
		}

		::System::Void UpdateColorOverLifeTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATECOLOROVERLIFETIME_OFFSET))(this);
		}

		::System::Void SetTurbulenceKeyword()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETTURBULENCEKEYWORD_OFFSET))(this);
		}

		::System::Void UpdateTurbulenceTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATETURBULENCETEXTURE_OFFSET))(this);
		}

		::System::Void UpdateVectorField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEVECTORFIELD_OFFSET))(this);
		}

		::System::Void UpdateVectorFieldMatrix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEVECTORFIELDMATRIX_OFFSET))(this);
		}

		::System::Void UpdateAmplitude()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEAMPLITUDE_OFFSET))(this);
		}

		::System::Void UpdateFrequency()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEFREQUENCY_OFFSET))(this);
		}

		::System::Void UpdateWaveSim(::UnityEngine::Texture* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector4 a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEWAVESIM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void UpdateTightness()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATETIGHTNESS_OFFSET))(this);
		}

		::System::Void UpdateOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEOFFSET_OFFSET))(this);
		}

		::System::Void ForceRecreateParticles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_FORCERECREATEPARTICLES_OFFSET))(this);
		}

		::System::Void ResetSeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_RESETSEED_OFFSET))(this);
		}

		::System::Void AddBurst()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_ADDBURST_OFFSET))(this);
		}

		::System::Void RemoveLastBurst()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_REMOVELASTBURST_OFFSET))(this);
		}

		::System::Void SetRotationKeyword()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETROTATIONKEYWORD_OFFSET))(this);
		}

		::System::Void UpdateStartSizeAndRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATESTARTSIZEANDROTATION_OFFSET))(this);
		}

		::System::Void UpdateCustomData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATECUSTOMDATA_OFFSET))(this);
		}

		::System::Void UpdateSizeOverLifetime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATESIZEOVERLIFETIME_OFFSET))(this);
		}

		::System::Void SetSizeOverLifetimeKeyword(::RefGPUParticleSystem_CurveMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_CurveMode))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETSIZEOVERLIFETIMEKEYWORD_OFFSET))(this, a1);
		}

		::System::Void UpdateRotationOverLifetime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEROTATIONOVERLIFETIME_OFFSET))(this);
		}

		::System::Void SetRotationOverLifetimeKeyword(::RefGPUParticleSystem_CurveMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_CurveMode))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETROTATIONOVERLIFETIMEKEYWORD_OFFSET))(this, a1);
		}

		::System::Void UpdateColorIntensity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATECOLORINTENSITY_OFFSET))(this);
		}

		::System::Void UpdateAirResistance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEAIRRESISTANCE_OFFSET))(this);
		}

		::System::Void UpdateForceOverLifetime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEFORCEOVERLIFETIME_OFFSET))(this);
		}

		::System::Void SetLimitVelocity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETLIMITVELOCITY_OFFSET))(this);
		}

		::System::Void UpdateMaxVelocityOverLifetime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEMAXVELOCITYOVERLIFETIME_OFFSET))(this);
		}

		::System::Void SetCircularForce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETCIRCULARFORCE_OFFSET))(this);
		}

		::System::Void UpdateCircularForceOverLifetime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATECIRCULARFORCEOVERLIFETIME_OFFSET))(this);
		}

		::System::Void UpdateVectorfieldFile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEVECTORFIELDFILE_OFFSET))(this);
		}

		::System::Void RemoveAttractor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_REMOVEATTRACTOR_OFFSET))(this, a1);
		}

		::System::Void AddAttractor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_ADDATTRACTOR_OFFSET))(this);
		}

		::System::Void SetAttractorKeyword()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETATTRACTORKEYWORD_OFFSET))(this);
		}

		::System::Void RemoveLastAttractor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_REMOVELASTATTRACTOR_OFFSET))(this);
		}

		::System::Void UpdateMeshTargetTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEMESHTARGETTEXTURE_OFFSET))(this);
		}

		::System::Void UpdateMeshTargetParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEMESHTARGETPARAMETERS_OFFSET))(this);
		}

		::System::Void SetCollisionType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETCOLLISIONTYPE_OFFSET))(this);
		}

		::System::Void UpdateCollisionCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATECOLLISIONCAMERA_OFFSET))(this);
		}

		::System::Void UpdateDepthCollisionValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEDEPTHCOLLISIONVALUES_OFFSET))(this);
		}

		::System::Void UpdateParticleTypeKeywords()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEPARTICLETYPEKEYWORDS_OFFSET))(this);
		}

		::System::Void UpdatePositionOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEPOSITIONOFFSET_OFFSET))(this);
		}

		::System::Void SetZBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETZBUFFER_OFFSET))(this);
		}

		::System::Void SetBlendMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETBLENDMODE_OFFSET))(this);
		}

		::System::Void SetMainTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETMAINTEXTURE_OFFSET))(this);
		}

		::System::Void SetMainTextureKeyword(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETMAINTEXTUREKEYWORD_OFFSET))(this, a1);
		}

		::System::Void UpdateAspectRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEASPECTRATIO_OFFSET))(this);
		}

		::System::Void SetTextureSheetKeyword(::RefGPUParticleSystem_TextureSheetMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_TextureSheetMode))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETTEXTURESHEETKEYWORD_OFFSET))(this, a1);
		}

		::System::Void SetRandomIndexKeyword(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETRANDOMINDEXKEYWORD_OFFSET))(this, a1);
		}

		::System::Void UpdateTextureSheetDimensions(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATETEXTURESHEETDIMENSIONS_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateMotionVectorTexture(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEMOTIONVECTORTEXTURE_OFFSET))(this, a1);
		}

		::System::Void UpdateMotionVectorStrength()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEMOTIONVECTORSTRENGTH_OFFSET))(this);
		}

		::System::Void SetMetallicSmoothnessValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETMETALLICSMOOTHNESSVALUE_OFFSET))(this);
		}

		::System::Void SetMetallicSmoothnessMapTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETMETALLICSMOOTHNESSMAPTEXTURE_OFFSET))(this);
		}

		::System::Void SetMetallicSmoothnessKeyword(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETMETALLICSMOOTHNESSKEYWORD_OFFSET))(this, a1);
		}

		::System::Void SetRefractionMapTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETREFRACTIONMAPTEXTURE_OFFSET))(this);
		}

		::System::Void UpdateIndexOfRefraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEINDEXOFREFRACTION_OFFSET))(this);
		}

		::System::Void SetNormalMapTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETNORMALMAPTEXTURE_OFFSET))(this);
		}

		::System::Void SetNormalKeyword(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETNORMALKEYWORD_OFFSET))(this, a1);
		}

		::System::Void SetEmissionMapTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETEMISSIONMAPTEXTURE_OFFSET))(this);
		}

		::System::Void SetEmissionKeyword(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETEMISSIONKEYWORD_OFFSET))(this, a1);
		}

		::System::Void SetMeshTargetKeyword()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETMESHTARGETKEYWORD_OFFSET))(this);
		}

		::System::Void UpdateStretchMultiplier()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATESTRETCHMULTIPLIER_OFFSET))(this);
		}

		::System::Void UpdateTrailValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATETRAILVALUES_OFFSET))(this);
		}

		::System::Void SetEmitFromShell(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETEMITFROMSHELL_OFFSET))(this, a1);
		}

		::System::Void SetEmitFromBase(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETEMITFROMBASE_OFFSET))(this, a1);
		}

		::System::Void PrepareSkinnedMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_PREPARESKINNEDMESH_OFFSET))(this);
		}

		::System::Void SetupSkinnedMeshEmitterCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETUPSKINNEDMESHEMITTERCAMERA_OFFSET))(this);
		}

		::System::Void CHEBHEBLBJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_CHEBHEBLBJL_OFFSET))(this);
		}

		::System::Void UpdateskinnedMeshEmitterPositionTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATESKINNEDMESHEMITTERPOSITIONTEXTURE_OFFSET))(this);
		}

		::System::Void AEAGMHLEDCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_AEAGMHLEDCI_OFFSET))(this);
		}

		::System::Void EPJCPCAMGFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_EPJCPCAMGFH_OFFSET))(this);
		}

		::System::Void UpdateskinnedMeshEmitterTextures()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATESKINNEDMESHEMITTERTEXTURES_OFFSET))(this);
		}

		::System::Void LPKJADHHIDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_LPKJADHHIDD_OFFSET))(this);
		}

		::System::Void SetLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETLAYER_OFFSET))(this);
		}

		::UnityEngine::Bounds GetWSBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_GETWSBOUNDS_OFFSET))(this);
		}

		::System::Void UpdateEmitter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEEMITTER_OFFSET))(this);
		}

		::System::Void RenderSkinnedMeshEmitterPositions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_RENDERSKINNEDMESHEMITTERPOSITIONS_OFFSET))(this);
		}

		::System::Void FHAGOKJEMPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_FHAGOKJEMPC_OFFSET))(this);
		}

		::UnityEngine::Vector3 CalculateRotateExtents(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_CALCULATEROTATEEXTENTS_OFFSET))(this, a1);
		}

		::System::Void UpdateWorldSpaceBoundingBox()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_UPDATEWORLDSPACEBOUNDINGBOX_OFFSET))(this);
		}

		::System::Void BakeBezierCurve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_BAKEBEZIERCURVE_OFFSET))(this);
		}

		::System::Void SetCurvePointData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_SETCURVEPOINTDATA_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Boolean MFEOIBCNMNC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGACYGPUPARTICLESYSTEM_MFEOIBCNMNC_OFFSET))(this);
		}

	};
