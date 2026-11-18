#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AONOIHMHNFI.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/FBOFFDLOOND_DLFFACOPGFF.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/NapPlatform.h"
#include "unitysdk/KKKJIPHOOBK.h"
#include "unitysdk/HHNIOENFMAG_HDJOCLFAKLL.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkAuxSendArray;
class AkPositionArray;
class BAEDBIJINGO;
class BHJIOOHIECD;
class EIOKLKEJAME;
class GEKNEEMAHBC;
class JCKLKIENABP;
class JIHMLEADCGN;
class LINJLPFDNEP;
namespace MoleMole { class SceneSoundPolygonData; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::IO { class StreamWriter; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CGBGBGOGEMK_AGDMBJFFHJI_OFFSET UNITYSDK_OFFSET(0x159C6C70)
#define CGBGBGOGEMK_ALJPLGCOEFI_OFFSET UNITYSDK_OFFSET(0x159CE590)
#define CGBGBGOGEMK_ALMENNMFPHG_OFFSET UNITYSDK_OFFSET(0x159CDE00)
#define CGBGBGOGEMK_ANJPMCBLBPA_OFFSET UNITYSDK_OFFSET(0x159CFB70)
#define CGBGBGOGEMK_BAGMNIMJFLJ_OFFSET UNITYSDK_OFFSET(0x159CCD90)
#define CGBGBGOGEMK_BDBCJNCJNIK_1_OFFSET UNITYSDK_OFFSET(0x159D3190)
#define CGBGBGOGEMK_BDBCJNCJNIK_OFFSET UNITYSDK_OFFSET(0x159D2FB0)
#define CGBGBGOGEMK_BFKDPHFHOHO_OFFSET UNITYSDK_OFFSET(0x159C0860)
#define CGBGBGOGEMK_BFLKEBNKBJI_OFFSET UNITYSDK_OFFSET(0x159D53B0)
#define CGBGBGOGEMK_BHEFOFLGEJO_1_OFFSET UNITYSDK_OFFSET(0x159C7A30)
#define CGBGBGOGEMK_BHEFOFLGEJO_OFFSET UNITYSDK_OFFSET(0x159C7840)
#define CGBGBGOGEMK_BJJOJCEKAPF_OFFSET UNITYSDK_OFFSET(0x159D5490)
#define CGBGBGOGEMK_BJPBJDIJPNC_OFFSET UNITYSDK_OFFSET(0x159CDF50)
#define CGBGBGOGEMK_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x159D34D0)
#define CGBGBGOGEMK_BNLAIBAEHMG_OFFSET UNITYSDK_OFFSET(0x159CFB60)
#define CGBGBGOGEMK_CAENDAAEGAF_OFFSET UNITYSDK_OFFSET(0x159C7250)
#define CGBGBGOGEMK_CGPOECDHEKB_OFFSET UNITYSDK_OFFSET(0x159C90D0)
#define CGBGBGOGEMK_CJJKOEHBICL_OFFSET UNITYSDK_OFFSET(0x159CC9D0)
#define CGBGBGOGEMK_CKGIPNOLJIO_OFFSET UNITYSDK_OFFSET(0x159D4040)
#define CGBGBGOGEMK_CKLHNEAJBBJ_OFFSET UNITYSDK_OFFSET(0x159C7090)
#define CGBGBGOGEMK_CMIINKPLODA_OFFSET UNITYSDK_OFFSET(0x159CED40)
#define CGBGBGOGEMK_CNMJIMBHCAE_OFFSET UNITYSDK_OFFSET(0x159C39F0)
#define CGBGBGOGEMK_COEFNHHDKDB_OFFSET UNITYSDK_OFFSET(0x159CEED0)
#define CGBGBGOGEMK_DAEMAFIDBEJ_OFFSET UNITYSDK_OFFSET(0x159D0E40)
#define CGBGBGOGEMK_DBKIPDIHCJA_OFFSET UNITYSDK_OFFSET(0x159D1100)
#define CGBGBGOGEMK_DCBHAOAAPCN_OFFSET UNITYSDK_OFFSET(0x159D0210)
#define CGBGBGOGEMK_DDHBBJLKGGI_OFFSET UNITYSDK_OFFSET(0x159CE880)
#define CGBGBGOGEMK_DFDEPANIJKI_OFFSET UNITYSDK_OFFSET(0x159D3340)
#define CGBGBGOGEMK_DFEOAKABHOI_OFFSET UNITYSDK_OFFSET(0x159CC7E0)
#define CGBGBGOGEMK_DJAKPKMCJCL_OFFSET UNITYSDK_OFFSET(0x159C4730)
#define CGBGBGOGEMK_DKMJMKKMJME_OFFSET UNITYSDK_OFFSET(0x159D5050)
#define CGBGBGOGEMK_DMCKBAHEMBC_OFFSET UNITYSDK_OFFSET(0x159D1950)
#define CGBGBGOGEMK_DPCFNEFAJFM_OFFSET UNITYSDK_OFFSET(0x159C6B90)
#define CGBGBGOGEMK_DPELDKJEGPG_OFFSET UNITYSDK_OFFSET(0x159D0E90)
#define CGBGBGOGEMK_EAKOKBOLDHF_OFFSET UNITYSDK_OFFSET(0x159D4EA0)
#define CGBGBGOGEMK_EIILALDAMNJ_OFFSET UNITYSDK_OFFSET(0x159C6CC0)
#define CGBGBGOGEMK_EKGJFKKHJDN_OFFSET UNITYSDK_OFFSET(0x159D4A80)
#define CGBGBGOGEMK_EOBBLNMKDLP_OFFSET UNITYSDK_OFFSET(0x159CBB60)
#define CGBGBGOGEMK_EOGHIBAILDJ_OFFSET UNITYSDK_OFFSET(0x159C1450)
#define CGBGBGOGEMK_EPHMABPINPM_OFFSET UNITYSDK_OFFSET(0x159C84A0)
#define CGBGBGOGEMK_EPHOFGEMGLB_OFFSET UNITYSDK_OFFSET(0x159CBF00)
#define CGBGBGOGEMK_FAIGEAKLFEE_1_OFFSET UNITYSDK_OFFSET(0x159D5930)
#define CGBGBGOGEMK_FAIGEAKLFEE_OFFSET UNITYSDK_OFFSET(0x159D2160)
#define CGBGBGOGEMK_FFDKFOPKMLC_OFFSET UNITYSDK_OFFSET(0x159D3570)
#define CGBGBGOGEMK_FKADNKCNFAA_OFFSET UNITYSDK_OFFSET(0x159D1790)
#define CGBGBGOGEMK_FKBJFKBNFKO_OFFSET UNITYSDK_OFFSET(0x159CC6E0)
#define CGBGBGOGEMK_FLNNPLGFNEA_OFFSET UNITYSDK_OFFSET(0x159C1170)
#define CGBGBGOGEMK_FMKNEGGDHHF_OFFSET UNITYSDK_OFFSET(0x159C6E60)
#define CGBGBGOGEMK_FMPDOCJBACN_OFFSET UNITYSDK_OFFSET(0x159C8A40)
#define CGBGBGOGEMK_FPAOHCNIHGH_OFFSET UNITYSDK_OFFSET(0x159CA6E0)
#define CGBGBGOGEMK_GFMGLANLDNG_OFFSET UNITYSDK_OFFSET(0x159D45D0)
#define CGBGBGOGEMK_GGEKHACDEAH_OFFSET UNITYSDK_OFFSET(0x159D5720)
#define CGBGBGOGEMK_GKHPFGIJINH_OFFSET UNITYSDK_OFFSET(0x159C1810)
#define CGBGBGOGEMK_GLBHIDNJFBB_OFFSET UNITYSDK_OFFSET(0x159D3630)
#define CGBGBGOGEMK_GMEFLIEPDHN_OFFSET UNITYSDK_OFFSET(0x159D40D0)
#define CGBGBGOGEMK_GPAFCOADCKK_OFFSET UNITYSDK_OFFSET(0x159D1650)
#define CGBGBGOGEMK_GPLPCFNEBKG_OFFSET UNITYSDK_OFFSET(0x159CCB70)
#define CGBGBGOGEMK_HAAEEPKDOLN_OFFSET UNITYSDK_OFFSET(0x159CD7C0)
#define CGBGBGOGEMK_HAIDOGDJDBH_OFFSET UNITYSDK_OFFSET(0x159C4B30)
#define CGBGBGOGEMK_HBJECCMMOAP_1_OFFSET UNITYSDK_OFFSET(0x159CD970)
#define CGBGBGOGEMK_HBJECCMMOAP_2_OFFSET UNITYSDK_OFFSET(0x159CC460)
#define CGBGBGOGEMK_HBJECCMMOAP_OFFSET UNITYSDK_OFFSET(0x159CC3E0)
#define CGBGBGOGEMK_HCBAPFFJNDI_OFFSET UNITYSDK_OFFSET(0x159D1640)
#define CGBGBGOGEMK_HDDGOAMNLAF_OFFSET UNITYSDK_OFFSET(0x159D1E90)
#define CGBGBGOGEMK_HDGJJCDEJND_OFFSET UNITYSDK_OFFSET(0x159CD0A0)
#define CGBGBGOGEMK_HGBEADOBMDI_OFFSET UNITYSDK_OFFSET(0x159CDA60)
#define CGBGBGOGEMK_HIJCABAJLEH_OFFSET UNITYSDK_OFFSET(0x159C47B0)
#define CGBGBGOGEMK_HJAFPOBLEJM_OFFSET UNITYSDK_OFFSET(0x159D1CA0)
#define CGBGBGOGEMK_HLJMJGJGKLI_OFFSET UNITYSDK_OFFSET(0x159D4E90)
#define CGBGBGOGEMK_HLKKIDNDFFD_OFFSET UNITYSDK_OFFSET(0x159D2B50)
#define CGBGBGOGEMK_HMIFNNIBLNG_OFFSET UNITYSDK_OFFSET(0x159D4CF0)
#define CGBGBGOGEMK_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x159C4110)
#define CGBGBGOGEMK_HNKPLNEKHMK_OFFSET UNITYSDK_OFFSET(0x159D2AF0)
#define CGBGBGOGEMK_HODFJFAFGBG_OFFSET UNITYSDK_OFFSET(0x159C7EB0)
#define CGBGBGOGEMK_IBIPJACIFNF_OFFSET UNITYSDK_OFFSET(0x159CEBA0)
#define CGBGBGOGEMK_ICAPBJAFMJK_OFFSET UNITYSDK_OFFSET(0x159D4200)
#define CGBGBGOGEMK_IDDLBOPEMEJ_1_OFFSET UNITYSDK_OFFSET(0x159CE7C0)
#define CGBGBGOGEMK_IDDLBOPEMEJ_OFFSET UNITYSDK_OFFSET(0x159CD160)
#define CGBGBGOGEMK_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x159D40E0)
#define CGBGBGOGEMK_IGFCJPFBAIF_OFFSET UNITYSDK_OFFSET(0x159C7410)
#define CGBGBGOGEMK_IHBPKNNHKPC_OFFSET UNITYSDK_OFFSET(0x159D1E10)
#define CGBGBGOGEMK_IJNALPHOBKJ_OFFSET UNITYSDK_OFFSET(0x159C3BA0)
#define CGBGBGOGEMK_IKHGCMOPCFP_1_OFFSET UNITYSDK_OFFSET(0x159D4500)
#define CGBGBGOGEMK_IKHGCMOPCFP_OFFSET UNITYSDK_OFFSET(0x159D0700)
#define CGBGBGOGEMK_ILNHIDICIJP_OFFSET UNITYSDK_OFFSET(0x159D35A0)
#define CGBGBGOGEMK_JBMFHAPBOOD_OFFSET UNITYSDK_OFFSET(0x159D2F40)
#define CGBGBGOGEMK_JHJKJFDBBOG_OFFSET UNITYSDK_OFFSET(0x159C7F20)
#define CGBGBGOGEMK_JIJEEEJDBBI_OFFSET UNITYSDK_OFFSET(0x159C9040)
#define CGBGBGOGEMK_JKKFJPDNJIO_OFFSET UNITYSDK_OFFSET(0x159D1020)
#define CGBGBGOGEMK_JLCBJPKBKHD_OFFSET UNITYSDK_OFFSET(0x159CCAE0)
#define CGBGBGOGEMK_JMJDKAHFGDH_OFFSET UNITYSDK_OFFSET(0x159C26E0)
#define CGBGBGOGEMK_JNELFGEPPIO_OFFSET UNITYSDK_OFFSET(0x159C69F0)
#define CGBGBGOGEMK_KCDEJIKECOO_OFFSET UNITYSDK_OFFSET(0x159D3DC0)
#define CGBGBGOGEMK_KDFPFJADJBA_OFFSET UNITYSDK_OFFSET(0x159CF6B0)
#define CGBGBGOGEMK_KIJHFFNKKFJ_OFFSET UNITYSDK_OFFSET(0x159D1700)
#define CGBGBGOGEMK_KLPAAEKOIPC_OFFSET UNITYSDK_OFFSET(0x159CF640)
#define CGBGBGOGEMK_KMFPCBGEIBI_OFFSET UNITYSDK_OFFSET(0x159C41C0)
#define CGBGBGOGEMK_KPENCAIENAJ_OFFSET UNITYSDK_OFFSET(0x159C2020)
#define CGBGBGOGEMK_KPLICGNNAJN_OFFSET UNITYSDK_OFFSET(0x159D4EB0)
#define CGBGBGOGEMK_LAPAHEMNHIJ_OFFSET UNITYSDK_OFFSET(0x159D10A0)
#define CGBGBGOGEMK_LCOMPIBAKEI_OFFSET UNITYSDK_OFFSET(0x159C3250)
#define CGBGBGOGEMK_LDCNDFLLNNH_OFFSET UNITYSDK_OFFSET(0x159CA660)
#define CGBGBGOGEMK_LDHPJNLFMHB_OFFSET UNITYSDK_OFFSET(0x159D3430)
#define CGBGBGOGEMK_LDNFDPDGMGM_OFFSET UNITYSDK_OFFSET(0x159C8C60)
#define CGBGBGOGEMK_LEEEEBBEIAF_OFFSET UNITYSDK_OFFSET(0x159C3D40)
#define CGBGBGOGEMK_LILBOKCICFB_OFFSET UNITYSDK_OFFSET(0x159D44F0)
#define CGBGBGOGEMK_LPCGLIEDBNK_OFFSET UNITYSDK_OFFSET(0x159C2CF0)
#define CGBGBGOGEMK_MBCNFNBBFKO_OFFSET UNITYSDK_OFFSET(0x159CF470)
#define CGBGBGOGEMK_MCMOCIDBMOP_OFFSET UNITYSDK_OFFSET(0x159CF480)
#define CGBGBGOGEMK_MCNNFBPMHPK_OFFSET UNITYSDK_OFFSET(0x159C9160)
#define CGBGBGOGEMK_MFKKBFPKMFC_1_OFFSET UNITYSDK_OFFSET(0x159D19E0)
#define CGBGBGOGEMK_MFKKBFPKMFC_OFFSET UNITYSDK_OFFSET(0x159D1490)
#define CGBGBGOGEMK_MGDJBALDGKL_1_OFFSET UNITYSDK_OFFSET(0x159D4170)
#define CGBGBGOGEMK_MGDJBALDGKL_2_OFFSET UNITYSDK_OFFSET(0x159C82F0)
#define CGBGBGOGEMK_MGDJBALDGKL_3_OFFSET UNITYSDK_OFFSET(0x159D4B10)
#define CGBGBGOGEMK_MGDJBALDGKL_OFFSET UNITYSDK_OFFSET(0x159C8250)
#define CGBGBGOGEMK_MNCPGNGABNI_OFFSET UNITYSDK_OFFSET(0x159CE970)
#define CGBGBGOGEMK_MNPJNMPEEOJ_OFFSET UNITYSDK_OFFSET(0x159CCE40)
#define CGBGBGOGEMK_MOLGPDKEOHC_OFFSET UNITYSDK_OFFSET(0x159D42A0)
#define CGBGBGOGEMK_MOODBNGOJOI_OFFSET UNITYSDK_OFFSET(0x159D5710)
#define CGBGBGOGEMK_MPFKEDPFLKO_OFFSET UNITYSDK_OFFSET(0x159C0F70)
#define CGBGBGOGEMK_NCMPJIHGMCP_1_OFFSET UNITYSDK_OFFSET(0x159CC070)
#define CGBGBGOGEMK_NCMPJIHGMCP_OFFSET UNITYSDK_OFFSET(0x159C7BD0)
#define CGBGBGOGEMK_NDOCEJIJJFF_OFFSET UNITYSDK_OFFSET(0x159D05A0)
#define CGBGBGOGEMK_NFOOCOMEGDM_OFFSET UNITYSDK_OFFSET(0x159D3F30)
#define CGBGBGOGEMK_NLLGAGCBMPL_OFFSET UNITYSDK_OFFSET(0x159CD420)
#define CGBGBGOGEMK_NLOKFCBBPHI_OFFSET UNITYSDK_OFFSET(0x159D53C0)
#define CGBGBGOGEMK_NMCBBNAJHKM_OFFSET UNITYSDK_OFFSET(0x159CEDE0)
#define CGBGBGOGEMK_NNOCBOOEHNC_OFFSET UNITYSDK_OFFSET(0x159D0520)
#define CGBGBGOGEMK_NOADLIOOJED_OFFSET UNITYSDK_OFFSET(0x159CF1D0)
#define CGBGBGOGEMK_NOLBENPNGBF_OFFSET UNITYSDK_OFFSET(0x159CCE30)
#define CGBGBGOGEMK_OABFFCMIHPP_1_OFFSET UNITYSDK_OFFSET(0x159D1D20)
#define CGBGBGOGEMK_OABFFCMIHPP_OFFSET UNITYSDK_OFFSET(0x159D2400)
#define CGBGBGOGEMK_OFDGACKGHLG_OFFSET UNITYSDK_OFFSET(0x159C85E0)
#define CGBGBGOGEMK_OGNINJKFEGD_OFFSET UNITYSDK_OFFSET(0x159C75F0)
#define CGBGBGOGEMK_OHKAAOGHAHE_OFFSET UNITYSDK_OFFSET(0x159C4820)
#define CGBGBGOGEMK_OKFKFPKKLLB_OFFSET UNITYSDK_OFFSET(0x159D1400)
#define CGBGBGOGEMK_ONIGCGIFGAB_OFFSET UNITYSDK_OFFSET(0x159CCAD0)
#define CGBGBGOGEMK_ONOHKMFGDGC_OFFSET UNITYSDK_OFFSET(0x159CF950)
#define CGBGBGOGEMK_OPBBLLJGHEI_OFFSET UNITYSDK_OFFSET(0x159C8E80)
#define CGBGBGOGEMK_PBIGGEJBOLI_OFFSET UNITYSDK_OFFSET(0x159C89E0)
#define CGBGBGOGEMK_PEJJMFJPKIL_OFFSET UNITYSDK_OFFSET(0x159C4F40)
#define CGBGBGOGEMK_PFBDIPDLGHI_OFFSET UNITYSDK_OFFSET(0x159CE660)
#define CGBGBGOGEMK_PFHIMPAFCGB_OFFSET UNITYSDK_OFFSET(0x159D5290)
#define CGBGBGOGEMK_PHFPJKFBKHP_OFFSET UNITYSDK_OFFSET(0x159CEE70)
#define CGBGBGOGEMK_PJPPPCDHEHB_OFFSET UNITYSDK_OFFSET(0x159D1BE0)
#define CGBGBGOGEMK_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x159C01A0)
#define CGBGBGOGEMK_PNBIDEOOAIJ_OFFSET UNITYSDK_OFFSET(0x159C4EB0)
#define CGBGBGOGEMK_POHFKPLECCP_OFFSET UNITYSDK_OFFSET(0x159D59D0)
#define CGBGBGOGEMK_PPCCFLAJINF_OFFSET UNITYSDK_OFFSET(0x159D5200)
#define CGBGBGOGEMK_PPIHMGPDOMG_1_OFFSET UNITYSDK_OFFSET(0x159CC0E0)
#define CGBGBGOGEMK_PPIHMGPDOMG_OFFSET UNITYSDK_OFFSET(0x159C8700)
#define CGBGBGOGEMK__CCTOR_OFFSET UNITYSDK_OFFSET(0x159C6A90)
#define CGBGBGOGEMK__CTOR_OFFSET UNITYSDK_OFFSET(0x159C18C0)

inline static constexpr unsigned int CGBGBGOGEMK_TypeDefinitionIndex = 88853;

class CGBGBGOGEMK : public ::KKKJIPHOOBK
{
public:
	static ::System::Comparison_1<::System::Object*>** StaticGet_JFDKJAIGNMA()
	{
		return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CGBGBGOGEMK_TypeDefinitionIndex)->GetStaticField(0x51C70);
	}
	static ::System::UInt32* StaticGet_OEICOIFBCGD()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CGBGBGOGEMK_TypeDefinitionIndex)->GetStaticField(0x136D0);
	}
	static ::System::UInt32* StaticGet_LNOAKEBFLIO()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CGBGBGOGEMK_TypeDefinitionIndex)->GetStaticField(0x136D4);
	}
	static ::System::UInt32* StaticGet_MMFBAEHGOFL()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CGBGBGOGEMK_TypeDefinitionIndex)->GetStaticField(0x136D8);
	}
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_BNFLJHDGABH()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CGBGBGOGEMK_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_CFHEKLPNIAC()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(CGBGBGOGEMK_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	// static const ::System::Single HBIPKJNKMDC; // 0x0
	// static const ::System::String* BIJCJPAPLGE; // 0x0
	// static const ::System::Int32 FMFOEIELEDI = 0x100; // 0x0
	// static const ::System::String* LAPBHANNCGB; // 0x0
	// static const ::System::String* CHCOADEAONF; // 0x0
	// static const ::System::String* PFKCCKHNKOP; // 0x0
	// static const ::System::String* MDHEGDNOGIA; // 0x0
	// static const ::System::Int32 BDABEHPBAEP = 0x80; // 0x0
	::UnityEngine::GameObject* KNGBAINHJNI; // 0x18
	::AkAuxSendArray* AFJEBJENBMK; // 0x20
	::System::Collections::Generic::Queue_1<::System::Int32>* GJEEEPNFBEI; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* OBGPFONKOLD; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* FJHEEBPDBKJ; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* KPIGBODFMBP; // 0x40
	::System::Collections::Generic::Dictionary_2<::Foundation::Coroutine::CoroutineHandle, ::System::Action*>* JHBAKAOHPGF; // 0x48
	::BAEDBIJINGO* NENKCNMHLBB; // 0x50
	::BAEDBIJINGO* CAPONCHCACF; // 0x58
	::System::String* MAJLAKDDABG; // 0x60
	::UnityEngine::GameObject* FHMELBAKPKD; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* JAICPCPFLFJ; // 0x70
	::AkPositionArray* MDJEKNCNODJ; // 0x78
	::System::Collections::Generic::List_1<::BAEDBIJINGO*>* HCHNCCPMNPF; // 0x80
	::System::Collections::Generic::List_1<::System::Object*>* LFOHEOGIDGH; // 0x88
	::System::Collections::Generic::List_1<::System::Object*>* DNOEMINHDPC; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::BAEDBIJINGO*>* GKKNDKLDLKB; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::JIHMLEADCGN*>* CMAGDDGGCKF; // 0xA0
	::System::Collections::Generic::Queue_1<::System::Int32>* OACLAOCJNAD; // 0xA8
	::UnityEngine::GameObject* FDMMELJEDJL; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::GameObject*>* KLGGPAHPANH; // 0xB8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* IOCFFLKMPPH; // 0xC0
	::System::Collections::Generic::Queue_1<::System::Int32>* HCCMKNGDHIM; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* DJIMDPDMDNP; // 0xD0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>* NIKMFCOABDM; // 0xD8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* BFFAOEKJNFH; // 0xE0
	::System::Action_2<::System::String*, ::System::String*>* CHPMFIIBNAC; // 0xE8
	::System::Collections::Generic::Queue_1<::System::Int32>* EPPIBMLGPFF; // 0xF0
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::BHJIOOHIECD*>* AHMKLAMDCLC; // 0xF8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::Coroutine::CoroutineHandle>* JFAAKJAGMKB; // 0x100
	::System::Int32 DBHBFDAFNID; // 0x108
	::System::Boolean DJFHNBHGMIA; // 0x10C
	::System::Byte _padding0[0x3];
	::System::Int32 FLDNLAFOAPG; // 0x110
	::System::Int32 FAKFFBNMLMK; // 0x114
	::System::Single FKEDOEDLBPM; // 0x118
	::System::Int32 PJMKIJDDJAD; // 0x11C
	::System::Int32 CPNMIOJBNEA; // 0x120
	::System::Single CNLPOFINLIN; // 0x124
	::System::Single OAEBDMLELIK; // 0x128
	::System::Int32 AIFMBMFABIK; // 0x12C
	::System::Int32 CIPJBGPHLNH; // 0x130
	::System::Single LBBHCPCOKHJ; // 0x134
	::System::Int32 CBMBEKLCFKF; // 0x138
	::System::Int32 FNNHHBBMAGA; // 0x13C
	::System::UInt32 DILBNJFPIBA; // 0x140
	::System::Int32 BIABFPOPLJC; // 0x144
	::System::Int32 DDNKJOKBEDH; // 0x148
	::System::Int32 DEKCNPCDNCC; // 0x14C
	::System::Int32 NKEJPGOFDJL; // 0x150
	::System::Int32 LOGDJACOFBA; // 0x154
	::System::Int32 OGDKNEJCLNL; // 0x158
	::System::Single MNAOCHBMNBJ; // 0x15C
	::System::Int32 LCPFANEONFO; // 0x160
	::System::Single KHPFHLIENJK; // 0x164

	::System::Void _ctor(::JCKLKIENABP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JCKLKIENABP*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK__CTOR_OFFSET))(this, AAOCANGHBDG);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGBGBGOGEMK__CCTOR_OFFSET))();
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void JMJDKAHFGDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_JMJDKAHFGDH_OFFSET))(this);
	}

	::System::Void CNMJIMBHCAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_CNMJIMBHCAE_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void DJAKPKMCJCL(::GEKNEEMAHBC* NALHCEONDDN)
	{
		return ((::System::Void(*)(::PVOID, ::GEKNEEMAHBC*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_DJAKPKMCJCL_OFFSET))(this, NALHCEONDDN);
	}

	::System::Void HIJCABAJLEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_HIJCABAJLEH_OFFSET))(this);
	}

	::System::Void HAIDOGDJDBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_HAIDOGDJDBH_OFFSET))(this);
	}

	::System::Void PNBIDEOOAIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_PNBIDEOOAIJ_OFFSET))(this);
	}

	::System::Void PEJJMFJPKIL(::System::IO::StreamWriter* GCNIPFGOGHB)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_PEJJMFJPKIL_OFFSET))(this, GCNIPFGOGHB);
	}

	::System::Int32 DPCFNEFAJFM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_DPCFNEFAJFM_OFFSET))(this);
	}

	::System::Void AGDMBJFFHJI(::UnityEngine::GameObject* JEIDPPCEHLD, ::System::UInt64 GCBOCDDGKEK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt64))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_AGDMBJFFHJI_OFFSET))(this, JEIDPPCEHLD, GCBOCDDGKEK);
	}

	::System::Void EIILALDAMNJ(::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_EIILALDAMNJ_OFFSET))(this, JEIDPPCEHLD);
	}

	::System::Void CKLHNEAJBBJ(::UnityEngine::GameObject* MAHAOAIGPEH, ::System::Boolean NOJDFKMMEKP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_CKLHNEAJBBJ_OFFSET))(this, MAHAOAIGPEH, NOJDFKMMEKP);
	}

	::System::Void IGFCJPFBAIF(::FBOFFDLOOND_DLFFACOPGFF DBKMGJKKDOA, ::System::Boolean CMBKOECNKKG, ::System::Single JOFGIANGHMK, ::System::String* MJEEGEKDHMI)
	{
		return ((::System::Void(*)(::PVOID, ::FBOFFDLOOND_DLFFACOPGFF, ::System::Boolean, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_IGFCJPFBAIF_OFFSET))(this, DBKMGJKKDOA, CMBKOECNKKG, JOFGIANGHMK, MJEEGEKDHMI);
	}

	::System::String* BHEFOFLGEJO(::UnityEngine::GameObject* JEIDPPCEHLD, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::String*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_BHEFOFLGEJO_OFFSET))(this, JEIDPPCEHLD, HIAIKHDFCLN);
	}

	::System::Single NCMPJIHGMCP(::System::UInt32 BIEMAKNKDMB, ::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_NCMPJIHGMCP_OFFSET))(this, BIEMAKNKDMB, JEIDPPCEHLD);
	}

	::System::String* HODFJFAFGBG(::System::String* GCMFNEDFOAK, ::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_HODFJFAFGBG_OFFSET))(this, GCMFNEDFOAK, JEIDPPCEHLD);
	}

	::UnityEngine::GameObject* MGDJBALDGKL(::UnityEngine::Vector3 OHOGDOMNHNK, ::System::String* HIAIKHDFCLN, ::AONOIHMHNFI LHCBCLICEMA)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Vector3, ::System::String*, ::AONOIHMHNFI))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_MGDJBALDGKL_OFFSET))(this, OHOGDOMNHNK, HIAIKHDFCLN, LHCBCLICEMA);
	}

	::System::Boolean EPHMABPINPM(::System::String* JPLKKOHBBKC, ::System::String*& IEJAIGNKBGB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_EPHMABPINPM_OFFSET))(this, JPLKKOHBBKC, IEJAIGNKBGB);
	}

	::System::Boolean OFDGACKGHLG(::System::String* PLGNGCHOJEO, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_OFDGACKGHLG_OFFSET))(this, PLGNGCHOJEO, EGEGIMGMJHN);
	}

	::System::Boolean PPIHMGPDOMG(::System::UInt32 BIEMAKNKDMB, ::System::Single& EGEGIMGMJHN, ::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Single&, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_PPIHMGPDOMG_OFFSET))(this, BIEMAKNKDMB, EGEGIMGMJHN, JEIDPPCEHLD);
	}

	::System::Void PBIGGEJBOLI(::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_PBIGGEJBOLI_OFFSET))(this, JEIDPPCEHLD);
	}

	::System::Void LDNFDPDGMGM(::System::Int32 HBCDAPAOMFC, ::System::Int32 BNLHPGHLKDK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_LDNFDPDGMGM_OFFSET))(this, HBCDAPAOMFC, BNLHPGHLKDK);
	}

	::System::Boolean OPBBLLJGHEI(::UnityEngine::GameObject* MAHAOAIGPEH)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_OPBBLLJGHEI_OFFSET))(this, MAHAOAIGPEH);
	}

	::System::Boolean JIJEEEJDBBI(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_JIJEEEJDBBI_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void CGPOECDHEKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_CGPOECDHEKB_OFFSET))(this);
	}

	::System::Void MCNNFBPMHPK(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_MCNNFBPMHPK_OFFSET))(this, MAHAOAIGPEH);
	}

	::System::Void EOBBLNMKDLP(::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_EOBBLNMKDLP_OFFSET))(this, JEIDPPCEHLD);
	}

	::System::Boolean EPHOFGEMGLB(::System::String* PLGNGCHOJEO, ::System::UInt32 FLJLMBAFLNL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_EPHOFGEMGLB_OFFSET))(this, PLGNGCHOJEO, FLJLMBAFLNL);
	}

	::System::Single NCMPJIHGMCP_1(::System::String* HAKPMOBNBHN, ::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_NCMPJIHGMCP_1_OFFSET))(this, HAKPMOBNBHN, JEIDPPCEHLD);
	}

	::System::Void FMPDOCJBACN(::UnityEngine::GameObject* JEIDPPCEHLD, ::System::Boolean PAHDPPPMJIK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_FMPDOCJBACN_OFFSET))(this, JEIDPPCEHLD, PAHDPPPMJIK);
	}

	::UnityEngine::GameObject* HBJECCMMOAP(::UnityEngine::Transform* GKBJOPJKCLB, ::System::String* HIAIKHDFCLN, ::AONOIHMHNFI LHCBCLICEMA)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::AONOIHMHNFI))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_HBJECCMMOAP_OFFSET))(this, GKBJOPJKCLB, HIAIKHDFCLN, LHCBCLICEMA);
	}

	::System::Void LPCGLIEDBNK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_LPCGLIEDBNK_OFFSET))(this);
	}

	::System::Void DFEOAKABHOI(::System::String* PLGNGCHOJEO, ::System::String* EGEGIMGMJHN, ::System::UInt32 FLJLMBAFLNL, ::System::Boolean MJEGFNKFEIJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_DFEOAKABHOI_OFFSET))(this, PLGNGCHOJEO, EGEGIMGMJHN, FLJLMBAFLNL, MJEGFNKFEIJ);
	}

	::System::Int32 ONIGCGIFGAB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_ONIGCGIFGAB_OFFSET))(this);
	}

	::System::Void JLCBJPKBKHD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_JLCBJPKBKHD_OFFSET))(this);
	}

	::System::Void GPLPCFNEBKG(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_GPLPCFNEBKG_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void BAGMNIMJFLJ(::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_BAGMNIMJFLJ_OFFSET))(this, JEIDPPCEHLD);
	}

	::System::Int32 NOLBENPNGBF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_NOLBENPNGBF_OFFSET))(this);
	}

	::System::Void MNPJNMPEEOJ(::UnityEngine::GameObject* KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_MNPJNMPEEOJ_OFFSET))(this, KHGFAKJKDGG);
	}

	::UnityEngine::GameObject* IDDLBOPEMEJ(::UnityEngine::Transform* GKBJOPJKCLB, ::UnityEngine::Vector3 LJIOPEEACPL, ::UnityEngine::Vector3 BOGPAHGJOJK, ::System::String* HIAIKHDFCLN, ::AONOIHMHNFI LHCBCLICEMA)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::AONOIHMHNFI))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_IDDLBOPEMEJ_OFFSET))(this, GKBJOPJKCLB, LJIOPEEACPL, BOGPAHGJOJK, HIAIKHDFCLN, LHCBCLICEMA);
	}

	::UnityEngine::GameObject* HBJECCMMOAP_1(::System::String* HIAIKHDFCLN, ::AONOIHMHNFI LHCBCLICEMA)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::AONOIHMHNFI))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_HBJECCMMOAP_1_OFFSET))(this, HIAIKHDFCLN, LHCBCLICEMA);
	}

	::System::Boolean HGBEADOBMDI(::UnityEngine::GameObject* JNLBPMKIFNK, ::UnityEngine::GameObject* LMHNJIBCLJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_HGBEADOBMDI_OFFSET))(this, JNLBPMKIFNK, LMHNJIBCLJF);
	}

	static ::UnityEngine::Vector3 ALMENNMFPHG(::UnityEngine::Vector3 IDJOMIMIOGM, ::UnityEngine::Vector3 FGLJPLFOOKH, ::UnityEngine::Vector3 MAHAOAIGPEH, ::System::Single DCNENGLJCGE)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_ALMENNMFPHG_OFFSET))(IDJOMIMIOGM, FGLJPLFOOKH, MAHAOAIGPEH, DCNENGLJCGE);
	}

	::UnityEngine::GameObject* BJPBJDIJPNC(::System::UInt32 BKLGNCBNEGM, ::System::String* HIAIKHDFCLN, ::AONOIHMHNFI LHCBCLICEMA)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::UInt32, ::System::String*, ::AONOIHMHNFI))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_BJPBJDIJPNC_OFFSET))(this, BKLGNCBNEGM, HIAIKHDFCLN, LHCBCLICEMA);
	}

	::System::Boolean PPIHMGPDOMG_1(::System::String* HAKPMOBNBHN, ::System::Single& EGEGIMGMJHN, ::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single&, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_PPIHMGPDOMG_1_OFFSET))(this, HAKPMOBNBHN, EGEGIMGMJHN, JEIDPPCEHLD);
	}

	::System::Void ALJPLGCOEFI(::System::String* MCOHLHMKLIP, ::Foundation::Coroutine::CoroutineHandle& PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::Coroutine::CoroutineHandle&))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_ALJPLGCOEFI_OFFSET))(this, MCOHLHMKLIP, PHHDHIBOCKA);
	}

	::System::Void HDGJJCDEJND(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_HDGJJCDEJND_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void PFBDIPDLGHI(::System::String* HAKPMOBNBHN, ::System::Single EGEGIMGMJHN, ::System::UInt32 MLIGANAEDBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_PFBDIPDLGHI_OFFSET))(this, HAKPMOBNBHN, EGEGIMGMJHN, MLIGANAEDBC);
	}

	::UnityEngine::GameObject* IDDLBOPEMEJ_1(::UnityEngine::Transform* GKBJOPJKCLB, ::UnityEngine::Vector3 LJIOPEEACPL, ::System::String* HIAIKHDFCLN, ::AONOIHMHNFI LHCBCLICEMA)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::String*, ::AONOIHMHNFI))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_IDDLBOPEMEJ_1_OFFSET))(this, GKBJOPJKCLB, LJIOPEEACPL, HIAIKHDFCLN, LHCBCLICEMA);
	}

	::System::Int32 CAENDAAEGAF(::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_CAENDAAEGAF_OFFSET))(this, JEIDPPCEHLD);
	}

	::System::Int32 DDHBBJLKGGI(::System::Int32 OLAIAPANMKD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_DDHBBJLKGGI_OFFSET))(this, OLAIAPANMKD);
	}

	::System::Void FLNNPLGFNEA(::System::Collections::Generic::Queue_1<::System::Int32>* GFCAFCFLFCI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_FLNNPLGFNEA_OFFSET))(this, GFCAFCFLFCI);
	}

	::System::Void IBIPJACIFNF(::System::String* HAKPMOBNBHN, ::System::Single EGEGIMGMJHN, ::System::UInt32 GJICOHACOKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_IBIPJACIFNF_OFFSET))(this, HAKPMOBNBHN, EGEGIMGMJHN, GJICOHACOKA);
	}

	::System::Void CMIINKPLODA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_CMIINKPLODA_OFFSET))(this);
	}

	::System::Void NMCBBNAJHKM(::GEKNEEMAHBC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::GEKNEEMAHBC*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_NMCBBNAJHKM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PHFPJKFBKHP(::Foundation::Coroutine::CoroutineHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_PHFPJKFBKHP_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void COEFNHHDKDB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_COEFNHHDKDB_OFFSET))(this);
	}

	::System::Boolean NOADLIOOJED(::UnityEngine::GameObject* KHGFAKJKDGG, ::UnityEngine::GameObject* HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_NOADLIOOJED_OFFSET))(this, KHGFAKJKDGG, HODAIDNDKHD);
	}

	::System::Void MPFKEDPFLKO(::UnityEngine::GameObject* JEIDPPCEHLD, ::MoleMole::SceneSoundPolygonData* ICCPGFIBMBD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::SceneSoundPolygonData*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_MPFKEDPFLKO_OFFSET))(this, JEIDPPCEHLD, ICCPGFIBMBD);
	}

	::System::Boolean JHJKJFDBBOG(::System::String* GCMFNEDFOAK, ::System::String*& IOLGHEOEGCC, ::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_JHJKJFDBBOG_OFFSET))(this, GCMFNEDFOAK, IOLGHEOEGCC, JEIDPPCEHLD);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::BHJIOOHIECD*>* MBCNFNBBFKO()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt64, ::BHJIOOHIECD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_MBCNFNBBFKO_OFFSET))(this);
	}

	::System::Void MCMOCIDBMOP(::Foundation::Coroutine::CoroutineHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_MCMOCIDBMOP_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::UInt32 KLPAAEKOIPC()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_KLPAAEKOIPC_OFFSET))(this);
	}

	::System::Void ONOHKMFGDGC(::System::Int32 IJFLHGKMCKF, ::System::Int32 NDFAMMINMME, ::System::Collections::Generic::Queue_1<::System::Int32>* GFCAFCFLFCI, ::System::Int32& DFLKEGEHPBN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Queue_1<::System::Int32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_ONOHKMFGDGC_OFFSET))(this, IJFLHGKMCKF, NDFAMMINMME, GFCAFCFLFCI, DFLKEGEHPBN);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>* BNLAIBAEHMG()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_BNLAIBAEHMG_OFFSET))(this);
	}

	::System::Void ANJPMCBLBPA(::UnityEngine::GameObject* JEIDPPCEHLD, ::System::String* HIAIKHDFCLN, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_ANJPMCBLBPA_OFFSET))(this, JEIDPPCEHLD, HIAIKHDFCLN, EGEGIMGMJHN);
	}

	::System::Void DCBHAOAAPCN(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_DCBHAOAAPCN_OFFSET))(this, MAHAOAIGPEH);
	}

	::System::UInt32 NNOCBOOEHNC(::System::String* PLGNGCHOJEO)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_NNOCBOOEHNC_OFFSET))(this, PLGNGCHOJEO);
	}

	::System::Void KMFPCBGEIBI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_KMFPCBGEIBI_OFFSET))(this);
	}

	::System::Void NDOCEJIJJFF(::System::Int32 BNLHPGHLKDK, ::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_NDOCEJIJJFF_OFFSET))(this, BNLHPGHLKDK, MAHAOAIGPEH);
	}

	::System::Void IKHGCMOPCFP(::System::UInt32 IFCEAKPALAD, ::System::UInt32 ECBICAAFBAB, ::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_IKHGCMOPCFP_OFFSET))(this, IFCEAKPALAD, ECBICAAFBAB, JEIDPPCEHLD);
	}

	::UnityEngine::GameObject* FKBJFKBNFKO(::System::String* HIAIKHDFCLN)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_FKBJFKBNFKO_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Boolean DPELDKJEGPG(::System::String* PLGNGCHOJEO, ::System::String*& EGEGIMGMJHN, ::System::UInt32 FLJLMBAFLNL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&, ::System::UInt32))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_DPELDKJEGPG_OFFSET))(this, PLGNGCHOJEO, EGEGIMGMJHN, FLJLMBAFLNL);
	}

	::System::Void GKHPFGIJINH(::System::Collections::Generic::List_1<::BAEDBIJINGO*>* INGJGOCMHGE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BAEDBIJINGO*>*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_GKHPFGIJINH_OFFSET))(this, INGJGOCMHGE);
	}

	::System::Void KPENCAIENAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_KPENCAIENAJ_OFFSET))(this);
	}

	::System::Void LAPAHEMNHIJ(::System::String* HAKPMOBNBHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_LAPAHEMNHIJ_OFFSET))(this, HAKPMOBNBHN);
	}

	::System::Void OKFKFPKKLLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_OKFKFPKKLLB_OFFSET))(this);
	}

	::System::Boolean MFKKBFPKMFC(::System::UInt64 GCBOCDDGKEK, ::System::String* HIAIKHDFCLN, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_MFKKBFPKMFC_OFFSET))(this, GCBOCDDGKEK, HIAIKHDFCLN, EGEGIMGMJHN);
	}

	::System::String* BHEFOFLGEJO_1(::System::UInt64 GCBOCDDGKEK, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_BHEFOFLGEJO_1_OFFSET))(this, GCBOCDDGKEK, HIAIKHDFCLN);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* HCBAPFFJNDI()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_HCBAPFFJNDI_OFFSET))(this);
	}

	::System::Void EOGHIBAILDJ(::System::Collections::Generic::Queue_1<::System::Int32>* GFCAFCFLFCI, ::System::Collections::Generic::List_1<::BAEDBIJINGO*>* INGJGOCMHGE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::System::Int32>*, ::System::Collections::Generic::List_1<::BAEDBIJINGO*>*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_EOGHIBAILDJ_OFFSET))(this, GFCAFCFLFCI, INGJGOCMHGE);
	}

	::UnityEngine::GameObject* GPAFCOADCKK(::LINJLPFDNEP* HINEJHJDICB, ::System::String* HIAIKHDFCLN, ::System::Boolean PFFBEFMKIJE, ::AONOIHMHNFI LHCBCLICEMA, ::System::Boolean ODABNJPMLOL)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::LINJLPFDNEP*, ::System::String*, ::System::Boolean, ::AONOIHMHNFI, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_GPAFCOADCKK_OFFSET))(this, HINEJHJDICB, HIAIKHDFCLN, PFFBEFMKIJE, LHCBCLICEMA, ODABNJPMLOL);
	}

	::System::Void KIJHFFNKKFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_KIJHFFNKKFJ_OFFSET))(this);
	}

	::System::Void IJNALPHOBKJ(::System::Boolean CIBEBBIDGGO, ::System::Single JOFGIANGHMK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_IJNALPHOBKJ_OFFSET))(this, CIBEBBIDGGO, JOFGIANGHMK);
	}

	static ::System::Void FPAOHCNIHGH(::HHNIOENFMAG_HDJOCLFAKLL& EOLLBHABIFO, ::UnityEngine::Vector3 GOABOJFFPFN, ::UnityEngine::Vector3 BHDDIJOLDBP, ::UnityEngine::Vector3& DHJHPNIJKEK, ::System::Single& DCNENGLJCGE)
	{
		return ((::System::Void(*)(::HHNIOENFMAG_HDJOCLFAKLL&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_FPAOHCNIHGH_OFFSET))(EOLLBHABIFO, GOABOJFFPFN, BHDDIJOLDBP, DHJHPNIJKEK, DCNENGLJCGE);
	}

	::System::Void DBKIPDIHCJA(::System::String* HAKPMOBNBHN, ::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_DBKIPDIHCJA_OFFSET))(this, HAKPMOBNBHN, JEIDPPCEHLD);
	}

	::System::Boolean DMCKBAHEMBC(::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_DMCKBAHEMBC_OFFSET))(this, JEIDPPCEHLD);
	}

	::System::Boolean MFKKBFPKMFC_1(::UnityEngine::GameObject* JEIDPPCEHLD, ::System::String* HIAIKHDFCLN, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_MFKKBFPKMFC_1_OFFSET))(this, JEIDPPCEHLD, HIAIKHDFCLN, EGEGIMGMJHN);
	}

	::System::Void MNCPGNGABNI(::System::Int32 BNLHPGHLKDK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_MNCPGNGABNI_OFFSET))(this, BNLHPGHLKDK);
	}

	::System::Void PJPPPCDHEHB(::System::String* HAKPMOBNBHN, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_PJPPPCDHEHB_OFFSET))(this, HAKPMOBNBHN, EGEGIMGMJHN);
	}

	::System::Void HJAFPOBLEJM(::System::String* HAKPMOBNBHN, ::System::Single EGEGIMGMJHN, ::System::Int32 AACNGKMLEDO, ::AkCurveInterpolation EMJINOKPEDB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_HJAFPOBLEJM_OFFSET))(this, HAKPMOBNBHN, EGEGIMGMJHN, AACNGKMLEDO, EMJINOKPEDB);
	}

	::System::Void OGNINJKFEGD(::FBOFFDLOOND_DLFFACOPGFF EGEGIMGMJHN, ::System::Boolean CMBKOECNKKG, ::System::String* MJEEGEKDHMI)
	{
		return ((::System::Void(*)(::PVOID, ::FBOFFDLOOND_DLFFACOPGFF, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_OGNINJKFEGD_OFFSET))(this, EGEGIMGMJHN, CMBKOECNKKG, MJEEGEKDHMI);
	}

	::System::Void IHBPKNNHKPC(::System::UInt32 FLJLMBAFLNL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_IHBPKNNHKPC_OFFSET))(this, FLJLMBAFLNL);
	}

	::UnityEngine::GameObject* FAIGEAKLFEE(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single NCCDJLDKFGA, ::UnityEngine::Vector3 BOGPAHGJOJK, ::System::String* HIAIKHDFCLN, ::AONOIHMHNFI LHCBCLICEMA)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector3, ::System::String*, ::AONOIHMHNFI))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_FAIGEAKLFEE_OFFSET))(this, GKBJOPJKCLB, NCCDJLDKFGA, BOGPAHGJOJK, HIAIKHDFCLN, LHCBCLICEMA);
	}

	::System::Void OABFFCMIHPP(::System::UInt32 BIEMAKNKDMB, ::System::Single EGEGIMGMJHN, ::UnityEngine::GameObject* JEIDPPCEHLD, ::System::Int32 AACNGKMLEDO, ::AkCurveInterpolation EMJINOKPEDB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::UnityEngine::GameObject*, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_OABFFCMIHPP_OFFSET))(this, BIEMAKNKDMB, EGEGIMGMJHN, JEIDPPCEHLD, AACNGKMLEDO, EMJINOKPEDB);
	}

	::System::Void HNKPLNEKHMK(::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_HNKPLNEKHMK_OFFSET))(this, JEIDPPCEHLD);
	}

	::System::Void HAAEEPKDOLN(::BAEDBIJINGO* MAHAOAIGPEH, ::System::Boolean PFFBEFMKIJE)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_HAAEEPKDOLN_OFFSET))(this, MAHAOAIGPEH, PFFBEFMKIJE);
	}

	::System::Void LEEEEBBEIAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_LEEEEBBEIAF_OFFSET))(this);
	}

	::System::Boolean HLKKIDNDFFD(::UnityEngine::GameObject* KHGFAKJKDGG, ::UnityEngine::GameObject* HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_HLKKIDNDFFD_OFFSET))(this, KHGFAKJKDGG, HODAIDNDKHD);
	}

	::System::String* JBMFHAPBOOD(::System::String* JPLKKOHBBKC)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_JBMFHAPBOOD_OFFSET))(this, JPLKKOHBBKC);
	}

	::System::Void BDBCJNCJNIK(::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_BDBCJNCJNIK_OFFSET))(this, JEIDPPCEHLD);
	}

	::System::Void DFDEPANIJKI(::System::Boolean MJEGFNKFEIJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_DFDEPANIJKI_OFFSET))(this, MJEGFNKFEIJ);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean FFDKFOPKMLC(::System::Int32 BNLHPGHLKDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_FFDKFOPKMLC_OFFSET))(this, BNLHPGHLKDK);
	}

	::BAEDBIJINGO* NLLGAGCBMPL(::System::String* HIAIKHDFCLN, ::AONOIHMHNFI LHCBCLICEMA)
	{
		return ((::BAEDBIJINGO*(*)(::PVOID, ::System::String*, ::AONOIHMHNFI))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_NLLGAGCBMPL_OFFSET))(this, HIAIKHDFCLN, LHCBCLICEMA);
	}

	::UnityEngine::GameObject* ILNHIDICIJP(::System::UInt32 BKLGNCBNEGM, ::System::String* HIAIKHDFCLN, ::System::Boolean GJLHNIEGCON, ::AONOIHMHNFI LHCBCLICEMA)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Boolean, ::AONOIHMHNFI))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_ILNHIDICIJP_OFFSET))(this, BKLGNCBNEGM, HIAIKHDFCLN, GJLHNIEGCON, LHCBCLICEMA);
	}

	::System::Void GLBHIDNJFBB(::UnityEngine::GameObject* KHGFAKJKDGG, ::UnityEngine::GameObject* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_GLBHIDNJFBB_OFFSET))(this, KHGFAKJKDGG, HODAIDNDKHD);
	}

	::JIHMLEADCGN* KCDEJIKECOO(::System::String* OOONELGGOKM)
	{
		return ((::JIHMLEADCGN*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_KCDEJIKECOO_OFFSET))(this, OOONELGGOKM);
	}

	::System::Void OHKAAOGHAHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_OHKAAOGHAHE_OFFSET))(this);
	}

	::System::Void NFOOCOMEGDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_NFOOCOMEGDM_OFFSET))(this);
	}

	::System::Void CKGIPNOLJIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_CKGIPNOLJIO_OFFSET))(this);
	}

	static ::System::Void LDCNDFLLNNH(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_LDCNDFLLNNH_OFFSET))(MAHAOAIGPEH);
	}

	::System::String* GMEFLIEPDHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_GMEFLIEPDHN_OFFSET))(this);
	}

	::System::Void FKADNKCNFAA(::System::Boolean CIBEBBIDGGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_FKADNKCNFAA_OFFSET))(this, CIBEBBIDGGO);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_IFHNMAGGFAE_OFFSET))(this);
	}

	::UnityEngine::GameObject* MGDJBALDGKL_1(::System::String* HIAIKHDFCLN, ::AONOIHMHNFI LHCBCLICEMA)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::AONOIHMHNFI))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_MGDJBALDGKL_1_OFFSET))(this, HIAIKHDFCLN, LHCBCLICEMA);
	}

	::System::Void ICAPBJAFMJK(::System::String* PLGNGCHOJEO, ::System::UInt32 FLJLMBAFLNL, ::System::Boolean MJEGFNKFEIJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_ICAPBJAFMJK_OFFSET))(this, PLGNGCHOJEO, FLJLMBAFLNL, MJEGFNKFEIJ);
	}

	::System::Void BFKDPHFHOHO(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_BFKDPHFHOHO_OFFSET))(this, MAHAOAIGPEH);
	}

	::System::Void FMKNEGGDHHF(::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_FMKNEGGDHHF_OFFSET))(this, JEIDPPCEHLD);
	}

	::System::UInt32 KDFPFJADJBA(::System::String* PLGNGCHOJEO)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_KDFPFJADJBA_OFFSET))(this, PLGNGCHOJEO);
	}

	::System::Void MOLGPDKEOHC(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_MOLGPDKEOHC_OFFSET))(this, MAHAOAIGPEH);
	}

	::System::Void JKKFJPDNJIO(::BAEDBIJINGO* MAHAOAIGPEH)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_JKKFJPDNJIO_OFFSET))(this, MAHAOAIGPEH);
	}

	::UnityEngine::GameObject* MGDJBALDGKL_2(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Quaternion BFBELMDIAHI, ::System::String* HIAIKHDFCLN, ::AONOIHMHNFI LHCBCLICEMA)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::String*, ::AONOIHMHNFI))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_MGDJBALDGKL_2_OFFSET))(this, OHOGDOMNHNK, BFBELMDIAHI, HIAIKHDFCLN, LHCBCLICEMA);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* LILBOKCICFB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_LILBOKCICFB_OFFSET))(this);
	}

	::System::UInt32 CJJKOEHBICL(::System::String* PLGNGCHOJEO)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_CJJKOEHBICL_OFFSET))(this, PLGNGCHOJEO);
	}

	::System::Void IKHGCMOPCFP_1(::System::String* GCMFNEDFOAK, ::System::String* IOLGHEOEGCC, ::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_IKHGCMOPCFP_1_OFFSET))(this, GCMFNEDFOAK, IOLGHEOEGCC, JEIDPPCEHLD);
	}

	::System::Void GFMGLANLDNG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_GFMGLANLDNG_OFFSET))(this);
	}

	::System::Void EKGJFKKHJDN(::System::IO::StreamWriter* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_EKGJFKKHJDN_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LDHPJNLFMHB(::System::String* EGEGIMGMJHN, ::System::UInt32 FLJLMBAFLNL, ::System::Boolean MJEGFNKFEIJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_LDHPJNLFMHB_OFFSET))(this, EGEGIMGMJHN, FLJLMBAFLNL, MJEGFNKFEIJ);
	}

	::UnityEngine::GameObject* MGDJBALDGKL_3(::UnityEngine::Transform* GKBJOPJKCLB, ::System::String* HIAIKHDFCLN, ::AONOIHMHNFI LHCBCLICEMA)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::AONOIHMHNFI))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_MGDJBALDGKL_3_OFFSET))(this, GKBJOPJKCLB, HIAIKHDFCLN, LHCBCLICEMA);
	}

	::UnityEngine::GameObject* HBJECCMMOAP_2(::UnityEngine::Transform* GKBJOPJKCLB, ::UnityEngine::Vector3 BOGPAHGJOJK, ::System::String* HIAIKHDFCLN, ::AONOIHMHNFI LHCBCLICEMA)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::String*, ::AONOIHMHNFI))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_HBJECCMMOAP_2_OFFSET))(this, GKBJOPJKCLB, BOGPAHGJOJK, HIAIKHDFCLN, LHCBCLICEMA);
	}

	::System::Void HMIFNNIBLNG(::System::UInt32 BKLGNCBNEGM, ::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_HMIFNNIBLNG_OFFSET))(this, BKLGNCBNEGM, NJOAJLDJCCJ);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* HLJMJGJGKLI()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_HLJMJGJGKLI_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* EAKOKBOLDHF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_EAKOKBOLDHF_OFFSET))(this);
	}

	::System::Void KPLICGNNAJN(::UnityEngine::GameObject* JEIDPPCEHLD, ::System::UInt64 GCBOCDDGKEK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt64))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_KPLICGNNAJN_OFFSET))(this, JEIDPPCEHLD, GCBOCDDGKEK);
	}

	::System::Void DKMJMKKMJME(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_DKMJMKKMJME_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Boolean DAEMAFIDBEJ(::System::UInt32 OFCGBKFOLAO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_DAEMAFIDBEJ_OFFSET))(this, OFCGBKFOLAO);
	}

	::System::Boolean PPCCFLAJINF(::System::String*& EGEGIMGMJHN, ::System::UInt32 FLJLMBAFLNL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::System::UInt32))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_PPCCFLAJINF_OFFSET))(this, EGEGIMGMJHN, FLJLMBAFLNL);
	}

	::System::Void JNELFGEPPIO(::System::Int32& NLHNDIOGNGC, ::System::Int32& GFLFIKGMECA, ::System::Int32& IGMGNHEKOCA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_JNELFGEPPIO_OFFSET))(this, NLHNDIOGNGC, GFLFIKGMECA, IGMGNHEKOCA);
	}

	::Foundation::Coroutine::CoroutineHandle PFHIMPAFCGB(::System::String* MCOHLHMKLIP)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_PFHIMPAFCGB_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Int32 BFLKEBNKBJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_BFLKEBNKBJI_OFFSET))(this);
	}

	::System::Void NLOKFCBBPHI(::System::String* PLGNGCHOJEO, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_NLOKFCBBPHI_OFFSET))(this, PLGNGCHOJEO, EGEGIMGMJHN);
	}

	::System::Void BJJOJCEKAPF(::Foundation::NapPlatform GDLOCGDAJGL)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NapPlatform))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_BJJOJCEKAPF_OFFSET))(this, GDLOCGDAJGL);
	}

	::System::Void HDDGOAMNLAF(::System::String* PLGNGCHOJEO, ::System::UInt32 FLJLMBAFLNL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_HDDGOAMNLAF_OFFSET))(this, PLGNGCHOJEO, FLJLMBAFLNL);
	}

	::System::Int32 MOODBNGOJOI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_MOODBNGOJOI_OFFSET))(this);
	}

	::System::Boolean GGEKHACDEAH(::UnityEngine::GameObject* JEIDPPCEHLD, ::BAEDBIJINGO*& MAHAOAIGPEH)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::BAEDBIJINGO*&))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_GGEKHACDEAH_OFFSET))(this, JEIDPPCEHLD, MAHAOAIGPEH);
	}

	::System::Void LCOMPIBAKEI(::System::String* JPLKKOHBBKC, ::System::String* IEJAIGNKBGB, ::EIOKLKEJAME* ANFBBPAKAHA, ::System::Boolean KAHIPDDMDAN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::EIOKLKEJAME*, ::System::Boolean))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_LCOMPIBAKEI_OFFSET))(this, JPLKKOHBBKC, IEJAIGNKBGB, ANFBBPAKAHA, KAHIPDDMDAN);
	}

	::UnityEngine::GameObject* FAIGEAKLFEE_1(::UnityEngine::Transform* GKBJOPJKCLB, ::System::Single NCCDJLDKFGA, ::System::String* HIAIKHDFCLN, ::AONOIHMHNFI LHCBCLICEMA)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::String*, ::AONOIHMHNFI))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_FAIGEAKLFEE_1_OFFSET))(this, GKBJOPJKCLB, NCCDJLDKFGA, HIAIKHDFCLN, LHCBCLICEMA);
	}

	::System::Void BDBCJNCJNIK_1(::System::UInt64 GCBOCDDGKEK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_BDBCJNCJNIK_1_OFFSET))(this, GCBOCDDGKEK);
	}

	::System::Void OABFFCMIHPP_1(::System::String* HAKPMOBNBHN, ::System::Single EGEGIMGMJHN, ::UnityEngine::GameObject* JEIDPPCEHLD, ::System::Int32 AACNGKMLEDO, ::AkCurveInterpolation EMJINOKPEDB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::GameObject*, ::System::Int32, ::AkCurveInterpolation))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_OABFFCMIHPP_1_OFFSET))(this, HAKPMOBNBHN, EGEGIMGMJHN, JEIDPPCEHLD, AACNGKMLEDO, EMJINOKPEDB);
	}

	::System::Void POHFKPLECCP(::Foundation::Coroutine::CoroutineHandle PHHDHIBOCKA, ::System::Action* CCDPCJKMADB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Coroutine::CoroutineHandle, ::System::Action*))((::PBYTE)hIl2Cpp + CGBGBGOGEMK_POHFKPLECCP_OFFSET))(this, PHHDHIBOCKA, CCDPCJKMADB);
	}
};
