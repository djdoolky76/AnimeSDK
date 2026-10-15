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

#define IDCOKMGFCGJ_ABKDAJAFIDA_OFFSET UNITYSDK_OFFSET(0x15EB0920)
#define IDCOKMGFCGJ_ABLIJFHHMHJ_OFFSET UNITYSDK_OFFSET(0x15EB3690)
#define IDCOKMGFCGJ_ABNPOKNJLFB_OFFSET UNITYSDK_OFFSET(0x15EAE940)
#define IDCOKMGFCGJ_ACMHGABDGKJ_OFFSET UNITYSDK_OFFSET(0x15EAF960)
#define IDCOKMGFCGJ_AKIAPINIOMD_OFFSET UNITYSDK_OFFSET(0x15EB25B0)
#define IDCOKMGFCGJ_AMAJKHHACOG_OFFSET UNITYSDK_OFFSET(0x15EB3F10)
#define IDCOKMGFCGJ_BEDCAOLJFPJ_OFFSET UNITYSDK_OFFSET(0x15EB3400)
#define IDCOKMGFCGJ_BGKKDCDCOKI_OFFSET UNITYSDK_OFFSET(0x15EAEF80)
#define IDCOKMGFCGJ_BHGEEOCGMOD_OFFSET UNITYSDK_OFFSET(0x15EAF080)
#define IDCOKMGFCGJ_BODMLGDJFMM_OFFSET UNITYSDK_OFFSET(0x15EB3710)
#define IDCOKMGFCGJ_BPPDBFMLGNP_OFFSET UNITYSDK_OFFSET(0x15EB0370)
#define IDCOKMGFCGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x15EB43A0)
#define IDCOKMGFCGJ_CJCGLNMJKCJ_OFFSET UNITYSDK_OFFSET(0x15EAF000)
#define IDCOKMGFCGJ_CNMKBEDKBNE_OFFSET UNITYSDK_OFFSET(0x15EB3120)
#define IDCOKMGFCGJ_CPKMNLBEKPI_OFFSET UNITYSDK_OFFSET(0x15EAFF90)
#define IDCOKMGFCGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15EB4300)
#define IDCOKMGFCGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15EAFBA0)
#define IDCOKMGFCGJ_DMDICEGEIOF_OFFSET UNITYSDK_OFFSET(0x15EAEC10)
#define IDCOKMGFCGJ_DPKKNFCNLAD_OFFSET UNITYSDK_OFFSET(0x15EB17E0)
#define IDCOKMGFCGJ_EDDNPLHPCGE_OFFSET UNITYSDK_OFFSET(0x15EAEA50)
#define IDCOKMGFCGJ_EHGCNNPOGLI_OFFSET UNITYSDK_OFFSET(0x15EB3BF0)
#define IDCOKMGFCGJ_EIHJMFMAJJG_OFFSET UNITYSDK_OFFSET(0x15EAF600)
#define IDCOKMGFCGJ_EJJCBGCDABA_OFFSET UNITYSDK_OFFSET(0x15EAF720)
#define IDCOKMGFCGJ_EONHHMBLKPO_OFFSET UNITYSDK_OFFSET(0x15EB2620)
#define IDCOKMGFCGJ_FADBIMLLENO_OFFSET UNITYSDK_OFFSET(0x15EB1D90)
#define IDCOKMGFCGJ_FAGNOIPNCJB_OFFSET UNITYSDK_OFFSET(0x15EB3B90)
#define IDCOKMGFCGJ_FCOJDCDGCJO_OFFSET UNITYSDK_OFFSET(0x15EB1E40)
#define IDCOKMGFCGJ_FFEELCPMOEB_OFFSET UNITYSDK_OFFSET(0x15EB3CB0)
#define IDCOKMGFCGJ_GAPJMPJELMA_OFFSET UNITYSDK_OFFSET(0x15EB2A10)
#define IDCOKMGFCGJ_GDLJMFGBEKM_OFFSET UNITYSDK_OFFSET(0x15EB3D00)
#define IDCOKMGFCGJ_GET_ISMOVEABLE_OFFSET UNITYSDK_OFFSET(0x15EB3B60)
#define IDCOKMGFCGJ_GLHFHAHHLGD_OFFSET UNITYSDK_OFFSET(0x15EAE8E0)
#define IDCOKMGFCGJ_GOIOMIOJMCB_OFFSET UNITYSDK_OFFSET(0x15EB1AF0)
#define IDCOKMGFCGJ_HGGILJLOJMA_OFFSET UNITYSDK_OFFSET(0x15EAF9D0)
#define IDCOKMGFCGJ_HLLEHCGPNEL_OFFSET UNITYSDK_OFFSET(0x15EB0090)
#define IDCOKMGFCGJ_HLPLKLOHHHE_OFFSET UNITYSDK_OFFSET(0x15EAF820)
#define IDCOKMGFCGJ_IFFPOGACBCP_OFFSET UNITYSDK_OFFSET(0x15EB3850)
#define IDCOKMGFCGJ_INIKAJCFPOL_OFFSET UNITYSDK_OFFSET(0x15EAFA30)
#define IDCOKMGFCGJ_IOJDCKFILDB_OFFSET UNITYSDK_OFFSET(0x15EB3590)
#define IDCOKMGFCGJ_JALMOHFLLNE_OFFSET UNITYSDK_OFFSET(0x15EAF860)
#define IDCOKMGFCGJ_JDCKPPJACLG_OFFSET UNITYSDK_OFFSET(0x15EB3A40)
#define IDCOKMGFCGJ_JHJLMAKHMHF_OFFSET UNITYSDK_OFFSET(0x15EB2980)
#define IDCOKMGFCGJ_JMEBKKAIBHJ_OFFSET UNITYSDK_OFFSET(0x15EB3D80)
#define IDCOKMGFCGJ_JMMMDKDKJKL_OFFSET UNITYSDK_OFFSET(0x15EB4120)
#define IDCOKMGFCGJ_KEEGOFAKEHN_OFFSET UNITYSDK_OFFSET(0x15EAFAC0)
#define IDCOKMGFCGJ_KIJBIHEKAAJ_OFFSET UNITYSDK_OFFSET(0x15EAFB40)
#define IDCOKMGFCGJ_KLIKJIKDPNN_OFFSET UNITYSDK_OFFSET(0x15EB3B80)
#define IDCOKMGFCGJ_KMCAPFCGBNP_OFFSET UNITYSDK_OFFSET(0x15EB3790)
#define IDCOKMGFCGJ_KMNKNKHFOLA_OFFSET UNITYSDK_OFFSET(0x15EAECA0)
#define IDCOKMGFCGJ_LHMCEPHJMHD_OFFSET UNITYSDK_OFFSET(0x15EAE7A0)
#define IDCOKMGFCGJ_MGKPEINAKNG_OFFSET UNITYSDK_OFFSET(0x15EAE990)
#define IDCOKMGFCGJ_NAMCCNHICLG_OFFSET UNITYSDK_OFFSET(0x15EB3E60)
#define IDCOKMGFCGJ_NBNHGEJFBEH_OFFSET UNITYSDK_OFFSET(0x15EB3900)
#define IDCOKMGFCGJ_NDGADCGPCNE_OFFSET UNITYSDK_OFFSET(0x15EB3C50)
#define IDCOKMGFCGJ_OELLPHKLNKK_OFFSET UNITYSDK_OFFSET(0x15EB04A0)
#define IDCOKMGFCGJ_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x15EAFF40)
#define IDCOKMGFCGJ_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x15EAFDF0)
#define IDCOKMGFCGJ_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x15EAFEA0)
#define IDCOKMGFCGJ_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x15EAFE40)
#define IDCOKMGFCGJ_PJFEMGPPPBA_OFFSET UNITYSDK_OFFSET(0x15EB2DE0)
#define IDCOKMGFCGJ_PNBOHCPLCNC_OFFSET UNITYSDK_OFFSET(0x15EB39B0)
#define IDCOKMGFCGJ_POKBMGPHIIO_OFFSET UNITYSDK_OFFSET(0x15EB37F0)
#define IDCOKMGFCGJ_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x15EB4180)
#define IDCOKMGFCGJ_SET_ISMOVEABLE_OFFSET UNITYSDK_OFFSET(0x15EB3B70)
#define IDCOKMGFCGJ_TICK_OFFSET UNITYSDK_OFFSET(0x15EB3610)

inline static constexpr unsigned int IDCOKMGFCGJ_TypeDefinitionIndex = 57252;

	class IDCOKMGFCGJ : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::PKLHDDGKKOC* KBLNOFHLAMD; // 0x18
		::RPG::GameCore::NPCComponent* OJAIBDDGDME; // 0x20
		::DIFMKJMFKOK* FJFHCCEOINJ; // 0x28
		::RPG::GameCore::AdventureCharacterController* DJFMDJHOAJO; // 0x30
		::RPG::GameCore::CharacterModelComponent* EHFENKGDGJD; // 0x38
		::ANLGLFPLOBC* KIBBNOCADLC; // 0x40
		::RPG::GameCore::TransformComponent* NELGDHJKAJJ; // 0x48
		::BLOBBPLCDDM* BFPODJOCLIE; // 0x50
		::RPG::Client::NpcMonoLod* MPJAEDHDFBK; // 0x58
		::IHOMABBDNPN* OOGKPHFFOOB; // 0x60
		::RPG::Client::Stage* PDAIGLPEMEE; // 0x68
		::RPG::GameCore::EntityLodTemplate* ODIAIHHPEKC; // 0x70
		::System::Collections::Generic::List_1<::System::Int32>* NGFDBOJIDKL; // 0x78
		::RPG::GameCore::PropComponent* IGLCEJGPMJN; // 0x80
		::RPG::GameCore::CharacterVisibleComponent* JAOPNEJFELA; // 0x88
		::EJPKILIHMFL* GNKODBBHIJI; // 0x90
		::System::Collections::Generic::List_1<::System::Single>* MEEAMGHNIBB; // 0x98
		::RPG::GameCore::EntityLodDetail* NAGPCEJPING; // 0xA0
		::UnityEngine::Vector3 GPFEGGMFEBG; // 0xA8
		::System::Single FDCMDHFIBKC; // 0xB4
		::UnityEngine::Vector3 IKKNJMJCDOJ; // 0xB8
		::System::Int32 DHMOIAAGCFK; // 0xC4
		::System::Boolean IKPOHDLOEEG; // 0xC8
		::System::Boolean DIMECBLLOGB; // 0xC9
		::System::Boolean INOCABNHKGK; // 0xCA
		::System::Boolean ELHEEEFNFNC; // 0xCB
		::RPG::GameCore::EntityLodTemplateName PDPMCENCKHE; // 0xCC
		::System::Single FCPMCKHHGCK; // 0xD0
		::System::Int32 NEOEPKMILKD; // 0xD4
		::System::Boolean LBNBPMIFDHI; // 0xD8
		::System::Boolean ANGAIGLBELJ; // 0xD9
		::System::Boolean PMOJILOJEPE; // 0xDA
		::System::Byte _padding0[0x1];
		::RPG::GameCore::EntityLodTemplateName LOJBDLFPIGE; // 0xDC
		::System::Boolean CGHCKFOMCCA; // 0xE0
		::System::Boolean HMKFOCMIFHA; // 0xE1
		::System::Boolean GFAMGLFOMGI; // 0xE2
		::System::Boolean _IsMoveable_k__BackingField; // 0xE3
		::System::Byte _padding1[0x4];
		::RPG::Client::ReasonBool_1<::RPG::GameCore::LockEntityStreamingReason> BIMGAPKFFPH; // 0xE8
		::System::Single DGBOJJLJNOJ; // 0xF0
		::RPG::GameCore::EntityLodTemplateName DKALEOEIJAG; // 0xF4
		static ::RPG::Client::RPGProfilerMarker** StaticGet_PHIKJONMDBO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0x40740);
		}

		static ::System::Collections::Generic::List_1<::System::Single>** StaticGet_IHEBFHMFPPL()
		{
			return (::System::Collections::Generic::List_1<::System::Single>**)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0x40748);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_JAHHHLENPON()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0x40750);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_AALCEMPLCIM()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0x40758);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_KAFCKHLCCAB()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0x40760);
		}

		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_BDDECGPCNFP()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0x40768);
		}

		static ::System::Single* StaticGet_OANFMNALHPN()
		{
			return (::System::Single*)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0xDBB0);
		}

		static ::System::Int32* StaticGet_GKGCIDICMMM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0xDBB4);
		}

		static ::System::Single* StaticGet_KGHJKOAOEMG()
		{
			return (::System::Single*)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0xDBB8);
		}

		static ::System::Int32* StaticGet_AJJAHBPAKOJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0xDBBC);
		}

		static ::System::Int32* StaticGet_NONCOJNJEFA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0xDBC0);
		}

		static ::System::Int32* StaticGet_JKIJELCAEJC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0xDBC4);
		}

		static ::System::Int32* StaticGet_GBOOELMDPLL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "IDCOKMGFCGJ")->GetStaticField(0xDBC8);
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

		static ::RPG::GameCore::EntityLodTemplateName ABKDAJAFIDA(::RPG::GameCore::PropRow* a1, ::RPG::GameCore::PropConfig* a2, ::UnityEngine::GameObject* a3, ::GDKHHPPIFBC* a4, ::RPG::Client::MapPropDef* a5)
		{
			return ((::RPG::GameCore::EntityLodTemplateName(*)(::RPG::GameCore::PropRow*, ::RPG::GameCore::PropConfig*, ::UnityEngine::GameObject*, ::GDKHHPPIFBC*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_ABKDAJAFIDA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void DPKKNFCNLAD(::RPG::GameCore::PropRow* a1, ::System::Single a2, ::System::Single a3, ::RPG::GameCore::EntityLodTemplateName a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::PropRow*, ::System::Single, ::System::Single, ::RPG::GameCore::EntityLodTemplateName))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_DPKKNFCNLAD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single GOIOMIOJMCB(::System::String* a1)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_GOIOMIOJMCB_OFFSET))(a1);
		}

		::System::Void FADBIMLLENO(::RPG::GameCore::EntityLodTemplateName a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodTemplateName))((::PBYTE)hIl2Cpp + IDCOKMGFCGJ_FADBIMLLENO_OFFSET))(this, a1);
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
