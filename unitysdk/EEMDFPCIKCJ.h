#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEMDFPCIKCJ_MeshLodState.h"
#include "unitysdk/RPG/GameCore/EntityLoadState.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HEAIEBHLCMJ;
class IAPOIJDMPJC;
class MDGKKKNOGHA;
namespace RPG::Client { class ArtNPCPedestrianAssetConfig_ArtVariantInfo; }
namespace RPG::Client { class ArtNPCPedestrianEntityConfig_EntityInfo; }
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class MockAnimator; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::CustomRP { class CapsuleOcclusion; }
namespace RPG::GameCore { class AdventureCharacterConfig; }
namespace RPG::GameCore { class ColliderConfig; }
namespace RPG::GameCore { class EntityLodDetail; }
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LodTemplate; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RuntimeAnimatorController; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define EEMDFPCIKCJ_AAEKJNLAJEC_OFFSET UNITYSDK_OFFSET(0x13A3DAF0)
#define EEMDFPCIKCJ_ABCMNBHIAKM_OFFSET UNITYSDK_OFFSET(0x13A3E050)
#define EEMDFPCIKCJ_AFOENCPABMH_OFFSET UNITYSDK_OFFSET(0x13A3D420)
#define EEMDFPCIKCJ_AGPHBLGBODG_OFFSET UNITYSDK_OFFSET(0x13A3DC30)
#define EEMDFPCIKCJ_AHKEGKNPBPJ_OFFSET UNITYSDK_OFFSET(0x13A3B960)
#define EEMDFPCIKCJ_AKBEOCEEHFC_OFFSET UNITYSDK_OFFSET(0x13A3D860)
#define EEMDFPCIKCJ_ALCOOLDPHPD_OFFSET UNITYSDK_OFFSET(0x13A373E0)
#define EEMDFPCIKCJ_BEHMIODBIPN_OFFSET UNITYSDK_OFFSET(0x13A37FE0)
#define EEMDFPCIKCJ_BFFNFBECPDE_OFFSET UNITYSDK_OFFSET(0x13A3C9B0)
#define EEMDFPCIKCJ_BJEGMMKGHGB_OFFSET UNITYSDK_OFFSET(0x13A38600)
#define EEMDFPCIKCJ_CBAGHIMPPJP_OFFSET UNITYSDK_OFFSET(0x13A39270)
#define EEMDFPCIKCJ_CDKNKMLIOAK_OFFSET UNITYSDK_OFFSET(0x13A39840)
#define EEMDFPCIKCJ_CKHBPKAEGLF_OFFSET UNITYSDK_OFFSET(0x13A38F30)
#define EEMDFPCIKCJ_CLKCALGBIOO_OFFSET UNITYSDK_OFFSET(0x13A3A120)
#define EEMDFPCIKCJ_CNAPOOPIAAI_OFFSET UNITYSDK_OFFSET(0x13A3B2B0)
#define EEMDFPCIKCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x13A3E280)
#define EEMDFPCIKCJ_DANGLDJGPCC_OFFSET UNITYSDK_OFFSET(0x13A3C1C0)
#define EEMDFPCIKCJ_DBILPMMCJNN_OFFSET UNITYSDK_OFFSET(0x13A37DC0)
#define EEMDFPCIKCJ_DCFLHFIDJOK_OFFSET UNITYSDK_OFFSET(0x13A3C290)
#define EEMDFPCIKCJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A3A620)
#define EEMDFPCIKCJ_DKKAHMJFHOP_OFFSET UNITYSDK_OFFSET(0x13A3C410)
#define EEMDFPCIKCJ_DONJMGHDNIM_OFFSET UNITYSDK_OFFSET(0x13A38530)
#define EEMDFPCIKCJ_DPHEJJPHEBH_OFFSET UNITYSDK_OFFSET(0x13A3D130)
#define EEMDFPCIKCJ_EDPFKFFEEFD_OFFSET UNITYSDK_OFFSET(0x13A3AAE0)
#define EEMDFPCIKCJ_EJJCBGCDABA_OFFSET UNITYSDK_OFFSET(0x13A39420)
#define EEMDFPCIKCJ_FCOBBMDCKDG_OFFSET UNITYSDK_OFFSET(0x13A3ACC0)
#define EEMDFPCIKCJ_FDCOPPKAMFL_OFFSET UNITYSDK_OFFSET(0x13A3AC30)
#define EEMDFPCIKCJ_FDMPIHMIJOE_OFFSET UNITYSDK_OFFSET(0x13A3C540)
#define EEMDFPCIKCJ_FEFOPDKOAIH_OFFSET UNITYSDK_OFFSET(0x13A379A0)
#define EEMDFPCIKCJ_GDHDAKILKAL_OFFSET UNITYSDK_OFFSET(0x13A37C90)
#define EEMDFPCIKCJ_GETMODELART_OFFSET UNITYSDK_OFFSET(0x13A3A080)
#define EEMDFPCIKCJ_GETMODELGO_OFFSET UNITYSDK_OFFSET(0x13A3A030)
#define EEMDFPCIKCJ_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0x13A3A020)
#define EEMDFPCIKCJ_GET_MOCKANIMATOR_OFFSET UNITYSDK_OFFSET(0x13A3A0D0)
#define EEMDFPCIKCJ_HJDDPFMBENH_OFFSET UNITYSDK_OFFSET(0x13A39AD0)
#define EEMDFPCIKCJ_HMOCOGGLGAP_OFFSET UNITYSDK_OFFSET(0x13A3A330)
#define EEMDFPCIKCJ_HNAGPEGPPAH_OFFSET UNITYSDK_OFFSET(0x13A37480)
#define EEMDFPCIKCJ_IFONOHLCEGA_OFFSET UNITYSDK_OFFSET(0x13A3D510)
#define EEMDFPCIKCJ_IGMNECLFIJD_OFFSET UNITYSDK_OFFSET(0x13A3AA50)
#define EEMDFPCIKCJ_IHHEJNHLPMN_OFFSET UNITYSDK_OFFSET(0x13A3A3F0)
#define EEMDFPCIKCJ_IIIFCOHCFIP_OFFSET UNITYSDK_OFFSET(0x13A38FE0)
#define EEMDFPCIKCJ_IJCEJDEFENC_OFFSET UNITYSDK_OFFSET(0x13A37EB0)
#define EEMDFPCIKCJ_ILIFJAGJEFB_OFFSET UNITYSDK_OFFSET(0x13A3DB40)
#define EEMDFPCIKCJ_INFBNFDPKAF_OFFSET UNITYSDK_OFFSET(0x13A3E260)
#define EEMDFPCIKCJ_JBOFLBKHFMI_OFFSET UNITYSDK_OFFSET(0x13A38E70)
#define EEMDFPCIKCJ_JCNBNEPOJOP_OFFSET UNITYSDK_OFFSET(0x13A39040)
#define EEMDFPCIKCJ_JDIGABKHEJO_OFFSET UNITYSDK_OFFSET(0x13A37A00)
#define EEMDFPCIKCJ_JJPIDLADLCN_OFFSET UNITYSDK_OFFSET(0x13A3A0E0)
#define EEMDFPCIKCJ_JNCEDBJNPCO_OFFSET UNITYSDK_OFFSET(0x13A39EB0)
#define EEMDFPCIKCJ_JNMOPOHALBK_OFFSET UNITYSDK_OFFSET(0x13A3BEC0)
#define EEMDFPCIKCJ_JPCHMGNHLFN_OFFSET UNITYSDK_OFFSET(0x13A3D290)
#define EEMDFPCIKCJ_KBLOJOGDDIC_OFFSET UNITYSDK_OFFSET(0x13A382A0)
#define EEMDFPCIKCJ_KCIHCMMDDNM_OFFSET UNITYSDK_OFFSET(0x13A3D920)
#define EEMDFPCIKCJ_KEMLPODAFMF_OFFSET UNITYSDK_OFFSET(0x13A3DF50)
#define EEMDFPCIKCJ_KHIMHKPIMGJ_OFFSET UNITYSDK_OFFSET(0x13A3B6C0)
#define EEMDFPCIKCJ_KLJBCCMOBLP_OFFSET UNITYSDK_OFFSET(0x13A3CF00)
#define EEMDFPCIKCJ_LIODJEEPBNC_OFFSET UNITYSDK_OFFSET(0x13A3AED0)
#define EEMDFPCIKCJ_LJGFPKIBBEJ_OFFSET UNITYSDK_OFFSET(0x13A3DDC0)
#define EEMDFPCIKCJ_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x13A3A230)
#define EEMDFPCIKCJ_MCKAJCDKICL_OFFSET UNITYSDK_OFFSET(0x13A38B20)
#define EEMDFPCIKCJ_MGCJADOONGI_OFFSET UNITYSDK_OFFSET(0x13A3BFE0)
#define EEMDFPCIKCJ_MGLLPAJCDGB_OFFSET UNITYSDK_OFFSET(0x13A3E250)
#define EEMDFPCIKCJ_MGNHHPCBLJM_OFFSET UNITYSDK_OFFSET(0x13A39E40)
#define EEMDFPCIKCJ_MLHPMDFCKLJ_OFFSET UNITYSDK_OFFSET(0x13A3A170)
#define EEMDFPCIKCJ_NAKHEIAKAEO_OFFSET UNITYSDK_OFFSET(0x13A3E270)
#define EEMDFPCIKCJ_NEAFLEKFANC_OFFSET UNITYSDK_OFFSET(0x13A3D9B0)
#define EEMDFPCIKCJ_NJADGBCANMD_OFFSET UNITYSDK_OFFSET(0x13A38800)
#define EEMDFPCIKCJ_NKJLMNNNOII_OFFSET UNITYSDK_OFFSET(0x13A376B0)
#define EEMDFPCIKCJ_NMCGKDAJJON_OFFSET UNITYSDK_OFFSET(0x13A39550)
#define EEMDFPCIKCJ_NOKCAEOFBBB_OFFSET UNITYSDK_OFFSET(0x13A3A9D0)
#define EEMDFPCIKCJ_ODPCLIIOCCM_OFFSET UNITYSDK_OFFSET(0x13A3CC90)
#define EEMDFPCIKCJ_OGMDDPBHHKH_OFFSET UNITYSDK_OFFSET(0x13A37A90)
#define EEMDFPCIKCJ_OHLGICKBLKM_OFFSET UNITYSDK_OFFSET(0x13A37C20)
#define EEMDFPCIKCJ_OIBABHCPEAP_OFFSET UNITYSDK_OFFSET(0x13A3DA40)
#define EEMDFPCIKCJ_OIJLBDGLPBD_OFFSET UNITYSDK_OFFSET(0x13A392C0)
#define EEMDFPCIKCJ_OOBFLHFOLFH_OFFSET UNITYSDK_OFFSET(0x13A394D0)
#define EEMDFPCIKCJ_PHJCBBFOFLB_OFFSET UNITYSDK_OFFSET(0x13A393B0)
#define EEMDFPCIKCJ_PJCMKJFGJJP_OFFSET UNITYSDK_OFFSET(0x13A3C660)
#define EEMDFPCIKCJ_PJDOGBOLNID_OFFSET UNITYSDK_OFFSET(0x13A3C310)
#define EEMDFPCIKCJ_PLIIJGFJIIF_OFFSET UNITYSDK_OFFSET(0x13A3DD50)
#define EEMDFPCIKCJ_PLKCDHCHKMJ_OFFSET UNITYSDK_OFFSET(0x13A37790)
#define EEMDFPCIKCJ_TICK_OFFSET UNITYSDK_OFFSET(0x13A3AF20)
#define EEMDFPCIKCJ__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x13A3A1D0)

inline static constexpr unsigned int EEMDFPCIKCJ_TypeDefinitionIndex = 57344;

	class EEMDFPCIKCJ : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::Promises::Promise* NJIMOOBOKCO; // 0x18
		::RPG::GameCore::LodTemplate* HGNENGJAIAC; // 0x20
		::UnityEngine::Transform* NHFGOEDBIJG; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* DDNMKALIPEH; // 0x30
		::UnityEngine::CapsuleCollider* MNNDEKELAID; // 0x38
		::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo* PDKAIFLJCOF; // 0x40
		::RPG::Client::Promises::Promise* NLOIDGKNANH; // 0x48
		::RPG::Client::Promises::Promise* JOIGEPKIAML; // 0x50
		::System::Action_1<::RPG::GameCore::GameEntity*>* LEGGMPIFJIL; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LKGBGAJJEDK; // 0x60
		::System::String* AOOMBFICPBL; // 0x68
		::System::Exception* LMLAIDOEMCK; // 0x70
		::System::Action_1<::System::Boolean>* AAPFGCJJIOC; // 0x78
		::System::String* PDOMFHJCCBK; // 0x80
		::UnityEngine::Transform* KHJANMLGLBE; // 0x88
		::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo* EFHMNMBGNEF; // 0x90
		::RPG::Client::MockAnimator* CBPLANOPAPP; // 0x98
		::IAPOIJDMPJC* PPOHKOJMFDM; // 0xA0
		::UnityEngine::GameObject* LJOALOGMPBK; // 0xA8
		::RPG::Client::Promises::Promise* COPJLLEEHLI; // 0xB0
		::System::Collections::Generic::List_1<::RPG::Client::Promises::Promise*>* IBPCLGAECDK; // 0xB8
		::RPG::GameCore::AdventureCharacterConfig* OEBOMFMHDCD; // 0xC0
		::HEAIEBHLCMJ* MGBABGFLKHN; // 0xC8
		::System::Collections::Generic::List_1<::MDGKKKNOGHA*>* JAMMLNCOKFD; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Collider*>* HJDBFDAMKGA; // 0xD8
		::RPG::Client::AttachPointMapping* MDOMBPFNPGB; // 0xE0
		::RPG::CustomRP::CapsuleOcclusion* DCBADDPBBKF; // 0xE8
		::System::Boolean JGKMOGHIMCJ; // 0xF0
		::System::Boolean DOBOOECEJLE; // 0xF1
		::System::Nullable_1<::System::Boolean> KFPABCHDLGI; // 0xF2
		::System::Single CDPJFKKEMHH; // 0xF4
		::UnityEngine::Vector3 MEABKPGIPGB; // 0xF8
		::RPG::GameCore::EntityLoadState FMNJGFHAPEA; // 0x104
		::System::Int32 NLFEIPEIAPK; // 0x108
		::UnityEngine::Bounds KPKONAAKNFF; // 0x10C
		::System::Int32 DHMOIAAGCFK; // 0x124
		::System::Single ALLMMMCIHNO; // 0x128
		::EEMDFPCIKCJ_MeshLodState GJHKAFDFHLL; // 0x12C
		::System::Single NMNFLBLHDDM; // 0x130
		::UnityEngine::Bounds MPBIFEFGKGO; // 0x134
		// static const ::System::Object HGMKIECNDNG; // 0x0
		// static const ::System::Object FDGEKFKFMKJ; // 0x0
		// static const ::System::String* PDAIEIIIBNL; // 0x0
		// static const ::System::Object KIJHHAKOFJB; // 0x0
		// static const ::System::Object KHOMENDGBHB; // 0x0
		// static const ::System::String* PFGNCCCMBMI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_CTOR_OFFSET))(this);
		}

		::System::Void ALCOOLDPHPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_ALCOOLDPHPD_OFFSET))(this);
		}

		::System::Void HNAGPEGPPAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_HNAGPEGPPAH_OFFSET))(this);
		}

		::System::Void NKJLMNNNOII(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_NKJLMNNNOII_OFFSET))(this, a1);
		}

		::System::Void PLKCDHCHKMJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_PLKCDHCHKMJ_OFFSET))(this, a1);
		}

		::System::Void FEFOPDKOAIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_FEFOPDKOAIH_OFFSET))(this);
		}

		::System::Void JDIGABKHEJO(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_JDIGABKHEJO_OFFSET))(this, a1);
		}

		::System::Void OGMDDPBHHKH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_OGMDDPBHHKH_OFFSET))(this, a1);
		}

		::System::Void OHLGICKBLKM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_OHLGICKBLKM_OFFSET))(this, a1);
		}

		::System::Void GDHDAKILKAL(::System::String* a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_GDHDAKILKAL_OFFSET))(this, a1, a2, a3);
		}

		::MDGKKKNOGHA* IJCEJDEFENC(::System::String* a1)
		{
			return ((::MDGKKKNOGHA*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_IJCEJDEFENC_OFFSET))(this, a1);
		}

		::MDGKKKNOGHA* DBILPMMCJNN(::System::String* a1)
		{
			return ((::MDGKKKNOGHA*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_DBILPMMCJNN_OFFSET))(this, a1);
		}

		::System::Void BEHMIODBIPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_BEHMIODBIPN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* KBLOJOGDDIC()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_KBLOJOGDDIC_OFFSET))(this);
		}

		::System::Void BJEGMMKGHGB(::UnityEngine::SkinnedMeshRenderer* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::String*))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_BJEGMMKGHGB_OFFSET))(this, a1, a2);
		}

		::System::Void JBOFLBKHFMI(::UnityEngine::SkinnedMeshRenderer* a1, ::UnityEngine::Mesh* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_JBOFLBKHFMI_OFFSET))(this, a1, a2);
		}

		::System::Void MCKAJCDKICL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_MCKAJCDKICL_OFFSET))(this);
		}

		::System::Void CKHBPKAEGLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_CKHBPKAEGLF_OFFSET))(this);
		}

		::System::Void CBAGHIMPPJP(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_CBAGHIMPPJP_OFFSET))(this, a1);
		}

		::System::Void NJADGBCANMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_NJADGBCANMD_OFFSET))(this);
		}

		::System::Int32 OIJLBDGLPBD(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_OIJLBDGLPBD_OFFSET))(this, a1);
		}

		::System::Void PHJCBBFOFLB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_PHJCBBFOFLB_OFFSET))(this, a1);
		}

		::System::Void EJJCBGCDABA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_EJJCBGCDABA_OFFSET))(this, a1);
		}

		::System::Void OOBFLHFOLFH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_OOBFLHFOLFH_OFFSET))(this, a1);
		}

		::System::Void NMCGKDAJJON(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_NMCGKDAJJON_OFFSET))(this, a1);
		}

		::System::Void JCNBNEPOJOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_JCNBNEPOJOP_OFFSET))(this);
		}

		::System::Void HJDDPFMBENH(::RPG::GameCore::EntityLodDetail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodDetail*))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_HJDDPFMBENH_OFFSET))(this, a1);
		}

		::System::Void CDKNKMLIOAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_CDKNKMLIOAK_OFFSET))(this);
		}

		::System::Void MGNHHPCBLJM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_MGNHHPCBLJM_OFFSET))(this, a1);
		}

		::System::Void JNCEDBJNPCO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_JNCEDBJNPCO_OFFSET))(this, a1);
		}

		::RPG::GameCore::EntityLoadState get_LoadState()
		{
			return ((::RPG::GameCore::EntityLoadState(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_GET_LOADSTATE_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetModelGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_GETMODELGO_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetModelArt()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_GETMODELART_OFFSET))(this);
		}

		::RPG::Client::MockAnimator* get_MockAnimator()
		{
			return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_GET_MOCKANIMATOR_OFFSET))(this);
		}

		::System::Int32 JJPIDLADLCN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_JJPIDLADLCN_OFFSET))(this);
		}

		::System::Single CLKCALGBIOO(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_CLKCALGBIOO_OFFSET))(this, a1);
		}

		::UnityEngine::Animator* MLHPMDFCKLJ()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_MLHPMDFCKLJ_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo* a1, ::RPG::GameCore::AdventureCharacterConfig* a2, ::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo* a3, ::UnityEngine::Vector3 a4, ::System::Action_1<::RPG::GameCore::GameEntity*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo*, ::RPG::GameCore::AdventureCharacterConfig*, ::RPG::Client::ArtNPCPedestrianAssetConfig_ArtVariantInfo*, ::UnityEngine::Vector3, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_LMCEDCHJKFF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_TICK_OFFSET))(this, a1);
		}

		::System::Void CNAPOOPIAAI(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_CNAPOOPIAAI_OFFSET))(this, a1, a2);
		}

		::System::Void KHIMHKPIMGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_KHIMHKPIMGJ_OFFSET))(this);
		}

		::System::Void AHKEGKNPBPJ(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_AHKEGKNPBPJ_OFFSET))(this, a1, a2);
		}

		::System::Void MGCJADOONGI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_MGCJADOONGI_OFFSET))(this, a1);
		}

		::System::Void JNMOPOHALBK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_JNMOPOHALBK_OFFSET))(this, a1);
		}

		::System::Single DANGLDJGPCC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_DANGLDJGPCC_OFFSET))(this);
		}

		::System::Void DCFLHFIDJOK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_DCFLHFIDJOK_OFFSET))(this, a1);
		}

		::System::Void PJDOGBOLNID(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_PJDOGBOLNID_OFFSET))(this, a1);
		}

		::System::Void IHHEJNHLPMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_IHHEJNHLPMN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* FDMPIHMIJOE()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_FDMPIHMIJOE_OFFSET))(this);
		}

		::System::Void PJCMKJFGJJP(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_PJCMKJFGJJP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* ODPCLIIOCCM()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_ODPCLIIOCCM_OFFSET))(this);
		}

		::System::Void KLJBCCMOBLP(::UnityEngine::RuntimeAnimatorController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeAnimatorController*))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_KLJBCCMOBLP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* DPHEJJPHEBH()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_DPHEJJPHEBH_OFFSET))(this);
		}

		::System::Void JPCHMGNHLFN(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_JPCHMGNHLFN_OFFSET))(this, a1);
		}

		::System::Void AFOENCPABMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_AFOENCPABMH_OFFSET))(this);
		}

		::System::Void BFFNFBECPDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_BFFNFBECPDE_OFFSET))(this);
		}

		::System::Void IFONOHLCEGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_IFONOHLCEGA_OFFSET))(this);
		}

		::System::Void AKBEOCEEHFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_AKBEOCEEHFC_OFFSET))(this);
		}

		::System::Void KCIHCMMDDNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_KCIHCMMDDNM_OFFSET))(this);
		}

		::System::String* HMOCOGGLGAP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_HMOCOGGLGAP_OFFSET))(this);
		}

		::System::Void FDCOPPKAMFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_FDCOPPKAMFL_OFFSET))(this);
		}

		::System::Void FCOBBMDCKDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_FCOBBMDCKDG_OFFSET))(this);
		}

		::System::Void LIODJEEPBNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_LIODJEEPBNC_OFFSET))(this);
		}

		::System::Void AAEKJNLAJEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_AAEKJNLAJEC_OFFSET))(this);
		}

		::System::Void IGMNECLFIJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_IGMNECLFIJD_OFFSET))(this);
		}

		::RPG::GameCore::FreeStyleComponent* ILIFJAGJEFB()
		{
			return ((::RPG::GameCore::FreeStyleComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_ILIFJAGJEFB_OFFSET))(this);
		}

		::System::Void AGPHBLGBODG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_AGPHBLGBODG_OFFSET))(this, a1);
		}

		::System::Boolean PLIIJGFJIIF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_PLIIJGFJIIF_OFFSET))(this);
		}

		::System::Void LJGFPKIBBEJ(::RPG::GameCore::ColliderConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ColliderConfig*))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_LJGFPKIBBEJ_OFFSET))(this, a1);
		}

		::System::Void EDPFKFFEEFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_EDPFKFFEEFD_OFFSET))(this);
		}

		::System::Void DKKAHMJFHOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_DKKAHMJFHOP_OFFSET))(this);
		}

		::System::Void NEAFLEKFANC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_NEAFLEKFANC_OFFSET))(this);
		}

		::System::Void NOKCAEOFBBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_NOKCAEOFBBB_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* DONJMGHDNIM()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_DONJMGHDNIM_OFFSET))(this);
		}

		::System::Void OIBABHCPEAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_OIBABHCPEAP_OFFSET))(this);
		}

		::System::Void KEMLPODAFMF(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_KEMLPODAFMF_OFFSET))(this, a1);
		}

		::System::Void IIIFCOHCFIP(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_IIIFCOHCFIP_OFFSET))(this, a1);
		}

		::System::Void ABCMNBHIAKM(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_ABCMNBHIAKM_OFFSET))(this, a1);
		}

		::System::String* MGLLPAJCDGB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_MGLLPAJCDGB_OFFSET))(this);
		}

		::System::Boolean INFBNFDPKAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_INFBNFDPKAF_OFFSET))(this);
		}

		::System::Int32 NAKHEIAKAEO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMDFPCIKCJ_NAKHEIAKAEO_OFFSET))(this);
		}

	};
