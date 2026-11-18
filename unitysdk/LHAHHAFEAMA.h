#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCDCPDGBIMB.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/PJHKDJEGJOG.h"
#include "unitysdk/System/Nullable_1.h"

class AGJFJGEMIPB_ABMKPFAONMD;
class CGKMBHKOFKF;
class EEHJOPEJOCD;
class ENGKPGFGGLM;
class FCBNEBOPNIF;
class JGNCILNLFEE;
class LKFLEAOHCNL;
class MEMPJCOPMDE;
class OAEFGCLEHHO;
class POFOFGILKAA;
namespace MoleMole { class UIBaseController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define LHAHHAFEAMA_AJINNLNIHJC_OFFSET UNITYSDK_OFFSET(0x12A45170)
#define LHAHHAFEAMA_AMODKFGCBPJ_OFFSET UNITYSDK_OFFSET(0x12A457E0)
#define LHAHHAFEAMA_BDMNHPIFHNL_OFFSET UNITYSDK_OFFSET(0x12A45880)
#define LHAHHAFEAMA_BDPKBJCOOIN_OFFSET UNITYSDK_OFFSET(0x12A45100)
#define LHAHHAFEAMA_BEBLFMKHGKH_OFFSET UNITYSDK_OFFSET(0x12A46350)
#define LHAHHAFEAMA_BGGKJGFICCO_OFFSET UNITYSDK_OFFSET(0x12A45CE0)
#define LHAHHAFEAMA_BMKCAFCBKFC_OFFSET UNITYSDK_OFFSET(0x12A45200)
#define LHAHHAFEAMA_CCLJEALMALJ_OFFSET UNITYSDK_OFFSET(0x12A42290)
#define LHAHHAFEAMA_CGMKKFEIFMI_OFFSET UNITYSDK_OFFSET(0x12A43A60)
#define LHAHHAFEAMA_CKINGEHLFIH_OFFSET UNITYSDK_OFFSET(0x12A41BE0)
#define LHAHHAFEAMA_CLENAPAICKO_OFFSET UNITYSDK_OFFSET(0x12A46400)
#define LHAHHAFEAMA_CPCBPOJOLFN_OFFSET UNITYSDK_OFFSET(0x12A44540)
#define LHAHHAFEAMA_DFILIFBBMLN_OFFSET UNITYSDK_OFFSET(0x12A41A10)
#define LHAHHAFEAMA_EJFNMMPAINK_OFFSET UNITYSDK_OFFSET(0x12A45B60)
#define LHAHHAFEAMA_FEOIHJNKPND_OFFSET UNITYSDK_OFFSET(0x12A44100)
#define LHAHHAFEAMA_FILPNPABCPD_OFFSET UNITYSDK_OFFSET(0x12A42DF0)
#define LHAHHAFEAMA_FNACHECOODF_OFFSET UNITYSDK_OFFSET(0x12A44860)
#define LHAHHAFEAMA_FNCKDBCCGJG_OFFSET UNITYSDK_OFFSET(0x12A452F0)
#define LHAHHAFEAMA_FOLOCLNNPFM_OFFSET UNITYSDK_OFFSET(0x12A41C80)
#define LHAHHAFEAMA_GBNKPECHGDA_OFFSET UNITYSDK_OFFSET(0x12A41AC0)
#define LHAHHAFEAMA_GHIKPOHDEGM_OFFSET UNITYSDK_OFFSET(0x12A457F0)
#define LHAHHAFEAMA_HFHFMPOPPNB_OFFSET UNITYSDK_OFFSET(0x12A44D20)
#define LHAHHAFEAMA_HIHMDMNJIIJ_OFFSET UNITYSDK_OFFSET(0x12A44CC0)
#define LHAHHAFEAMA_HIKFHKGCIJN_OFFSET UNITYSDK_OFFSET(0x12A463F0)
#define LHAHHAFEAMA_IADKOGPCJCK_OFFSET UNITYSDK_OFFSET(0x12A45C40)
#define LHAHHAFEAMA_IEIKPEJEIBL_OFFSET UNITYSDK_OFFSET(0x12A45F90)
#define LHAHHAFEAMA_IGMNDOMOMPP_OFFSET UNITYSDK_OFFSET(0x12A45B50)
#define LHAHHAFEAMA_INFKINILIKJ_OFFSET UNITYSDK_OFFSET(0x12A45B90)
#define LHAHHAFEAMA_INLEEIHPHJO_OFFSET UNITYSDK_OFFSET(0x12A45C50)
#define LHAHHAFEAMA_JJCECLNIHEK_OFFSET UNITYSDK_OFFSET(0x12A45160)
#define LHAHHAFEAMA_JLHBKJKDGDE_OFFSET UNITYSDK_OFFSET(0x12A447F0)
#define LHAHHAFEAMA_KMHOKFENABH_OFFSET UNITYSDK_OFFSET(0x12A434D0)
#define LHAHHAFEAMA_KNAMLBOMBMK_OFFSET UNITYSDK_OFFSET(0x12A45EE0)
#define LHAHHAFEAMA_LAKHJJCLDKB_OFFSET UNITYSDK_OFFSET(0x12A45740)
#define LHAHHAFEAMA_LJEEJABBAHD_OFFSET UNITYSDK_OFFSET(0x12A41A00)
#define LHAHHAFEAMA_LNNANKKFPFM_OFFSET UNITYSDK_OFFSET(0x12A45AE0)
#define LHAHHAFEAMA_MADBPLKEGCJ_OFFSET UNITYSDK_OFFSET(0x12A455D0)
#define LHAHHAFEAMA_MDKKICAGHBH_OFFSET UNITYSDK_OFFSET(0x12A43BF0)
#define LHAHHAFEAMA_NALEGOKIBGO_OFFSET UNITYSDK_OFFSET(0x12A43520)
#define LHAHHAFEAMA_NECFENAKJMI_OFFSET UNITYSDK_OFFSET(0x12A44B70)
#define LHAHHAFEAMA_NFGCOGEOJEO_OFFSET UNITYSDK_OFFSET(0x12A420D0)
#define LHAHHAFEAMA_NKJJNAIPGHF_OFFSET UNITYSDK_OFFSET(0x12A42350)
#define LHAHHAFEAMA_NMNOHGIFONK_OFFSET UNITYSDK_OFFSET(0x12A44680)
#define LHAHHAFEAMA_NPHBLJDPFHH_OFFSET UNITYSDK_OFFSET(0x12A41B80)
#define LHAHHAFEAMA_OGLFBGFNADB_OFFSET UNITYSDK_OFFSET(0x12A46340)
#define LHAHHAFEAMA_OJJMBNBLMJJ_OFFSET UNITYSDK_OFFSET(0x12A45510)
#define LHAHHAFEAMA_OMPDOHONEMB_OFFSET UNITYSDK_OFFSET(0x12A45EF0)
#define LHAHHAFEAMA_ONGDNJGPGIF_OFFSET UNITYSDK_OFFSET(0x12A44450)
#define LHAHHAFEAMA_PBONIJDEJMD_OFFSET UNITYSDK_OFFSET(0x12A458B0)
#define LHAHHAFEAMA_PECOMHPOCPF_OFFSET UNITYSDK_OFFSET(0x12A42E40)
#define LHAHHAFEAMA_PLDJINBELMF_OFFSET UNITYSDK_OFFSET(0x12A42BC0)
#define LHAHHAFEAMA_PPNLOBALFKG_OFFSET UNITYSDK_OFFSET(0x12A42B00)
#define LHAHHAFEAMA__CTOR_OFFSET UNITYSDK_OFFSET(0x12A44E70)

inline static constexpr unsigned int LHAHHAFEAMA_TypeDefinitionIndex = 78011;

class LHAHHAFEAMA : public ::PJHKDJEGJOG
{
public:
	// static const ::System::String* FODBEHACJKL; // 0x0
	// static const ::System::String* HNINOHGEMEC; // 0x0
	// static const ::System::String* OHBDLFBNBOE; // 0x0
	// static const ::System::String* GCFPHBBDLLH; // 0x0
	::System::String* DJEEFPDBGFE; // 0x2F8
	::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* JMDOANHOEJG; // 0x300
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* NFOJFNHLHBD; // 0x308
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* DMMLJJDJOHD; // 0x310
	::System::Collections::Generic::List_1<::HCDCPDGBIMB>* NBOKCKGBPPC; // 0x318
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* CDNJDIHILAJ; // 0x320
	::System::String* INGABOHEAPN; // 0x328
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FIPJFKDHCDA; // 0x330
	::System::Nullable_1<::System::Int32> JAJDFIBMLLA; // 0x338
	::System::Single FCCDKOIDNNO; // 0x340
	::System::Boolean BHNJLCMOHLC; // 0x344
	::System::Boolean GJGAEGFJIJE; // 0x345
	::System::Byte _padding0[0x2];
	::System::Int32 KHBNCNAKEBM; // 0x348

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA__CTOR_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType LJEEJABBAHD()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_LJEEJABBAHD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HCDCPDGBIMB>* DFILIFBBMLN()
	{
		return ((::System::Collections::Generic::List_1<::HCDCPDGBIMB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_DFILIFBBMLN_OFFSET))(this);
	}

	::System::Single NPHBLJDPFHH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_NPHBLJDPFHH_OFFSET))(this);
	}

	::System::Boolean CKINGEHLFIH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_CKINGEHLFIH_OFFSET))(this);
	}

	::System::Void FOLOCLNNPFM(::FCBNEBOPNIF* CENFDFIKBDC)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_FOLOCLNNPFM_OFFSET))(this, CENFDFIKBDC);
	}

	::MoleMole::UIBaseController* CCLJEALMALJ(::MoleMole::UIBaseController* IPDOACOBKDK, ::UnityEngine::Transform* JNLBPMKIFNK)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_CCLJEALMALJ_OFFSET))(this, IPDOACOBKDK, JNLBPMKIFNK);
	}

	::System::Void NKJJNAIPGHF(::EEHJOPEJOCD* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EEHJOPEJOCD*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_NKJJNAIPGHF_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void PPNLOBALFKG(::MoleMole::Battle::Entity* DBIOAKNMBDM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_PPNLOBALFKG_OFFSET))(this, DBIOAKNMBDM);
	}

	::System::Boolean FILPNPABCPD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_FILPNPABCPD_OFFSET))(this);
	}

	::System::Void PECOMHPOCPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_PECOMHPOCPF_OFFSET))(this);
	}

	::System::Void CGMKKFEIFMI(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_CGMKKFEIFMI_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Boolean CPCBPOJOLFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_CPCBPOJOLFN_OFFSET))(this);
	}

	::System::Void NMNOHGIFONK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_NMNOHGIFONK_OFFSET))(this);
	}

	::System::Void JLHBKJKDGDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_JLHBKJKDGDE_OFFSET))(this);
	}

	::System::Void FNACHECOODF(::POFOFGILKAA* HEJIBNEHLIG)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_FNACHECOODF_OFFSET))(this, HEJIBNEHLIG);
	}

	::System::Boolean HIHMDMNJIIJ(::MoleMole::Level::RatingType& NILNNELOMCG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::RatingType&))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_HIHMDMNJIIJ_OFFSET))(this, NILNNELOMCG);
	}

	::System::Int32 HFHFMPOPPNB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_HFHFMPOPPNB_OFFSET))(this);
	}

	::System::Int32 BDPKBJCOOIN(::MoleMole::Level::RatingType OBNIAHNMHPF)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Level::RatingType))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_BDPKBJCOOIN_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void JJCECLNIHEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_JJCECLNIHEK_OFFSET))(this);
	}

	::System::Boolean NECFENAKJMI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_NECFENAKJMI_OFFSET))(this);
	}

	::System::Void AJINNLNIHJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_AJINNLNIHJC_OFFSET))(this);
	}

	::System::Void BMKCAFCBKFC(::MEMPJCOPMDE* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::MEMPJCOPMDE*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_BMKCAFCBKFC_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void MDKKICAGHBH(::CGKMBHKOFKF* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::CGKMBHKOFKF*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_MDKKICAGHBH_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Int32 PLDJINBELMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_PLDJINBELMF_OFFSET))(this);
	}

	::System::Boolean FEOIHJNKPND(::System::UInt32 NMFFKCDMAMC, ::System::String*& HAIHNEBPEDD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*&))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_FEOIHJNKPND_OFFSET))(this, NMFFKCDMAMC, HAIHNEBPEDD);
	}

	::System::Boolean LAKHJJCLDKB(::MoleMole::Level::RatingType& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::RatingType&))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_LAKHJJCLDKB_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NFGCOGEOJEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_NFGCOGEOJEO_OFFSET))(this);
	}

	::System::Double OJJMBNBLMJJ(::System::Double PEJOAEKACCP, ::System::Double MGBCJOIJBHE)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_OJJMBNBLMJJ_OFFSET))(this, PEJOAEKACCP, MGBCJOIJBHE);
	}

	::System::Void AMODKFGCBPJ(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_AMODKFGCBPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 ONGDNJGPGIF(::System::String* AELLPLBJELA)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_ONGDNJGPGIF_OFFSET))(this, AELLPLBJELA);
	}

	::System::Boolean GHIKPOHDEGM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_GHIKPOHDEGM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HCDCPDGBIMB>* GBNKPECHGDA(::System::Int32 IGPMJKHNFBB, ::System::Boolean DGNOANMNNAK)
	{
		return ((::System::Collections::Generic::List_1<::HCDCPDGBIMB>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_GBNKPECHGDA_OFFSET))(this, IGPMJKHNFBB, DGNOANMNNAK);
	}

	::System::Void MADBPLKEGCJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_MADBPLKEGCJ_OFFSET))(this);
	}

	::System::Void BDMNHPIFHNL(::JGNCILNLFEE* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::JGNCILNLFEE*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_BDMNHPIFHNL_OFFSET))(this, DJCNCELJPOM);
	}

	::AGJFJGEMIPB_ABMKPFAONMD* PBONIJDEJMD(::System::String* MCOHLHMKLIP)
	{
		return ((::AGJFJGEMIPB_ABMKPFAONMD*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_PBONIJDEJMD_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void IGMNDOMOMPP(::FCBNEBOPNIF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::FCBNEBOPNIF*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_IGMNDOMOMPP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::String* LNNANKKFPFM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_LNNANKKFPFM_OFFSET))(this);
	}

	::System::Void FNCKDBCCGJG(::System::String* AELLPLBJELA, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_FNCKDBCCGJG_OFFSET))(this, AELLPLBJELA, KECKGDFIALJ);
	}

	::System::Boolean EJFNMMPAINK(::LKFLEAOHCNL* PELAJIFDIPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::LKFLEAOHCNL*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_EJFNMMPAINK_OFFSET))(this, PELAJIFDIPN);
	}

	::System::Boolean INFKINILIKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_INFKINILIKJ_OFFSET))(this);
	}

	::System::Void IADKOGPCJCK(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_IADKOGPCJCK_OFFSET))(this, BLLNHDIDKPA);
	}

	::MoleMole::Level::RatingType NALEGOKIBGO(::System::Boolean EEKAHHEIEOE)
	{
		return ((::MoleMole::Level::RatingType(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_NALEGOKIBGO_OFFSET))(this, EEKAHHEIEOE);
	}

	::AGJFJGEMIPB_ABMKPFAONMD* BGGKJGFICCO()
	{
		return ((::AGJFJGEMIPB_ABMKPFAONMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_BGGKJGFICCO_OFFSET))(this);
	}

	::System::Void KNAMLBOMBMK(::POFOFGILKAA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_KNAMLBOMBMK_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::UIBaseController* OMPDOHONEMB(::MoleMole::UIBaseController* MIALFKCCCPI, ::UnityEngine::Transform* KMGKAIDEIBA)
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_OMPDOHONEMB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void IEIKPEJEIBL(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_IEIKPEJEIBL_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Boolean OGLFBGFNADB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_OGLFBGFNADB_OFFSET))(this);
	}

	::System::Single KMHOKFENABH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_KMHOKFENABH_OFFSET))(this);
	}

	::System::Void BEBLFMKHGKH(::EEHJOPEJOCD* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::EEHJOPEJOCD*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_BEBLFMKHGKH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HIKFHKGCIJN(::ENGKPGFGGLM* MIALFKCCCPI, ::MoleMole::Battle::Entity* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_HIKFHKGCIJN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void CLENAPAICKO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_CLENAPAICKO_OFFSET))(this);
	}

	::MoleMole::Level::RatingType INLEEIHPHJO(::System::Int32 GGOCPAOOELP, ::System::Boolean EEKAHHEIEOE)
	{
		return ((::MoleMole::Level::RatingType(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + LHAHHAFEAMA_INLEEIHPHJO_OFFSET))(this, GGOCPAOOELP, EEKAHHEIEOE);
	}
};
