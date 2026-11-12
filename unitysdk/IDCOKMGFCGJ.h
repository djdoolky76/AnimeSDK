#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPKACEPPPCA_StreamingFeatureType.h"
#include "unitysdk/IDCOKMGFCGJ_ForceEntityLodReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/LockEntityStreamingReason.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Bounds.h"
class ANLGLFPLOBC;
class BLOBBPLCDDM;
class DIFMKJMFKOK;
class EJPKILIHMFL;
class GDKHHPPIFBC;
class HPKACEPPPCA;
class IHOMABBDNPN;
class LJFHKAJPFNE;
class LJLDEDPLHIL;
class PKLHDDGKKOC;
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class NpcMonoLod; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class EntityLodDetail; }
namespace RPG::GameCore { class EntityLodTemplate; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropConfig; }
namespace RPG::GameCore { class PropRow; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define IDCOKMGFCGJ_ABKDAJAFIDA_OFFSET UNITYSDK_OFFSET(0x16E1D310)
#define IDCOKMGFCGJ_ABLIJFHHMHJ_OFFSET UNITYSDK_OFFSET(0x16E1FC90)
#define IDCOKMGFCGJ_ABNPOKNJLFB_OFFSET UNITYSDK_OFFSET(0x16E1B0E0)
#define IDCOKMGFCGJ_ACMHGABDGKJ_OFFSET UNITYSDK_OFFSET(0x16E1C0A0)
#define IDCOKMGFCGJ_AKIAPINIOMD_OFFSET UNITYSDK_OFFSET(0x16E1EE30)
#define IDCOKMGFCGJ_AMAJKHHACOG_OFFSET UNITYSDK_OFFSET(0x16E20510)
#define IDCOKMGFCGJ_BEDCAOLJFPJ_OFFSET UNITYSDK_OFFSET(0x16E1FA20)
#define IDCOKMGFCGJ_BGKKDCDCOKI_OFFSET UNITYSDK_OFFSET(0x16E1B780)
#define IDCOKMGFCGJ_BHGEEOCGMOD_OFFSET UNITYSDK_OFFSET(0x16E1B870)
#define IDCOKMGFCGJ_BODMLGDJFMM_OFFSET UNITYSDK_OFFSET(0x16E1FD10)
#define IDCOKMGFCGJ_BPPDBFMLGNP_OFFSET UNITYSDK_OFFSET(0x16E1CD70)
#define IDCOKMGFCGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x16E209B0)
#define IDCOKMGFCGJ_CJCGLNMJKCJ_OFFSET UNITYSDK_OFFSET(0x16E1B800)
#define IDCOKMGFCGJ_CJDLNELBOBL_OFFSET UNITYSDK_OFFSET(0x16E1C920)
#define IDCOKMGFCGJ_CNMKBEDKBNE_OFFSET UNITYSDK_OFFSET(0x16E1F850)
#define IDCOKMGFCGJ_CPKMNLBEKPI_OFFSET UNITYSDK_OFFSET(0x16E1C880)
#define IDCOKMGFCGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16E20910)
#define IDCOKMGFCGJ_DECPAOKFEFK_OFFSET UNITYSDK_OFFSET(0x16E1C590)
#define IDCOKMGFCGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E1C2E0)
#define IDCOKMGFCGJ_DMDICEGEIOF_OFFSET UNITYSDK_OFFSET(0x16E1B3A0)
#define IDCOKMGFCGJ_DPKKNFCNLAD_OFFSET UNITYSDK_OFFSET(0x16E1E060)
#define IDCOKMGFCGJ_EDDNPLHPCGE_OFFSET UNITYSDK_OFFSET(0x16E1B1F0)
#define IDCOKMGFCGJ_EHGCNNPOGLI_OFFSET UNITYSDK_OFFSET(0x16E201F0)
#define IDCOKMGFCGJ_EIHJMFMAJJG_OFFSET UNITYSDK_OFFSET(0x16E1BE40)
#define IDCOKMGFCGJ_EJJCBGCDABA_OFFSET UNITYSDK_OFFSET(0x16E1C740)
#define IDCOKMGFCGJ_EONHHMBLKPO_OFFSET UNITYSDK_OFFSET(0x16E1EEA0)
#define IDCOKMGFCGJ_FADBIMLLENO_OFFSET UNITYSDK_OFFSET(0x16E1E610)
#define IDCOKMGFCGJ_FAGNOIPNCJB_OFFSET UNITYSDK_OFFSET(0x16E20190)
#define IDCOKMGFCGJ_FCOJDCDGCJO_OFFSET UNITYSDK_OFFSET(0x16E1E6C0)
#define IDCOKMGFCGJ_FFEELCPMOEB_OFFSET UNITYSDK_OFFSET(0x16E202B0)
#define IDCOKMGFCGJ_GAPJMPJELMA_OFFSET UNITYSDK_OFFSET(0x16E1F220)
#define IDCOKMGFCGJ_GDLJMFGBEKM_OFFSET UNITYSDK_OFFSET(0x16E20300)
#define IDCOKMGFCGJ_GET_ISMOVEABLE_OFFSET UNITYSDK_OFFSET(0x16E20160)
#define IDCOKMGFCGJ_GLHFHAHHLGD_OFFSET UNITYSDK_OFFSET(0x16E1B080)
#define IDCOKMGFCGJ_GOIOMIOJMCB_OFFSET UNITYSDK_OFFSET(0x16E1E370)
#define IDCOKMGFCGJ_HGGILJLOJMA_OFFSET UNITYSDK_OFFSET(0x16E1C110)
#define IDCOKMGFCGJ_HLLEHCGPNEL_OFFSET UNITYSDK_OFFSET(0x16E1CA80)
#define IDCOKMGFCGJ_HLPLKLOHHHE_OFFSET UNITYSDK_OFFSET(0x16E1BF60)
#define IDCOKMGFCGJ_IFFPOGACBCP_OFFSET UNITYSDK_OFFSET(0x16E1FE50)
#define IDCOKMGFCGJ_INIKAJCFPOL_OFFSET UNITYSDK_OFFSET(0x16E1C170)
#define IDCOKMGFCGJ_IOJDCKFILDB_OFFSET UNITYSDK_OFFSET(0x16E1FB90)
#define IDCOKMGFCGJ_JALMOHFLLNE_OFFSET UNITYSDK_OFFSET(0x16E1BFA0)
#define IDCOKMGFCGJ_JDCKPPJACLG_OFFSET UNITYSDK_OFFSET(0x16E20040)
#define IDCOKMGFCGJ_JHJLMAKHMHF_OFFSET UNITYSDK_OFFSET(0x16E1F190)
#define IDCOKMGFCGJ_JMEBKKAIBHJ_OFFSET UNITYSDK_OFFSET(0x16E20380)
#define IDCOKMGFCGJ_JMMMDKDKJKL_OFFSET UNITYSDK_OFFSET(0x16E20720)
#define IDCOKMGFCGJ_KEEGOFAKEHN_OFFSET UNITYSDK_OFFSET(0x16E1C200)
#define IDCOKMGFCGJ_KIJBIHEKAAJ_OFFSET UNITYSDK_OFFSET(0x16E1C280)
#define IDCOKMGFCGJ_KLIKJIKDPNN_OFFSET UNITYSDK_OFFSET(0x16E20180)
#define IDCOKMGFCGJ_KMCAPFCGBNP_OFFSET UNITYSDK_OFFSET(0x16E1FD90)
#define IDCOKMGFCGJ_KMNKNKHFOLA_OFFSET UNITYSDK_OFFSET(0x16E1B430)
#define IDCOKMGFCGJ_LHMCEPHJMHD_OFFSET UNITYSDK_OFFSET(0x16E1AF90)
#define IDCOKMGFCGJ_MGKPEINAKNG_OFFSET UNITYSDK_OFFSET(0x16E1B130)
#define IDCOKMGFCGJ_NAMCCNHICLG_OFFSET UNITYSDK_OFFSET(0x16E20460)
#define IDCOKMGFCGJ_NBNHGEJFBEH_OFFSET UNITYSDK_OFFSET(0x16E1FEF0)
#define IDCOKMGFCGJ_NDGADCGPCNE_OFFSET UNITYSDK_OFFSET(0x16E20250)
#define IDCOKMGFCGJ_OELLPHKLNKK_OFFSET UNITYSDK_OFFSET(0x16E1CEA0)
#define IDCOKMGFCGJ_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x16E1C830)
#define IDCOKMGFCGJ_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x16E1C4D0)
#define IDCOKMGFCGJ_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x16E1C6A0)
#define IDCOKMGFCGJ_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x16E1C520)
#define IDCOKMGFCGJ_PJFEMGPPPBA_OFFSET UNITYSDK_OFFSET(0x16E1F580)
#define IDCOKMGFCGJ_PNBOHCPLCNC_OFFSET UNITYSDK_OFFSET(0x16E1FFB0)
#define IDCOKMGFCGJ_POKBMGPHIIO_OFFSET UNITYSDK_OFFSET(0x16E1FDF0)
#define IDCOKMGFCGJ_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x16E20780)
#define IDCOKMGFCGJ_SET_ISMOVEABLE_OFFSET UNITYSDK_OFFSET(0x16E20170)
#define IDCOKMGFCGJ_TICK_OFFSET UNITYSDK_OFFSET(0x16E1FC10)

inline static constexpr unsigned int IDCOKMGFCGJ_TypeDefinitionIndex = 58479;

	class IDCOKMGFCGJ : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::PropComponent* IGLCEJGPMJN; // 0x18
		::RPG::GameCore::EntityLodDetail* NAGPCEJPING; // 0x20
		::RPG::GameCore::AdventureCharacterController* DJFMDJHOAJO; // 0x28
		::LJLDEDPLHIL* PMBJGKOKPMC; // 0x30
		::RPG::Client::Stage* PDAIGLPEMEE; // 0x38
		::ANLGLFPLOBC* KIBBNOCADLC; // 0x40
		::IHOMABBDNPN* OOGKPHFFOOB; // 0x48
		::RPG::GameCore::EntityLodTemplate* ODIAIHHPEKC; // 0x50
		::EJPKILIHMFL* GNKODBBHIJI; // 0x58
		::RPG::GameCore::NPCComponent* OJAIBDDGDME; // 0x60
		::RPG::GameCore::CharacterModelComponent* EHFENKGDGJD; // 0x68
		::RPG::GameCore::TransformComponent* NELGDHJKAJJ; // 0x70
		::DIFMKJMFKOK* FJFHCCEOINJ; // 0x78
		::System::Collections::Generic::List_1<::System::Single>* MEEAMGHNIBB; // 0x80
		::PKLHDDGKKOC* KBLNOFHLAMD; // 0x88
		::RPG::Client::NpcMonoLod* MPJAEDHDFBK; // 0x90
		::RPG::GameCore::CharacterVisibleComponent* JAOPNEJFELA; // 0x98
		::BLOBBPLCDDM* BFPODJOCLIE; // 0xA0
		::System::Collections::Generic::List_1<::System::Int32>* NGFDBOJIDKL; // 0xA8
		::RPG::GameCore::EntityLodTemplateName DKALEOEIJAG; // 0xB0
		::System::Single FCPMCKHHGCK; // 0xB4
		::RPG::Client::ReasonBool_1<::RPG::GameCore::LockEntityStreamingReason> BIMGAPKFFPH; // 0xB8
		::System::Boolean ANGAIGLBELJ; // 0xC0
		::System::Boolean INOCABNHKGK; // 0xC1
		::System::Boolean ELHEEEFNFNC; // 0xC2
		::System::Boolean LBNBPMIFDHI; // 0xC3
		::System::Single FDCMDHFIBKC; // 0xC4
		::RPG::GameCore::EntityLodTemplateName LOJBDLFPIGE; // 0xC8
		::System::Int32 DHMOIAAGCFK; // 0xCC
		::System::Boolean CGHCKFOMCCA; // 0xD0
		::System::Boolean DIMECBLLOGB; // 0xD1
		::System::Boolean _IsMoveable_k__BackingField; // 0xD2
		::System::Boolean GFAMGLFOMGI; // 0xD3
		::System::Int32 NEOEPKMILKD; // 0xD4
		::System::Single DGBOJJLJNOJ; // 0xD8
		::UnityEngine::Vector3 IKKNJMJCDOJ; // 0xDC
		::RPG::GameCore::EntityLodTemplateName PDPMCENCKHE; // 0xE8
		::System::Boolean PMOJILOJEPE; // 0xEC
		::System::Boolean IKPOHDLOEEG; // 0xED
		::System::Boolean HMKFOCMIFHA; // 0xEE
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 GPFEGGMFEBG; // 0xF0
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_BDDECGPCNFP()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0x2B400);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_JAHHHLENPON()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0x2B408);
		}

		static ::System::Collections::Generic::List_1<::System::Single>** StaticGet_IHEBFHMFPPL()
		{
			return (::System::Collections::Generic::List_1<::System::Single>**)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0x2B410);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_AALCEMPLCIM()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0x2B418);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_KAFCKHLCCAB()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0x2B420);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_PHIKJONMDBO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0x2B428);
		}

		static ::System::Single* StaticGet_KGHJKOAOEMG()
		{
			return (::System::Single*)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0x8E50);
		}

		static ::System::Int32* StaticGet_GBOOELMDPLL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0x8E54);
		}

		static ::System::Int32* StaticGet_AJJAHBPAKOJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0x8E58);
		}

		static ::System::Int32* StaticGet_NONCOJNJEFA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0x8E5C);
		}

		static ::System::Single* StaticGet_OANFMNALHPN()
		{
			return (::System::Single*)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0x8E60);
		}

		static ::System::Int32* StaticGet_GKGCIDICMMM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0x8E64);
		}

		static ::System::Int32* StaticGet_JKIJELCAEJC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0x8E68);
		}

		// static const ::System::Object CENOOEDGIBD; // 0x0
		// static const ::System::Object KIKFNMMCJGC; // 0x0
		// static const ::System::Object BMLPHPOFHNJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_CCTOR_OFFSET))();
		}

		::System::Void LHMCEPHJMHD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_LHMCEPHJMHD_OFFSET))(this, a1);
		}

		::System::Void GLHFHAHHLGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_GLHFHAHHLGD_OFFSET))(this);
		}

		::System::Void ABNPOKNJLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_ABNPOKNJLFB_OFFSET))(this);
		}

		::System::Void EDDNPLHPCGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_EDDNPLHPCGE_OFFSET))(this);
		}

		::System::Void DMDICEGEIOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_DMDICEGEIOF_OFFSET))(this);
		}

		::System::Void KMNKNKHFOLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_KMNKNKHFOLA_OFFSET))(this);
		}

		::System::Void CJCGLNMJKCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_CJCGLNMJKCJ_OFFSET))(this);
		}

		::System::Void BHGEEOCGMOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_BHGEEOCGMOD_OFFSET))(this);
		}

		::System::Void MGKPEINAKNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_MGKPEINAKNG_OFFSET))(this);
		}

		::System::Boolean BGKKDCDCOKI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_BGKKDCDCOKI_OFFSET))(this);
		}

		::System::Void EIHJMFMAJJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_EIHJMFMAJJG_OFFSET))(this);
		}

		::System::Void HLPLKLOHHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_HLPLKLOHHHE_OFFSET))(this);
		}

		::System::Void JALMOHFLLNE(::System::String* a1, ::UnityEngine::SkinnedMeshRenderer* a2, ::UnityEngine::Mesh* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_JALMOHFLLNE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ACMHGABDGKJ(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_ACMHGABDGKJ_OFFSET))(this, a1, a2);
		}

		::System::Void HGGILJLOJMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_HGGILJLOJMA_OFFSET))(this);
		}

		::System::Void INIKAJCFPOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_INIKAJCFPOL_OFFSET))(this);
		}

		::System::Void KEEGOFAKEHN(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_KEEGOFAKEHN_OFFSET))(this, a1, a2);
		}

		::System::Boolean KIJBIHEKAAJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_KIJBIHEKAAJ_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void CPKMNLBEKPI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_CPKMNLBEKPI_OFFSET))(this, a1);
		}

		::System::Void HLLEHCGPNEL(::RPG::Client::Stage* a1, ::RPG::GameCore::EntityLodTemplateName a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*, ::RPG::GameCore::EntityLodTemplateName, ::System::Boolean))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_HLLEHCGPNEL_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::GameCore::EntityLodTemplateName ABKDAJAFIDA(::RPG::GameCore::PropRow* a1, ::RPG::GameCore::PropConfig* a2, ::UnityEngine::GameObject* a3, ::GDKHHPPIFBC* a4, ::RPG::Client::MapPropDef* a5, ::LJLDEDPLHIL* a6)
		{
			return ((::RPG::GameCore::EntityLodTemplateName(*)(::RPG::GameCore::PropRow*, ::RPG::GameCore::PropConfig*, ::UnityEngine::GameObject*, ::GDKHHPPIFBC*, ::RPG::Client::MapPropDef*, ::LJLDEDPLHIL*))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_ABKDAJAFIDA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void DPKKNFCNLAD(::RPG::GameCore::PropRow* a1, ::System::Single a2, ::System::Single a3, ::RPG::GameCore::EntityLodTemplateName a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::PropRow*, ::System::Single, ::System::Single, ::RPG::GameCore::EntityLodTemplateName))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_DPKKNFCNLAD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single GOIOMIOJMCB(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_GOIOMIOJMCB_OFFSET))(a1);
		}

		::System::Void FADBIMLLENO(::RPG::GameCore::EntityLodTemplateName a1, ::LJLDEDPLHIL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodTemplateName, ::LJLDEDPLHIL*))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_FADBIMLLENO_OFFSET))(this, a1, a2);
		}

		::System::Void FCOJDCDGCJO(::RPG::GameCore::EntityLodTemplateName a1, ::RPG::GameCore::LevelLittleGameInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodTemplateName, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_FCOJDCDGCJO_OFFSET))(this, a1, a2);
		}

		::System::Void EONHHMBLKPO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_EONHHMBLKPO_OFFSET))(this, a1);
		}

		::System::Void GAPJMPJELMA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_GAPJMPJELMA_OFFSET))(this, a1);
		}

		::System::Void PJFEMGPPPBA(::RPG::GameCore::EntityLodTemplateName a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodTemplateName))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_PJFEMGPPPBA_OFFSET))(this, a1);
		}

		::LJFHKAJPFNE* CJDLNELBOBL()
		{
			return ((::LJFHKAJPFNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_CJDLNELBOBL_OFFSET))(this);
		}

		::LJFHKAJPFNE* DECPAOKFEFK()
		{
			return ((::LJFHKAJPFNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_DECPAOKFEFK_OFFSET))(this);
		}

		::System::Void OELLPHKLNKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_OELLPHKLNKK_OFFSET))(this);
		}

		::System::Void CNMKBEDKBNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_CNMKBEDKBNE_OFFSET))(this);
		}

		::System::Void BEDCAOLJFPJ(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_BEDCAOLJFPJ_OFFSET))(this, a1);
		}

		::System::Void IOJDCKFILDB(::System::Int32 a1, ::RPG::GameCore::EntityLodDetail* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::EntityLodDetail*, ::System::Boolean))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_IOJDCKFILDB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EJJCBGCDABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_EJJCBGCDABA_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_TICK_OFFSET))(this, a1);
		}

		::System::Void ABLIJFHHMHJ(::RPG::GameCore::LockEntityStreamingReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LockEntityStreamingReason))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_ABLIJFHHMHJ_OFFSET))(this, a1);
		}

		::System::Void BODMLGDJFMM(::RPG::GameCore::LockEntityStreamingReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LockEntityStreamingReason))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_BODMLGDJFMM_OFFSET))(this, a1);
		}

		::System::Void AKIAPINIOMD(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_AKIAPINIOMD_OFFSET))(this, a1);
		}

		::RPG::GameCore::EntityLodTemplateName JHJLMAKHMHF()
		{
			return ((::RPG::GameCore::EntityLodTemplateName(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_JHJLMAKHMHF_OFFSET))(this);
		}

		::System::Void BPPDBFMLGNP(::RPG::GameCore::EntityLodTemplateName a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodTemplateName))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_BPPDBFMLGNP_OFFSET))(this, a1);
		}

		::System::Boolean KMCAPFCGBNP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_KMCAPFCGBNP_OFFSET))(this);
		}

		::System::Boolean POKBMGPHIIO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_POKBMGPHIIO_OFFSET))(this);
		}

		::System::Boolean IFFPOGACBCP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_IFFPOGACBCP_OFFSET))(this);
		}

		::UnityEngine::Vector3 NBNHGEJFBEH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_NBNHGEJFBEH_OFFSET))(this);
		}

		::UnityEngine::Vector3 PNBOHCPLCNC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_PNBOHCPLCNC_OFFSET))(this);
		}

		::UnityEngine::Bounds JDCKPPJACLG()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_JDCKPPJACLG_OFFSET))(this);
		}

		::System::Boolean get_IsMoveable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_GET_ISMOVEABLE_OFFSET))(this);
		}

		::System::Void set_IsMoveable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_SET_ISMOVEABLE_OFFSET))(this, a1);
		}

		::System::Int32 KLIKJIKDPNN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_KLIKJIKDPNN_OFFSET))(this);
		}

		::System::Int32 FAGNOIPNCJB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_FAGNOIPNCJB_OFFSET))(this);
		}

		::System::Int32 EHGCNNPOGLI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_EHGCNNPOGLI_OFFSET))(this);
		}

		::System::Void NDGADCGPCNE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_NDGADCGPCNE_OFFSET))(this, a1);
		}

		::System::Boolean FFEELCPMOEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_FFEELCPMOEB_OFFSET))(this);
		}

		::System::Boolean GDLJMFGBEKM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_GDLJMFGBEKM_OFFSET))(this);
		}

		::HPKACEPPPCA_StreamingFeatureType JMEBKKAIBHJ()
		{
			return ((::HPKACEPPPCA_StreamingFeatureType(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_JMEBKKAIBHJ_OFFSET))(this);
		}

		::System::Void NAMCCNHICLG(::IDCOKMGFCGJ_ForceEntityLodReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDCOKMGFCGJ_ForceEntityLodReason))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_NAMCCNHICLG_OFFSET))(this, a1);
		}

		::System::Void JMMMDKDKJKL(::IDCOKMGFCGJ_ForceEntityLodReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDCOKMGFCGJ_ForceEntityLodReason))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_JMMMDKDKJKL_OFFSET))(this, a1);
		}

		::System::Void AMAJKHHACOG(::System::Int32 a1, ::IDCOKMGFCGJ_ForceEntityLodReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::IDCOKMGFCGJ_ForceEntityLodReason))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_AMAJKHHACOG_OFFSET))(this, a1, a2);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_RESETTODEFAULT_OFFSET))(this);
		}

	};
