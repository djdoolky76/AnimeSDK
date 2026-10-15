#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LegacyGPUParticleSystem_EmitterShape.h"
#include "unitysdk/LegacyGPUParticleSystem_ParticleType.h"
#include "unitysdk/RefGPUParticleSystem_CollisionType.h"
#include "unitysdk/RefGPUParticleSystem_EmitterShape.h"
#include "unitysdk/RefGPUParticleSystem_GPUSimulationSpace.h"
#include "unitysdk/RefGPUParticleSystem_ParticleType.h"
#include "unitysdk/RefGPUParticleSystem_TurbulenceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
class Attractor;
class FloatCurveBundle;
class SingleFloatCurveBundle;
class Vector3CurveBundle;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define REFGPUPARTICLESYSTEMBUFFER_AABPCEPPPEC_OFFSET UNITYSDK_OFFSET(0x1EBA78E0)
#define REFGPUPARTICLESYSTEMBUFFER_AFOEHLMAELF_OFFSET UNITYSDK_OFFSET(0x1EBA99E0)
#define REFGPUPARTICLESYSTEMBUFFER_AIFAEFJOFPM_OFFSET UNITYSDK_OFFSET(0x1EBA9950)
#define REFGPUPARTICLESYSTEMBUFFER_AKEAELFOKGC_OFFSET UNITYSDK_OFFSET(0x1EBAC480)
#define REFGPUPARTICLESYSTEMBUFFER_ALMDEIOGJOI_OFFSET UNITYSDK_OFFSET(0x1EBA8F10)
#define REFGPUPARTICLESYSTEMBUFFER_BDGOFCLFFIJ_OFFSET UNITYSDK_OFFSET(0x1EBA7AE0)
#define REFGPUPARTICLESYSTEMBUFFER_BEEHALCIAOO_OFFSET UNITYSDK_OFFSET(0x1EBA9B50)
#define REFGPUPARTICLESYSTEMBUFFER_BHBJJKKEKKC_OFFSET UNITYSDK_OFFSET(0x1EBA9D30)
#define REFGPUPARTICLESYSTEMBUFFER_BJIEOPKGOJH_OFFSET UNITYSDK_OFFSET(0x1EBAD130)
#define REFGPUPARTICLESYSTEMBUFFER_CCLIIPPDKDP_OFFSET UNITYSDK_OFFSET(0x1EBA4650)
#define REFGPUPARTICLESYSTEMBUFFER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBBD910)
#define REFGPUPARTICLESYSTEMBUFFER_CFNJAHFOLKH_OFFSET UNITYSDK_OFFSET(0x1EBB9A80)
#define REFGPUPARTICLESYSTEMBUFFER_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBA53A0)
#define REFGPUPARTICLESYSTEMBUFFER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB1F20)
#define REFGPUPARTICLESYSTEMBUFFER_DDEPOCFHAHF_OFFSET UNITYSDK_OFFSET(0x1EBB7BA0)
#define REFGPUPARTICLESYSTEMBUFFER_DFDAOCIAADN_OFFSET UNITYSDK_OFFSET(0x1EBAD260)
#define REFGPUPARTICLESYSTEMBUFFER_DFEIKCJKLBK_OFFSET UNITYSDK_OFFSET(0x1EBAA950)
#define REFGPUPARTICLESYSTEMBUFFER_DFPIBEJNHMP_1_OFFSET UNITYSDK_OFFSET(0x1EBAAD00)
#define REFGPUPARTICLESYSTEMBUFFER_DFPIBEJNHMP_OFFSET UNITYSDK_OFFSET(0x1EBB5760)
#define REFGPUPARTICLESYSTEMBUFFER_DHINPALLLNB_OFFSET UNITYSDK_OFFSET(0x1EBA5280)
#define REFGPUPARTICLESYSTEMBUFFER_DLAILGNMFGI_1_OFFSET UNITYSDK_OFFSET(0x1EBBCDE0)
#define REFGPUPARTICLESYSTEMBUFFER_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x1EBBCD20)
#define REFGPUPARTICLESYSTEMBUFFER_DNCEOCKCOHA_OFFSET UNITYSDK_OFFSET(0x1EBA8850)
#define REFGPUPARTICLESYSTEMBUFFER_DOHBOIDLHLO_OFFSET UNITYSDK_OFFSET(0x1EBBD8E0)
#define REFGPUPARTICLESYSTEMBUFFER_DPDBMNLJFCD_OFFSET UNITYSDK_OFFSET(0x1EBA8160)
#define REFGPUPARTICLESYSTEMBUFFER_EEDCIAEEDDA_OFFSET UNITYSDK_OFFSET(0x1EBA68F0)
#define REFGPUPARTICLESYSTEMBUFFER_EEOCDCMLOPB_OFFSET UNITYSDK_OFFSET(0x1EBA7FB0)
#define REFGPUPARTICLESYSTEMBUFFER_EPAHOKOPGMI_OFFSET UNITYSDK_OFFSET(0x1EBBD7B0)
#define REFGPUPARTICLESYSTEMBUFFER_FHGOINBBFNF_1_OFFSET UNITYSDK_OFFSET(0x1EBBA5C0)
#define REFGPUPARTICLESYSTEMBUFFER_FHGOINBBFNF_OFFSET UNITYSDK_OFFSET(0x1EBA6F50)
#define REFGPUPARTICLESYSTEMBUFFER_FJOGMHHGIKE_OFFSET UNITYSDK_OFFSET(0x1EBBD3E0)
#define REFGPUPARTICLESYSTEMBUFFER_FLALLLOJIMH_1_OFFSET UNITYSDK_OFFSET(0x1EBBD470)
#define REFGPUPARTICLESYSTEMBUFFER_FLALLLOJIMH_OFFSET UNITYSDK_OFFSET(0x1EBBCE90)
#define REFGPUPARTICLESYSTEMBUFFER_GJMPHLOMKPH_OFFSET UNITYSDK_OFFSET(0x1EBA8600)
#define REFGPUPARTICLESYSTEMBUFFER_GNHHCGLCBBO_OFFSET UNITYSDK_OFFSET(0x1EBA1940)
#define REFGPUPARTICLESYSTEMBUFFER_GPHAKIELDPM_OFFSET UNITYSDK_OFFSET(0x1EBA8E60)
#define REFGPUPARTICLESYSTEMBUFFER_HBOCKFNMJPM_1_OFFSET UNITYSDK_OFFSET(0x1EBBD550)
#define REFGPUPARTICLESYSTEMBUFFER_HBOCKFNMJPM_OFFSET UNITYSDK_OFFSET(0x1EBBD0A0)
#define REFGPUPARTICLESYSTEMBUFFER_HENAKHMGBCA_OFFSET UNITYSDK_OFFSET(0x1EBAA0B0)
#define REFGPUPARTICLESYSTEMBUFFER_HFMBFGHODCF_OFFSET UNITYSDK_OFFSET(0x1EBBD8B0)
#define REFGPUPARTICLESYSTEMBUFFER_HGFIFNGJGCK_OFFSET UNITYSDK_OFFSET(0x1EBA1400)
#define REFGPUPARTICLESYSTEMBUFFER_HIHNFGOFGOG_OFFSET UNITYSDK_OFFSET(0x1EBA5310)
#define REFGPUPARTICLESYSTEMBUFFER_HLPPJPKAKIP_OFFSET UNITYSDK_OFFSET(0x1EBA7EA0)
#define REFGPUPARTICLESYSTEMBUFFER_IMFOKMFMIML_OFFSET UNITYSDK_OFFSET(0x1EBAA7D0)
#define REFGPUPARTICLESYSTEMBUFFER_JEAHACPOKDK_OFFSET UNITYSDK_OFFSET(0x1EBA9020)
#define REFGPUPARTICLESYSTEMBUFFER_JEEJIJLGDBG_OFFSET UNITYSDK_OFFSET(0x1EBAD600)
#define REFGPUPARTICLESYSTEMBUFFER_JHKPHJHNBKJ_1_OFFSET UNITYSDK_OFFSET(0x1EBBD680)
#define REFGPUPARTICLESYSTEMBUFFER_JHKPHJHNBKJ_OFFSET UNITYSDK_OFFSET(0x1EBBD240)
#define REFGPUPARTICLESYSTEMBUFFER_JJIHNBGBFEM_OFFSET UNITYSDK_OFFSET(0x1EBA7F60)
#define REFGPUPARTICLESYSTEMBUFFER_JLAIGAAMPNC_OFFSET UNITYSDK_OFFSET(0x1EBAA700)
#define REFGPUPARTICLESYSTEMBUFFER_JMPGJLEDILA_OFFSET UNITYSDK_OFFSET(0x1EBA77D0)
#define REFGPUPARTICLESYSTEMBUFFER_KBMCDCHHIEJ_OFFSET UNITYSDK_OFFSET(0x1EBAC100)
#define REFGPUPARTICLESYSTEMBUFFER_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1EBA0BC0)
#define REFGPUPARTICLESYSTEMBUFFER_KPJOLADAODA_OFFSET UNITYSDK_OFFSET(0x1EBA7970)
#define REFGPUPARTICLESYSTEMBUFFER_LBEGAHHDKBE_OFFSET UNITYSDK_OFFSET(0x1EBA6C60)
#define REFGPUPARTICLESYSTEMBUFFER_LBKIONGDFIK_OFFSET UNITYSDK_OFFSET(0x1EBA7B70)
#define REFGPUPARTICLESYSTEMBUFFER_LBNPGENFGAK_OFFSET UNITYSDK_OFFSET(0x1EBAAB50)
#define REFGPUPARTICLESYSTEMBUFFER_LDMOBCODOLB_OFFSET UNITYSDK_OFFSET(0x1EBA5020)
#define REFGPUPARTICLESYSTEMBUFFER_LINMLPBLPLD_OFFSET UNITYSDK_OFFSET(0x1EBB7560)
#define REFGPUPARTICLESYSTEMBUFFER_LJOOKEFIBEA_OFFSET UNITYSDK_OFFSET(0x1EBA51F0)
#define REFGPUPARTICLESYSTEMBUFFER_LJPNDIPPFGM_OFFSET UNITYSDK_OFFSET(0x1EBBCF90)
#define REFGPUPARTICLESYSTEMBUFFER_MBBDNEJCCED_OFFSET UNITYSDK_OFFSET(0x1EBB9B30)
#define REFGPUPARTICLESYSTEMBUFFER_MBJDBKGBMGP_OFFSET UNITYSDK_OFFSET(0x1EBAC590)
#define REFGPUPARTICLESYSTEMBUFFER_MDJONMOPCFH_OFFSET UNITYSDK_OFFSET(0x1EBA7A50)
#define REFGPUPARTICLESYSTEMBUFFER_MJNDBPGMKIM_OFFSET UNITYSDK_OFFSET(0x1EBA44D0)
#define REFGPUPARTICLESYSTEMBUFFER_MMGIKAGEPJO_OFFSET UNITYSDK_OFFSET(0x1EBAC330)
#define REFGPUPARTICLESYSTEMBUFFER_NJKFIDAGDBM_OFFSET UNITYSDK_OFFSET(0x1EBA69D0)
#define REFGPUPARTICLESYSTEMBUFFER_NLPAHGPDABB_OFFSET UNITYSDK_OFFSET(0x1EBA45A0)
#define REFGPUPARTICLESYSTEMBUFFER_NPNFPAAPJFJ_OFFSET UNITYSDK_OFFSET(0x1EBA8690)
#define REFGPUPARTICLESYSTEMBUFFER_OFCIOFDKHBI_OFFSET UNITYSDK_OFFSET(0x1EBA9BD0)
#define REFGPUPARTICLESYSTEMBUFFER_OHIOLEKJMPG_OFFSET UNITYSDK_OFFSET(0x1EBA9CB0)
#define REFGPUPARTICLESYSTEMBUFFER_OMHGPDLADEA_OFFSET UNITYSDK_OFFSET(0x1EBA6E10)
#define REFGPUPARTICLESYSTEMBUFFER_ONCIPPOHNNF_OFFSET UNITYSDK_OFFSET(0x1EBA50E0)
#define REFGPUPARTICLESYSTEMBUFFER_OPMONCLDAKI_OFFSET UNITYSDK_OFFSET(0x1EBA8DB0)
#define REFGPUPARTICLESYSTEMBUFFER_PAOKEIBMGGD_OFFSET UNITYSDK_OFFSET(0x1EBB6280)
#define REFGPUPARTICLESYSTEMBUFFER_PDHEFNPNIDI_OFFSET UNITYSDK_OFFSET(0x1EBA1B60)
#define REFGPUPARTICLESYSTEMBUFFER_PHLBAODCLPI_OFFSET UNITYSDK_OFFSET(0x1EBA7E50)

inline static constexpr unsigned int RefGPUParticleSystemBuffer_TypeDefinitionIndex = 44012;

	class RefGPUParticleSystemBuffer : public ::System::Object
	{
	public:
		::UnityEngine::RenderTexture* newParticleBuffer; // 0x10
		::UnityEngine::RenderTexture* metaBuffer_11; // 0x18
		::UnityEngine::RenderTexture* metaBuffer_21; // 0x20
		::UnityEngine::RenderTexture* metaBuffer_31; // 0x28
		::UnityEngine::RenderTexture* metaBuffer_41; // 0x30
		::UnityEngine::RenderTexture* positionBuffer_1; // 0x38
		::UnityEngine::RenderTexture* velocityBuffer_1; // 0x40
		::UnityEngine::RenderTexture* metaBuffer_12; // 0x48
		::UnityEngine::RenderTexture* metaBuffer_22; // 0x50
		::UnityEngine::RenderTexture* metaBuffer_32; // 0x58
		::UnityEngine::RenderTexture* metaBuffer_42; // 0x60
		::UnityEngine::RenderTexture* positionBuffer_2; // 0x68
		::UnityEngine::RenderTexture* velocityBuffer_2; // 0x70
		::UnityEngine::Texture2D* randomBuffer; // 0x78
		::UnityEngine::Vector4 vector; // 0x80
		::Il2CppArray<::UnityEngine::Vector4>* vec; // 0x90
		::Il2CppArray<::System::Single>* stren; // 0x98
		::UnityEngine::Material* calculateSpawn; // 0xA0
		::UnityEngine::Material* calculateMeta; // 0xA8
		::UnityEngine::Material* calculateVelocity; // 0xB0
		::UnityEngine::Material* calculatePosition; // 0xB8
		::UnityEngine::Material* resetMeta; // 0xC0
		::UnityEngine::Material* resetPosition; // 0xC8
		static ::System::Int32* StaticGet__AirResistanceID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146A0);
		}

		static ::System::Int32* StaticGet__CustomData2XYID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146A4);
		}

		static ::System::Int32* StaticGet__VelocityID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146A8);
		}

		static ::System::Int32* StaticGet__Meta4ID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146AC);
		}

		static ::System::Int32* StaticGet__MapWidthID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146B0);
		}

		static ::System::Int32* StaticGet__Meta2ID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146B4);
		}

		static ::System::Int32* StaticGet__CircularForceCenterID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146B8);
		}

		static ::System::Int32* StaticGet__FrequencyID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146BC);
		}

		static ::System::Int32* StaticGet__EndIDID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146C0);
		}

		static ::System::Int32* StaticGet__StartSizeRotID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146C4);
		}

		static ::System::Int32* StaticGet__CustomData1XYID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146C8);
		}

		static ::System::Int32* StaticGet__CircularForceOverLifetimeID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146CC);
		}

		static ::System::Int32* StaticGet__ForceOverLifetimeID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146D0);
		}

		static ::System::Int32* StaticGet__MaxVelocityID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146D4);
		}

		static ::System::Int32* StaticGet__PlanePositionID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146D8);
		}

		static ::System::Int32* StaticGet__EmitterVelocityID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146DC);
		}

		static ::System::Int32* StaticGet__TurbulenceID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146E0);
		}

		static ::System::Int32* StaticGet__EmitterPositionID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146E4);
		}

		static ::System::Int32* StaticGet__StartSize23ID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146E8);
		}

		static ::System::Int32* StaticGet__TightnessID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146EC);
		}

		static ::System::Int32* StaticGet__OnTargetID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146F0);
		}

		static ::System::Int32* StaticGet__FollowSpeedID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146F4);
		}

		static ::System::Int32* StaticGet__PositionID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146F8);
		}

		static ::System::Int32* StaticGet__Meta3ID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x146FC);
		}

		static ::System::Int32* StaticGet__MapHeightID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14700);
		}

		static ::System::Int32* StaticGet__PosUVRandomID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14704);
		}

		static ::System::Int32* StaticGet__RandomValuesID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14708);
		}

		static ::System::Int32* StaticGet__FollowSegmentID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x1470C);
		}

		static ::System::Int32* StaticGet__StrengthID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14710);
		}

		static ::System::Int32* StaticGet__MetaID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14714);
		}

		static ::System::Int32* StaticGet__NewParticleID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14718);
		}

		static ::System::Int32* StaticGet__CustomData1ZWID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x1471C);
		}

		static ::System::Int32* StaticGet__CurvePointPositionsID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14720);
		}

		static ::System::Int32* StaticGet__TurbulenceMatrixID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14724);
		}

		static ::System::Int32* StaticGet__PosUVReverseID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14728);
		}

		static ::System::Int32* StaticGet__MeshEmitterTangentsID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x1472C);
		}

		static ::System::Int32* StaticGet__CustomData2ZWID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14730);
		}

		static ::System::Int32* StaticGet__CustomDeltaTimeID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14734);
		}

		static ::System::Int32* StaticGet__PlaneNormalID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14738);
		}

		static ::System::Int32* StaticGet__StartLifeTimeSpeedID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x1473C);
		}

		static ::System::Int32* StaticGet__MeshEmitterNormalsID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14740);
		}

		static ::System::Int32* StaticGet__MeshTargetID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14744);
		}

		static ::System::Int32* StaticGet__EmitterParamID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14748);
		}

		static ::System::Int32* StaticGet__MeshEmitterPositionsID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x1474C);
		}

		static ::System::Int32* StaticGet__GravityID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14750);
		}

		static ::System::Int32* StaticGet__MeshTargetStrengthID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14754);
		}

		static ::System::Int32* StaticGet__AttractorID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14758);
		}

		static ::System::Int32* StaticGet__EmitterMatrixID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x1475C);
		}

		static ::System::Int32* StaticGet__EffectLengthID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14760);
		}

		static ::System::Int32* StaticGet__AmplitudeID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14764);
		}

		static ::System::Int32* StaticGet__TurbulenceDDDID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14768);
		}

		static ::System::Int32* StaticGet__OffsetID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x1476C);
		}

		static ::System::Int32* StaticGet__TargetMatrixID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14770);
		}

		static ::System::Int32* StaticGet__StartIDID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14774);
		}

		static ::System::Int32* StaticGet__CustomTimeID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "RefGPUParticleSystemBuffer")->GetStaticField(0x14778);
		}

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::RenderTextureFormat a3, ::RefGPUParticleSystem_ParticleType a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::RefGPUParticleSystem_ParticleType, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::RenderTextureFormat a3, ::LegacyGPUParticleSystem_ParticleType a4, ::System::Int32 a5, ::UnityEngine::Vector4 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureFormat, ::LegacyGPUParticleSystem_ParticleType, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_CCTOR_OFFSET))();
		}

		::System::Void DPDBMNLJFCD(::UnityEngine::Texture* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector4 a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_DPDBMNLJFCD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void DNCEOCKCOHA(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_DNCEOCKCOHA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DLAILGNMFGI(::System::Int32 a1, ::System::Int32 a2, ::RefGPUParticleSystem_ParticleType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RefGPUParticleSystem_ParticleType))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_DLAILGNMFGI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DLAILGNMFGI_1(::System::Int32 a1, ::System::Int32 a2, ::LegacyGPUParticleSystem_ParticleType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::LegacyGPUParticleSystem_ParticleType))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_DLAILGNMFGI_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FLALLLOJIMH(::System::Int32 a1, ::System::Int32 a2, ::RefGPUParticleSystem_ParticleType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RefGPUParticleSystem_ParticleType))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_FLALLLOJIMH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FLALLLOJIMH_1(::System::Int32 a1, ::System::Int32 a2, ::LegacyGPUParticleSystem_ParticleType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::LegacyGPUParticleSystem_ParticleType))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_FLALLLOJIMH_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LJPNDIPPFGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_LJPNDIPPFGM_OFFSET))(this);
		}

		::System::Void HBOCKFNMJPM(::RefGPUParticleSystem_ParticleType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_ParticleType, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_HBOCKFNMJPM_OFFSET))(this, a1, a2);
		}

		::System::Void HBOCKFNMJPM_1(::LegacyGPUParticleSystem_ParticleType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem_ParticleType, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_HBOCKFNMJPM_1_OFFSET))(this, a1, a2);
		}

		::System::Void JHKPHJHNBKJ(::RefGPUParticleSystem_ParticleType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_ParticleType, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_JHKPHJHNBKJ_OFFSET))(this, a1, a2);
		}

		::System::Void JHKPHJHNBKJ_1(::LegacyGPUParticleSystem_ParticleType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem_ParticleType, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_JHKPHJHNBKJ_1_OFFSET))(this, a1, a2);
		}

		::System::Void FJOGMHHGIKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_FJOGMHHGIKE_OFFSET))(this);
		}

		::System::Void DFPIBEJNHMP(::RefGPUParticleSystem_ParticleType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_ParticleType, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_DFPIBEJNHMP_OFFSET))(this, a1, a2);
		}

		::System::Void DFPIBEJNHMP_1(::LegacyGPUParticleSystem_ParticleType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem_ParticleType, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_DFPIBEJNHMP_1_OFFSET))(this, a1, a2);
		}

		::System::Void LBNPGENFGAK(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_LBNPGENFGAK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PAOKEIBMGGD(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Matrix4x4 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector4 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_PAOKEIBMGGD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void LBEGAHHDKBE(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_LBEGAHHDKBE_OFFSET))(this, a1, a2);
		}

		::System::Void BJIEOPKGOJH(::UnityEngine::Vector3 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_BJIEOPKGOJH_OFFSET))(this, a1, a2);
		}

		::System::Void JMPGJLEDILA(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_JMPGJLEDILA_OFFSET))(this, a1);
		}

		::System::Void CCLIIPPDKDP(::FloatCurveBundle* a1, ::FloatCurveBundle* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::FloatCurveBundle*, ::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_CCLIIPPDKDP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OPMONCLDAKI(::FloatCurveBundle* a1, ::FloatCurveBundle* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::FloatCurveBundle*, ::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_OPMONCLDAKI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GPHAKIELDPM(::FloatCurveBundle* a1, ::FloatCurveBundle* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::FloatCurveBundle*, ::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_GPHAKIELDPM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ALMDEIOGJOI(::FloatCurveBundle* a1, ::FloatCurveBundle* a2, ::FloatCurveBundle* a3, ::FloatCurveBundle* a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::FloatCurveBundle*, ::FloatCurveBundle*, ::FloatCurveBundle*, ::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_ALMDEIOGJOI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JEAHACPOKDK(::FloatCurveBundle* a1, ::FloatCurveBundle* a2, ::FloatCurveBundle* a3, ::FloatCurveBundle* a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::FloatCurveBundle*, ::FloatCurveBundle*, ::FloatCurveBundle*, ::FloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_JEAHACPOKDK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OMHGPDLADEA(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_OMHGPDLADEA_OFFSET))(this, a1, a2);
		}

		::System::Void HGFIFNGJGCK(::UnityEngine::Vector4 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_HGFIFNGJGCK_OFFSET))(this, a1, a2);
		}

		::System::Void NJKFIDAGDBM(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_NJKFIDAGDBM_OFFSET))(this, a1, a2);
		}

		::System::Void GNHHCGLCBBO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_GNHHCGLCBBO_OFFSET))(this, a1);
		}

		::System::Void PDHEFNPNIDI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_PDHEFNPNIDI_OFFSET))(this, a1);
		}

		::System::Void MMGIKAGEPJO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_MMGIKAGEPJO_OFFSET))(this, a1);
		}

		::System::Void AABPCEPPPEC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_AABPCEPPPEC_OFFSET))(this, a1);
		}

		::System::Void AIFAEFJOFPM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_AIFAEFJOFPM_OFFSET))(this, a1);
		}

		::System::Void OFCIOFDKHBI(::SingleFloatCurveBundle* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::SingleFloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_OFCIOFDKHBI_OFFSET))(this, a1, a2);
		}

		::System::Void BHBJJKKEKKC(::Vector3CurveBundle* a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Vector3CurveBundle*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_BHBJJKKEKKC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CFNJAHFOLKH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_CFNJAHFOLKH_OFFSET))(this, a1);
		}

		::System::Void DFDAOCIAADN(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_DFDAOCIAADN_OFFSET))(this, a1);
		}

		::System::Void MDJONMOPCFH(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_MDJONMOPCFH_OFFSET))(this, a1);
		}

		::System::Void BDGOFCLFFIJ(::UnityEngine::Texture3D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture3D*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_BDGOFCLFFIJ_OFFSET))(this, a1);
		}

		::System::Void PHLBAODCLPI(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_PHLBAODCLPI_OFFSET))(this, a1, a2);
		}

		::System::Void JJIHNBGBFEM(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_JJIHNBGBFEM_OFFSET))(this, a1, a2);
		}

		::System::Void HLPPJPKAKIP(::Vector3CurveBundle* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Vector3CurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_HLPPJPKAKIP_OFFSET))(this, a1, a2);
		}

		::System::Void EEOCDCMLOPB(::Vector3CurveBundle* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Vector3CurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_EEOCDCMLOPB_OFFSET))(this, a1, a2);
		}

		::System::Void GJMPHLOMKPH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_GJMPHLOMKPH_OFFSET))(this, a1);
		}

		::System::Void NPNFPAAPJFJ(::Vector3CurveBundle* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Vector3CurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_NPNFPAAPJFJ_OFFSET))(this, a1, a2);
		}

		::System::Void LBKIONGDFIK(::UnityEngine::Transform* a1, ::Vector3CurveBundle* a2, ::Vector3CurveBundle* a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Vector3CurveBundle*, ::Vector3CurveBundle*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_LBKIONGDFIK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MBBDNEJCCED(::System::Collections::Generic::List_1<::Attractor*>* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Attractor*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_MBBDNEJCCED_OFFSET))(this, a1, a2);
		}

		::System::Void DDEPOCFHAHF(::Il2CppArray<::UnityEngine::Vector4>* a1, ::Il2CppArray<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_DDEPOCFHAHF_OFFSET))(this, a1, a2);
		}

		::System::Void AFOEHLMAELF(::Vector3CurveBundle* a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Vector3CurveBundle*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_AFOEHLMAELF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EPAHOKOPGMI(::UnityEngine::RenderTexture* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::RenderTexture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_EPAHOKOPGMI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LJOOKEFIBEA(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_LJOOKEFIBEA_OFFSET))(this, a1);
		}

		::System::Void DHINPALLLNB(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_DHINPALLLNB_OFFSET))(this, a1);
		}

		::System::Void HIHNFGOFGOG(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_HIHNFGOFGOG_OFFSET))(this, a1);
		}

		::System::Void ONCIPPOHNNF(::UnityEngine::Texture2D* a1, ::UnityEngine::Texture2D* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_ONCIPPOHNNF_OFFSET))(this, a1, a2);
		}

		::System::Void JEEJIJLGDBG(::UnityEngine::Texture2D* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_JEEJIJLGDBG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MJNDBPGMKIM(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_MJNDBPGMKIM_OFFSET))(this, a1, a2);
		}

		::System::Void JLAIGAAMPNC(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_JLAIGAAMPNC_OFFSET))(this, a1);
		}

		::System::Void LINMLPBLPLD(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_LINMLPBLPLD_OFFSET))(this, a1);
		}

		::System::Void IMFOKMFMIML(::SingleFloatCurveBundle* a1, ::SingleFloatCurveBundle* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::SingleFloatCurveBundle*, ::SingleFloatCurveBundle*, ::System::Single))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_IMFOKMFMIML_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::String*>* HFMBFGHODCF()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_HFMBFGHODCF_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* DOHBOIDLHLO()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_DOHBOIDLHLO_OFFSET))(this);
		}

		::System::Void DFEIKCJKLBK(::RefGPUParticleSystem_CollisionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_CollisionType))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_DFEIKCJKLBK_OFFSET))(this, a1);
		}

		::System::Void FHGOINBBFNF(::LegacyGPUParticleSystem_EmitterShape a1)
		{
			return ((::System::Void(*)(::PVOID, ::LegacyGPUParticleSystem_EmitterShape))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_FHGOINBBFNF_OFFSET))(this, a1);
		}

		::System::Void FHGOINBBFNF_1(::RefGPUParticleSystem_EmitterShape a1)
		{
			return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_EmitterShape))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_FHGOINBBFNF_1_OFFSET))(this, a1);
		}

		::System::Void LDMOBCODOLB(::RefGPUParticleSystem_GPUSimulationSpace a1)
		{
			return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_GPUSimulationSpace))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_LDMOBCODOLB_OFFSET))(this, a1);
		}

		::System::Void HENAKHMGBCA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_HENAKHMGBCA_OFFSET))(this, a1);
		}

		::System::Void KBMCDCHHIEJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_KBMCDCHHIEJ_OFFSET))(this, a1);
		}

		::System::Void BEEHALCIAOO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_BEEHALCIAOO_OFFSET))(this, a1);
		}

		::System::Void KPJOLADAODA(::RefGPUParticleSystem_TurbulenceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RefGPUParticleSystem_TurbulenceType))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_KPJOLADAODA_OFFSET))(this, a1);
		}

		::System::Void AKEAELFOKGC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_AKEAELFOKGC_OFFSET))(this, a1);
		}

		::System::Void MBJDBKGBMGP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_MBJDBKGBMGP_OFFSET))(this, a1);
		}

		::System::Void NLPAHGPDABB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_NLPAHGPDABB_OFFSET))(this, a1);
		}

		::System::Void OHIOLEKJMPG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_OHIOLEKJMPG_OFFSET))(this, a1);
		}

		::System::Void EEDCIAEEDDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + REFGPUPARTICLESYSTEMBUFFER_EEDCIAEEDDA_OFFSET))(this);
		}

	};
