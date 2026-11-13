#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHHAOKBNDII.h"
#include "unitysdk/RPG/GameCore/EMovementComputePenetrationResultType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FEIBCGELFAJ;
class KMEOMKNPNCC;
namespace RPG::Client { class MonoCharacterHeadPoint; }
namespace RPG::Client { template <typename T> class ChunkedStructList_1; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define KMEOMKNPNCC_ADCOGBEHGPD_OFFSET UNITYSDK_OFFSET(0x17BA0B50)
#define KMEOMKNPNCC_AGKMDAJFOOH_OFFSET UNITYSDK_OFFSET(0x17BA8830)
#define KMEOMKNPNCC_AIBMGHMKOOL_OFFSET UNITYSDK_OFFSET(0x17BA75F0)
#define KMEOMKNPNCC_APFKOFDGKDO_OFFSET UNITYSDK_OFFSET(0x17B9EF90)
#define KMEOMKNPNCC_APOKLLJNBPE_OFFSET UNITYSDK_OFFSET(0x17B9F520)
#define KMEOMKNPNCC_BGEBNMOEDEE_OFFSET UNITYSDK_OFFSET(0x17B9EE70)
#define KMEOMKNPNCC_BGPIDNHKEOI_OFFSET UNITYSDK_OFFSET(0x17BA1D00)
#define KMEOMKNPNCC_BKBLCKKFKIP_OFFSET UNITYSDK_OFFSET(0x17BA8090)
#define KMEOMKNPNCC_BMJBPKFHANE_OFFSET UNITYSDK_OFFSET(0x17B9FB10)
#define KMEOMKNPNCC_BODMPLCPOLA_OFFSET UNITYSDK_OFFSET(0x17BA4F00)
#define KMEOMKNPNCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x17BA8E20)
#define KMEOMKNPNCC_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0x17BA8150)
#define KMEOMKNPNCC_CHAKIIGELEH_OFFSET UNITYSDK_OFFSET(0x17BA7F30)
#define KMEOMKNPNCC_CLCLJFEAAMD_OFFSET UNITYSDK_OFFSET(0x17B9EC90)
#define KMEOMKNPNCC_CMHMGOPHGID_OFFSET UNITYSDK_OFFSET(0x17BA2300)
#define KMEOMKNPNCC_CMMCPDIEMFF_OFFSET UNITYSDK_OFFSET(0x17B9FA60)
#define KMEOMKNPNCC_CNJLKANOGJN_OFFSET UNITYSDK_OFFSET(0x17BA8250)
#define KMEOMKNPNCC_CTOR_OFFSET UNITYSDK_OFFSET(0x17B9E960)
#define KMEOMKNPNCC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17BA0540)
#define KMEOMKNPNCC_DOCCJCCFPGC_OFFSET UNITYSDK_OFFSET(0x17BA1D40)
#define KMEOMKNPNCC_ECFCCNAKPPI_OFFSET UNITYSDK_OFFSET(0x17BA1CC0)
#define KMEOMKNPNCC_ECGGPCEDKOM_OFFSET UNITYSDK_OFFSET(0x17BA8D20)
#define KMEOMKNPNCC_EFDJNLHIMGC_OFFSET UNITYSDK_OFFSET(0x17BA1B20)
#define KMEOMKNPNCC_EGDJPLDCLFM_OFFSET UNITYSDK_OFFSET(0x17BA68B0)
#define KMEOMKNPNCC_EMDDFJILBJI_OFFSET UNITYSDK_OFFSET(0x17BA17A0)
#define KMEOMKNPNCC_ENBOPCNODJN_OFFSET UNITYSDK_OFFSET(0x17BA1DC0)
#define KMEOMKNPNCC_EPMDJMBPFGG_OFFSET UNITYSDK_OFFSET(0x17BA7F40)
#define KMEOMKNPNCC_FBKKBGDECOP_OFFSET UNITYSDK_OFFSET(0x17B9EEE0)
#define KMEOMKNPNCC_FCHLEBPLAAE_OFFSET UNITYSDK_OFFSET(0x17BA04A0)
#define KMEOMKNPNCC_FCJGHBHMAPG_OFFSET UNITYSDK_OFFSET(0x17BA29D0)
#define KMEOMKNPNCC_FENCKGPGFJD_OFFSET UNITYSDK_OFFSET(0x17BA8540)
#define KMEOMKNPNCC_FNPDHHAALIP_1_OFFSET UNITYSDK_OFFSET(0x17BA3EC0)
#define KMEOMKNPNCC_FNPDHHAALIP_OFFSET UNITYSDK_OFFSET(0x17BA3E00)
#define KMEOMKNPNCC_FOHEADEJPAN_OFFSET UNITYSDK_OFFSET(0x17BA6BC0)
#define KMEOMKNPNCC_GEFMHLOJCLA_OFFSET UNITYSDK_OFFSET(0x17BA5CF0)
#define KMEOMKNPNCC_GET_ALLOWSLIDE_OFFSET UNITYSDK_OFFSET(0x17BA8CA0)
#define KMEOMKNPNCC_GET_CAPSULECOLLIDER_OFFSET UNITYSDK_OFFSET(0x17BA7F70)
#define KMEOMKNPNCC_GET_FORWARDNORMAL_OFFSET UNITYSDK_OFFSET(0x17BA7FF0)
#define KMEOMKNPNCC_GET_GROUNDNORMAL_OFFSET UNITYSDK_OFFSET(0x17BA7FB0)
#define KMEOMKNPNCC_GET_ISTHREAD_OFFSET UNITYSDK_OFFSET(0x17BA8D00)
#define KMEOMKNPNCC_GET_LASTPOSITION_OFFSET UNITYSDK_OFFSET(0x17BA8CC0)
#define KMEOMKNPNCC_GET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x17BA7F90)
#define KMEOMKNPNCC_GET_MAX_MOVE_SPEED_OFFSET UNITYSDK_OFFSET(0x17B9E920)
#define KMEOMKNPNCC_GET_MOVECAPSULECASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x17BA81B0)
#define KMEOMKNPNCC_GET_MOVERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x17BA8190)
#define KMEOMKNPNCC_GET_PHYSICSPROPHITS_OFFSET UNITYSDK_OFFSET(0x17BA8730)
#define KMEOMKNPNCC_GET_REALVELOCITY_OFFSET UNITYSDK_OFFSET(0x17BA0600)
#define KMEOMKNPNCC_GET_REQUIRESTANDONGROUND_OFFSET UNITYSDK_OFFSET(0x17BA8050)
#define KMEOMKNPNCC_GET_RIGIDBODY_OFFSET UNITYSDK_OFFSET(0x17BA7F50)
#define KMEOMKNPNCC_GET_SCENERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x17BA81D0)
#define KMEOMKNPNCC_GET_SOURCEMOVECAPSULECASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x17BA8210)
#define KMEOMKNPNCC_GET_SOURCEMOVERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x17BA81F0)
#define KMEOMKNPNCC_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x17BA05E0)
#define KMEOMKNPNCC_GET_THREADDATA_OFFSET UNITYSDK_OFFSET(0x17BA05D0)
#define KMEOMKNPNCC_GET_UPSTAIRANIMRATIO_OFFSET UNITYSDK_OFFSET(0x17BA8030)
#define KMEOMKNPNCC_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x17BA0640)
#define KMEOMKNPNCC_GET_WALLHITS_OFFSET UNITYSDK_OFFSET(0x17BA8230)
#define KMEOMKNPNCC_GHKFNLICBNB_OFFSET UNITYSDK_OFFSET(0x17B9EF30)
#define KMEOMKNPNCC_GIOGGJAMNAC_OFFSET UNITYSDK_OFFSET(0x17BA2B10)
#define KMEOMKNPNCC_GLIFGAOHMOD_OFFSET UNITYSDK_OFFSET(0x17BA6F40)
#define KMEOMKNPNCC_GNBNCBDKOMP_1_OFFSET UNITYSDK_OFFSET(0x17BA5910)
#define KMEOMKNPNCC_GNBNCBDKOMP_OFFSET UNITYSDK_OFFSET(0x17BA5800)
#define KMEOMKNPNCC_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x17BA8130)
#define KMEOMKNPNCC_HICBCFBAONI_OFFSET UNITYSDK_OFFSET(0x17BA8070)
#define KMEOMKNPNCC_HJNMEPAFFDO_OFFSET UNITYSDK_OFFSET(0x17BA7310)
#define KMEOMKNPNCC_HKELLKAAHNN_OFFSET UNITYSDK_OFFSET(0x17BA69E0)
#define KMEOMKNPNCC_HLAONDCEBDH_OFFSET UNITYSDK_OFFSET(0x17BA0F90)
#define KMEOMKNPNCC_HNCILAGOOAN_OFFSET UNITYSDK_OFFSET(0x17BA75A0)
#define KMEOMKNPNCC_IFJOPBEPCEE_OFFSET UNITYSDK_OFFSET(0x17BA8320)
#define KMEOMKNPNCC_IKGFOCFLHAF_OFFSET UNITYSDK_OFFSET(0x17BA1E00)
#define KMEOMKNPNCC_ILFMHNFBAMK_OFFSET UNITYSDK_OFFSET(0x17B9FF20)
#define KMEOMKNPNCC_IPDEJKCLDJB_OFFSET UNITYSDK_OFFSET(0x17B9EC30)
#define KMEOMKNPNCC_JBCKLFKKKPC_OFFSET UNITYSDK_OFFSET(0x17BA6C90)
#define KMEOMKNPNCC_JCDOHBBLPDC_1_OFFSET UNITYSDK_OFFSET(0x17BA7D30)
#define KMEOMKNPNCC_JCDOHBBLPDC_OFFSET UNITYSDK_OFFSET(0x17BA7800)
#define KMEOMKNPNCC_JIDLDHKEINP_OFFSET UNITYSDK_OFFSET(0x17BA4CC0)
#define KMEOMKNPNCC_JLOJMFEJIDD_OFFSET UNITYSDK_OFFSET(0x17BA67D0)
#define KMEOMKNPNCC_JOGLEKCEFGG_OFFSET UNITYSDK_OFFSET(0x17B9FE90)
#define KMEOMKNPNCC_KEALPFKPNKE_1_OFFSET UNITYSDK_OFFSET(0x17BA00F0)
#define KMEOMKNPNCC_KEALPFKPNKE_OFFSET UNITYSDK_OFFSET(0x17B9FF90)
#define KMEOMKNPNCC_KNAHGCEKHAJ_OFFSET UNITYSDK_OFFSET(0x17B9F370)
#define KMEOMKNPNCC_KOCCBIDNDFK_OFFSET UNITYSDK_OFFSET(0x17BA80F0)
#define KMEOMKNPNCC_LAJIJKAIKEE_OFFSET UNITYSDK_OFFSET(0x17B9ED90)
#define KMEOMKNPNCC_LALEFOINHOO_OFFSET UNITYSDK_OFFSET(0x17BA8160)
#define KMEOMKNPNCC_LBHKPCMNHED_OFFSET UNITYSDK_OFFSET(0x17BA0680)
#define KMEOMKNPNCC_LNFFFFHOEBJ_OFFSET UNITYSDK_OFFSET(0x17B9F010)
#define KMEOMKNPNCC_MAIBEENLPOD_OFFSET UNITYSDK_OFFSET(0x17BA1740)
#define KMEOMKNPNCC_MCEDBBJCNKL_OFFSET UNITYSDK_OFFSET(0x17BA7DD0)
#define KMEOMKNPNCC_MFGCNFFNFMC_OFFSET UNITYSDK_OFFSET(0x17B9FCB0)
#define KMEOMKNPNCC_MFPCCADDDKK_OFFSET UNITYSDK_OFFSET(0x17BA4780)
#define KMEOMKNPNCC_MGDHJGBNEDF_OFFSET UNITYSDK_OFFSET(0x17BA8110)
#define KMEOMKNPNCC_MGODLMALNJO_OFFSET UNITYSDK_OFFSET(0x17BA8170)
#define KMEOMKNPNCC_MJNOBGCDMCP_OFFSET UNITYSDK_OFFSET(0x17B9F790)
#define KMEOMKNPNCC_NBJFLGNEBED_OFFSET UNITYSDK_OFFSET(0x17B9F080)
#define KMEOMKNPNCC_NFLAKFJCIPF_OFFSET UNITYSDK_OFFSET(0x17B9FA10)
#define KMEOMKNPNCC_NOHPPPDMMBH_OFFSET UNITYSDK_OFFSET(0x17BA8C80)
#define KMEOMKNPNCC_OEMAOIHIIGB_OFFSET UNITYSDK_OFFSET(0x17BA4A80)
#define KMEOMKNPNCC_OGHCABAAGJL_OFFSET UNITYSDK_OFFSET(0x17BA5EC0)
#define KMEOMKNPNCC_OHAOCINBLFJ_OFFSET UNITYSDK_OFFSET(0x17BA8060)
#define KMEOMKNPNCC_OIFIJDGCPAM_1_OFFSET UNITYSDK_OFFSET(0x17BA0240)
#define KMEOMKNPNCC_OIFIJDGCPAM_OFFSET UNITYSDK_OFFSET(0x17BA01B0)
#define KMEOMKNPNCC_ONEODCIEFJC_OFFSET UNITYSDK_OFFSET(0x17BA8750)
#define KMEOMKNPNCC_PALHKCKBILN_OFFSET UNITYSDK_OFFSET(0x17BA1E90)
#define KMEOMKNPNCC_PDMDIGBCCCI_1_OFFSET UNITYSDK_OFFSET(0x17B9F420)
#define KMEOMKNPNCC_PDMDIGBCCCI_OFFSET UNITYSDK_OFFSET(0x17B9F2F0)
#define KMEOMKNPNCC_PFHPCGKAMBF_OFFSET UNITYSDK_OFFSET(0x17B9ED30)
#define KMEOMKNPNCC_PIGOBAIMCNL_OFFSET UNITYSDK_OFFSET(0x17BA8080)
#define KMEOMKNPNCC_PMFLKHFDEBE_OFFSET UNITYSDK_OFFSET(0x17BA2CB0)
#define KMEOMKNPNCC_SET_ALLOWSLIDE_OFFSET UNITYSDK_OFFSET(0x17BA8CB0)
#define KMEOMKNPNCC_SET_CAPSULECOLLIDER_OFFSET UNITYSDK_OFFSET(0x17BA7F80)
#define KMEOMKNPNCC_SET_FORWARDNORMAL_OFFSET UNITYSDK_OFFSET(0x17BA8010)
#define KMEOMKNPNCC_SET_GROUNDNORMAL_OFFSET UNITYSDK_OFFSET(0x17BA7FD0)
#define KMEOMKNPNCC_SET_ISTHREAD_OFFSET UNITYSDK_OFFSET(0x17BA8D10)
#define KMEOMKNPNCC_SET_LASTPOSITION_OFFSET UNITYSDK_OFFSET(0x17BA8CE0)
#define KMEOMKNPNCC_SET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x17BA7FA0)
#define KMEOMKNPNCC_SET_MOVECAPSULECASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x17BA81C0)
#define KMEOMKNPNCC_SET_MOVERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x17BA81A0)
#define KMEOMKNPNCC_SET_PHYSICSPROPHITS_OFFSET UNITYSDK_OFFSET(0x17BA8740)
#define KMEOMKNPNCC_SET_REALVELOCITY_OFFSET UNITYSDK_OFFSET(0x17BA0620)
#define KMEOMKNPNCC_SET_RIGIDBODY_OFFSET UNITYSDK_OFFSET(0x17BA7F60)
#define KMEOMKNPNCC_SET_SCENERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x17BA81E0)
#define KMEOMKNPNCC_SET_SOURCEMOVECAPSULECASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x17BA8220)
#define KMEOMKNPNCC_SET_SOURCEMOVERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0x17BA8200)
#define KMEOMKNPNCC_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x17BA05F0)
#define KMEOMKNPNCC_SET_UPSTAIRANIMRATIO_OFFSET UNITYSDK_OFFSET(0x17BA8040)
#define KMEOMKNPNCC_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x17BA0660)
#define KMEOMKNPNCC_SET_WALLHITS_OFFSET UNITYSDK_OFFSET(0x17BA8240)

inline static constexpr unsigned int KMEOMKNPNCC_TypeDefinitionIndex = 58330;

	class KMEOMKNPNCC : public ::System::Object
	{
	public:
		::RPG::GameCore::AdventureCharacterController* GPACEDIFLNG; // 0x10
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
		::EHHAOKBNDII CMEGLNPBECB; // 0x20
		::FEIBCGELFAJ* _ThreadData_k__BackingField; // 0x58
		::Il2CppArray<::UnityEngine::RaycastHit>* BIIPAEGAAAI; // 0x60
		::System::Collections::Generic::List_1<::System::Int32>* CMKKNIOPPCJ; // 0x68
		::UnityEngine::CapsuleCollider* _CapsuleCollider_k__BackingField; // 0x70
		::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>* _WallHits_k__BackingField; // 0x78
		::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>* _PhysicsPropHits_k__BackingField; // 0x80
		::UnityEngine::Rigidbody* _Rigidbody_k__BackingField; // 0x88
		::Il2CppArray<::UnityEngine::Collider*>* HGEJCFJANNM; // 0x90
		::UnityEngine::Quaternion PHOJPKJCPMM; // 0x98
		::System::Single BFAAPMPOICA; // 0xA8
		::UnityEngine::Vector3 ENEBAACDPHL; // 0xAC
		::System::Single JLGNJIMCEPG; // 0xB8
		::System::Single MJKOIJDALHP; // 0xBC
		::UnityEngine::Vector3 _Velocity_k__BackingField; // 0xC0
		::System::Boolean PFGNBFAPILB; // 0xCC
		::System::Boolean IKLDKGMEAMO; // 0xCD
		::System::Byte _padding0[0x2];
		::UnityEngine::LayerMask _MoveRaycastLayerMask_k__BackingField; // 0xD0
		::UnityEngine::Vector3 DMJOPCHHPGF; // 0xD4
		::System::Boolean _AllowSlide_k__BackingField; // 0xE0
		::System::Boolean _IsThread_k__BackingField; // 0xE1
		::System::Boolean _RequireStandOnGround_k__BackingField; // 0xE2
		::System::Byte _padding1[0x1];
		::UnityEngine::Vector3 EGDPJIAEBNC; // 0xE4
		::System::Single _Speed_k__BackingField; // 0xF0
		::System::Single _UpStairAnimRatio_k__BackingField; // 0xF4
		::UnityEngine::Vector3 NJONPPAEHLB; // 0xF8
		::System::Single _MaxSpeed_k__BackingField; // 0x104
		::UnityEngine::LayerMask _MoveCapsuleCastLayerMask_k__BackingField; // 0x108
		::UnityEngine::Vector3 KENIEBLHANI; // 0x10C
		::System::Single PJJLEJDPNHI; // 0x118
		::UnityEngine::Vector3 _GroundNormal_k__BackingField; // 0x11C
		::UnityEngine::LayerMask _SourceMoveRaycastLayerMask_k__BackingField; // 0x128
		::UnityEngine::LayerMask _SourceMoveCapsuleCastLayerMask_k__BackingField; // 0x12C
		::UnityEngine::Vector3 _ForwardNormal_k__BackingField; // 0x130
		::UnityEngine::Vector3 AMBHDMPIKHP; // 0x13C
		::UnityEngine::Vector3 _LastPosition_k__BackingField; // 0x148
		::UnityEngine::Vector3 _RealVelocity_k__BackingField; // 0x154
		::UnityEngine::LayerMask _SceneRaycastLayerMask_k__BackingField; // 0x160
		static ::System::Single* StaticGet_KDAHPFGKPNM()
		{
			return (::System::Single*)UnitySDK::FromName("", "KMEOMKNPNCC")->GetStaticField(0x14700);
		}

		static ::System::Single* StaticGet__MAX_MOVE_SPEED_k__BackingField()
		{
			return (::System::Single*)UnitySDK::FromName("", "KMEOMKNPNCC")->GetStaticField(0x14704);
		}

		// static const ::System::Object MHHDCJGBDML; // 0x0
		// static const ::System::Object OBKHABCACNA; // 0x0
		::System::Void _ctor(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMEOMKNPNCC_CCTOR_OFFSET))();
		}

		static ::System::Single get_MAX_MOVE_SPEED()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_MAX_MOVE_SPEED_OFFSET))();
		}

		::System::Void CLCLJFEAAMD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_CLCLJFEAAMD_OFFSET))(this, a1);
		}

		::System::Void IPDEJKCLDJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_IPDEJKCLDJB_OFFSET))(this);
		}

		::System::Void PFHPCGKAMBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_PFHPCGKAMBF_OFFSET))(this);
		}

		::System::Void LAJIJKAIKEE(::UnityEngine::GameObject* a1, ::UnityEngine::Rigidbody* a2, ::UnityEngine::CapsuleCollider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Rigidbody*, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_LAJIJKAIKEE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BGEBNMOEDEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_BGEBNMOEDEE_OFFSET))(this);
		}

		::System::Void FBKKBGDECOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_FBKKBGDECOP_OFFSET))(this);
		}

		::System::Void GHKFNLICBNB(::RPG::Client::MonoCharacterHeadPoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCharacterHeadPoint*))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GHKFNLICBNB_OFFSET))(this, a1);
		}

		::System::Void APFKOFDGKDO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_APFKOFDGKDO_OFFSET))(this, a1);
		}

		::System::Void LNFFFFHOEBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_LNFFFFHOEBJ_OFFSET))(this);
		}

		::System::Void NBJFLGNEBED(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_NBJFLGNEBED_OFFSET))(this, a1);
		}

		::System::Void PDMDIGBCCCI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_PDMDIGBCCCI_OFFSET))(this, a1);
		}

		::System::Void KNAHGCEKHAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_KNAHGCEKHAJ_OFFSET))(this);
		}

		::System::Void PDMDIGBCCCI_1(::KMEOMKNPNCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMEOMKNPNCC*))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_PDMDIGBCCCI_1_OFFSET))(this, a1);
		}

		::System::Void APOKLLJNBPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_APOKLLJNBPE_OFFSET))(this);
		}

		::System::Void MJNOBGCDMCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_MJNOBGCDMCP_OFFSET))(this);
		}

		::System::Void NFLAKFJCIPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_NFLAKFJCIPF_OFFSET))(this);
		}

		::System::Void CMMCPDIEMFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_CMMCPDIEMFF_OFFSET))(this);
		}

		::System::Void BMJBPKFHANE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_BMJBPKFHANE_OFFSET))(this);
		}

		::System::Void MFGCNFFNFMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_MFGCNFFNFMC_OFFSET))(this);
		}

		::UnityEngine::Vector3 JOGLEKCEFGG(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_JOGLEKCEFGG_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion ILFMHNFBAMK(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_ILFMHNFBAMK_OFFSET))(this, a1);
		}

		::System::Boolean KEALPFKPNKE(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_KEALPFKPNKE_OFFSET))(this, a1);
		}

		::System::Boolean KEALPFKPNKE_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_KEALPFKPNKE_1_OFFSET))(this, a1);
		}

		::System::Boolean OIFIJDGCPAM(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_OIFIJDGCPAM_OFFSET))(this, a1);
		}

		::System::Boolean OIFIJDGCPAM_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_OIFIJDGCPAM_1_OFFSET))(this, a1);
		}

		::System::Void FCHLEBPLAAE(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_FCHLEBPLAAE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_DISPOSE_OFFSET))(this);
		}

		::FEIBCGELFAJ* get_ThreadData()
		{
			return ((::FEIBCGELFAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_THREADDATA_OFFSET))(this);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_SET_SPEED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_RealVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_REALVELOCITY_OFFSET))(this);
		}

		::System::Void set_RealVelocity(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_SET_REALVELOCITY_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_Velocity(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_SET_VELOCITY_OFFSET))(this, a1);
		}

		::System::Single LBHKPCMNHED()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_LBHKPCMNHED_OFFSET))(this);
		}

		::System::Single ADCOGBEHGPD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_ADCOGBEHGPD_OFFSET))(this);
		}

		::System::Void HLAONDCEBDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_HLAONDCEBDH_OFFSET))(this);
		}

		::System::Void EFDJNLHIMGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_EFDJNLHIMGC_OFFSET))(this);
		}

		::System::Void ECFCCNAKPPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_ECFCCNAKPPI_OFFSET))(this);
		}

		::System::Void BGPIDNHKEOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_BGPIDNHKEOI_OFFSET))(this);
		}

		::UnityEngine::Vector3 DOCCJCCFPGC(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_DOCCJCCFPGC_OFFSET))(this, a1);
		}

		::System::Void ENBOPCNODJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_ENBOPCNODJN_OFFSET))(this);
		}

		::System::Void IKGFOCFLHAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_IKGFOCFLHAF_OFFSET))(this);
		}

		::System::Boolean EMDDFJILBJI(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_EMDDFJILBJI_OFFSET))(this, a1, a2);
		}

		::System::Boolean CMHMGOPHGID(::UnityEngine::Vector3 a1, ::UnityEngine::LayerMask a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::LayerMask, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_CMHMGOPHGID_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::EMovementComputePenetrationResultType PMFLKHFDEBE(::UnityEngine::Vector3 a1, ::UnityEngine::LayerMask a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::RPG::GameCore::EMovementComputePenetrationResultType(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::LayerMask, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_PMFLKHFDEBE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean FNPDHHAALIP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_FNPDHHAALIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean FNPDHHAALIP_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit a3, ::UnityEngine::LayerMask a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_FNPDHHAALIP_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean MFPCCADDDKK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit a3, ::System::Single a4, ::UnityEngine::LayerMask a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_MFPCCADDDKK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean PALHKCKBILN(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::UnityEngine::RaycastHit a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_PALHKCKBILN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::GameCore::EMovementComputePenetrationResultType BODMPLCPOLA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::RaycastHit a4)
		{
			return ((::RPG::GameCore::EMovementComputePenetrationResultType(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_BODMPLCPOLA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GNBNCBDKOMP(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::RaycastHit a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GNBNCBDKOMP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean GNBNCBDKOMP_1(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::RaycastHit a5, ::UnityEngine::LayerMask a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GNBNCBDKOMP_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean OGHCABAAGJL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::RaycastHit a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_OGHCABAAGJL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EGDJPLDCLFM(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_EGDJPLDCLFM_OFFSET))(this, a1);
		}

		::System::Boolean FOHEADEJPAN(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::RaycastHit a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_FOHEADEJPAN_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JBCKLFKKKPC(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::RaycastHit a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_JBCKLFKKKPC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GLIFGAOHMOD(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::UnityEngine::RaycastHit a5, ::UnityEngine::RaycastHit a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GLIFGAOHMOD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean HJNMEPAFFDO(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::RaycastHit a4, ::UnityEngine::RaycastHit a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_HJNMEPAFFDO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean JCDOHBBLPDC(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::RaycastHit a3, ::RPG::GameCore::EMovementComputePenetrationResultType a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit, ::RPG::GameCore::EMovementComputePenetrationResultType))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_JCDOHBBLPDC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean JCDOHBBLPDC_1(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::RaycastHit a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_JCDOHBBLPDC_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Single MCEDBBJCNKL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_MCEDBBJCNKL_OFFSET))(this);
		}

		::System::Int32 JLOJMFEJIDD(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::LayerMask a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_JLOJMFEJIDD_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 FCJGHBHMAPG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::LayerMask a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_FCJGHBHMAPG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean AIBMGHMKOOL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit a3, ::System::Single a4, ::UnityEngine::LayerMask a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_AIBMGHMKOOL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 OEMAOIHIIGB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::LayerMask a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_OEMAOIHIIGB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean HKELLKAAHNN(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit a4, ::System::Single a5, ::UnityEngine::LayerMask a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_HKELLKAAHNN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 GEFMHLOJCLA(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::UnityEngine::LayerMask a5)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GEFMHLOJCLA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 JIDLDHKEINP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::UnityEngine::LayerMask a6)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_JIDLDHKEINP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean GIOGGJAMNAC(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Collider* a5, ::UnityEngine::Vector3 a6, ::System::Single a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GIOGGJAMNAC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::RPG::GameCore::GameEntity* CHAKIIGELEH()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_CHAKIIGELEH_OFFSET))(this);
		}

		::RPG::GameCore::AdventureCharacterController* EPMDJMBPFGG()
		{
			return ((::RPG::GameCore::AdventureCharacterController*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_EPMDJMBPFGG_OFFSET))(this);
		}

		::UnityEngine::Rigidbody* get_Rigidbody()
		{
			return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_RIGIDBODY_OFFSET))(this);
		}

		::System::Void set_Rigidbody(::UnityEngine::Rigidbody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_SET_RIGIDBODY_OFFSET))(this, a1);
		}

		::UnityEngine::CapsuleCollider* get_CapsuleCollider()
		{
			return ((::UnityEngine::CapsuleCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_CAPSULECOLLIDER_OFFSET))(this);
		}

		::System::Void set_CapsuleCollider(::UnityEngine::CapsuleCollider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_SET_CAPSULECOLLIDER_OFFSET))(this, a1);
		}

		::System::Single get_MaxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_MAXSPEED_OFFSET))(this);
		}

		::System::Void set_MaxSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_SET_MAXSPEED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_GroundNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_GROUNDNORMAL_OFFSET))(this);
		}

		::System::Void set_GroundNormal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_SET_GROUNDNORMAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ForwardNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_FORWARDNORMAL_OFFSET))(this);
		}

		::System::Void set_ForwardNormal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_SET_FORWARDNORMAL_OFFSET))(this, a1);
		}

		::System::Single get_UpStairAnimRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_UPSTAIRANIMRATIO_OFFSET))(this);
		}

		::System::Void set_UpStairAnimRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_SET_UPSTAIRANIMRATIO_OFFSET))(this, a1);
		}

		::System::Boolean get_RequireStandOnGround()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_REQUIRESTANDONGROUND_OFFSET))(this);
		}

		::System::Single OHAOCINBLFJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_OHAOCINBLFJ_OFFSET))(this);
		}

		::System::Single HICBCFBAONI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_HICBCFBAONI_OFFSET))(this);
		}

		::System::Single PIGOBAIMCNL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_PIGOBAIMCNL_OFFSET))(this);
		}

		::System::Single BKBLCKKFKIP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_BKBLCKKFKIP_OFFSET))(this);
		}

		::UnityEngine::Vector3 KOCCBIDNDFK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_KOCCBIDNDFK_OFFSET))(this);
		}

		::UnityEngine::Vector3 MGDHJGBNEDF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_MGDHJGBNEDF_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_HHMFILFAMNA_OFFSET))(this);
		}

		::UnityEngine::Quaternion CECMCADBMDE()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_CECMCADBMDE_OFFSET))(this);
		}

		::System::Boolean LALEFOINHOO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_LALEFOINHOO_OFFSET))(this);
		}

		::UnityEngine::Vector3 MGODLMALNJO()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_MGODLMALNJO_OFFSET))(this);
		}

		::UnityEngine::LayerMask get_MoveRaycastLayerMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_MOVERAYCASTLAYERMASK_OFFSET))(this);
		}

		::System::Void set_MoveRaycastLayerMask(::UnityEngine::LayerMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_SET_MOVERAYCASTLAYERMASK_OFFSET))(this, a1);
		}

		::UnityEngine::LayerMask get_MoveCapsuleCastLayerMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_MOVECAPSULECASTLAYERMASK_OFFSET))(this);
		}

		::System::Void set_MoveCapsuleCastLayerMask(::UnityEngine::LayerMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_SET_MOVECAPSULECASTLAYERMASK_OFFSET))(this, a1);
		}

		::UnityEngine::LayerMask get_SceneRaycastLayerMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_SCENERAYCASTLAYERMASK_OFFSET))(this);
		}

		::System::Void set_SceneRaycastLayerMask(::UnityEngine::LayerMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_SET_SCENERAYCASTLAYERMASK_OFFSET))(this, a1);
		}

		::UnityEngine::LayerMask get_SourceMoveRaycastLayerMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_SOURCEMOVERAYCASTLAYERMASK_OFFSET))(this);
		}

		::System::Void set_SourceMoveRaycastLayerMask(::UnityEngine::LayerMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_SET_SOURCEMOVERAYCASTLAYERMASK_OFFSET))(this, a1);
		}

		::UnityEngine::LayerMask get_SourceMoveCapsuleCastLayerMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_SOURCEMOVECAPSULECASTLAYERMASK_OFFSET))(this);
		}

		::System::Void set_SourceMoveCapsuleCastLayerMask(::UnityEngine::LayerMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_SET_SOURCEMOVECAPSULECASTLAYERMASK_OFFSET))(this, a1);
		}

		::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>* get_WallHits()
		{
			return ((::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_WALLHITS_OFFSET))(this);
		}

		::System::Void set_WallHits(::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_SET_WALLHITS_OFFSET))(this, a1);
		}

		::System::Void CNJLKANOGJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_CNJLKANOGJN_OFFSET))(this);
		}

		::System::Void IFJOPBEPCEE(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_IFJOPBEPCEE_OFFSET))(this, a1);
		}

		::System::Void MAIBEENLPOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_MAIBEENLPOD_OFFSET))(this);
		}

		::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>* get_PhysicsPropHits()
		{
			return ((::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_PHYSICSPROPHITS_OFFSET))(this);
		}

		::System::Void set_PhysicsPropHits(::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChunkedStructList_1<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_SET_PHYSICSPROPHITS_OFFSET))(this, a1);
		}

		::System::Void ONEODCIEFJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_ONEODCIEFJC_OFFSET))(this);
		}

		::System::Void FENCKGPGFJD(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_FENCKGPGFJD_OFFSET))(this, a1);
		}

		::System::Boolean AGKMDAJFOOH(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::RaycastHit a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_AGKMDAJFOOH_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 NOHPPPDMMBH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_NOHPPPDMMBH_OFFSET))(this);
		}

		::System::Boolean get_AllowSlide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_ALLOWSLIDE_OFFSET))(this);
		}

		::System::Void set_AllowSlide(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_SET_ALLOWSLIDE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_LastPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_LASTPOSITION_OFFSET))(this);
		}

		::System::Void set_LastPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_SET_LASTPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_GET_ISTHREAD_OFFSET))(this);
		}

		::System::Void set_IsThread(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_SET_ISTHREAD_OFFSET))(this, a1);
		}

		static ::System::Boolean HNCILAGOOAN(::UnityEngine::RaycastHit a1, ::UnityEngine::RaycastHit a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_HNCILAGOOAN_OFFSET))(a1, a2);
		}

		static ::System::Single ECGGPCEDKOM(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KMEOMKNPNCC_ECGGPCEDKOM_OFFSET))(a1, a2, a3, a4);
		}

	};
