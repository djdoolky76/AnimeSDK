#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHHAEBJKNNH.h"
#include "unitysdk/EKPCBCABNNJ.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneChangeColliderSize_ColliderType.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BCGLKLNMOLG;
class DBHKJNFENOB;
class DKLGPPKLBHE;
class EJMAJNMLJEJ;
class ENGKPGFGGLM;
class GEIHCPAOKKK;
class IADDHANFKPG;
class IAHLAPEHFKN;
class IHPELIJBNAH;
namespace MoleMole { class MonoEntityColliderManager; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define CFIJCMGJBAB_AAALNBPMHFO_OFFSET UNITYSDK_OFFSET(0x139AC3C0)
#define CFIJCMGJBAB_ABBEOBMMJPA_OFFSET UNITYSDK_OFFSET(0x139BAC10)
#define CFIJCMGJBAB_AKFEGEJMBEK_OFFSET UNITYSDK_OFFSET(0x139AD140)
#define CFIJCMGJBAB_AKKMAMAFHLE_OFFSET UNITYSDK_OFFSET(0x139C1670)
#define CFIJCMGJBAB_ALPNGKIPHEB_OFFSET UNITYSDK_OFFSET(0x139BC480)
#define CFIJCMGJBAB_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x139C1EA0)
#define CFIJCMGJBAB_BEHOEILOPIP_OFFSET UNITYSDK_OFFSET(0x139B4DB0)
#define CFIJCMGJBAB_BGHBNDELAJA_OFFSET UNITYSDK_OFFSET(0x139AB720)
#define CFIJCMGJBAB_BGNDLAAGDHN_OFFSET UNITYSDK_OFFSET(0x139BD100)
#define CFIJCMGJBAB_BJJCIIMGAFO_OFFSET UNITYSDK_OFFSET(0x139BE3A0)
#define CFIJCMGJBAB_BLMKOAEKBGO_OFFSET UNITYSDK_OFFSET(0x139ABFF0)
#define CFIJCMGJBAB_BLNFNGMJHOK_OFFSET UNITYSDK_OFFSET(0x139C0550)
#define CFIJCMGJBAB_BNAJHKCKAMG_OFFSET UNITYSDK_OFFSET(0x139B9320)
#define CFIJCMGJBAB_BOJPGHBGEFC_OFFSET UNITYSDK_OFFSET(0x139AA2B0)
#define CFIJCMGJBAB_CAJGHGBPDPK_OFFSET UNITYSDK_OFFSET(0x139BB110)
#define CFIJCMGJBAB_CCEPNMOHHCI_OFFSET UNITYSDK_OFFSET(0x139BBCE0)
#define CFIJCMGJBAB_CGFDMKKFLPE_OFFSET UNITYSDK_OFFSET(0x139BD870)
#define CFIJCMGJBAB_CHOBFECAGBA_OFFSET UNITYSDK_OFFSET(0x139BC950)
#define CFIJCMGJBAB_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x139BA820)
#define CFIJCMGJBAB_CNLHGLNLOMB_OFFSET UNITYSDK_OFFSET(0x139B6580)
#define CFIJCMGJBAB_COPIHCNAPBE_OFFSET UNITYSDK_OFFSET(0x139B9990)
#define CFIJCMGJBAB_CPEKCNIEDKJ_OFFSET UNITYSDK_OFFSET(0x139B4A70)
#define CFIJCMGJBAB_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x139A8B70)
#define CFIJCMGJBAB_DDKFDJJBDJM_OFFSET UNITYSDK_OFFSET(0x139BB580)
#define CFIJCMGJBAB_DGPKBHOHGPI_OFFSET UNITYSDK_OFFSET(0x139B6520)
#define CFIJCMGJBAB_DIIKHEPPLJM_OFFSET UNITYSDK_OFFSET(0x139BD020)
#define CFIJCMGJBAB_EAJHLHCPKOA_OFFSET UNITYSDK_OFFSET(0x139ADC00)
#define CFIJCMGJBAB_EMJKMAGJNDE_OFFSET UNITYSDK_OFFSET(0x139BFDC0)
#define CFIJCMGJBAB_EOKMKJDKCHL_OFFSET UNITYSDK_OFFSET(0x139BDBA0)
#define CFIJCMGJBAB_FAGKOCOPPAI_OFFSET UNITYSDK_OFFSET(0x139B4CB0)
#define CFIJCMGJBAB_FAKIEDNBEJF_OFFSET UNITYSDK_OFFSET(0x139BCF20)
#define CFIJCMGJBAB_FKMOBLIGEGP_OFFSET UNITYSDK_OFFSET(0x139B9650)
#define CFIJCMGJBAB_FLENFHLCIPC_OFFSET UNITYSDK_OFFSET(0x139B3660)
#define CFIJCMGJBAB_FLGKLIPCOAI_OFFSET UNITYSDK_OFFSET(0x139B6110)
#define CFIJCMGJBAB_GALLIGMHHEA_OFFSET UNITYSDK_OFFSET(0x139AB430)
#define CFIJCMGJBAB_GEDFEDMBMIB_OFFSET UNITYSDK_OFFSET(0x139AD610)
#define CFIJCMGJBAB_GFAKLENJEFC_OFFSET UNITYSDK_OFFSET(0x139B2970)
#define CFIJCMGJBAB_GFKCLLCCAMF_OFFSET UNITYSDK_OFFSET(0x139AC6A0)
#define CFIJCMGJBAB_GFMKLGJKAFA_OFFSET UNITYSDK_OFFSET(0x139BF400)
#define CFIJCMGJBAB_GIFLEKAHMMJ_OFFSET UNITYSDK_OFFSET(0x139A9190)
#define CFIJCMGJBAB_GIJBHIKDKFN_OFFSET UNITYSDK_OFFSET(0x139BCD40)
#define CFIJCMGJBAB_GJLBBAADKOL_OFFSET UNITYSDK_OFFSET(0x139AD4B0)
#define CFIJCMGJBAB_GKBEHMPFMEF_OFFSET UNITYSDK_OFFSET(0x139AE500)
#define CFIJCMGJBAB_HCBKDMHLPIM_OFFSET UNITYSDK_OFFSET(0x139AE100)
#define CFIJCMGJBAB_HCGNNJAOPMA_OFFSET UNITYSDK_OFFSET(0x139B6830)
#define CFIJCMGJBAB_HEECLBACOMI_OFFSET UNITYSDK_OFFSET(0x139BD470)
#define CFIJCMGJBAB_HLJDHNNCAOH_OFFSET UNITYSDK_OFFSET(0x139B2260)
#define CFIJCMGJBAB_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x139C16C0)
#define CFIJCMGJBAB_IAAHOAPNGAP_OFFSET UNITYSDK_OFFSET(0x139B95F0)
#define CFIJCMGJBAB_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x139A90B0)
#define CFIJCMGJBAB_IEMDFIKAJNP_OFFSET UNITYSDK_OFFSET(0x139B6010)
#define CFIJCMGJBAB_IGBJIEGIKHK_OFFSET UNITYSDK_OFFSET(0x139BDF80)
#define CFIJCMGJBAB_IGHPPFODDGL_OFFSET UNITYSDK_OFFSET(0x139B3820)
#define CFIJCMGJBAB_IJABGFNGDOC_OFFSET UNITYSDK_OFFSET(0x139C0960)
#define CFIJCMGJBAB_IMFHKCBAHOB_OFFSET UNITYSDK_OFFSET(0x139B1F50)
#define CFIJCMGJBAB_INMGFMLLCOG_OFFSET UNITYSDK_OFFSET(0x139B84B0)
#define CFIJCMGJBAB_IPJPNNNBDLF_OFFSET UNITYSDK_OFFSET(0x139B2720)
#define CFIJCMGJBAB_JENGPNKALNJ_OFFSET UNITYSDK_OFFSET(0x139BF210)
#define CFIJCMGJBAB_JIDDIBPNFGB_OFFSET UNITYSDK_OFFSET(0x139B2E70)
#define CFIJCMGJBAB_KAGOIHHBHHC_OFFSET UNITYSDK_OFFSET(0x139B6910)
#define CFIJCMGJBAB_KCNFCEPEKED_OFFSET UNITYSDK_OFFSET(0x139C0BA0)
#define CFIJCMGJBAB_KCPHOJJPOHI_OFFSET UNITYSDK_OFFSET(0x139AFF00)
#define CFIJCMGJBAB_KEGOIJJJBCB_1_OFFSET UNITYSDK_OFFSET(0x139B8BB0)
#define CFIJCMGJBAB_KEGOIJJJBCB_OFFSET UNITYSDK_OFFSET(0x139B2170)
#define CFIJCMGJBAB_KFJFDGNKNOE_OFFSET UNITYSDK_OFFSET(0x139BEF30)
#define CFIJCMGJBAB_KGFNHFIOABE_OFFSET UNITYSDK_OFFSET(0x139B5C80)
#define CFIJCMGJBAB_KLHMCENMAKB_OFFSET UNITYSDK_OFFSET(0x139A9EF0)
#define CFIJCMGJBAB_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x139B4730)
#define CFIJCMGJBAB_KPPFGLKKHHN_OFFSET UNITYSDK_OFFSET(0x139BADE0)
#define CFIJCMGJBAB_LCDPLIEGOFF_OFFSET UNITYSDK_OFFSET(0x139B22C0)
#define CFIJCMGJBAB_LEIFBFPELOG_OFFSET UNITYSDK_OFFSET(0x139BA8B0)
#define CFIJCMGJBAB_LICALLGOHGL_OFFSET UNITYSDK_OFFSET(0x139A9620)
#define CFIJCMGJBAB_LIHGAEEKENJ_OFFSET UNITYSDK_OFFSET(0x139AE2E0)
#define CFIJCMGJBAB_LKPOADHGPLD_OFFSET UNITYSDK_OFFSET(0x139ACD60)
#define CFIJCMGJBAB_LNOCAKANHLP_OFFSET UNITYSDK_OFFSET(0x139B0CF0)
#define CFIJCMGJBAB_LNOLCPIHILO_OFFSET UNITYSDK_OFFSET(0x139AC1E0)
#define CFIJCMGJBAB_LODGHDDIODM_OFFSET UNITYSDK_OFFSET(0x139C0DB0)
#define CFIJCMGJBAB_MENMDNJJGKH_OFFSET UNITYSDK_OFFSET(0x139BC100)
#define CFIJCMGJBAB_MIIKDIPMJEK_OFFSET UNITYSDK_OFFSET(0x139AC7E0)
#define CFIJCMGJBAB_MKOFICIANNO_OFFSET UNITYSDK_OFFSET(0x139B2B10)
#define CFIJCMGJBAB_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x139A9100)
#define CFIJCMGJBAB_MNJAJAPMKNA_OFFSET UNITYSDK_OFFSET(0x139BE590)
#define CFIJCMGJBAB_NDABGJHBDNH_OFFSET UNITYSDK_OFFSET(0x139B5790)
#define CFIJCMGJBAB_NIDDHMNDIEO_OFFSET UNITYSDK_OFFSET(0x139C1B10)
#define CFIJCMGJBAB_NPIJFJJOBCA_OFFSET UNITYSDK_OFFSET(0x139BB0C0)
#define CFIJCMGJBAB_OBJABEKGHOE_OFFSET UNITYSDK_OFFSET(0x139B6A90)
#define CFIJCMGJBAB_ODHPJCFEKNK_OFFSET UNITYSDK_OFFSET(0x139C0360)
#define CFIJCMGJBAB_ODMCACAKKGJ_OFFSET UNITYSDK_OFFSET(0x139B3410)
#define CFIJCMGJBAB_OGHHACPAHBH_OFFSET UNITYSDK_OFFSET(0x139B3AB0)
#define CFIJCMGJBAB_OHCCLJBKHJI_OFFSET UNITYSDK_OFFSET(0x139BB820)
#define CFIJCMGJBAB_OLCOPFGMIKJ_OFFSET UNITYSDK_OFFSET(0x139B4880)
#define CFIJCMGJBAB_OMAJLJIBKGD_OFFSET UNITYSDK_OFFSET(0x139BA740)
#define CFIJCMGJBAB_OMIKJMAJAJO_OFFSET UNITYSDK_OFFSET(0x139BA0F0)
#define CFIJCMGJBAB_OMMHIAJJDLP_OFFSET UNITYSDK_OFFSET(0x139B3C30)
#define CFIJCMGJBAB_ONPNLJCFDEG_OFFSET UNITYSDK_OFFSET(0x139AB990)
#define CFIJCMGJBAB_PEKIJMAEKDA_OFFSET UNITYSDK_OFFSET(0x139C0020)
#define CFIJCMGJBAB_PHIGLDJBDAH_OFFSET UNITYSDK_OFFSET(0x139B92E0)
#define CFIJCMGJBAB_PHMALAJLNON_OFFSET UNITYSDK_OFFSET(0x139ADE40)
#define CFIJCMGJBAB_PJCCDPCCLMP_OFFSET UNITYSDK_OFFSET(0x139C12A0)
#define CFIJCMGJBAB_PJNAAIDNNAF_OFFSET UNITYSDK_OFFSET(0x139B82A0)
#define CFIJCMGJBAB_PKDNMDBGAGJ_OFFSET UNITYSDK_OFFSET(0x139AC930)
#define CFIJCMGJBAB_PLPBBLNNEMD_OFFSET UNITYSDK_OFFSET(0x139BE200)
#define CFIJCMGJBAB_PNADNFEKEPO_OFFSET UNITYSDK_OFFSET(0x139B8DC0)
#define CFIJCMGJBAB_POIOOHCLMGJ_OFFSET UNITYSDK_OFFSET(0x139BED90)
#define CFIJCMGJBAB_PPFGEAAMGKJ_OFFSET UNITYSDK_OFFSET(0x139AE7E0)
#define CFIJCMGJBAB_UPDATE_OFFSET UNITYSDK_OFFSET(0x139A8EE0)
#define CFIJCMGJBAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x139A90A0)
#define CFIJCMGJBAB__CTOR_OFFSET UNITYSDK_OFFSET(0x139A9050)

inline static constexpr unsigned int CFIJCMGJBAB_TypeDefinitionIndex = 61034;

class CFIJCMGJBAB : public ::OAOOLPCNHKA
{
public:
	static ::System::Boolean* StaticGet_KNBDDCGKPGH()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CFIJCMGJBAB_TypeDefinitionIndex)->GetStaticField(0x12BF0);
	}
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIJCMGJBAB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFIJCMGJBAB__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_UPDATE_OFFSET))(this);
	}

	::System::Void ICJAPEMNLCF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_ICJAPEMNLCF_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void GIFLEKAHMMJ(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::System::String*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_GIFLEKAHMMJ_OFFSET))(OHPJHPEOFLD, AELLPLBJELA);
	}

	static ::System::Void BOJPGHBGEFC(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_BOJPGHBGEFC_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void GALLIGMHHEA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::GameObject* GENFJNEPKEA, ::EKPCBCABNNJ KOBGAHDCAMA)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::EKPCBCABNNJ))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_GALLIGMHHEA_OFFSET))(KECKGDFIALJ, GENFJNEPKEA, KOBGAHDCAMA);
	}

	static ::System::Void KLHMCENMAKB(::GEIHCPAOKKK* OHPJHPEOFLD, ::IHPELIJBNAH* JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::IHPELIJBNAH*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_KLHMCENMAKB_OFFSET))(OHPJHPEOFLD, JKBLDFBGBPK);
	}

	static ::System::Void PKDNMDBGAGJ(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_PKDNMDBGAGJ_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void GJLBBAADKOL(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_GJLBBAADKOL_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void MIIKDIPMJEK(::GEIHCPAOKKK* OHPJHPEOFLD, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType DIIIAAHCHAF, ::System::String* KBIECIBMCHM, ::System::Single OOCGEGAAMMC, ::System::Single KCMNNCFKPEA, ::System::Single FNKNCDIOLHN, ::System::Int32 HCMHGMADHCN, ::System::Boolean FABEFKHKOKN, ::UnityEngine::Vector3 IAGMLBMKNBK)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_MIIKDIPMJEK_OFFSET))(OHPJHPEOFLD, DIIIAAHCHAF, KBIECIBMCHM, OOCGEGAAMMC, KCMNNCFKPEA, FNKNCDIOLHN, HCMHGMADHCN, FABEFKHKOKN, IAGMLBMKNBK);
	}

	static ::System::Void EAJHLHCPKOA(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Boolean DECIDLELLCP, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_EAJHLHCPKOA_OFFSET))(OHPJHPEOFLD, DECIDLELLCP, AELLPLBJELA);
	}

	static ::System::Void LIHGAEEKENJ(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_LIHGAEEKENJ_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void GKBEHMPFMEF(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_GKBEHMPFMEF_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void PPFGEAAMGKJ(::MoleMole::MonoEntityColliderManager* KLHIDOHGKLB, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::MoleMole::MonoEntityColliderManager*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_PPFGEAAMGKJ_OFFSET))(KLHIDOHGKLB, OHPJHPEOFLD);
	}

	::System::Void LNOCAKANHLP(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_LNOCAKANHLP_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Void IMFHKCBAHOB(::GEIHCPAOKKK* OHPJHPEOFLD, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single DCEOBAPNGIK, ::System::Boolean GFNBNBKPPGC)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_IMFHKCBAHOB_OFFSET))(OHPJHPEOFLD, CKPGOKHECCH, DCEOBAPNGIK, GFNBNBKPPGC);
	}

	static ::System::Void HLJDHNNCAOH(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_HLJDHNNCAOH_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void HCBKDMHLPIM(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_HCBKDMHLPIM_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void IPJPNNNBDLF(::GEIHCPAOKKK* OHPJHPEOFLD, ::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_IPJPNNNBDLF_OFFSET))(OHPJHPEOFLD, EHHHMFKHNAI);
	}

	static ::System::Void KCPHOJJPOHI(::System::String* DLAONKFCEJG, ::GEIHCPAOKKK* OHPJHPEOFLD, ::UnityEngine::Collider* EHHHMFKHNAI, ::CHHAEBJKNNH OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::System::String*, ::GEIHCPAOKKK*, ::UnityEngine::Collider*, ::CHHAEBJKNNH))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_KCPHOJJPOHI_OFFSET))(DLAONKFCEJG, OHPJHPEOFLD, EHHHMFKHNAI, OBNIAHNMHPF);
	}

	static ::System::Void GFAKLENJEFC(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_GFAKLENJEFC_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void MKOFICIANNO(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_MKOFICIANNO_OFFSET))(OHPJHPEOFLD);
	}

	::System::Void ODMCACAKKGJ(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_ODMCACAKKGJ_OFFSET))(this, OHPJHPEOFLD);
	}

	static ::System::Void FLENFHLCIPC(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::System::Boolean))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_FLENFHLCIPC_OFFSET))(OHPJHPEOFLD, FBILHHBPEHD);
	}

	static ::System::Void JIDDIBPNFGB(::MoleMole::MonoEntityColliderManager* KLHIDOHGKLB, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::MoleMole::MonoEntityColliderManager*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_JIDDIBPNFGB_OFFSET))(KLHIDOHGKLB, OHPJHPEOFLD);
	}

	static ::System::Void IGHPPFODDGL(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_IGHPPFODDGL_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void BGHBNDELAJA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::GameObject* GENFJNEPKEA)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_BGHBNDELAJA_OFFSET))(KECKGDFIALJ, GENFJNEPKEA);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void BEHOEILOPIP(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::System::Single))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_BEHOEILOPIP_OFFSET))(OHPJHPEOFLD, PMNLNNGEIFM);
	}

	static ::System::Void GEDFEDMBMIB(::GEIHCPAOKKK* OHPJHPEOFLD, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType DIIIAAHCHAF, ::System::String* KBIECIBMCHM, ::System::Single OOCGEGAAMMC, ::System::Single KCMNNCFKPEA, ::System::Single FNKNCDIOLHN, ::System::Int32 HCMHGMADHCN, ::System::Single MDPPNMIPDMP, ::System::String* BBBILICALKH, ::System::Boolean FABEFKHKOKN, ::UnityEngine::Vector3 IAGMLBMKNBK)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::System::String*, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_GEDFEDMBMIB_OFFSET))(OHPJHPEOFLD, DIIIAAHCHAF, KBIECIBMCHM, OOCGEGAAMMC, KCMNNCFKPEA, FNKNCDIOLHN, HCMHGMADHCN, MDPPNMIPDMP, BBBILICALKH, FABEFKHKOKN, IAGMLBMKNBK);
	}

	static ::System::Void OMMHIAJJDLP(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::GameObject* GENFJNEPKEA, ::IADDHANFKPG* FFIKGAEFPAO)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::IADDHANFKPG*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_OMMHIAJJDLP_OFFSET))(KECKGDFIALJ, GENFJNEPKEA, FFIKGAEFPAO);
	}

	static ::UnityEngine::Collider* KGFNHFIOABE(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::String* KBIECIBMCHM, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType DIIIAAHCHAF)
	{
		return ((::UnityEngine::Collider*(*)(::GEIHCPAOKKK*, ::System::String*, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_KGFNHFIOABE_OFFSET))(OHPJHPEOFLD, KBIECIBMCHM, DIIIAAHCHAF);
	}

	static ::System::Void IEMDFIKAJNP(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_IEMDFIKAJNP_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void ONPNLJCFDEG(::UnityEngine::GameObject* GENFJNEPKEA, ::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_ONPNLJCFDEG_OFFSET))(GENFJNEPKEA, KECKGDFIALJ);
	}

	static ::System::Void LKPOADHGPLD(::GEIHCPAOKKK* OHPJHPEOFLD, ::UnityEngine::SkinnedMeshRenderer* OCFHGOGFGPE, ::System::Boolean DECIDLELLCP, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::UnityEngine::SkinnedMeshRenderer*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_LKPOADHGPLD_OFFSET))(OHPJHPEOFLD, OCFHGOGFGPE, DECIDLELLCP, AELLPLBJELA);
	}

	static ::System::Void HCGNNJAOPMA(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Single CAOPDAMCNCN)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::System::Single))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_HCGNNJAOPMA_OFFSET))(OHPJHPEOFLD, CAOPDAMCNCN);
	}

	static ::System::Void FLGKLIPCOAI(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_FLGKLIPCOAI_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void KAGOIHHBHHC(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_KAGOIHHBHHC_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void OBJABEKGHOE(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_OBJABEKGHOE_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void FKMOBLIGEGP(::GEIHCPAOKKK* OHPJHPEOFLD, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single DCEOBAPNGIK, ::System::Boolean GFNBNBKPPGC)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_FKMOBLIGEGP_OFFSET))(OHPJHPEOFLD, CKPGOKHECCH, DCEOBAPNGIK, GFNBNBKPPGC);
	}

	static ::System::Void COPIHCNAPBE(::GEIHCPAOKKK* OHPJHPEOFLD, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType DIIIAAHCHAF, ::System::Collections::Generic::IList_1<::System::String*>* CFHNLOEODDN, ::System::String* AELLPLBJELA, ::System::Int32 DKOFFFNEFJC, ::System::Single OOCGEGAAMMC, ::System::Single KCMNNCFKPEA, ::System::Single FNKNCDIOLHN, ::System::Boolean FABEFKHKOKN, ::UnityEngine::Vector3 IAGMLBMKNBK)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::String*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_COPIHCNAPBE_OFFSET))(OHPJHPEOFLD, DIIIAAHCHAF, CFHNLOEODDN, AELLPLBJELA, DKOFFFNEFJC, OOCGEGAAMMC, KCMNNCFKPEA, FNKNCDIOLHN, FABEFKHKOKN, IAGMLBMKNBK);
	}

	static ::System::Void AKFEGEJMBEK(::GEIHCPAOKKK* OHPJHPEOFLD, ::UnityEngine::SkinnedMeshRenderer* OCFHGOGFGPE, ::System::String* AELLPLBJELA, ::System::Boolean FKEPOLFDPNK)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::UnityEngine::SkinnedMeshRenderer*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_AKFEGEJMBEK_OFFSET))(OHPJHPEOFLD, OCFHGOGFGPE, AELLPLBJELA, FKEPOLFDPNK);
	}

	static ::System::Void AAALNBPMHFO(::IHPELIJBNAH* JKBLDFBGBPK, ::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::System::Void(*)(::IHPELIJBNAH*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_AAALNBPMHFO_OFFSET))(JKBLDFBGBPK, EHHHMFKHNAI);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void LEIFBFPELOG(::MoleMole::EntityHandle HPADNAEINPK, ::System::Boolean GDBPMMPFHJG)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_LEIFBFPELOG_OFFSET))(HPADNAEINPK, GDBPMMPFHJG);
	}

	static ::System::Void KPPFGLKKHHN(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_KPPFGLKKHHN_OFFSET))(OHPJHPEOFLD);
	}

	::System::Void NPIJFJJOBCA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_NPIJFJJOBCA_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Void CAJGHGBPDPK(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::String* JMBNHKNMAND)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::System::String*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_CAJGHGBPDPK_OFFSET))(OHPJHPEOFLD, JMBNHKNMAND);
	}

	static ::System::Void IAAHOAPNGAP(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_IAAHOAPNGAP_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void LCDPLIEGOFF(::GEIHCPAOKKK* OHPJHPEOFLD, ::CHHAEBJKNNH DIIIAAHCHAF)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::CHHAEBJKNNH))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_LCDPLIEGOFF_OFFSET))(OHPJHPEOFLD, DIIIAAHCHAF);
	}

	::System::Void DDKFDJJBDJM(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_DDKFDJJBDJM_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void OLCOPFGMIKJ(::DKLGPPKLBHE* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::DKLGPPKLBHE*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_OLCOPFGMIKJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void PHMALAJLNON(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::String* AELLPLBJELA, ::System::Boolean FKEPOLFDPNK)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_PHMALAJLNON_OFFSET))(OHPJHPEOFLD, AELLPLBJELA, FKEPOLFDPNK);
	}

	static ::System::Void CCEPNMOHHCI(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_CCEPNMOHHCI_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void MENMDNJJGKH(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_MENMDNJJGKH_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Boolean ALPNGKIPHEB(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::String* HIAIKHDFCLN, ::UnityEngine::Renderer*& OCFHGOGFGPE)
	{
		return ((::System::Boolean(*)(::GEIHCPAOKKK*, ::System::String*, ::UnityEngine::Renderer*&))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_ALPNGKIPHEB_OFFSET))(OHPJHPEOFLD, HIAIKHDFCLN, OCFHGOGFGPE);
	}

	static ::System::Void CNLHGLNLOMB(::GEIHCPAOKKK* OHPJHPEOFLD, ::UnityEngine::SkinnedMeshRenderer* OCFHGOGFGPE)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_CNLHGLNLOMB_OFFSET))(OHPJHPEOFLD, OCFHGOGFGPE);
	}

	static ::System::Void LICALLGOHGL(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_LICALLGOHGL_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void CHOBFECAGBA(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_CHOBFECAGBA_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void OMIKJMAJAJO(::GEIHCPAOKKK* OHPJHPEOFLD, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType DIIIAAHCHAF, ::System::Collections::Generic::IList_1<::System::String*>* CFHNLOEODDN, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* HBGGCCKJJDA, ::System::Collections::Generic::List_1<::System::String*>* DJGONKEIBAG)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType, ::System::Collections::Generic::IList_1<::System::String*>*, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_OMIKJMAJAJO_OFFSET))(OHPJHPEOFLD, DIIIAAHCHAF, CFHNLOEODDN, HBGGCCKJJDA, DJGONKEIBAG);
	}

	static ::System::Boolean LNOLCPIHILO(::GEIHCPAOKKK* OHPJHPEOFLD, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType DIIIAAHCHAF, ::System::String* KBIECIBMCHM)
	{
		return ((::System::Boolean(*)(::GEIHCPAOKKK*, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType, ::System::String*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_LNOLCPIHILO_OFFSET))(OHPJHPEOFLD, DIIIAAHCHAF, KBIECIBMCHM);
	}

	static ::System::Void FAKIEDNBEJF(::BCGLKLNMOLG* GEGPJLDPCEE)
	{
		return ((::System::Void(*)(::BCGLKLNMOLG*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_FAKIEDNBEJF_OFFSET))(GEGPJLDPCEE);
	}

	static ::System::Void GFKCLLCCAMF(::IHPELIJBNAH* JKBLDFBGBPK, ::System::Single& OOCGEGAAMMC, ::System::Single& KCMNNCFKPEA, ::System::Single& FNKNCDIOLHN, ::System::Int32& HCMHGMADHCN, ::UnityEngine::Vector3& MPLDDNMCECG)
	{
		return ((::System::Void(*)(::IHPELIJBNAH*, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Int32&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_GFKCLLCCAMF_OFFSET))(JKBLDFBGBPK, OOCGEGAAMMC, KCMNNCFKPEA, FNKNCDIOLHN, HCMHGMADHCN, MPLDDNMCECG);
	}

	static ::System::Void BGNDLAAGDHN(::UnityEngine::GameObject* GENFJNEPKEA, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_BGNDLAAGDHN_OFFSET))(GENFJNEPKEA, KECKGDFIALJ);
	}

	static ::System::Void NDABGJHBDNH(::GEIHCPAOKKK* OHPJHPEOFLD, ::UnityEngine::Collider* BPGCPNIEBOO)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_NDABGJHBDNH_OFFSET))(OHPJHPEOFLD, BPGCPNIEBOO);
	}

	static ::System::Void GIJBHIKDKFN(::UnityEngine::Collider* EHHHMFKHNAI, ::System::String* KBIECIBMCHM, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* HBGGCCKJJDA, ::System::Collections::Generic::List_1<::System::String*>* DJGONKEIBAG)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_GIJBHIKDKFN_OFFSET))(EHHHMFKHNAI, KBIECIBMCHM, HBGGCCKJJDA, DJGONKEIBAG);
	}

	static ::System::Void PHIGLDJBDAH(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_PHIGLDJBDAH_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Boolean HEECLBACOMI(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Int32 JOFINIIEAIA, ::System::Boolean KENLGHHBIPM, ::System::String* AELLPLBJELA, ::System::Single FOCGLPGBCHM)
	{
		return ((::System::Boolean(*)(::GEIHCPAOKKK*, ::System::Int32, ::System::Boolean, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_HEECLBACOMI_OFFSET))(OHPJHPEOFLD, JOFINIIEAIA, KENLGHHBIPM, AELLPLBJELA, FOCGLPGBCHM);
	}

	static ::System::Void IGBJIEGIKHK(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_IGBJIEGIKHK_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void PNADNFEKEPO(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_PNADNFEKEPO_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void OHCCLJBKHJI(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_OHCCLJBKHJI_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Boolean EOKMKJDKCHL(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Int32 JOFINIIEAIA)
	{
		return ((::System::Boolean(*)(::GEIHCPAOKKK*, ::System::Int32))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_EOKMKJDKCHL_OFFSET))(OHPJHPEOFLD, JOFINIIEAIA);
	}

	static ::System::Void PLPBBLNNEMD(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_PLPBBLNNEMD_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void BNAJHKCKAMG(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_BNAJHKCKAMG_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void BJJCIIMGAFO(::MoleMole::Battle::Entity* KECKGDFIALJ, ::IADDHANFKPG* FFIKGAEFPAO)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::IADDHANFKPG*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_BJJCIIMGAFO_OFFSET))(KECKGDFIALJ, FFIKGAEFPAO);
	}

	static ::System::Void MNJAJAPMKNA(::GEIHCPAOKKK* BIEHMPHDGCO)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_MNJAJAPMKNA_OFFSET))(BIEHMPHDGCO);
	}

	static ::System::Void PJNAAIDNNAF(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_PJNAAIDNNAF_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void KFJFDGNKNOE(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::String* ACFIKCMHFBK, ::System::Boolean MBJDMKCGOCK, ::System::Boolean DIKHKGBNPDG)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_KFJFDGNKNOE_OFFSET))(OHPJHPEOFLD, ACFIKCMHFBK, MBJDMKCGOCK, DIKHKGBNPDG);
	}

	static ::System::Void JENGPNKALNJ(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_JENGPNKALNJ_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void GFMKLGJKAFA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::GameObject* GENFJNEPKEA, ::IADDHANFKPG* FFIKGAEFPAO)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::IADDHANFKPG*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_GFMKLGJKAFA_OFFSET))(KECKGDFIALJ, GENFJNEPKEA, FFIKGAEFPAO);
	}

	static ::System::Void INMGFMLLCOG(::GEIHCPAOKKK* EKHKNFILMGJ)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_INMGFMLLCOG_OFFSET))(EKHKNFILMGJ);
	}

	static ::System::Boolean EMJKMAGJNDE(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String*& DIKGMNJBLMH)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::String*&))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_EMJKMAGJNDE_OFFSET))(KECKGDFIALJ, DIKGMNJBLMH);
	}

	static ::System::Void KEGOIJJJBCB(::GEIHCPAOKKK* OHPJHPEOFLD, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single DCEOBAPNGIK, ::System::Boolean GFNBNBKPPGC)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_KEGOIJJJBCB_OFFSET))(OHPJHPEOFLD, CKPGOKHECCH, DCEOBAPNGIK, GFNBNBKPPGC);
	}

	static ::System::Boolean PEKIJMAEKDA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_PEKIJMAEKDA_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void ODHPJCFEKNK(::MoleMole::Battle::Entity* KECKGDFIALJ, ::IADDHANFKPG* FFIKGAEFPAO)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::IADDHANFKPG*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_ODHPJCFEKNK_OFFSET))(KECKGDFIALJ, FFIKGAEFPAO);
	}

	static ::System::Void DGPKBHOHGPI(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Single BLLPKIHOIMF)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::System::Single))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_DGPKBHOHGPI_OFFSET))(OHPJHPEOFLD, BLLPKIHOIMF);
	}

	static ::System::Void OMAJLJIBKGD(::IHPELIJBNAH* JKBLDFBGBPK, ::System::Single BEPMDFENBMH, ::System::Single DHAEOIELJBG, ::System::Single GLHOOPFADKL, ::System::Int32 HCMHGMADHCN, ::UnityEngine::Vector3 MPLDDNMCECG)
	{
		return ((::System::Void(*)(::IHPELIJBNAH*, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_OMAJLJIBKGD_OFFSET))(JKBLDFBGBPK, BEPMDFENBMH, DHAEOIELJBG, GLHOOPFADKL, HCMHGMADHCN, MPLDDNMCECG);
	}

	static ::System::Void BLMKOAEKBGO(::GEIHCPAOKKK* OHPJHPEOFLD, ::IHPELIJBNAH* JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::IHPELIJBNAH*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_BLMKOAEKBGO_OFFSET))(OHPJHPEOFLD, JKBLDFBGBPK);
	}

	static ::System::Void FAGKOCOPPAI(::DBHKJNFENOB* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::DBHKJNFENOB*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_FAGKOCOPPAI_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void KEGOIJJJBCB_1(::GEIHCPAOKKK* OHPJHPEOFLD, ::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Quaternion GJNLCLDFFIN, ::System::Boolean GFNBNBKPPGC)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_KEGOIJJJBCB_1_OFFSET))(OHPJHPEOFLD, CKPGOKHECCH, GJNLCLDFFIN, GFNBNBKPPGC);
	}

	static ::System::Void POIOOHCLMGJ(::UnityEngine::GameObject* GENFJNEPKEA, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_POIOOHCLMGJ_OFFSET))(GENFJNEPKEA, KECKGDFIALJ);
	}

	static ::System::Void CGFDMKKFLPE(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Int32 JOFINIIEAIA, ::System::String* AELLPLBJELA, ::System::Boolean FKEPOLFDPNK)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_CGFDMKKFLPE_OFFSET))(OHPJHPEOFLD, JOFINIIEAIA, AELLPLBJELA, FKEPOLFDPNK);
	}

	static ::System::Void BLNFNGMJHOK(::GEIHCPAOKKK* OHPJHPEOFLD, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType DIIIAAHCHAF, ::System::String* KBIECIBMCHM, ::System::Single EMNFGKDHDFP, ::System::Single NGKONPMFBEK, ::System::Single EHCHHEGDICM, ::System::Int32 MHJBKFKBHJM, ::UnityEngine::Vector3 GIHBIFPDDDH, ::System::Boolean JOLBMGDMLNB, ::System::Single& OOCGEGAAMMC, ::System::Single& KCMNNCFKPEA, ::System::Single& FNKNCDIOLHN, ::System::Int32& EPIDNIGIOLN, ::System::Boolean& FABEFKHKOKN, ::UnityEngine::Vector3& GFGEDMLAILI)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Int32&, ::System::Boolean&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_BLNFNGMJHOK_OFFSET))(OHPJHPEOFLD, DIIIAAHCHAF, KBIECIBMCHM, EMNFGKDHDFP, NGKONPMFBEK, EHCHHEGDICM, MHJBKFKBHJM, GIHBIFPDDDH, JOLBMGDMLNB, OOCGEGAAMMC, KCMNNCFKPEA, FNKNCDIOLHN, EPIDNIGIOLN, FABEFKHKOKN, GFGEDMLAILI);
	}

	static ::System::Void IJABGFNGDOC(::GEIHCPAOKKK* OHPJHPEOFLD, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType DIIIAAHCHAF, ::System::String* KBIECIBMCHM)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::MoleMole::Config::AnimatorZoneChangeColliderSize_ColliderType, ::System::String*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_IJABGFNGDOC_OFFSET))(OHPJHPEOFLD, DIIIAAHCHAF, KBIECIBMCHM);
	}

	static ::System::Boolean OGHHACPAHBH()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CFIJCMGJBAB_OGHHACPAHBH_OFFSET))();
	}

	static ::System::Void KCNFCEPEKED(::System::UInt32 NJNCGJLHLKC, ::Foundation::AssetPath CJBJONJDOLI, ::UnityEngine::GameObject* GENFJNEPKEA, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::UInt32, ::Foundation::AssetPath, ::UnityEngine::GameObject*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_KCNFCEPEKED_OFFSET))(NJNCGJLHLKC, CJBJONJDOLI, GENFJNEPKEA, KECKGDFIALJ);
	}

	static ::System::Void LODGHDDIODM(::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::UInt32))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_LODGHDDIODM_OFFSET))(NJOAJLDJCCJ, BKLGNCBNEGM);
	}

	static ::System::Void ABBEOBMMJPA(::GEIHCPAOKKK* BIEHMPHDGCO)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_ABBEOBMMJPA_OFFSET))(BIEHMPHDGCO);
	}

	static ::System::Void PJCCDPCCLMP(::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_PJCCDPCCLMP_OFFSET))(OHPJHPEOFLD);
	}

	static ::System::Void AKKMAMAFHLE(::System::Int32 EJKHEBIEKDE, ::System::Int32 MFIONBMNPCC, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_AKKMAMAFHLE_OFFSET))(EJKHEBIEKDE, MFIONBMNPCC, BKLGNCBNEGM);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void CPEKCNIEDKJ(::EJMAJNMLJEJ* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::EJMAJNMLJEJ*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_CPEKCNIEDKJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void NIDDHMNDIEO(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_NIDDHMNDIEO_OFFSET))(MNGHGOLKKNO);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::IAHLAPEHFKN* DIIKHEPPLJM(::IHPELIJBNAH* JKBLDFBGBPK)
	{
		return ((::IAHLAPEHFKN*(*)(::IHPELIJBNAH*))((::PBYTE)hIl2Cpp + CFIJCMGJBAB_DIIKHEPPLJM_OFFSET))(JKBLDFBGBPK);
	}
};
