#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJHKEDBIPPK.h"
#include "unitysdk/KGOEPEBCOOB.h"
#include "unitysdk/LMKBNPGAOFI_EGHEAEIAPKA.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/PJHKDJEGJOG.h"
#include "unitysdk/ADIHNNIOPHD.h"
#include "unitysdk/LKHGICKBMAA.h"
#include "unitysdk/PJHKDJEGJOG_NGGKBHBKBEF.h"
#include "unitysdk/System/ValueTuple_2.h"

class AGJFJGEMIPB_ABMKPFAONMD;
class AKHOKICACBA;
class BDBPOGPNCBP;
class BNFIIBMAMDO;
class EDOKGCBMFKB;
class EEHJOPEJOCD;
class FCBNEBOPNIF;
class NAPAFGBIBBL;
class NOAHNKGLKKG;
class POFOFGILKAA;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define LMDMPLPEJFP_AJINNLNIHJC_OFFSET UNITYSDK_OFFSET(0x12D41750)
#define LMDMPLPEJFP_AMODKFGCBPJ_OFFSET UNITYSDK_OFFSET(0x12D42DA0)
#define LMDMPLPEJFP_ANJGEOHJCBE_OFFSET UNITYSDK_OFFSET(0x12D3EAB0)
#define LMDMPLPEJFP_BDINOAFHFJO_OFFSET UNITYSDK_OFFSET(0x12D41690)
#define LMDMPLPEJFP_BEBLFMKHGKH_OFFSET UNITYSDK_OFFSET(0x12D42D00)
#define LMDMPLPEJFP_BICHECDBGPC_OFFSET UNITYSDK_OFFSET(0x12D3CE40)
#define LMDMPLPEJFP_BIPAGPBHGBP_OFFSET UNITYSDK_OFFSET(0x12D419A0)
#define LMDMPLPEJFP_BPDIHMLIOBP_OFFSET UNITYSDK_OFFSET(0x12D40C90)
#define LMDMPLPEJFP_CCLJEALMALJ_OFFSET UNITYSDK_OFFSET(0x12D40B70)
#define LMDMPLPEJFP_CEPLIBADNFB_OFFSET UNITYSDK_OFFSET(0x12D41A70)
#define LMDMPLPEJFP_CLNIGONFCGH_OFFSET UNITYSDK_OFFSET(0x12D419C0)
#define LMDMPLPEJFP_CMNHOPJNPCE_OFFSET UNITYSDK_OFFSET(0x12D42A50)
#define LMDMPLPEJFP_DMBMHHBNANK_OFFSET UNITYSDK_OFFSET(0x12D42980)
#define LMDMPLPEJFP_DMFIKALJLMI_OFFSET UNITYSDK_OFFSET(0x12D3D160)
#define LMDMPLPEJFP_DOPHOJGNFOM_OFFSET UNITYSDK_OFFSET(0x12D42A40)
#define LMDMPLPEJFP_ECKGOJHDHCN_OFFSET UNITYSDK_OFFSET(0x12D3CDF0)
#define LMDMPLPEJFP_EMAADMCLHPG_OFFSET UNITYSDK_OFFSET(0x12D41560)
#define LMDMPLPEJFP_FDLJBJGJKMO_OFFSET UNITYSDK_OFFSET(0x12D428F0)
#define LMDMPLPEJFP_FHFHPENGCBL_OFFSET UNITYSDK_OFFSET(0x12D41910)
#define LMDMPLPEJFP_FJJFFFDDMIC_OFFSET UNITYSDK_OFFSET(0x12D40DC0)
#define LMDMPLPEJFP_FKGPGGNMDFI_OFFSET UNITYSDK_OFFSET(0x12D41340)
#define LMDMPLPEJFP_FNACHECOODF_OFFSET UNITYSDK_OFFSET(0x12D40080)
#define LMDMPLPEJFP_FOLOCLNNPFM_OFFSET UNITYSDK_OFFSET(0x12D3CB50)
#define LMDMPLPEJFP_GACBAEBMAAC_OFFSET UNITYSDK_OFFSET(0x12D42C50)
#define LMDMPLPEJFP_GFFJAIIEKPB_OFFSET UNITYSDK_OFFSET(0x12D3F4F0)
#define LMDMPLPEJFP_GMMLAHNKPKA_OFFSET UNITYSDK_OFFSET(0x12D3F4A0)
#define LMDMPLPEJFP_GNDCEOKMDCA_OFFSET UNITYSDK_OFFSET(0x12D42DB0)
#define LMDMPLPEJFP_GOGIGNJLMII_OFFSET UNITYSDK_OFFSET(0x12D41E50)
#define LMDMPLPEJFP_GPEBDHEKGCI_OFFSET UNITYSDK_OFFSET(0x12D410E0)
#define LMDMPLPEJFP_HDBFMMBFEDF_OFFSET UNITYSDK_OFFSET(0x12D3D2F0)
#define LMDMPLPEJFP_HFHFMPOPPNB_OFFSET UNITYSDK_OFFSET(0x12D3DCB0)
#define LMDMPLPEJFP_HHOMELKLDGJ_OFFSET UNITYSDK_OFFSET(0x12D416A0)
#define LMDMPLPEJFP_HMLFEIHMFAF_OFFSET UNITYSDK_OFFSET(0x12D410A0)
#define LMDMPLPEJFP_HNHBALFENIM_OFFSET UNITYSDK_OFFSET(0x12D424F0)
#define LMDMPLPEJFP_IAFLEOOHMMF_OFFSET UNITYSDK_OFFSET(0x12D40EF0)
#define LMDMPLPEJFP_IEOICOAEDMJ_OFFSET UNITYSDK_OFFSET(0x12D3F850)
#define LMDMPLPEJFP_IGMNDOMOMPP_OFFSET UNITYSDK_OFFSET(0x12D415F0)
#define LMDMPLPEJFP_ILDNIGBCCNF_OFFSET UNITYSDK_OFFSET(0x12D418A0)
#define LMDMPLPEJFP_IOCCOMDCIBD_OFFSET UNITYSDK_OFFSET(0x12D40160)
#define LMDMPLPEJFP_IPILHLOOKEI_OFFSET UNITYSDK_OFFSET(0x12D3FB20)
#define LMDMPLPEJFP_JBAPAPJOMFH_OFFSET UNITYSDK_OFFSET(0x12D3E650)
#define LMDMPLPEJFP_JBLELHGFDIC_OFFSET UNITYSDK_OFFSET(0x12D40110)
#define LMDMPLPEJFP_JCNFOHPLPFJ_OFFSET UNITYSDK_OFFSET(0x12D3E4D0)
#define LMDMPLPEJFP_JDDPMDDJGAL_OFFSET UNITYSDK_OFFSET(0x12D3E930)
#define LMDMPLPEJFP_JJCECLNIHEK_OFFSET UNITYSDK_OFFSET(0x12D42CF0)
#define LMDMPLPEJFP_JLHBKJKDGDE_OFFSET UNITYSDK_OFFSET(0x12D3D550)
#define LMDMPLPEJFP_KBGLLPGOENE_OFFSET UNITYSDK_OFFSET(0x12D3FE80)
#define LMDMPLPEJFP_KKNFCGBKOEE_OFFSET UNITYSDK_OFFSET(0x12D41020)
#define LMDMPLPEJFP_KLDDPGKOCEM_OFFSET UNITYSDK_OFFSET(0x12D405C0)
#define LMDMPLPEJFP_KMLILMANEJF_OFFSET UNITYSDK_OFFSET(0x12D3F9F0)
#define LMDMPLPEJFP_KMOBPJPDKHN_OFFSET UNITYSDK_OFFSET(0x12D42E60)
#define LMDMPLPEJFP_KNAMLBOMBMK_OFFSET UNITYSDK_OFFSET(0x12D428E0)
#define LMDMPLPEJFP_LCIHAAIAGDB_OFFSET UNITYSDK_OFFSET(0x12D411C0)
#define LMDMPLPEJFP_LCIHDNLIAPF_OFFSET UNITYSDK_OFFSET(0x12D421D0)
#define LMDMPLPEJFP_LEOKODLANAJ_OFFSET UNITYSDK_OFFSET(0x12D41330)
#define LMDMPLPEJFP_LGLFOPDPLDI_OFFSET UNITYSDK_OFFSET(0x12D40B10)
#define LMDMPLPEJFP_MKEIGFMHLHF_OFFSET UNITYSDK_OFFSET(0x12D417E0)
#define LMDMPLPEJFP_MLNEFJJLPKD_OFFSET UNITYSDK_OFFSET(0x12D3E490)
#define LMDMPLPEJFP_NDKGFDFCDIK_OFFSET UNITYSDK_OFFSET(0x12D3FA90)
#define LMDMPLPEJFP_NGALEHEDCOJ_OFFSET UNITYSDK_OFFSET(0x12D3EC30)
#define LMDMPLPEJFP_NIFMPHPFGMK_OFFSET UNITYSDK_OFFSET(0x12D41350)
#define LMDMPLPEJFP_NJBFHOJBJMH_OFFSET UNITYSDK_OFFSET(0x12D3E660)
#define LMDMPLPEJFP_NKJJNAIPGHF_OFFSET UNITYSDK_OFFSET(0x12D3DE40)
#define LMDMPLPEJFP_NMNOHGIFONK_OFFSET UNITYSDK_OFFSET(0x12D3D4E0)
#define LMDMPLPEJFP_NNNIPMCJBKE_OFFSET UNITYSDK_OFFSET(0x12D42A60)
#define LMDMPLPEJFP_NPMCIMJNNHA_OFFSET UNITYSDK_OFFSET(0x12D416B0)
#define LMDMPLPEJFP_OAOKBCJNPIL_OFFSET UNITYSDK_OFFSET(0x12D3F700)
#define LMDMPLPEJFP_OGDJMFAFDOO_OFFSET UNITYSDK_OFFSET(0x12D409C0)
#define LMDMPLPEJFP_OJEIGNFCDKD_OFFSET UNITYSDK_OFFSET(0x12D3DBB0)
#define LMDMPLPEJFP_OMPDOHONEMB_OFFSET UNITYSDK_OFFSET(0x12D42DC0)
#define LMDMPLPEJFP_OPCDJBJBPBD_OFFSET UNITYSDK_OFFSET(0x12D41200)
#define LMDMPLPEJFP_OPKPDCJDLNB_OFFSET UNITYSDK_OFFSET(0x12D41600)
#define LMDMPLPEJFP_PDNCPJPEODL_OFFSET UNITYSDK_OFFSET(0x12D40B20)
#define LMDMPLPEJFP_PDPEPEFPPEG_OFFSET UNITYSDK_OFFSET(0x12D3E480)
#define LMDMPLPEJFP_PKGEILNPLPN_OFFSET UNITYSDK_OFFSET(0x12D419B0)
#define LMDMPLPEJFP_PPNLOBALFKG_OFFSET UNITYSDK_OFFSET(0x12D3D740)
#define LMDMPLPEJFP__CTOR_OFFSET UNITYSDK_OFFSET(0x12D414D0)

inline static constexpr unsigned int LMDMPLPEJFP_TypeDefinitionIndex = 79495;

class LMDMPLPEJFP : public ::PJHKDJEGJOG
{
public:
	::System::String* DJEEFPDBGFE; // 0x2F8
	::System::String* INGABOHEAPN; // 0x300
	::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* LPFKNHGPEAN; // 0x308
	::System::Collections::Generic::List_1<::KGOEPEBCOOB>* HANOHPCKEKB; // 0x310
	::System::Int32 _JIFFFFPIJPN_k__BackingField; // 0x318

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP__CTOR_OFFSET))(this);
	}

	::System::Void FOLOCLNNPFM(::FCBNEBOPNIF* CENFDFIKBDC)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_FOLOCLNNPFM_OFFSET))(this, CENFDFIKBDC);
	}

	::System::Void ECKGOJHDHCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_ECKGOJHDHCN_OFFSET))(this);
	}

	::System::Int32 DMFIKALJLMI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_DMFIKALJLMI_OFFSET))(this);
	}

	::System::Void HDBFMMBFEDF(::AKHOKICACBA* MIMNNMMMJJF)
	{
		return ((::System::Void(*)(::PVOID, ::AKHOKICACBA*))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_HDBFMMBFEDF_OFFSET))(this, MIMNNMMMJJF);
	}

	::System::Void NMNOHGIFONK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_NMNOHGIFONK_OFFSET))(this);
	}

	::System::Void JLHBKJKDGDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_JLHBKJKDGDE_OFFSET))(this);
	}

	::System::Void PPNLOBALFKG(::MoleMole::Battle::Entity* DBIOAKNMBDM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_PPNLOBALFKG_OFFSET))(this, DBIOAKNMBDM);
	}

	::System::Int32 HFHFMPOPPNB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_HFHFMPOPPNB_OFFSET))(this);
	}

	::System::Void NKJJNAIPGHF(::EEHJOPEJOCD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EEHJOPEJOCD*))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_NKJJNAIPGHF_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Boolean PDPEPEFPPEG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_PDPEPEFPPEG_OFFSET))(this);
	}

	::System::Boolean MLNEFJJLPKD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_MLNEFJJLPKD_OFFSET))(this);
	}

	::System::String* JCNFOHPLPFJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_JCNFOHPLPFJ_OFFSET))(this);
	}

	::System::Void JBAPAPJOMFH(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_JBAPAPJOMFH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NJBFHOJBJMH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_NJBFHOJBJMH_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> ANJGEOHJCBE(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* EIDHJDBNFJF, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* PAPNEOOMBFJ)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_ANJGEOHJCBE_OFFSET))(this, EIDHJDBNFJF, PAPNEOOMBFJ);
	}

	::System::Void GMMLAHNKPKA(::System::Collections::Generic::IList_1<::System::UInt32>*& DAOLPHKIGAE, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*& IABNKEBGPLA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*&, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*&))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_GMMLAHNKPKA_OFFSET))(this, DAOLPHKIGAE, IABNKEBGPLA);
	}

	::BDBPOGPNCBP* GFFJAIIEKPB(::System::Int32 EIGKENIGHBG, ::ADIHNNIOPHD HKDAAFACOMC)
	{
		return ((::BDBPOGPNCBP*(*)(::PVOID, ::System::Int32, ::ADIHNNIOPHD))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_GFFJAIIEKPB_OFFSET))(this, EIGKENIGHBG, HKDAAFACOMC);
	}

	::NAPAFGBIBBL* OAOKBCJNPIL()
	{
		return ((::NAPAFGBIBBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_OAOKBCJNPIL_OFFSET))(this);
	}

	::System::Void IEOICOAEDMJ(::LMKBNPGAOFI_EGHEAEIAPKA FANPHGDELCD)
	{
		return ((::System::Void(*)(::PVOID, ::LMKBNPGAOFI_EGHEAEIAPKA))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_IEOICOAEDMJ_OFFSET))(this, FANPHGDELCD);
	}

	::System::Void KMLILMANEJF(::HJHKEDBIPPK KEFEEGHGAMA)
	{
		return ((::System::Void(*)(::PVOID, ::HJHKEDBIPPK))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_KMLILMANEJF_OFFSET))(this, KEFEEGHGAMA);
	}

	::System::Void NDKGFDFCDIK(::HJHKEDBIPPK ENCMFDGCEDM)
	{
		return ((::System::Void(*)(::PVOID, ::HJHKEDBIPPK))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_NDKGFDFCDIK_OFFSET))(this, ENCMFDGCEDM);
	}

	::System::Void IPILHLOOKEI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_IPILHLOOKEI_OFFSET))(this);
	}

	::System::Void FNACHECOODF(::POFOFGILKAA* HEJIBNEHLIG)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_FNACHECOODF_OFFSET))(this, HEJIBNEHLIG);
	}

	::System::Void JBLELHGFDIC(::EDOKGCBMFKB* LHFGDMKIDAP)
	{
		return ((::System::Void(*)(::PVOID, ::EDOKGCBMFKB*))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_JBLELHGFDIC_OFFSET))(this, LHFGDMKIDAP);
	}

	::System::Boolean IOCCOMDCIBD(::MoleMole::Level::RatingType& PELBDIILFDH, ::PJHKDJEGJOG_NGGKBHBKBEF& BGNHPJABKDM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::RatingType&, ::PJHKDJEGJOG_NGGKBHBKBEF&))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_IOCCOMDCIBD_OFFSET))(this, PELBDIILFDH, BGNHPJABKDM);
	}

	::System::Boolean KLDDPGKOCEM(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType JIPPMBKLFHE, ::System::Boolean DOFCLPCLHOJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType, ::System::Boolean))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_KLDDPGKOCEM_OFFSET))(this, JIPPMBKLFHE, DOFCLPCLHOJ);
	}

	::System::Boolean OGDJMFAFDOO(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType& KJHGEBPALMD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType&))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_OGDJMFAFDOO_OFFSET))(this, KJHGEBPALMD);
	}

	::System::Boolean LGLFOPDPLDI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_LGLFOPDPLDI_OFFSET))(this);
	}

	::System::Boolean PDNCPJPEODL(::LKHGICKBMAA& BLDMLLMGOCE)
	{
		return ((::System::Boolean(*)(::PVOID, ::LKHGICKBMAA&))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_PDNCPJPEODL_OFFSET))(this, BLDMLLMGOCE);
	}

	::MoleMole::UIBaseController* CCLJEALMALJ(::MoleMole::UIBaseController* IPDOACOBKDK, ::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_CCLJEALMALJ_OFFSET))(this, IPDOACOBKDK, JNLBPMKIFNK);
	}

	::NOAHNKGLKKG* BPDIHMLIOBP()
	{
		return ((::NOAHNKGLKKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_BPDIHMLIOBP_OFFSET))(this);
	}

	::BDBPOGPNCBP* FJJFFFDDMIC()
	{
		return ((::BDBPOGPNCBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_FJJFFFDDMIC_OFFSET))(this);
	}

	::System::Int32 IAFLEOOHMMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_IAFLEOOHMMF_OFFSET))(this);
	}

	::System::Single KKNFCGBKOEE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_KKNFCGBKOEE_OFFSET))(this);
	}

	::System::Int32 HMLFEIHMFAF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_HMLFEIHMFAF_OFFSET))(this);
	}

	::System::Int32 LCIHAAIAGDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_LCIHAAIAGDB_OFFSET))(this);
	}

	::System::Int32 GPEBDHEKGCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_GPEBDHEKGCI_OFFSET))(this);
	}

	::System::Void LEOKODLANAJ(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_LEOKODLANAJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 OPCDJBJBPBD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_OPCDJBJBPBD_OFFSET))(this);
	}

	::System::Void FKGPGGNMDFI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_FKGPGGNMDFI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean NIFMPHPFGMK(::System::Int64& BFPDDMILKBF, ::System::Int64& CDMKODJJBKH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64&, ::System::Int64&))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_NIFMPHPFGMK_OFFSET))(this, BFPDDMILKBF, CDMKODJJBKH);
	}

	::System::Void EMAADMCLHPG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_EMAADMCLHPG_OFFSET))(this);
	}

	::System::Void IGMNDOMOMPP(::FCBNEBOPNIF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_IGMNDOMOMPP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void OPKPDCJDLNB(::HJHKEDBIPPK MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::HJHKEDBIPPK))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_OPKPDCJDLNB_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BDINOAFHFJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_BDINOAFHFJO_OFFSET))(this);
	}

	::System::Boolean HHOMELKLDGJ(::LKHGICKBMAA& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::LKHGICKBMAA&))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_HHOMELKLDGJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean NPMCIMJNNHA(::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType, ::System::Boolean))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_NPMCIMJNNHA_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void AJINNLNIHJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_AJINNLNIHJC_OFFSET))(this);
	}

	::System::Void BICHECDBGPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_BICHECDBGPC_OFFSET))(this);
	}

	::System::Boolean MKEIGFMHLHF(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType&))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_MKEIGFMHLHF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::String* ILDNIGBCCNF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_ILDNIGBCCNF_OFFSET))(this);
	}

	::System::String* JDDPMDDJGAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_JDDPMDDJGAL_OFFSET))(this);
	}

	::System::Void FHFHPENGCBL(::HJHKEDBIPPK MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::HJHKEDBIPPK))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_FHFHPENGCBL_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void BIPAGPBHGBP(::AKHOKICACBA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AKHOKICACBA*))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_BIPAGPBHGBP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 PKGEILNPLPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_PKGEILNPLPN_OFFSET))(this);
	}

	::System::Int32 CLNIGONFCGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_CLNIGONFCGH_OFFSET))(this);
	}

	::BNFIIBMAMDO* OJEIGNFCDKD()
	{
		return ((::BNFIIBMAMDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_OJEIGNFCDKD_OFFSET))(this);
	}

	::AGJFJGEMIPB_ABMKPFAONMD* CEPLIBADNFB(::System::String* MCOHLHMKLIP)
	{
		return ((::AGJFJGEMIPB_ABMKPFAONMD*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_CEPLIBADNFB_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void NGALEHEDCOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_NGALEHEDCOJ_OFFSET))(this);
	}

	::System::Void LCIHDNLIAPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_LCIHDNLIAPF_OFFSET))(this);
	}

	::System::Void KNAMLBOMBMK(::POFOFGILKAA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_KNAMLBOMBMK_OFFSET))(this, MIALFKCCCPI);
	}

	::AGJFJGEMIPB_ABMKPFAONMD* KBGLLPGOENE()
	{
		return ((::AGJFJGEMIPB_ABMKPFAONMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_KBGLLPGOENE_OFFSET))(this);
	}

	::System::Void HNHBALFENIM(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* IHMBPLIDMPL, ::System::Int32 ABHBKFJKINO, ::System::Collections::Generic::IList_1<::System::UInt32>* BDHOILPIGKB, ::System::Int32 FFJGPKNMBBP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_HNHBALFENIM_OFFSET))(this, IHMBPLIDMPL, ABHBKFJKINO, BDHOILPIGKB, FFJGPKNMBBP);
	}

	::System::Void FDLJBJGJKMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_FDLJBJGJKMO_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> DMBMHHBNANK(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* MIALFKCCCPI, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* KMGKAIDEIBA)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_DMBMHHBNANK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void GOGIGNJLMII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_GOGIGNJLMII_OFFSET))(this);
	}

	::System::Void DOPHOJGNFOM(::LMKBNPGAOFI_EGHEAEIAPKA MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LMKBNPGAOFI_EGHEAEIAPKA))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_DOPHOJGNFOM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::String* CMNHOPJNPCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_CMNHOPJNPCE_OFFSET))(this);
	}

	::AGJFJGEMIPB_ABMKPFAONMD* NNNIPMCJBKE(::System::Boolean NOLBECKFLEK)
	{
		return ((::AGJFJGEMIPB_ABMKPFAONMD*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_NNNIPMCJBKE_OFFSET))(this, NOLBECKFLEK);
	}

	::System::Boolean GACBAEBMAAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_GACBAEBMAAC_OFFSET))(this);
	}

	::System::Void JJCECLNIHEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_JJCECLNIHEK_OFFSET))(this);
	}

	::System::Void BEBLFMKHGKH(::EEHJOPEJOCD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::EEHJOPEJOCD*))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_BEBLFMKHGKH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void AMODKFGCBPJ(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_AMODKFGCBPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GNDCEOKMDCA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_GNDCEOKMDCA_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::UIBaseController* OMPDOHONEMB(::MoleMole::UIBaseController* MIALFKCCCPI, ::UnityEngine::Transform* KMGKAIDEIBA)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_OMPDOHONEMB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean KMOBPJPDKHN(::MoleMole::Level::RatingType& MIALFKCCCPI, ::PJHKDJEGJOG_NGGKBHBKBEF& KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::RatingType&, ::PJHKDJEGJOG_NGGKBHBKBEF&))((::PBYTE)hIl2Cpp + LMDMPLPEJFP_KMOBPJPDKHN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
