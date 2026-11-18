#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/PAMPOBIPLCE.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/ValueTuple_2.h"

class HGGBGKKEBCC;
class OGJNHDLJIBM;
namespace MoleMole { class UINPCNameWidgetControllerV2; }
namespace MoleMole { class UIWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class HackObjectTrait; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define GNLANOAELPL_AAGOMKBDMHM_OFFSET UNITYSDK_OFFSET(0x17A1C1A0)
#define GNLANOAELPL_AENEIGMDCGC_OFFSET UNITYSDK_OFFSET(0x17A23530)
#define GNLANOAELPL_AHLBPMCCLHO_OFFSET UNITYSDK_OFFSET(0x17A24D30)
#define GNLANOAELPL_ALJDCMCOPJA_OFFSET UNITYSDK_OFFSET(0x17A26600)
#define GNLANOAELPL_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x17A27050)
#define GNLANOAELPL_BEJEIDLBHIF_OFFSET UNITYSDK_OFFSET(0x17A1F600)
#define GNLANOAELPL_BGNGPHABAIN_OFFSET UNITYSDK_OFFSET(0x17A25CB0)
#define GNLANOAELPL_BILDEHFFOHN_OFFSET UNITYSDK_OFFSET(0x17A1E6C0)
#define GNLANOAELPL_CAOKPCPBDGJ_OFFSET UNITYSDK_OFFSET(0x17A1FBE0)
#define GNLANOAELPL_CFDHJIKHNJP_OFFSET UNITYSDK_OFFSET(0x17A21310)
#define GNLANOAELPL_CJJCIOJAOJI_OFFSET UNITYSDK_OFFSET(0x17A213C0)
#define GNLANOAELPL_CNCIKNBGNLD_OFFSET UNITYSDK_OFFSET(0x17A24010)
#define GNLANOAELPL_CODJKNPINJO_OFFSET UNITYSDK_OFFSET(0x17A1C220)
#define GNLANOAELPL_COFHOCIEHPD_OFFSET UNITYSDK_OFFSET(0x17A25FA0)
#define GNLANOAELPL_CONEBDADENA_OFFSET UNITYSDK_OFFSET(0x17A1CA20)
#define GNLANOAELPL_DALDMEMGILC_OFFSET UNITYSDK_OFFSET(0x17A1F110)
#define GNLANOAELPL_DCADDIGBNLB_OFFSET UNITYSDK_OFFSET(0x17A273E0)
#define GNLANOAELPL_DIBJJAODECH_OFFSET UNITYSDK_OFFSET(0x17A24F00)
#define GNLANOAELPL_DJBGOFJHOHB_OFFSET UNITYSDK_OFFSET(0x17A271D0)
#define GNLANOAELPL_DMJLDFKGCFF_OFFSET UNITYSDK_OFFSET(0x17A1D060)
#define GNLANOAELPL_DNNMBAHOOBE_OFFSET UNITYSDK_OFFSET(0x17A23860)
#define GNLANOAELPL_EECBONBJNGJ_OFFSET UNITYSDK_OFFSET(0x17A214F0)
#define GNLANOAELPL_EJNKONJKOBL_OFFSET UNITYSDK_OFFSET(0x17A21470)
#define GNLANOAELPL_ELHKOFGLNJF_OFFSET UNITYSDK_OFFSET(0x17A203D0)
#define GNLANOAELPL_ELJGOBJFPOE_OFFSET UNITYSDK_OFFSET(0x17A25610)
#define GNLANOAELPL_EMHOIEPJDLF_OFFSET UNITYSDK_OFFSET(0x17A1FC30)
#define GNLANOAELPL_ENDJEFMGFPC_OFFSET UNITYSDK_OFFSET(0x17A241A0)
#define GNLANOAELPL_EOGPFHLOAPO_OFFSET UNITYSDK_OFFSET(0x17A1D440)
#define GNLANOAELPL_FEGFHEIEMNO_OFFSET UNITYSDK_OFFSET(0x17A1DF80)
#define GNLANOAELPL_FEPCLBCPIHJ_OFFSET UNITYSDK_OFFSET(0x17A1F6D0)
#define GNLANOAELPL_FGCGCOMDLLA_OFFSET UNITYSDK_OFFSET(0x17A22500)
#define GNLANOAELPL_FHIMCEJBKKA_OFFSET UNITYSDK_OFFSET(0x17A24330)
#define GNLANOAELPL_FHKEGJOGIFF_OFFSET UNITYSDK_OFFSET(0x17A239F0)
#define GNLANOAELPL_FMLNJBNHFNI_OFFSET UNITYSDK_OFFSET(0x17A1FFB0)
#define GNLANOAELPL_FNKBODMHHAL_OFFSET UNITYSDK_OFFSET(0x17A23C70)
#define GNLANOAELPL_GAGJBCABIMJ_OFFSET UNITYSDK_OFFSET(0x17A25DD0)
#define GNLANOAELPL_GCBKNPCOMLE_OFFSET UNITYSDK_OFFSET(0x17A25840)
#define GNLANOAELPL_GCDJIOKBIOF_OFFSET UNITYSDK_OFFSET(0x17A1C7A0)
#define GNLANOAELPL_GCIONIDJGKG_OFFSET UNITYSDK_OFFSET(0x17A25D50)
#define GNLANOAELPL_GKEOENOLEKC_OFFSET UNITYSDK_OFFSET(0x17A23200)
#define GNLANOAELPL_GLKACALKAGP_OFFSET UNITYSDK_OFFSET(0x17A20190)
#define GNLANOAELPL_GPFELFBOGCC_1_OFFSET UNITYSDK_OFFSET(0x17A1F260)
#define GNLANOAELPL_GPFELFBOGCC_OFFSET UNITYSDK_OFFSET(0x17A25A70)
#define GNLANOAELPL_HCJDFJHIEKI_OFFSET UNITYSDK_OFFSET(0x17A1FFD0)
#define GNLANOAELPL_HIFODHAIBFM_OFFSET UNITYSDK_OFFSET(0x17A26AE0)
#define GNLANOAELPL_HLOPFPMDEDA_OFFSET UNITYSDK_OFFSET(0x17A21B40)
#define GNLANOAELPL_HNBEDMEPKIJ_OFFSET UNITYSDK_OFFSET(0x17A23C10)
#define GNLANOAELPL_HPCDKNDHBMO_OFFSET UNITYSDK_OFFSET(0x17A1D5F0)
#define GNLANOAELPL_HPEHFPGKINP_OFFSET UNITYSDK_OFFSET(0x17A265E0)
#define GNLANOAELPL_IAAOFDDMBJI_OFFSET UNITYSDK_OFFSET(0x17A24560)
#define GNLANOAELPL_IABKIIDOFCM_OFFSET UNITYSDK_OFFSET(0x17A1E610)
#define GNLANOAELPL_IDEOILAEDKN_OFFSET UNITYSDK_OFFSET(0x17A26570)
#define GNLANOAELPL_IDJKJKIILCM_OFFSET UNITYSDK_OFFSET(0x17A1D460)
#define GNLANOAELPL_JCBOGDDLGKD_OFFSET UNITYSDK_OFFSET(0x17A1F490)
#define GNLANOAELPL_JGCMLJFMGOH_OFFSET UNITYSDK_OFFSET(0x17A21790)
#define GNLANOAELPL_JMMHLOOMIKI_OFFSET UNITYSDK_OFFSET(0x17A235D0)
#define GNLANOAELPL_JODBIJKJMGC_OFFSET UNITYSDK_OFFSET(0x17A26C20)
#define GNLANOAELPL_KCKJMOFLFLL_OFFSET UNITYSDK_OFFSET(0x17A26100)
#define GNLANOAELPL_KDLEHIFCIKP_OFFSET UNITYSDK_OFFSET(0x17A25680)
#define GNLANOAELPL_KLJEMJJIOFH_OFFSET UNITYSDK_OFFSET(0x17A1FE40)
#define GNLANOAELPL_KLMJKJNLDBI_OFFSET UNITYSDK_OFFSET(0x17A1C470)
#define GNLANOAELPL_KPOEJIGLGFE_OFFSET UNITYSDK_OFFSET(0x17A23AB0)
#define GNLANOAELPL_LAGFCMPLMMA_OFFSET UNITYSDK_OFFSET(0x17A224D0)
#define GNLANOAELPL_LDLPDBFICBN_OFFSET UNITYSDK_OFFSET(0x17A1C2C0)
#define GNLANOAELPL_LGNEKAFDBMG_OFFSET UNITYSDK_OFFSET(0x17A25380)
#define GNLANOAELPL_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x17A26620)
#define GNLANOAELPL_MBKFKAHGHGJ_OFFSET UNITYSDK_OFFSET(0x17A24790)
#define GNLANOAELPL_MGKABOMFFFF_OFFSET UNITYSDK_OFFSET(0x17A1CA90)
#define GNLANOAELPL_MHOKLCEMPMO_OFFSET UNITYSDK_OFFSET(0x17A1FEA0)
#define GNLANOAELPL_MJLANBGJDGH_OFFSET UNITYSDK_OFFSET(0x17A270E0)
#define GNLANOAELPL_MKMDCPCLFLP_OFFSET UNITYSDK_OFFSET(0x17A1EE20)
#define GNLANOAELPL_MMIHGKFOCLM_OFFSET UNITYSDK_OFFSET(0x17A23800)
#define GNLANOAELPL_MPOBHNIPKJC_OFFSET UNITYSDK_OFFSET(0x17A263E0)
#define GNLANOAELPL_NDDACAAOBJA_OFFSET UNITYSDK_OFFSET(0x17A1FA10)
#define GNLANOAELPL_NHCCHLJJBMI_OFFSET UNITYSDK_OFFSET(0x17A1F9B0)
#define GNLANOAELPL_NHFCLACOLPD_OFFSET UNITYSDK_OFFSET(0x17A23760)
#define GNLANOAELPL_NJACOABAHIJ_OFFSET UNITYSDK_OFFSET(0x17A226E0)
#define GNLANOAELPL_NMENBCGBHOA_OFFSET UNITYSDK_OFFSET(0x17A1F910)
#define GNLANOAELPL_NOHNIGEEKJK_OFFSET UNITYSDK_OFFSET(0x17A1F650)
#define GNLANOAELPL_NPHBLPFJOLH_OFFSET UNITYSDK_OFFSET(0x17A22570)
#define GNLANOAELPL_OAHPMNCIMCE_OFFSET UNITYSDK_OFFSET(0x17A1DF20)
#define GNLANOAELPL_OBEGNADFCLC_OFFSET UNITYSDK_OFFSET(0x17A26CF0)
#define GNLANOAELPL_OECPCOEEODG_OFFSET UNITYSDK_OFFSET(0x17A1DEB0)
#define GNLANOAELPL_OFNNHNCLIGG_OFFSET UNITYSDK_OFFSET(0x17A1C9B0)
#define GNLANOAELPL_OFOODDIMNEH_OFFSET UNITYSDK_OFFSET(0x17A26C00)
#define GNLANOAELPL_OGBFNJOLEHJ_OFFSET UNITYSDK_OFFSET(0x17A26300)
#define GNLANOAELPL_ONCCEOAHBKI_OFFSET UNITYSDK_OFFSET(0x17A23550)
#define GNLANOAELPL_ONDMIGBOJHE_OFFSET UNITYSDK_OFFSET(0x17A26110)
#define GNLANOAELPL_ONLIGNOOPLK_OFFSET UNITYSDK_OFFSET(0x17A26360)
#define GNLANOAELPL_OPCCLAPFGLN_OFFSET UNITYSDK_OFFSET(0x17A26BA0)
#define GNLANOAELPL_PAPMOHFCHNL_OFFSET UNITYSDK_OFFSET(0x17A26130)
#define GNLANOAELPL_PGMJLEMBALE_OFFSET UNITYSDK_OFFSET(0x17A1F860)
#define GNLANOAELPL_PIAGINJFLAI_OFFSET UNITYSDK_OFFSET(0x17A1CD20)
#define GNLANOAELPL_PJADKENFODD_OFFSET UNITYSDK_OFFSET(0x17A266C0)
#define GNLANOAELPL_PKGJNPDDMMH_OFFSET UNITYSDK_OFFSET(0x17A26C30)
#define GNLANOAELPL__CTOR_OFFSET UNITYSDK_OFFSET(0x17A1C0D0)

inline static constexpr unsigned int GNLANOAELPL_TypeDefinitionIndex = 84373;

class GNLANOAELPL : public ::System::Object
{
public:
	::UnityEngine::Transform* AFGPKFGNEJD; // 0x10
	::UnityEngine::Transform* FJGILJNFOGG; // 0x18
	::System::Nullable_1<::Foundation::AssetPath> DNCGDIPKDHM; // 0x20
	::System::Byte _padding0[0x10];
	::OGJNHDLJIBM* HLOEDLCGJHE; // 0x38
	::MoleMole::UIWindowController* MAMPMBFMOIP; // 0x40
	::System::String* MHNIJELJCEO; // 0x48
	::UnityEngine::Transform* FOIIEFOPJJF; // 0x50
	::MoleMole::Battle::Entity* LEOKEOFNDLH; // 0x58
	::MoleMole::UINPCNameWidgetControllerV2* LDOKGODNPND; // 0x60
	::System::Collections::Generic::List_1<::System::Object*>* DEPLCLDDHIH; // 0x68
	::NPCCrowd::Animation::NPCUnionAnimator* PIPMJMPBCLL; // 0x70
	::System::String* GGPDDKIDFAN; // 0x78
	::System::Collections::Generic::List_1<::System::Object*>* CBFFHOGCCEA; // 0x80
	::UnityEngine::Vector3 MADOFLDKEDE; // 0x88
	::System::Boolean JGLEIGMMNOF; // 0x94
	::System::Boolean HIJAPMMIEDN; // 0x95
	::System::Boolean FKILMBKKOLL; // 0x96
	::System::Boolean KGGGEKGGFLP; // 0x97
	::System::Int32 CDOIJJAFFBG; // 0x98
	::System::Single EOIFEFKJLBM; // 0x9C
	::UnityEngine::Vector3 MMOICBHFPGI; // 0xA0
	::UnityEngine::Vector3 CJGBFIJFMOE; // 0xAC
	::System::Int32 JLFHBPOACGA; // 0xB8
	::System::Boolean CINLHOINOPH; // 0xBC
	::System::Boolean GPLJLCEOEOE; // 0xBD
	::System::Boolean MOCIFKFEDPE; // 0xBE
	::System::Boolean BIPBPCCBICN; // 0xBF
	::System::Boolean PJCEPIFKLJO; // 0xC0
	::System::Boolean CFKEAJJCCIO; // 0xC1
	::System::Boolean BFDKKDEFJKJ; // 0xC2
	::System::Boolean BNHIBNGJCBL; // 0xC3
	::System::Int32 CLGFLLNPMKE; // 0xC4
	::System::Boolean CODLOEFCEKP; // 0xC8
	::System::Boolean HDCJCLGNEKI; // 0xC9
	::System::Boolean OEMAPBDJABC; // 0xCA
	::System::Boolean MIBPKMGLPDD; // 0xCB
	::System::Single OKPFEKNDAMH; // 0xCC
	::UnityEngine::Vector3 IJLMCNPIHFD; // 0xD0
	::System::Boolean EMKOEDKAOKA; // 0xDC
	::System::Boolean HLOGONEABFD; // 0xDD
	::System::Boolean FODFMBBHMPG; // 0xDE
	::System::Boolean EJKIOMAFMCC; // 0xDF
	::System::Single MCIBAECBCPO; // 0xE0
	::System::Boolean LPLLMFMNKJI; // 0xE4
	::System::Boolean AHJAKENENPE; // 0xE5
	::System::Boolean FPNHEDGFBLC; // 0xE6
	::System::Boolean LFPOHGMKIOD; // 0xE7
	::UnityEngine::Vector3 DJIDKLCNDDG; // 0xE8
	::System::Int32 JCNLKDJBHIM; // 0xF4
	::System::Boolean KNPLECLPFDH; // 0xF8
	::System::Boolean LBDDHNBIOKF; // 0xF9
	::System::Boolean NGMJMBFDPHB; // 0xFA
	::System::Boolean HNPPFNNNGML; // 0xFB
	::System::Single EICGBKNFANB; // 0xFC
	::System::Int32 GIILCHJDAHI; // 0x100
	::System::Int32 OOIEBMMBIJE; // 0x104

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL__CTOR_OFFSET))(this);
	}

	::System::Void AAGOMKBDMHM(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_AAGOMKBDMHM_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void LDLPDBFICBN(::System::UInt64 KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GNLANOAELPL_LDLPDBFICBN_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GCDJIOKBIOF(::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNLANOAELPL_GCDJIOKBIOF_OFFSET))(this, NPPMJEIPMFC);
	}

	::System::Boolean OFNNHNCLIGG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_OFNNHNCLIGG_OFFSET))(this);
	}

	::System::Void CONEBDADENA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_CONEBDADENA_OFFSET))(this);
	}

	::System::Boolean MGKABOMFFFF(::System::Collections::Generic::List_1<::System::Object*>* OLPGBFGCIMH, ::UnityEngine::Vector3& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + GNLANOAELPL_MGKABOMFFFF_OFFSET))(this, OLPGBFGCIMH, IGAAKDOIPNN);
	}

	::System::Void PIAGINJFLAI(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GNLANOAELPL_PIAGINJFLAI_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void EOGPFHLOAPO(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_EOGPFHLOAPO_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void HPCDKNDHBMO(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GNLANOAELPL_HPCDKNDHBMO_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void NOHNIGEEKJK(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_NOHNIGEEKJK_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void PGMJLEMBALE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_PGMJLEMBALE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Boolean NHCCHLJJBMI(::System::Single GOCIIBCOLNL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNLANOAELPL_NHCCHLJJBMI_OFFSET))(this, GOCIIBCOLNL);
	}

	::UnityEngine::Vector3 NDDACAAOBJA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_NDDACAAOBJA_OFFSET))(this);
	}

	::System::Boolean CAOKPCPBDGJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_CAOKPCPBDGJ_OFFSET))(this);
	}

	::System::Void EMHOIEPJDLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_EMHOIEPJDLF_OFFSET))(this);
	}

	::System::Void MHOKLCEMPMO(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GNLANOAELPL_MHOKLCEMPMO_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void FMLNJBNHFNI(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_FMLNJBNHFNI_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void HCJDFJHIEKI(::System::Object* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNLANOAELPL_HCJDFJHIEKI_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GLKACALKAGP(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_GLKACALKAGP_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void CFDHJIKHNJP(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_CFDHJIKHNJP_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void EJNKONJKOBL(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_EJNKONJKOBL_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void BILDEHFFOHN(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* COKLIFNBJDI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + GNLANOAELPL_BILDEHFFOHN_OFFSET))(this, KECKGDFIALJ, COKLIFNBJDI);
	}

	::System::Void JGCMLJFMGOH(::System::Boolean BKOLCDPOJAL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNLANOAELPL_JGCMLJFMGOH_OFFSET))(this, BKOLCDPOJAL);
	}

	::System::Boolean HLOPFPMDEDA(::System::Collections::Generic::List_1<::System::Object*>*& IACKHFCLPJI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*&))((::PBYTE)hIl2Cpp + GNLANOAELPL_HLOPFPMDEDA_OFFSET))(this, IACKHFCLPJI);
	}

	::UnityEngine::Vector3 LAGFCMPLMMA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_LAGFCMPLMMA_OFFSET))(this);
	}

	::System::Boolean FGCGCOMDLLA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_FGCGCOMDLLA_OFFSET))(this);
	}

	::System::Boolean NPHBLPFJOLH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_NPHBLPFJOLH_OFFSET))(this);
	}

	::System::Void JCBOGDDLGKD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_JCBOGDDLGKD_OFFSET))(this);
	}

	::System::Void GKEOENOLEKC(::System::Boolean OCJCIGPDEBN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNLANOAELPL_GKEOENOLEKC_OFFSET))(this, OCJCIGPDEBN);
	}

	::System::Void AENEIGMDCGC(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_AENEIGMDCGC_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void ONCCEOAHBKI(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_ONCCEOAHBKI_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void NHFCLACOLPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_NHFCLACOLPD_OFFSET))(this);
	}

	::System::Void KPOEJIGLGFE(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_KPOEJIGLGFE_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void CJJCIOJAOJI(::System::UInt32 EJFGMAHJMHK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNLANOAELPL_CJJCIOJAOJI_OFFSET))(this, EJFGMAHJMHK);
	}

	::MoleMole::UINPCNameWidgetControllerV2* KLMJKJNLDBI()
	{
		return ((::MoleMole::UINPCNameWidgetControllerV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_KLMJKJNLDBI_OFFSET))(this);
	}

	::System::Void NJACOABAHIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_NJACOABAHIJ_OFFSET))(this);
	}

	::System::Void CNCIKNBGNLD(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_CNCIKNBGNLD_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void ENDJEFMGFPC(::System::Int32 EJFGMAHJMHK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNLANOAELPL_ENDJEFMGFPC_OFFSET))(this, EJFGMAHJMHK);
	}

	::System::Void OAHPMNCIMCE(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNLANOAELPL_OAHPMNCIMCE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FHIMCEJBKKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_FHIMCEJBKKA_OFFSET))(this);
	}

	::System::Void IAAOFDDMBJI(::MoleMole::Battle::Entity* GLAHBAPBFJA, ::MoleMole::UIWindowController* FKJAHOHKHAK, ::UnityEngine::Transform* BIPIMLIDAIP, ::System::String* COKLIFNBJDI, ::UnityEngine::Transform* OPMPKFEHOBM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GNLANOAELPL_IAAOFDDMBJI_OFFSET))(this, GLAHBAPBFJA, FKJAHOHKHAK, BIPIMLIDAIP, COKLIFNBJDI, OPMPKFEHOBM);
	}

	::System::ValueTuple_2<::System::Boolean, ::System::Int32> DIBJJAODECH(::HGGBGKKEBCC* HMMMOCJAEOA)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::Int32>(*)(::PVOID, ::HGGBGKKEBCC*))((::PBYTE)hIl2Cpp + GNLANOAELPL_DIBJJAODECH_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Void MKMDCPCLFLP(::System::Boolean BKOLCDPOJAL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNLANOAELPL_MKMDCPCLFLP_OFFSET))(this, BKOLCDPOJAL);
	}

	::System::Void ELHKOFGLNJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_ELHKOFGLNJF_OFFSET))(this);
	}

	::System::Void FEPCLBCPIHJ(::System::Object* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNLANOAELPL_FEPCLBCPIHJ_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Boolean DMJLDFKGCFF(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Config::HackObjectTrait*& EHNMMCAJFHB)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Config::HackObjectTrait*&))((::PBYTE)hIl2Cpp + GNLANOAELPL_DMJLDFKGCFF_OFFSET))(this, KECKGDFIALJ, EHNMMCAJFHB);
	}

	::System::Void ELJGOBJFPOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_ELJGOBJFPOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Single IABKIIDOFCM(::UnityEngine::Vector3 FMDLIFKLFKI, ::UnityEngine::Vector3 IACKHFCLPJI)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GNLANOAELPL_IABKIIDOFCM_OFFSET))(this, FMDLIFKLFKI, IACKHFCLPJI);
	}

	::System::Boolean GCBKNPCOMLE(::System::Single PBHKFCIJJDF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNLANOAELPL_GCBKNPCOMLE_OFFSET))(this, PBHKFCIJJDF);
	}

	::System::Void GPFELFBOGCC(::System::Int32 BDIKCCILIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNLANOAELPL_GPFELFBOGCC_OFFSET))(this, BDIKCCILIKI);
	}

	::System::Void NMENBCGBHOA(::System::Int32 EJFGMAHJMHK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNLANOAELPL_NMENBCGBHOA_OFFSET))(this, EJFGMAHJMHK);
	}

	::System::Void DNNMBAHOOBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_DNNMBAHOOBE_OFFSET))(this);
	}

	::System::Void EECBONBJNGJ(::System::Boolean BKOLCDPOJAL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNLANOAELPL_EECBONBJNGJ_OFFSET))(this, BKOLCDPOJAL);
	}

	::System::Void BGNGPHABAIN(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_BGNGPHABAIN_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GCIONIDJGKG(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_GCIONIDJGKG_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void COFHOCIEHPD(::PAMPOBIPLCE GEPABHJBIAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::PAMPOBIPLCE, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + GNLANOAELPL_COFHOCIEHPD_OFFSET))(this, GEPABHJBIAH, PHHDHIBOCKA);
	}

	::System::Int32 KCKJMOFLFLL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_KCKJMOFLFLL_OFFSET))(this);
	}

	::System::Void BEJEIDLBHIF(::System::Boolean MBJDMKCGOCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNLANOAELPL_BEJEIDLBHIF_OFFSET))(this, MBJDMKCGOCK);
	}

	::System::Void GAGJBCABIMJ(::System::Object* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNLANOAELPL_GAGJBCABIMJ_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void KLJEMJJIOFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_KLJEMJJIOFH_OFFSET))(this);
	}

	::System::Void MBKFKAHGHGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_MBKFKAHGHGJ_OFFSET))(this);
	}

	::System::Void AHLBPMCCLHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_AHLBPMCCLHO_OFFSET))(this);
	}

	::System::Void IDJKJKIILCM(::System::Int32 LABJKINHNMH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNLANOAELPL_IDJKJKIILCM_OFFSET))(this, LABJKINHNMH);
	}

	::System::Void ONDMIGBOJHE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_ONDMIGBOJHE_OFFSET))(this, KOIBHLHLMFC);
	}

	::UnityEngine::Vector3 FEGFHEIEMNO()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_FEGFHEIEMNO_OFFSET))(this);
	}

	::System::Void OGBFNJOLEHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_OGBFNJOLEHJ_OFFSET))(this);
	}

	::System::Void CODJKNPINJO(::System::String* OLGIFMCHHCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GNLANOAELPL_CODJKNPINJO_OFFSET))(this, OLGIFMCHHCP);
	}

	::System::Void ONLIGNOOPLK(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_ONLIGNOOPLK_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void HNBEDMEPKIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_HNBEDMEPKIJ_OFFSET))(this);
	}

	::System::Void FHKEGJOGIFF(::System::Boolean DEBGKPLOPCG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNLANOAELPL_FHKEGJOGIFF_OFFSET))(this, DEBGKPLOPCG);
	}

	::System::Void DALDMEMGILC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_DALDMEMGILC_OFFSET))(this);
	}

	::System::Void MPOBHNIPKJC(::System::Int32 EJFGMAHJMHK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNLANOAELPL_MPOBHNIPKJC_OFFSET))(this, EJFGMAHJMHK);
	}

	::System::Void IDEOILAEDKN(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_IDEOILAEDKN_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void HPEHFPGKINP(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_HPEHFPGKINP_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void ALJDCMCOPJA(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_ALJDCMCOPJA_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void JMMHLOOMIKI(::System::Object* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNLANOAELPL_JMMHLOOMIKI_OFFSET))(this, KOIBHLHLMFC);
	}

	static ::System::Void MBKDOMFJFIG(::GNLANOAELPL* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::GNLANOAELPL*))((::PBYTE)hIl2Cpp + GNLANOAELPL_MBKDOMFJFIG_OFFSET))(LJBPECKCCEA);
	}

	::System::Boolean FNKBODMHHAL(::UnityEngine::Vector3 FMDLIFKLFKI, ::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + GNLANOAELPL_FNKBODMHHAL_OFFSET))(this, FMDLIFKLFKI, NPPMJEIPMFC);
	}

	::System::Void OPCCLAPFGLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_OPCCLAPFGLN_OFFSET))(this);
	}

	::System::Void OFOODDIMNEH(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_OFOODDIMNEH_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void LGNEKAFDBMG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_LGNEKAFDBMG_OFFSET))(this);
	}

	::System::Int32 JODBIJKJMGC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_JODBIJKJMGC_OFFSET))(this);
	}

	::System::Void OECPCOEEODG(::System::Boolean CPHDDAGKHLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNLANOAELPL_OECPCOEEODG_OFFSET))(this, CPHDDAGKHLB);
	}

	::System::Void PAPMOHFCHNL(::System::Int32 EJFGMAHJMHK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNLANOAELPL_PAPMOHFCHNL_OFFSET))(this, EJFGMAHJMHK);
	}

	::System::Void PKGJNPDDMMH(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::UIWindowController* FKJAHOHKHAK, ::UnityEngine::Transform* BIPIMLIDAIP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GNLANOAELPL_PKGJNPDDMMH_OFFSET))(this, KECKGDFIALJ, FKJAHOHKHAK, BIPIMLIDAIP);
	}

	::System::Boolean HIFODHAIBFM(::UnityEngine::Vector3 IACKHFCLPJI)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GNLANOAELPL_HIFODHAIBFM_OFFSET))(this, IACKHFCLPJI);
	}

	::System::Void MMIHGKFOCLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_MMIHGKFOCLM_OFFSET))(this);
	}

	::System::Void OBEGNADFCLC(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GNLANOAELPL_OBEGNADFCLC_OFFSET))(this, KOIBHLHLMFC);
	}

	static ::GNLANOAELPL* BBPCBEEHALC()
	{
		return ((::GNLANOAELPL*(*)())((::PBYTE)hIl2Cpp + GNLANOAELPL_BBPCBEEHALC_OFFSET))();
	}

	::System::Void MJLANBGJDGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_MJLANBGJDGH_OFFSET))(this);
	}

	::System::Void DJBGOFJHOHB(::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GNLANOAELPL_DJBGOFJHOHB_OFFSET))(this, NPPMJEIPMFC);
	}

	::System::Void DCADDIGBNLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_DCADDIGBNLB_OFFSET))(this);
	}

	::System::Void GPFELFBOGCC_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNLANOAELPL_GPFELFBOGCC_1_OFFSET))(this);
	}

	::System::Single KDLEHIFCIKP(::UnityEngine::Vector3 FMDLIFKLFKI, ::UnityEngine::Vector3 IACKHFCLPJI)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GNLANOAELPL_KDLEHIFCIKP_OFFSET))(this, FMDLIFKLFKI, IACKHFCLPJI);
	}

	::System::Void PJADKENFODD(::System::Single PBHKFCIJJDF, ::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + GNLANOAELPL_PJADKENFODD_OFFSET))(this, PBHKFCIJJDF, NPPMJEIPMFC);
	}
};
