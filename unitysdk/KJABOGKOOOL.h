#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENEEEAPOCEL.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ENGKPGFGGLM;
class FLNIDONOPNI;
class GEIHCPAOKKK;
class KJGPCLPIMCK;
class KPNIFGIKELE;
class LJOBPBEAFDA;
class MHJDIPINMMF;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define KJABOGKOOOL_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x1680FA80)
#define KJABOGKOOOL_BEAFFDAEDLA_OFFSET UNITYSDK_OFFSET(0x1680A3B0)
#define KJABOGKOOOL_BHCOFCIAGPE_OFFSET UNITYSDK_OFFSET(0x1680FC50)
#define KJABOGKOOOL_BHHFNMMLPHA_OFFSET UNITYSDK_OFFSET(0x1680BE90)
#define KJABOGKOOOL_BKODNGEGDGC_OFFSET UNITYSDK_OFFSET(0x168116E0)
#define KJABOGKOOOL_BMOPAPFKFMN_OFFSET UNITYSDK_OFFSET(0x1680C5B0)
#define KJABOGKOOOL_BPGEDALKCEI_OFFSET UNITYSDK_OFFSET(0x1680E970)
#define KJABOGKOOOL_CCHDDIBIJCA_OFFSET UNITYSDK_OFFSET(0x1680C350)
#define KJABOGKOOOL_CCIEHABIBGL_OFFSET UNITYSDK_OFFSET(0x1680BE30)
#define KJABOGKOOOL_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1680BCC0)
#define KJABOGKOOOL_CNOJOLKNOCC_OFFSET UNITYSDK_OFFSET(0x1680FD40)
#define KJABOGKOOOL_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16809B20)
#define KJABOGKOOOL_DBKIDLJBOGP_OFFSET UNITYSDK_OFFSET(0x1680B770)
#define KJABOGKOOOL_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x16812B10)
#define KJABOGKOOOL_DKIDIAMLOFJ_OFFSET UNITYSDK_OFFSET(0x1680AF90)
#define KJABOGKOOOL_DLFIFFAIEHL_OFFSET UNITYSDK_OFFSET(0x16811260)
#define KJABOGKOOOL_EAJKMDLALME_OFFSET UNITYSDK_OFFSET(0x16811120)
#define KJABOGKOOOL_EHLOHIHJBAA_OFFSET UNITYSDK_OFFSET(0x168129E0)
#define KJABOGKOOOL_EMHAJOILING_OFFSET UNITYSDK_OFFSET(0x1680B860)
#define KJABOGKOOOL_FBDPEHCODNJ_OFFSET UNITYSDK_OFFSET(0x16810CE0)
#define KJABOGKOOOL_FDHBEHKIJEF_OFFSET UNITYSDK_OFFSET(0x168125F0)
#define KJABOGKOOOL_FFIJAJAKIIH_OFFSET UNITYSDK_OFFSET(0x168112E0)
#define KJABOGKOOOL_FHBBNHPCDIP_OFFSET UNITYSDK_OFFSET(0x1680CC30)
#define KJABOGKOOOL_GAKINCNBEJA_OFFSET UNITYSDK_OFFSET(0x1680AC40)
#define KJABOGKOOOL_GJIHPCDPDMH_OFFSET UNITYSDK_OFFSET(0x1680F690)
#define KJABOGKOOOL_HMAFJOMHOKH_OFFSET UNITYSDK_OFFSET(0x16812080)
#define KJABOGKOOOL_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x16811B40)
#define KJABOGKOOOL_HNKLHDHENAK_OFFSET UNITYSDK_OFFSET(0x1680F8D0)
#define KJABOGKOOOL_HOFCMCMAICM_OFFSET UNITYSDK_OFFSET(0x1680E840)
#define KJABOGKOOOL_HOJJDBFEILE_OFFSET UNITYSDK_OFFSET(0x1680B430)
#define KJABOGKOOOL_HPGIIKGLPPA_OFFSET UNITYSDK_OFFSET(0x168105E0)
#define KJABOGKOOOL_IEEHDDOEHBL_OFFSET UNITYSDK_OFFSET(0x1680D100)
#define KJABOGKOOOL_JEFLAIECDIO_OFFSET UNITYSDK_OFFSET(0x1680ABA0)
#define KJABOGKOOOL_JENEOENOIFO_OFFSET UNITYSDK_OFFSET(0x16811000)
#define KJABOGKOOOL_JNNJKAHNIEG_OFFSET UNITYSDK_OFFSET(0x16811E70)
#define KJABOGKOOOL_KIFFCONJHMF_OFFSET UNITYSDK_OFFSET(0x168107F0)
#define KJABOGKOOOL_KMJBEMDODKK_OFFSET UNITYSDK_OFFSET(0x1680B600)
#define KJABOGKOOOL_KNGGOIPMBJC_OFFSET UNITYSDK_OFFSET(0x1680CF90)
#define KJABOGKOOOL_LCFEJPEMEFN_OFFSET UNITYSDK_OFFSET(0x1680F310)
#define KJABOGKOOOL_LDCHLFMIOMC_OFFSET UNITYSDK_OFFSET(0x16811200)
#define KJABOGKOOOL_LDHKBIPNKEA_OFFSET UNITYSDK_OFFSET(0x16810320)
#define KJABOGKOOOL_LDHLGGDAOPD_OFFSET UNITYSDK_OFFSET(0x16810A40)
#define KJABOGKOOOL_LHPFHAOPMIA_OFFSET UNITYSDK_OFFSET(0x1680D4A0)
#define KJABOGKOOOL_LMOEIDHCNCN_OFFSET UNITYSDK_OFFSET(0x1680EB40)
#define KJABOGKOOOL_LPIPNDKJHOD_OFFSET UNITYSDK_OFFSET(0x1680ADE0)
#define KJABOGKOOOL_MDMALFJKACJ_OFFSET UNITYSDK_OFFSET(0x16811A80)
#define KJABOGKOOOL_MFOPJKMPIKK_OFFSET UNITYSDK_OFFSET(0x1680BC10)
#define KJABOGKOOOL_MJCMNNDEGFP_OFFSET UNITYSDK_OFFSET(0x1680C910)
#define KJABOGKOOOL_MLMHFGELFPK_OFFSET UNITYSDK_OFFSET(0x1680A670)
#define KJABOGKOOOL_MMHKGIFAPIG_OFFSET UNITYSDK_OFFSET(0x16811230)
#define KJABOGKOOOL_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x16810C50)
#define KJABOGKOOOL_NFBEDIGOAIO_OFFSET UNITYSDK_OFFSET(0x1680C160)
#define KJABOGKOOOL_NGKBJPBOMEN_OFFSET UNITYSDK_OFFSET(0x1680CD90)
#define KJABOGKOOOL_NHNBCACJGJG_OFFSET UNITYSDK_OFFSET(0x1680BD50)
#define KJABOGKOOOL_NMGPJLENHPB_OFFSET UNITYSDK_OFFSET(0x1680A100)
#define KJABOGKOOOL_OADAKOJDEKL_OFFSET UNITYSDK_OFFSET(0x16811820)
#define KJABOGKOOOL_OEEKMLBNJDK_OFFSET UNITYSDK_OFFSET(0x1680A090)
#define KJABOGKOOOL_OFIENHAGCOB_OFFSET UNITYSDK_OFFSET(0x1680D290)
#define KJABOGKOOOL_OGDBHILMMCP_OFFSET UNITYSDK_OFFSET(0x16812AC0)
#define KJABOGKOOOL_OGOCFEAMFEC_OFFSET UNITYSDK_OFFSET(0x1680CCD0)
#define KJABOGKOOOL_PBFNPDKFNAN_OFFSET UNITYSDK_OFFSET(0x1680E610)
#define KJABOGKOOOL_PBJHHANIPBJ_OFFSET UNITYSDK_OFFSET(0x16811680)
#define KJABOGKOOOL_PIGJNEFILPN_OFFSET UNITYSDK_OFFSET(0x168108B0)
#define KJABOGKOOOL_PJBONDOHPEG_OFFSET UNITYSDK_OFFSET(0x16811180)
#define KJABOGKOOOL_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x1680E680)
#define KJABOGKOOOL_PMKLFLMMPKC_OFFSET UNITYSDK_OFFSET(0x1680FA00)
#define KJABOGKOOOL_PNEGABMOCHP_OFFSET UNITYSDK_OFFSET(0x1680E7B0)
#define KJABOGKOOOL_UPDATE_OFFSET UNITYSDK_OFFSET(0x16809ED0)
#define KJABOGKOOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1680A040)

inline static constexpr unsigned int KJABOGKOOOL_TypeDefinitionIndex = 60344;

class KJABOGKOOOL : public ::ENEEEAPOCEL
{
public:
	static ::System::Single* StaticGet_HLNFOENIPMM()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(KJABOGKOOOL_TypeDefinitionIndex)->GetStaticField(0x10A10);
	}
	static ::System::Boolean* StaticGet_MAGKEPGLJEI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KJABOGKOOOL_TypeDefinitionIndex)->GetStaticField(0x10A14);
	}
	static ::System::Single* StaticGet_JJKBBPCIAGC()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(KJABOGKOOOL_TypeDefinitionIndex)->GetStaticField(0x10A18);
	}
	// static const ::System::Int32 HDCICOKOGOJ = 0x7; // 0x0
	// static const ::System::Single BDMEEDLBIDJ; // 0x0
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJABOGKOOOL__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJABOGKOOOL_UPDATE_OFFSET))(this);
	}

	static ::System::Void OEEKMLBNJDK(::FLNIDONOPNI* BIEIBKELCPP)
	{
		return ((::System::Void(*)(::FLNIDONOPNI*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_OEEKMLBNJDK_OFFSET))(BIEIBKELCPP);
	}

	static ::System::Void NMGPJLENHPB(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Config::EnterBattleState JKBLDFBGBPK, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState, ::System::String*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_NMGPJLENHPB_OFFSET))(KECKGDFIALJ, JKBLDFBGBPK, AELLPLBJELA);
	}

	static ::System::Void MLMHFGELFPK(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MHJDIPINMMF* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MHJDIPINMMF*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_MLMHFGELFPK_OFFSET))(KECKGDFIALJ, FFNKDGGHBPP);
	}

	static ::System::Boolean LPIPNDKJHOD(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_LPIPNDKJHOD_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void DKIDIAMLOFJ(::FLNIDONOPNI* EMBMHDIAGDE, ::GEIHCPAOKKK* PFDGHBCJCNP, ::System::Single KPGBJFPIAHD)
	{
		return ((::System::Void(*)(::FLNIDONOPNI*, ::GEIHCPAOKKK*, ::System::Single))((::PBYTE)hIl2Cpp + KJABOGKOOOL_DKIDIAMLOFJ_OFFSET))(EMBMHDIAGDE, PFDGHBCJCNP, KPGBJFPIAHD);
	}

	static ::System::Boolean JEFLAIECDIO(::FLNIDONOPNI* JIMNKJIDGAG, ::MoleMole::Battle::Entity* PLBHNGELOBF)
	{
		return ((::System::Boolean(*)(::FLNIDONOPNI*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_JEFLAIECDIO_OFFSET))(JIMNKJIDGAG, PLBHNGELOBF);
	}

	static ::System::Single DBKIDLJBOGP(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CJBJONJDOLI)
	{
		return ((::System::Single(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_DBKIDLJBOGP_OFFSET))(CJBJONJDOLI);
	}

	static ::System::Void EMHAJOILING(::MoleMole::Battle::Entity* KECKGDFIALJ, ::GEIHCPAOKKK* PFDGHBCJCNP)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_EMHAJOILING_OFFSET))(KECKGDFIALJ, PFDGHBCJCNP);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJABOGKOOOL_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void NHNBCACJGJG(::FLNIDONOPNI* EMBMHDIAGDE, ::GEIHCPAOKKK* PFDGHBCJCNP, ::System::Single KPGBJFPIAHD)
	{
		return ((::System::Void(*)(::FLNIDONOPNI*, ::GEIHCPAOKKK*, ::System::Single))((::PBYTE)hIl2Cpp + KJABOGKOOOL_NHNBCACJGJG_OFFSET))(EMBMHDIAGDE, PFDGHBCJCNP, KPGBJFPIAHD);
	}

	static ::System::Single CCHDDIBIJCA(::FLNIDONOPNI* EMBMHDIAGDE, ::UnityEngine::Vector3 AENOEFFHHEM, ::UnityEngine::Vector3 CNJMEAHCLDH)
	{
		return ((::System::Single(*)(::FLNIDONOPNI*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KJABOGKOOOL_CCHDDIBIJCA_OFFSET))(EMBMHDIAGDE, AENOEFFHHEM, CNJMEAHCLDH);
	}

	static ::System::Single MJCMNNDEGFP(::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* KEPLLJPFGDP, ::System::Single BDEDDEGJFKL)
	{
		return ((::System::Single(*)(::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + KJABOGKOOOL_MJCMNNDEGFP_OFFSET))(KEPLLJPFGDP, BDEDDEGJFKL);
	}

	static ::System::Void CCIEHABIBGL(::System::Single PMNLNNGEIFM, ::FLNIDONOPNI* EMBMHDIAGDE)
	{
		return ((::System::Void(*)(::System::Single, ::FLNIDONOPNI*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_CCIEHABIBGL_OFFSET))(PMNLNNGEIFM, EMBMHDIAGDE);
	}

	static ::System::Boolean FHBBNHPCDIP(::MoleMole::Battle::Entity* JKELDNKGNDI, ::MoleMole::Battle::Entity* MFMPICKHAMJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_FHBBNHPCDIP_OFFSET))(JKELDNKGNDI, MFMPICKHAMJ);
	}

	static ::System::Void OGOCFEAMFEC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_OGOCFEAMFEC_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean NGKBJPBOMEN(::MoleMole::Battle::Entity* KBMHGGEOIOH)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_NGKBJPBOMEN_OFFSET))(KBMHGGEOIOH);
	}

	static ::System::Void KNGGOIPMBJC(::FLNIDONOPNI* EMBMHDIAGDE, ::GEIHCPAOKKK* PFDGHBCJCNP)
	{
		return ((::System::Void(*)(::FLNIDONOPNI*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_KNGGOIPMBJC_OFFSET))(EMBMHDIAGDE, PFDGHBCJCNP);
	}

	static ::System::Void OFIENHAGCOB(::FLNIDONOPNI* EMBMHDIAGDE, ::GEIHCPAOKKK* PFDGHBCJCNP, ::System::Single KPGBJFPIAHD)
	{
		return ((::System::Void(*)(::FLNIDONOPNI*, ::GEIHCPAOKKK*, ::System::Single))((::PBYTE)hIl2Cpp + KJABOGKOOOL_OFIENHAGCOB_OFFSET))(EMBMHDIAGDE, PFDGHBCJCNP, KPGBJFPIAHD);
	}

	::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_PMHJBNNPCLB_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Void PNEGABMOCHP(::System::Single MPPHIOGPBPO, ::System::Single DGMFLGEABKD)
	{
		return ((::System::Void(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KJABOGKOOOL_PNEGABMOCHP_OFFSET))(MPPHIOGPBPO, DGMFLGEABKD);
	}

	static ::System::Boolean HOFCMCMAICM(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Config::EnterBattleState JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + KJABOGKOOOL_HOFCMCMAICM_OFFSET))(KECKGDFIALJ, JKBLDFBGBPK);
	}

	static ::System::Void BPGEDALKCEI(::FLNIDONOPNI* EMBMHDIAGDE, ::MoleMole::Config::EnterBattleState FDDFDLEINFM)
	{
		return ((::System::Void(*)(::FLNIDONOPNI*, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + KJABOGKOOOL_BPGEDALKCEI_OFFSET))(EMBMHDIAGDE, FDDFDLEINFM);
	}

	static ::System::Void KMJBEMDODKK(::FLNIDONOPNI* EMBMHDIAGDE, ::GEIHCPAOKKK* PFDGHBCJCNP, ::MoleMole::Battle::Entity* KBMHGGEOIOH, ::System::Int32 PEPEEMHKKKD)
	{
		return ((::System::Void(*)(::FLNIDONOPNI*, ::GEIHCPAOKKK*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + KJABOGKOOOL_KMJBEMDODKK_OFFSET))(EMBMHDIAGDE, PFDGHBCJCNP, KBMHGGEOIOH, PEPEEMHKKKD);
	}

	static ::System::Boolean GJIHPCDPDMH(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_GJIHPCDPDMH_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void HNKLHDHENAK(::KJGPCLPIMCK* EBJICBIMOHN)
	{
		return ((::System::Void(*)(::KJGPCLPIMCK*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_HNKLHDHENAK_OFFSET))(EBJICBIMOHN);
	}

	static ::System::Void MFOPJKMPIKK(::System::Single& MPPHIOGPBPO, ::System::Single& DGMFLGEABKD)
	{
		return ((::System::Void(*)(::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + KJABOGKOOOL_MFOPJKMPIKK_OFFSET))(MPPHIOGPBPO, DGMFLGEABKD);
	}

	static ::System::Void PMKLFLMMPKC(::FLNIDONOPNI* BIEIBKELCPP)
	{
		return ((::System::Void(*)(::FLNIDONOPNI*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_PMKLFLMMPKC_OFFSET))(BIEIBKELCPP);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Boolean CNOJOLKNOCC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_CNOJOLKNOCC_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void PBFNPDKFNAN(::System::Single PMNLNNGEIFM, ::FLNIDONOPNI* EMBMHDIAGDE)
	{
		return ((::System::Void(*)(::System::Single, ::FLNIDONOPNI*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_PBFNPDKFNAN_OFFSET))(PMNLNNGEIFM, EMBMHDIAGDE);
	}

	static ::UnityEngine::Vector3 LDHKBIPNKEA(::GEIHCPAOKKK* OHPJHPEOFLD, ::LJOBPBEAFDA* DCINPNMNFJC)
	{
		return ((::UnityEngine::Vector3(*)(::GEIHCPAOKKK*, ::LJOBPBEAFDA*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_LDHKBIPNKEA_OFFSET))(OHPJHPEOFLD, DCINPNMNFJC);
	}

	static ::UnityEngine::Vector3 HPGIIKGLPPA(::GEIHCPAOKKK* OHPJHPEOFLD, ::LJOBPBEAFDA* DCINPNMNFJC)
	{
		return ((::UnityEngine::Vector3(*)(::GEIHCPAOKKK*, ::LJOBPBEAFDA*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_HPGIIKGLPPA_OFFSET))(OHPJHPEOFLD, DCINPNMNFJC);
	}

	static ::System::Void NFBEDIGOAIO(::System::Single PMNLNNGEIFM, ::FLNIDONOPNI* EMBMHDIAGDE)
	{
		return ((::System::Void(*)(::System::Single, ::FLNIDONOPNI*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_NFBEDIGOAIO_OFFSET))(PMNLNNGEIFM, EMBMHDIAGDE);
	}

	static ::System::Void PIGJNEFILPN(::FLNIDONOPNI* BIEIBKELCPP, ::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::FLNIDONOPNI*, ::System::String*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_PIGJNEFILPN_OFFSET))(BIEIBKELCPP, MCOHLHMKLIP);
	}

	static ::System::Void BHHFNMMLPHA(::System::Single PMNLNNGEIFM, ::FLNIDONOPNI* EMBMHDIAGDE)
	{
		return ((::System::Void(*)(::System::Single, ::FLNIDONOPNI*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_BHHFNMMLPHA_OFFSET))(PMNLNNGEIFM, EMBMHDIAGDE);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void LHPFHAOPMIA(::FLNIDONOPNI* EMBMHDIAGDE, ::GEIHCPAOKKK* PFDGHBCJCNP, ::System::Single KPGBJFPIAHD)
	{
		return ((::System::Void(*)(::FLNIDONOPNI*, ::GEIHCPAOKKK*, ::System::Single))((::PBYTE)hIl2Cpp + KJABOGKOOOL_LHPFHAOPMIA_OFFSET))(EMBMHDIAGDE, PFDGHBCJCNP, KPGBJFPIAHD);
	}

	static ::UnityEngine::Vector3 FBDPEHCODNJ(::GEIHCPAOKKK* OHPJHPEOFLD, ::LJOBPBEAFDA* DCINPNMNFJC)
	{
		return ((::UnityEngine::Vector3(*)(::GEIHCPAOKKK*, ::LJOBPBEAFDA*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_FBDPEHCODNJ_OFFSET))(OHPJHPEOFLD, DCINPNMNFJC);
	}

	static ::System::Boolean KIFFCONJHMF(::FLNIDONOPNI* EMBMHDIAGDE)
	{
		return ((::System::Boolean(*)(::FLNIDONOPNI*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_KIFFCONJHMF_OFFSET))(EMBMHDIAGDE);
	}

	static ::System::Void JENEOENOIFO(::FLNIDONOPNI* BIEIBKELCPP, ::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::FLNIDONOPNI*, ::System::String*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_JENEOENOIFO_OFFSET))(BIEIBKELCPP, MCOHLHMKLIP);
	}

	static ::System::Void EAJKMDLALME(::FLNIDONOPNI* BIEIBKELCPP)
	{
		return ((::System::Void(*)(::FLNIDONOPNI*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_EAJKMDLALME_OFFSET))(BIEIBKELCPP);
	}

	static ::System::Void BMOPAPFKFMN(::FLNIDONOPNI* EMBMHDIAGDE, ::UnityEngine::Vector3 AENOEFFHHEM, ::UnityEngine::Vector3 CNJMEAHCLDH)
	{
		return ((::System::Void(*)(::FLNIDONOPNI*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KJABOGKOOOL_BMOPAPFKFMN_OFFSET))(EMBMHDIAGDE, AENOEFFHHEM, CNJMEAHCLDH);
	}

	static ::System::Boolean GAKINCNBEJA(::KPNIFGIKELE* IKHJEGECGJA)
	{
		return ((::System::Boolean(*)(::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_GAKINCNBEJA_OFFSET))(IKHJEGECGJA);
	}

	static ::System::Single LDCHLFMIOMC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KJABOGKOOOL_LDCHLFMIOMC_OFFSET))();
	}

	static ::System::Single MMHKGIFAPIG()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + KJABOGKOOOL_MMHKGIFAPIG_OFFSET))();
	}

	static ::System::Boolean DLFIFFAIEHL(::FLNIDONOPNI* BIEIBKELCPP)
	{
		return ((::System::Boolean(*)(::FLNIDONOPNI*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_DLFIFFAIEHL_OFFSET))(BIEIBKELCPP);
	}

	static ::System::Void FFIJAJAKIIH(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MHJDIPINMMF* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MHJDIPINMMF*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_FFIJAJAKIIH_OFFSET))(KECKGDFIALJ, FFNKDGGHBPP);
	}

	static ::System::Void PBJHHANIPBJ(::FLNIDONOPNI* BIEIBKELCPP)
	{
		return ((::System::Void(*)(::FLNIDONOPNI*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_PBJHHANIPBJ_OFFSET))(BIEIBKELCPP);
	}

	static ::System::Void BKODNGEGDGC(::FLNIDONOPNI* EMBMHDIAGDE, ::GEIHCPAOKKK* PFDGHBCJCNP, ::MoleMole::Battle::Entity* KBMHGGEOIOH, ::System::Int32 PEPEEMHKKKD)
	{
		return ((::System::Void(*)(::FLNIDONOPNI*, ::GEIHCPAOKKK*, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + KJABOGKOOOL_BKODNGEGDGC_OFFSET))(EMBMHDIAGDE, PFDGHBCJCNP, KBMHGGEOIOH, PEPEEMHKKKD);
	}

	static ::System::Boolean OADAKOJDEKL(::UnityEngine::Collider* EHHHMFKHNAI, ::System::Collections::Generic::HashSet_1<::System::String*>* JMDOANHOEJG)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_OADAKOJDEKL_OFFSET))(EHHHMFKHNAI, JMDOANHOEJG);
	}

	static ::System::Void MDMALFJKACJ(::FLNIDONOPNI* BIEIBKELCPP, ::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::FLNIDONOPNI*, ::System::String*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_MDMALFJKACJ_OFFSET))(BIEIBKELCPP, MCOHLHMKLIP);
	}

	static ::System::Boolean PJBONDOHPEG(::KJGPCLPIMCK* EBJICBIMOHN, ::System::Int32 HGBIBOEIKPF)
	{
		return ((::System::Boolean(*)(::KJGPCLPIMCK*, ::System::Int32))((::PBYTE)hIl2Cpp + KJABOGKOOOL_PJBONDOHPEG_OFFSET))(EBJICBIMOHN, HGBIBOEIKPF);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJABOGKOOOL_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Boolean LCFEJPEMEFN(::MoleMole::Battle::Entity* KBMHGGEOIOH, ::LJOBPBEAFDA* JCCMJJEDFBH)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::LJOBPBEAFDA*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_LCFEJPEMEFN_OFFSET))(KBMHGGEOIOH, JCCMJJEDFBH);
	}

	static ::System::Void BEAFFDAEDLA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Config::EnterBattleState JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + KJABOGKOOOL_BEAFFDAEDLA_OFFSET))(KECKGDFIALJ, JKBLDFBGBPK);
	}

	static ::System::Boolean LMOEIDHCNCN(::FLNIDONOPNI* EMBMHDIAGDE, ::GEIHCPAOKKK* PFDGHBCJCNP, ::MoleMole::Battle::Entity* KBMHGGEOIOH, ::LJOBPBEAFDA* JCCMJJEDFBH)
	{
		return ((::System::Boolean(*)(::FLNIDONOPNI*, ::GEIHCPAOKKK*, ::MoleMole::Battle::Entity*, ::LJOBPBEAFDA*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_LMOEIDHCNCN_OFFSET))(EMBMHDIAGDE, PFDGHBCJCNP, KBMHGGEOIOH, JCCMJJEDFBH);
	}

	static ::System::Void FDHBEHKIJEF(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Config::EnterBattleState JKBLDFBGBPK, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState, ::System::String*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_FDHBEHKIJEF_OFFSET))(KECKGDFIALJ, JKBLDFBGBPK, AELLPLBJELA);
	}

	static ::System::Boolean LDHLGGDAOPD(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_LDHLGGDAOPD_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean HMAFJOMHOKH(::FLNIDONOPNI* BIEIBKELCPP, ::GEIHCPAOKKK* PFDGHBCJCNP, ::UnityEngine::Vector3 HJNBDBFOHHK)
	{
		return ((::System::Boolean(*)(::FLNIDONOPNI*, ::GEIHCPAOKKK*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KJABOGKOOOL_HMAFJOMHOKH_OFFSET))(BIEIBKELCPP, PFDGHBCJCNP, HJNBDBFOHHK);
	}

	static ::System::Void OGDBHILMMCP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJABOGKOOOL_OGDBHILMMCP_OFFSET))();
	}

	static ::System::Boolean JNNJKAHNIEG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Config::EnterBattleState JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EnterBattleState))((::PBYTE)hIl2Cpp + KJABOGKOOOL_JNNJKAHNIEG_OFFSET))(KECKGDFIALJ, JKBLDFBGBPK);
	}

	static ::System::Boolean IEEHDDOEHBL(::FLNIDONOPNI* EMBMHDIAGDE, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::FLNIDONOPNI*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_IEEHDDOEHBL_OFFSET))(EMBMHDIAGDE, KECKGDFIALJ);
	}

	static ::System::Boolean EHLOHIHJBAA(::System::Collections::Generic::HashSet_1<::UnityEngine::LayerMask>* LEPJOBCBAAG, ::System::Int32 KMOHKCADPNA)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::UnityEngine::LayerMask>*, ::System::Int32))((::PBYTE)hIl2Cpp + KJABOGKOOOL_EHLOHIHJBAA_OFFSET))(LEPJOBCBAAG, KMOHKCADPNA);
	}

	static ::System::Void BHCOFCIAGPE(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_BHCOFCIAGPE_OFFSET))(MNGHGOLKKNO);
	}

	static ::System::Boolean HOJJDBFEILE(::MoleMole::Battle::Entity* KBMHGGEOIOH)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_HOJJDBFEILE_OFFSET))(KBMHGGEOIOH);
	}

	static ::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KJABOGKOOOL_DIEPHAJCGOE_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}
};
