#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CELEAAKFDPL.h"
#include "unitysdk/KGOEPEBCOOB.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ChallengeQuestType.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/HCDCPDGBIMB.h"
#include "unitysdk/System/ValueTuple_2.h"

class EEHJOPEJOCD;
class ENGKPGFGGLM;
class FCBNEBOPNIF;
class GGFGEIILGFO;
class NCDMMMLNAMM;
class PAGHLNGAFPM;
class POFOFGILKAA;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
template <typename T> class DFDEIDBBGHG_1;

#define ALFAPJABJJB_AAFDHDGMHDI_OFFSET UNITYSDK_OFFSET(0x1436DBD0)
#define ALFAPJABJJB_ADOMMPAHPJI_OFFSET UNITYSDK_OFFSET(0x143707D0)
#define ALFAPJABJJB_AHBAFMKBCGL_OFFSET UNITYSDK_OFFSET(0x1436C310)
#define ALFAPJABJJB_AJINNLNIHJC_OFFSET UNITYSDK_OFFSET(0x14370830)
#define ALFAPJABJJB_AMODKFGCBPJ_OFFSET UNITYSDK_OFFSET(0x1436F210)
#define ALFAPJABJJB_ANJGEOHJCBE_OFFSET UNITYSDK_OFFSET(0x1436B660)
#define ALFAPJABJJB_BDINOAFHFJO_OFFSET UNITYSDK_OFFSET(0x1436FEF0)
#define ALFAPJABJJB_BEBLFMKHGKH_OFFSET UNITYSDK_OFFSET(0x1436FAC0)
#define ALFAPJABJJB_BHPCAKANMEF_OFFSET UNITYSDK_OFFSET(0x14370980)
#define ALFAPJABJJB_BKIMLKOIEID_OFFSET UNITYSDK_OFFSET(0x1436FF00)
#define ALFAPJABJJB_BKLGHOKDLPN_OFFSET UNITYSDK_OFFSET(0x14370490)
#define ALFAPJABJJB_BPHKEBCBCPD_OFFSET UNITYSDK_OFFSET(0x1436BEA0)
#define ALFAPJABJJB_CCEJOPLAEPI_OFFSET UNITYSDK_OFFSET(0x1436A2B0)
#define ALFAPJABJJB_CCLJEALMALJ_OFFSET UNITYSDK_OFFSET(0x1436EC10)
#define ALFAPJABJJB_CGMKKFEIFMI_OFFSET UNITYSDK_OFFSET(0x1436B120)
#define ALFAPJABJJB_CIFJNAHEKFG_OFFSET UNITYSDK_OFFSET(0x1436FEE0)
#define ALFAPJABJJB_CKINGEHLFIH_OFFSET UNITYSDK_OFFSET(0x1436B3F0)
#define ALFAPJABJJB_DFILIFBBMLN_OFFSET UNITYSDK_OFFSET(0x1436E2B0)
#define ALFAPJABJJB_DMBMHHBNANK_OFFSET UNITYSDK_OFFSET(0x143708C0)
#define ALFAPJABJJB_DPMAIMCJNAO_OFFSET UNITYSDK_OFFSET(0x1436D720)
#define ALFAPJABJJB_ECKGOJHDHCN_OFFSET UNITYSDK_OFFSET(0x1436A2C0)
#define ALFAPJABJJB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1436F9A0)
#define ALFAPJABJJB_EHMHJPCBENO_OFFSET UNITYSDK_OFFSET(0x1436AB00)
#define ALFAPJABJJB_FAJJPKEAJMI_OFFSET UNITYSDK_OFFSET(0x1436F7E0)
#define ALFAPJABJJB_FFKLKJEHHOL_OFFSET UNITYSDK_OFFSET(0x1436E010)
#define ALFAPJABJJB_FFNFBOGIKDP_OFFSET UNITYSDK_OFFSET(0x1436F5C0)
#define ALFAPJABJJB_FLFDOBMNOHN_OFFSET UNITYSDK_OFFSET(0x14370A20)
#define ALFAPJABJJB_FNACHECOODF_OFFSET UNITYSDK_OFFSET(0x1436CF50)
#define ALFAPJABJJB_FOLOCLNNPFM_OFFSET UNITYSDK_OFFSET(0x1436C060)
#define ALFAPJABJJB_GALBGIGEFLL_OFFSET UNITYSDK_OFFSET(0x1436DE50)
#define ALFAPJABJJB_GDBMPMBGFID_OFFSET UNITYSDK_OFFSET(0x1436DCD0)
#define ALFAPJABJJB_GHIKPOHDEGM_OFFSET UNITYSDK_OFFSET(0x1436FFB0)
#define ALFAPJABJJB_GKBAJJACIEA_OFFSET UNITYSDK_OFFSET(0x1436A0C0)
#define ALFAPJABJJB_GOPAOBCNFLJ_OFFSET UNITYSDK_OFFSET(0x1436C150)
#define ALFAPJABJJB_HFODHGEOEHB_OFFSET UNITYSDK_OFFSET(0x1436F390)
#define ALFAPJABJJB_HHBIPJCCEHM_OFFSET UNITYSDK_OFFSET(0x14370040)
#define ALFAPJABJJB_HIKFHKGCIJN_OFFSET UNITYSDK_OFFSET(0x1436F380)
#define ALFAPJABJJB_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x1436CDC0)
#define ALFAPJABJJB_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x143705D0)
#define ALFAPJABJJB_IFKENHDGLJE_OFFSET UNITYSDK_OFFSET(0x1436EE70)
#define ALFAPJABJJB_IGMNDOMOMPP_OFFSET UNITYSDK_OFFSET(0x1436FA40)
#define ALFAPJABJJB_ILKLLMLDFNE_OFFSET UNITYSDK_OFFSET(0x1436FFA0)
#define ALFAPJABJJB_JJCECLNIHEK_OFFSET UNITYSDK_OFFSET(0x14370820)
#define ALFAPJABJJB_JLHBKJKDGDE_OFFSET UNITYSDK_OFFSET(0x1436B1B0)
#define ALFAPJABJJB_JMMNKJNLDEM_OFFSET UNITYSDK_OFFSET(0x1436F2B0)
#define ALFAPJABJJB_KNAMLBOMBMK_OFFSET UNITYSDK_OFFSET(0x1436F7D0)
#define ALFAPJABJJB_LAMBJNGEAOB_OFFSET UNITYSDK_OFFSET(0x1436F060)
#define ALFAPJABJJB_LIBGBLJGCIE_OFFSET UNITYSDK_OFFSET(0x1436FA50)
#define ALFAPJABJJB_LIMHNFCLCDD_OFFSET UNITYSDK_OFFSET(0x1436FF40)
#define ALFAPJABJJB_LJEEJABBAHD_OFFSET UNITYSDK_OFFSET(0x1436A2A0)
#define ALFAPJABJJB_LPABPDCLIGJ_OFFSET UNITYSDK_OFFSET(0x1436D870)
#define ALFAPJABJJB_MCDCIFBHNNC_OFFSET UNITYSDK_OFFSET(0x143702E0)
#define ALFAPJABJJB_MPCAGNGJBEH_OFFSET UNITYSDK_OFFSET(0x143705E0)
#define ALFAPJABJJB_MPJHNJFGJGN_OFFSET UNITYSDK_OFFSET(0x1436B430)
#define ALFAPJABJJB_NBOKLEHABCP_OFFSET UNITYSDK_OFFSET(0x1436F9B0)
#define ALFAPJABJJB_NKJJNAIPGHF_OFFSET UNITYSDK_OFFSET(0x1436A320)
#define ALFAPJABJJB_NMNOHGIFONK_OFFSET UNITYSDK_OFFSET(0x1436B380)
#define ALFAPJABJJB_NPHBLJDPFHH_OFFSET UNITYSDK_OFFSET(0x1436E250)
#define ALFAPJABJJB_ODLPFLPMAEG_OFFSET UNITYSDK_OFFSET(0x1436A670)
#define ALFAPJABJJB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1436A9F0)
#define ALFAPJABJJB_OLECAJGGOBA_OFFSET UNITYSDK_OFFSET(0x1436F400)
#define ALFAPJABJJB_OMPDOHONEMB_OFFSET UNITYSDK_OFFSET(0x14370240)
#define ALFAPJABJJB_OOMFFJEONJH_OFFSET UNITYSDK_OFFSET(0x1436A830)
#define ALFAPJABJJB_OPCNLMBBBFF_OFFSET UNITYSDK_OFFSET(0x1436F220)
#define ALFAPJABJJB_PFNIIMHIBGF_OFFSET UNITYSDK_OFFSET(0x1436D8E0)
#define ALFAPJABJJB_PLLKEDEGKLE_OFFSET UNITYSDK_OFFSET(0x1436FAD0)
#define ALFAPJABJJB_PPNLOBALFKG_OFFSET UNITYSDK_OFFSET(0x1436BA60)
#define ALFAPJABJJB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1436EE40)
#define ALFAPJABJJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1436ED30)

inline static constexpr unsigned int ALFAPJABJJB_TypeDefinitionIndex = 89624;

class ALFAPJABJJB : public ::CELEAAKFDPL
{
public:
	static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_KCHBPKKAADG()
	{
		return (::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ALFAPJABJJB_TypeDefinitionIndex)->GetStaticField(0x3D400);
	}
	static ::System::Boolean* StaticGet_BMPHNIMFMPB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ALFAPJABJJB_TypeDefinitionIndex)->GetStaticField(0xE080);
	}
	static ::System::Boolean* StaticGet_GEOGJCGNCPC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ALFAPJABJJB_TypeDefinitionIndex)->GetStaticField(0xE081);
	}
	static ::System::UInt32* StaticGet_LKHIOHMIGBD()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ALFAPJABJJB_TypeDefinitionIndex)->GetStaticField(0xE084);
	}
	// static const ::System::String* HFCLILOODJD; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* MOELBLCOBIK; // 0x2F8
	::PAGHLNGAFPM* DGKDJINBGHJ; // 0x300
	::System::Collections::Generic::List_1<::KGOEPEBCOOB>* DNJMNMHDIPM; // 0x308
	::System::Collections::Generic::List_1<::KGOEPEBCOOB>* OACODJEBLKI; // 0x310
	::System::Collections::Generic::Dictionary_2<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType, ::System::Collections::Generic::List_1<::NCDMMMLNAMM*>*>* HOICNDKLNIA; // 0x318
	::System::Int32 EPBKEMGBMHJ; // 0x320
	::System::UInt32 NBOKGJPOMAN; // 0x324

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALFAPJABJJB__CCTOR_OFFSET))();
	}

	::System::UInt32 GKBAJJACIEA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_GKBAJJACIEA_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType LJEEJABBAHD()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_LJEEJABBAHD_OFFSET))(this);
	}

	::System::Boolean CCEJOPLAEPI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_CCEJOPLAEPI_OFFSET))(this);
	}

	::System::Void ECKGOJHDHCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_ECKGOJHDHCN_OFFSET))(this);
	}

	::System::Void NKJJNAIPGHF(::EEHJOPEJOCD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EEHJOPEJOCD*))((::PBYTE)hIl2Cpp + ALFAPJABJJB_NKJJNAIPGHF_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void CGMKKFEIFMI(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ALFAPJABJJB_CGMKKFEIFMI_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void JLHBKJKDGDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_JLHBKJKDGDE_OFFSET))(this);
	}

	::System::Void NMNOHGIFONK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_NMNOHGIFONK_OFFSET))(this);
	}

	::System::Boolean CKINGEHLFIH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_CKINGEHLFIH_OFFSET))(this);
	}

	::System::Void MPJHNJFGJGN(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* AIAJIMFIJBM, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* LNBBBBLKBKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + ALFAPJABJJB_MPJHNJFGJGN_OFFSET))(this, AIAJIMFIJBM, LNBBBBLKBKF);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> ANJGEOHJCBE(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* EIDHJDBNFJF, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* PAPNEOOMBFJ)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + ALFAPJABJJB_ANJGEOHJCBE_OFFSET))(this, EIDHJDBNFJF, PAPNEOOMBFJ);
	}

	::System::Void PPNLOBALFKG(::MoleMole::Battle::Entity* DBIOAKNMBDM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ALFAPJABJJB_PPNLOBALFKG_OFFSET))(this, DBIOAKNMBDM);
	}

	::System::Void FOLOCLNNPFM(::FCBNEBOPNIF* CENFDFIKBDC)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + ALFAPJABJJB_FOLOCLNNPFM_OFFSET))(this, CENFDFIKBDC);
	}

	::System::Void AHBAFMKBCGL(::MoleMole::Battle::Entity* DJMEFDIHNDO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ALFAPJABJJB_AHBAFMKBCGL_OFFSET))(this, DJMEFDIHNDO);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void FNACHECOODF(::POFOFGILKAA* HEJIBNEHLIG)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + ALFAPJABJJB_FNACHECOODF_OFFSET))(this, HEJIBNEHLIG);
	}

	::System::Single NPHBLJDPFHH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_NPHBLJDPFHH_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HCDCPDGBIMB>* DFILIFBBMLN()
	{
		return ((::System::Collections::Generic::List_1<::HCDCPDGBIMB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_DFILIFBBMLN_OFFSET))(this);
	}

	::MoleMole::UIBaseController* CCLJEALMALJ(::MoleMole::UIBaseController* IPDOACOBKDK, ::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ALFAPJABJJB_CCLJEALMALJ_OFFSET))(this, IPDOACOBKDK, JNLBPMKIFNK);
	}

	::System::Void PFNIIMHIBGF(::MoleMole::Level::RatingType& NILNNELOMCG, ::System::Single& PMGFIHJAJHL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Level::RatingType&, ::System::Single&))((::PBYTE)hIl2Cpp + ALFAPJABJJB_PFNIIMHIBGF_OFFSET))(this, NILNNELOMCG, PMGFIHJAJHL);
	}

	::NCDMMMLNAMM* IFKENHDGLJE(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType OEOKHGDNMPF)
	{
		return ((::NCDMMMLNAMM*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType))((::PBYTE)hIl2Cpp + ALFAPJABJJB_IFKENHDGLJE_OFFSET))(this, OEOKHGDNMPF);
	}

	::System::Void LAMBJNGEAOB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_LAMBJNGEAOB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* GALBGIGEFLL(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType OEOKHGDNMPF)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType))((::PBYTE)hIl2Cpp + ALFAPJABJJB_GALBGIGEFLL_OFFSET))(this, OEOKHGDNMPF);
	}

	::System::Int32 DPMAIMCJNAO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_DPMAIMCJNAO_OFFSET))(this);
	}

	::System::UInt32 GOPAOBCNFLJ()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_GOPAOBCNFLJ_OFFSET))(this);
	}

	::System::Void AMODKFGCBPJ(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ALFAPJABJJB_AMODKFGCBPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::DFDEIDBBGHG_1<::System::UInt32>* LPABPDCLIGJ(::System::Int32 ABHBKFJKINO)
	{
		return ((::DFDEIDBBGHG_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ALFAPJABJJB_LPABPDCLIGJ_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Int32 JMMNKJNLDEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_JMMNKJNLDEM_OFFSET))(this);
	}

	::System::Void HIKFHKGCIJN(::ENGKPGFGGLM* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ALFAPJABJJB_HIKFHKGCIJN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void HFODHGEOEHB(::System::Int32 DKBNGLGPJCG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ALFAPJABJJB_HFODHGEOEHB_OFFSET))(this, DKBNGLGPJCG);
	}

	::System::Void KNAMLBOMBMK(::POFOFGILKAA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + ALFAPJABJJB_KNAMLBOMBMK_OFFSET))(this, MIALFKCCCPI);
	}

	::GGFGEIILGFO* OPCNLMBBBFF(::System::Int32 ABHBKFJKINO)
	{
		return ((::GGFGEIILGFO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ALFAPJABJJB_OPCNLMBBBFF_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void NBOKLEHABCP(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ALFAPJABJJB_NBOKLEHABCP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void IGMNDOMOMPP(::FCBNEBOPNIF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + ALFAPJABJJB_IGMNDOMOMPP_OFFSET))(this, MIALFKCCCPI);
	}

	::DFDEIDBBGHG_1<::System::UInt32>* LIBGBLJGCIE(::System::Int32 ABHBKFJKINO)
	{
		return ((::DFDEIDBBGHG_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ALFAPJABJJB_LIBGBLJGCIE_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Int32 AAFDHDGMHDI(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType OEOKHGDNMPF)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType))((::PBYTE)hIl2Cpp + ALFAPJABJJB_AAFDHDGMHDI_OFFSET))(this, OEOKHGDNMPF);
	}

	::System::Void BEBLFMKHGKH(::EEHJOPEJOCD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::EEHJOPEJOCD*))((::PBYTE)hIl2Cpp + ALFAPJABJJB_BEBLFMKHGKH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void OLECAJGGOBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_OLECAJGGOBA_OFFSET))(this);
	}

	::System::UInt32 ODLPFLPMAEG()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_ODLPFLPMAEG_OFFSET))(this);
	}

	::System::Void PLLKEDEGKLE(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType OEOKHGDNMPF, ::NCDMMMLNAMM* BANEBNFCHHP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType, ::NCDMMMLNAMM*))((::PBYTE)hIl2Cpp + ALFAPJABJJB_PLLKEDEGKLE_OFFSET))(this, OEOKHGDNMPF, BANEBNFCHHP);
	}

	::DFDEIDBBGHG_1<::GGFGEIILGFO*>* FAJJPKEAJMI()
	{
		return ((::DFDEIDBBGHG_1<::GGFGEIILGFO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_FAJJPKEAJMI_OFFSET))(this);
	}

	::System::UInt32 CIFJNAHEKFG()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_CIFJNAHEKFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* FFKLKJEHHOL(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType OEOKHGDNMPF)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType))((::PBYTE)hIl2Cpp + ALFAPJABJJB_FFKLKJEHHOL_OFFSET))(this, OEOKHGDNMPF);
	}

	::System::Void BDINOAFHFJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_BDINOAFHFJO_OFFSET))(this);
	}

	::System::Void BKIMLKOIEID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_BKIMLKOIEID_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* EHMHJPCBENO()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_EHMHJPCBENO_OFFSET))(this);
	}

	::System::Void ILKLLMLDFNE(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* MIALFKCCCPI, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + ALFAPJABJJB_ILKLLMLDFNE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::UInt32 BPHKEBCBCPD()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_BPHKEBCBCPD_OFFSET))(this);
	}

	::System::Boolean GHIKPOHDEGM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_GHIKPOHDEGM_OFFSET))(this);
	}

	::NCDMMMLNAMM* HHBIPJCCEHM(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType OEOKHGDNMPF, ::System::Int32 NDHJPBJLOAI)
	{
		return ((::NCDMMMLNAMM*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType, ::System::Int32))((::PBYTE)hIl2Cpp + ALFAPJABJJB_HHBIPJCCEHM_OFFSET))(this, OEOKHGDNMPF, NDHJPBJLOAI);
	}

	::DFDEIDBBGHG_1<::System::UInt32>* OOMFFJEONJH()
	{
		return ((::DFDEIDBBGHG_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_OOMFFJEONJH_OFFSET))(this);
	}

	::MoleMole::UIBaseController* OMPDOHONEMB(::MoleMole::UIBaseController* MIALFKCCCPI, ::UnityEngine::Transform* KMGKAIDEIBA)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ALFAPJABJJB_OMPDOHONEMB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* MCDCIFBHNNC()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_MCDCIFBHNNC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::NCDMMMLNAMM*>* BKLGHOKDLPN(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType OEOKHGDNMPF)
	{
		return ((::System::Collections::Generic::List_1<::NCDMMMLNAMM*>*(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType))((::PBYTE)hIl2Cpp + ALFAPJABJJB_BKLGHOKDLPN_OFFSET))(this, OEOKHGDNMPF);
	}

	::System::Int32 GDBMPMBGFID(::MoleMole::FlowCanvas::Nodes::ChallengeQuestType OEOKHGDNMPF)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::ChallengeQuestType))((::PBYTE)hIl2Cpp + ALFAPJABJJB_GDBMPMBGFID_OFFSET))(this, OEOKHGDNMPF);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void FFNFBOGIKDP(::System::Int32 IKEMGLJOMAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ALFAPJABJJB_FFNFBOGIKDP_OFFSET))(this, IKEMGLJOMAA);
	}

	::System::Void MPCAGNGJBEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_MPCAGNGJBEH_OFFSET))(this);
	}

	::System::Void ADOMMPAHPJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_ADOMMPAHPJI_OFFSET))(this);
	}

	::System::Void JJCECLNIHEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_JJCECLNIHEK_OFFSET))(this);
	}

	::System::Void AJINNLNIHJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_AJINNLNIHJC_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*> DMBMHHBNANK(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* MIALFKCCCPI, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* KMGKAIDEIBA)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + ALFAPJABJJB_DMBMHHBNANK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void BHPCAKANMEF(::System::Int32 KBOOFHOOPCL, ::System::Int32 DKBNGLGPJCG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ALFAPJABJJB_BHPCAKANMEF_OFFSET))(this, KBOOFHOOPCL, DKBNGLGPJCG);
	}

	::System::Int32 LIMHNFCLCDD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_LIMHNFCLCDD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HCDCPDGBIMB>* FLFDOBMNOHN()
	{
		return ((::System::Collections::Generic::List_1<::HCDCPDGBIMB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFAPJABJJB_FLFDOBMNOHN_OFFSET))(this);
	}
};
