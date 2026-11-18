#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABJJAKDLMNB.h"
#include "unitysdk/DPFNLOFNPDM.h"
#include "unitysdk/EPIDGNEOKGM.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/GIFOBKBCCMA.h"
#include "unitysdk/ICEBNIECGBK.h"
#include "unitysdk/JOBFHMHOPFN.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GNHPLJOAFDK;
class GNKNFBABFLE;
class MBHOGLGMFEM;
class ODCBCMEIOGG;
namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd::Lod { class NPCCrowdPositionAgent; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LKPHLOELDOO_ABIFPCJJMDL_OFFSET UNITYSDK_OFFSET(0x13D03190)
#define LKPHLOELDOO_ACLGLINGKNP_OFFSET UNITYSDK_OFFSET(0x13D02DC0)
#define LKPHLOELDOO_AHLAIFIFNPC_OFFSET UNITYSDK_OFFSET(0x13CFF470)
#define LKPHLOELDOO_AKLNAFEJKDE_OFFSET UNITYSDK_OFFSET(0x13CFF9F0)
#define LKPHLOELDOO_ALFIBDAFHCA_OFFSET UNITYSDK_OFFSET(0x13CFF5B0)
#define LKPHLOELDOO_AMEGFHBJGFF_OFFSET UNITYSDK_OFFSET(0x13D06CF0)
#define LKPHLOELDOO_AOHKKDIJING_OFFSET UNITYSDK_OFFSET(0x13CFD7F0)
#define LKPHLOELDOO_BANOEDLEGDN_OFFSET UNITYSDK_OFFSET(0x13CFA590)
#define LKPHLOELDOO_BCNGPFEOBMM_OFFSET UNITYSDK_OFFSET(0x13D00F90)
#define LKPHLOELDOO_BFPKOGACFGN_OFFSET UNITYSDK_OFFSET(0x13CFAED0)
#define LKPHLOELDOO_BGJLAIGMEGJ_OFFSET UNITYSDK_OFFSET(0x13D039C0)
#define LKPHLOELDOO_BHMEOCPGGFA_OFFSET UNITYSDK_OFFSET(0x13CFF510)
#define LKPHLOELDOO_BIHKJAEDPAN_OFFSET UNITYSDK_OFFSET(0x13D040D0)
#define LKPHLOELDOO_BOEDOKNELEF_OFFSET UNITYSDK_OFFSET(0x13D057C0)
#define LKPHLOELDOO_CFAEDHOOANH_OFFSET UNITYSDK_OFFSET(0x13CFE2B0)
#define LKPHLOELDOO_CFFEBEHDJIF_OFFSET UNITYSDK_OFFSET(0x13CF97C0)
#define LKPHLOELDOO_CPFKJMLGDJO_OFFSET UNITYSDK_OFFSET(0x13CFB140)
#define LKPHLOELDOO_CPJFCHKCAPP_OFFSET UNITYSDK_OFFSET(0x13D050E0)
#define LKPHLOELDOO_DHCBJMJDFBO_OFFSET UNITYSDK_OFFSET(0x13D01720)
#define LKPHLOELDOO_DLKGPOCNKNE_OFFSET UNITYSDK_OFFSET(0x13CFCA80)
#define LKPHLOELDOO_EEKGGAMEOFD_OFFSET UNITYSDK_OFFSET(0x13CFCD80)
#define LKPHLOELDOO_EILBHOCJNGG_OFFSET UNITYSDK_OFFSET(0x13D047A0)
#define LKPHLOELDOO_EKELPFIDNGI_OFFSET UNITYSDK_OFFSET(0x13D05ED0)
#define LKPHLOELDOO_EMPHPCLGDDE_OFFSET UNITYSDK_OFFSET(0x13CFB1F0)
#define LKPHLOELDOO_ENGJNLBENIJ_OFFSET UNITYSDK_OFFSET(0x13CFDF80)
#define LKPHLOELDOO_FAOGLDJANGP_OFFSET UNITYSDK_OFFSET(0x13CFB530)
#define LKPHLOELDOO_FEKJGMHOHEN_OFFSET UNITYSDK_OFFSET(0x13D02EA0)
#define LKPHLOELDOO_FKDDHEOKKFL_OFFSET UNITYSDK_OFFSET(0x13CFE340)
#define LKPHLOELDOO_GBCFNOGGCHO_OFFSET UNITYSDK_OFFSET(0x13CFEF10)
#define LKPHLOELDOO_GELIPJLJDGB_OFFSET UNITYSDK_OFFSET(0x13CFED70)
#define LKPHLOELDOO_GJDPMHNKPPE_OFFSET UNITYSDK_OFFSET(0x13D039E0)
#define LKPHLOELDOO_GKAPEOJGEAE_OFFSET UNITYSDK_OFFSET(0x13CFA700)
#define LKPHLOELDOO_GMBFANOGKAN_OFFSET UNITYSDK_OFFSET(0x13CFA520)
#define LKPHLOELDOO_HAJAEHNDHEE_1_OFFSET UNITYSDK_OFFSET(0x13D04F90)
#define LKPHLOELDOO_HAJAEHNDHEE_OFFSET UNITYSDK_OFFSET(0x13D03600)
#define LKPHLOELDOO_HHPCKKBFICL_OFFSET UNITYSDK_OFFSET(0x13CFD590)
#define LKPHLOELDOO_HKOLAMAEPCI_OFFSET UNITYSDK_OFFSET(0x13D03C40)
#define LKPHLOELDOO_HOAONIODDKP_OFFSET UNITYSDK_OFFSET(0x13D05DD0)
#define LKPHLOELDOO_IAKBBPGOKAO_OFFSET UNITYSDK_OFFSET(0x13D06800)
#define LKPHLOELDOO_IBHKKJFHOBJ_OFFSET UNITYSDK_OFFSET(0x13CFC4F0)
#define LKPHLOELDOO_IDAMMOJAILA_OFFSET UNITYSDK_OFFSET(0x13D02F50)
#define LKPHLOELDOO_IFBJMOGIIPF_OFFSET UNITYSDK_OFFSET(0x13CFD290)
#define LKPHLOELDOO_IFGDICLLIED_OFFSET UNITYSDK_OFFSET(0x13D05E10)
#define LKPHLOELDOO_IFHDOEENJOA_OFFSET UNITYSDK_OFFSET(0x13CFE4E0)
#define LKPHLOELDOO_IGHDKOHFPCF_OFFSET UNITYSDK_OFFSET(0x13D053C0)
#define LKPHLOELDOO_IPOOKHMDNKF_OFFSET UNITYSDK_OFFSET(0x13D00FE0)
#define LKPHLOELDOO_JGHKGPBAODK_OFFSET UNITYSDK_OFFSET(0x13CFC790)
#define LKPHLOELDOO_JJBAHDLLPBE_OFFSET UNITYSDK_OFFSET(0x13D00280)
#define LKPHLOELDOO_JKABEBEDACF_OFFSET UNITYSDK_OFFSET(0x13D00D40)
#define LKPHLOELDOO_JNFKEHBFDLH_OFFSET UNITYSDK_OFFSET(0x13CFFCC0)
#define LKPHLOELDOO_JNNOFMJPGCP_OFFSET UNITYSDK_OFFSET(0x13CFC690)
#define LKPHLOELDOO_JPJOPDHIECC_OFFSET UNITYSDK_OFFSET(0x13D00100)
#define LKPHLOELDOO_KDALJJCAOHF_OFFSET UNITYSDK_OFFSET(0x13D05620)
#define LKPHLOELDOO_KNJBJIIDCPL_OFFSET UNITYSDK_OFFSET(0x13CFE490)
#define LKPHLOELDOO_KOCGCJEIEOK_OFFSET UNITYSDK_OFFSET(0x13D06CA0)
#define LKPHLOELDOO_KPKIONFEIEB_OFFSET UNITYSDK_OFFSET(0x13D06310)
#define LKPHLOELDOO_LFCMCOHNOKF_OFFSET UNITYSDK_OFFSET(0x13D01D90)
#define LKPHLOELDOO_LGEKCGLMFLK_OFFSET UNITYSDK_OFFSET(0x13D03A60)
#define LKPHLOELDOO_LIIAPLCDDNI_OFFSET UNITYSDK_OFFSET(0x13D06AC0)
#define LKPHLOELDOO_LNPPJNCLNOF_OFFSET UNITYSDK_OFFSET(0x13CFCF20)
#define LKPHLOELDOO_LPAINJGIDPG_OFFSET UNITYSDK_OFFSET(0x13D06E50)
#define LKPHLOELDOO_MBEFOENJLKJ_OFFSET UNITYSDK_OFFSET(0x13D04190)
#define LKPHLOELDOO_MHMJPBIMKOJ_OFFSET UNITYSDK_OFFSET(0x13D06570)
#define LKPHLOELDOO_MLKOMNNCPJC_OFFSET UNITYSDK_OFFSET(0x13CFC640)
#define LKPHLOELDOO_NCAPDNJMEHM_OFFSET UNITYSDK_OFFSET(0x13D06D30)
#define LKPHLOELDOO_NDIDJCCJIAM_OFFSET UNITYSDK_OFFSET(0x13D02700)
#define LKPHLOELDOO_NHCEACCBLBK_OFFSET UNITYSDK_OFFSET(0x13D03BB0)
#define LKPHLOELDOO_NIPDLHLDDJK_OFFSET UNITYSDK_OFFSET(0x13CFA260)
#define LKPHLOELDOO_NJCOPAPBBFC_OFFSET UNITYSDK_OFFSET(0x13D05DB0)
#define LKPHLOELDOO_NKBDMBPLHEJ_OFFSET UNITYSDK_OFFSET(0x13CFBCB0)
#define LKPHLOELDOO_NLCCKNELGNG_OFFSET UNITYSDK_OFFSET(0x13CFFDA0)
#define LKPHLOELDOO_OCMHBJNGNIE_OFFSET UNITYSDK_OFFSET(0x13CFE7F0)
#define LKPHLOELDOO_OGKANFFCGPE_OFFSET UNITYSDK_OFFSET(0x13D01420)
#define LKPHLOELDOO_OHBECBKJKLM_OFFSET UNITYSDK_OFFSET(0x13D00D00)
#define LKPHLOELDOO_OHGNAFOFLMB_OFFSET UNITYSDK_OFFSET(0x13CFAA00)
#define LKPHLOELDOO_OPAPBEDGCJG_OFFSET UNITYSDK_OFFSET(0x13D03230)
#define LKPHLOELDOO_OPDDCGLDBKG_OFFSET UNITYSDK_OFFSET(0x13CFDD60)
#define LKPHLOELDOO_PDKNCFFBOIH_OFFSET UNITYSDK_OFFSET(0x13D06430)
#define LKPHLOELDOO_PFIMIOKENEC_OFFSET UNITYSDK_OFFSET(0x13D05D20)
#define LKPHLOELDOO_PHBJOELONNN_OFFSET UNITYSDK_OFFSET(0x13CFC580)
#define LKPHLOELDOO_PKJNGBAOIKA_OFFSET UNITYSDK_OFFSET(0x13CFC1A0)
#define LKPHLOELDOO_PLOCLODIDDF_OFFSET UNITYSDK_OFFSET(0x13CFD2E0)
#define LKPHLOELDOO_POPCEHALIOJ_OFFSET UNITYSDK_OFFSET(0x13CFC280)
#define LKPHLOELDOO_PPNGNAEJKHK_OFFSET UNITYSDK_OFFSET(0x13CF9A90)
#define LKPHLOELDOO__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CFA690)
#define LKPHLOELDOO__CTOR_OFFSET UNITYSDK_OFFSET(0x13CF93D0)

inline static constexpr unsigned int LKPHLOELDOO_TypeDefinitionIndex = 54080;

class LKPHLOELDOO : public ::ABJJAKDLMNB
{
public:
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_CNMEAHHILDJ()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LKPHLOELDOO_TypeDefinitionIndex)->GetStaticField(0x4A280);
	}
	// static const ::System::String* NEABMOOEGDH; // 0x0
	// static const ::System::String* JAENONDNMLG; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MBHOGLGMFEM*>*>* JGMFOHMNOCO; // 0x28
	::System::Collections::Generic::List_1<::MBHOGLGMFEM*>* PDELLMIBMCG; // 0x30
	::System::Collections::Generic::List_1<::MBHOGLGMFEM*>* GJLFKCHAHFC; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MBHOGLGMFEM*>* MGMMNAOEADK; // 0x40
	::DPFNLOFNPDM FJCNNCPEGPK; // 0x48
	::System::Action_1<::DPFNLOFNPDM>* LEGLDOHOLHL; // 0x60
	::ODCBCMEIOGG* LDBLBJNJHMA; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EPIDGNEOKGM>* CPDHOIJNNGL; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* ILENCLLGGIO; // 0x78
	::System::Collections::Generic::List_1<::System::Int32>* FJKPAIOJAFJ; // 0x80
	::GNKNFBABFLE* FANPBHFNBIM; // 0x88
	::MoleMole::EntityHandle HLGGHBEPCKI; // 0x90
	::System::Collections::Generic::List_1<::MBHOGLGMFEM*>* DJGCJOOCFEA; // 0xA0
	::MoleMole::EntityHandle KODNAKCLNPI; // 0xA8
	::System::Collections::Generic::List_1<::MBHOGLGMFEM*>* CIHAABHFHNF; // 0xB8
	::NPCCrowd::Lod::NPCCrowdPositionAgent* PGKFHPPNPKL; // 0xC0
	::System::Boolean IHGPLAPPHAD; // 0xC8
	::System::Byte _padding0[0x3];
	::System::UInt32 IHLDHJBBHAK; // 0xCC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKPHLOELDOO__CCTOR_OFFSET))();
	}

	::System::Void CFFEBEHDJIF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_CFFEBEHDJIF_OFFSET))(this);
	}

	::System::Void NIPDLHLDDJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_NIPDLHLDDJK_OFFSET))(this);
	}

	::System::Void GMBFANOGKAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_GMBFANOGKAN_OFFSET))(this);
	}

	::System::Void GKAPEOJGEAE(::MBHOGLGMFEM* BMKJMCEMHKF)
	{
		return ((::System::Void(*)(::PVOID, ::MBHOGLGMFEM*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_GKAPEOJGEAE_OFFSET))(this, BMKJMCEMHKF);
	}

	::MBHOGLGMFEM* CPFKJMLGDJO()
	{
		return ((::MBHOGLGMFEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_CPFKJMLGDJO_OFFSET))(this);
	}

	::System::Void EMPHPCLGDDE(::System::Collections::Generic::List_1<::System::Int32>* EDOJBHAGEFK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_EMPHPCLGDDE_OFFSET))(this, EDOJBHAGEFK);
	}

	::MBHOGLGMFEM* NKBDMBPLHEJ()
	{
		return ((::MBHOGLGMFEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_NKBDMBPLHEJ_OFFSET))(this);
	}

	::System::Void POPCEHALIOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_POPCEHALIOJ_OFFSET))(this);
	}

	::System::Void PHBJOELONNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_PHBJOELONNN_OFFSET))(this);
	}

	::System::Void MLKOMNNCPJC(::System::Collections::Generic::List_1<::System::Int32>* DOEGACMLCGI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_MLKOMNNCPJC_OFFSET))(this, DOEGACMLCGI);
	}

	::System::Void JNNOFMJPGCP(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* LHLPLLCBMBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_JNNOFMJPGCP_OFFSET))(this, LHLPLLCBMBM);
	}

	::System::Void DLKGPOCNKNE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_DLKGPOCNKNE_OFFSET))(this);
	}

	::System::Void EEKGGAMEOFD(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_EEKGGAMEOFD_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void IFBJMOGIIPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_IFBJMOGIIPF_OFFSET))(this);
	}

	::System::Void HHPCKKBFICL(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* LHLPLLCBMBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_HHPCKKBFICL_OFFSET))(this, LHLPLLCBMBM);
	}

	::System::Void AOHKKDIJING(::System::Int32 POOJDDDCAHJ, ::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>* HFFHFPLHLFJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_AOHKKDIJING_OFFSET))(this, POOJDDDCAHJ, HFFHFPLHLFJ);
	}

	::System::Void CFAEDHOOANH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_CFAEDHOOANH_OFFSET))(this);
	}

	static ::System::Boolean FKDDHEOKKFL()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LKPHLOELDOO_FKDDHEOKKFL_OFFSET))();
	}

	::System::Void KNJBJIIDCPL(::MBHOGLGMFEM* BMKJMCEMHKF)
	{
		return ((::System::Void(*)(::PVOID, ::MBHOGLGMFEM*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_KNJBJIIDCPL_OFFSET))(this, BMKJMCEMHKF);
	}

	::MoleMole::EntityHandle IFHDOEENJOA()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_IFHDOEENJOA_OFFSET))(this);
	}

	::System::Void OCMHBJNGNIE(::MBHOGLGMFEM* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MBHOGLGMFEM*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_OCMHBJNGNIE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void GELIPJLJDGB(::System::String* NIHGOLJOGKD, ::System::Boolean OHPMGCFGKPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LKPHLOELDOO_GELIPJLJDGB_OFFSET))(this, NIHGOLJOGKD, OHPMGCFGKPI);
	}

	::System::Void AHLAIFIFNPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_AHLAIFIFNPC_OFFSET))(this);
	}

	::System::Void BHMEOCPGGFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_BHMEOCPGGFA_OFFSET))(this);
	}

	::System::Void ALFIBDAFHCA(::System::Int32 PELNGLAEKEO, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_ALFIBDAFHCA_OFFSET))(this, PELNGLAEKEO, KECKGDFIALJ);
	}

	::MBHOGLGMFEM* AKLNAFEJKDE(::System::Int32 POOJDDDCAHJ)
	{
		return ((::MBHOGLGMFEM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKPHLOELDOO_AKLNAFEJKDE_OFFSET))(this, POOJDDDCAHJ);
	}

	::System::Void NLCCKNELGNG(::System::Int32 AELLPLBJELA, ::System::Boolean NNJLDLIHINN, ::System::Boolean GKJPAJOOCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LKPHLOELDOO_NLCCKNELGNG_OFFSET))(this, AELLPLBJELA, NNJLDLIHINN, GKJPAJOOCPI);
	}

	::System::Void JPJOPDHIECC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_JPJOPDHIECC_OFFSET))(this);
	}

	::System::Void JJBAHDLLPBE(::System::Action_1<::DPFNLOFNPDM>* KHKCMBLJOKH, ::MIKOMFIBMBN KCAAHHAOKLC, ::ICEBNIECGBK IFIMPCADIHE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::DPFNLOFNPDM>*, ::MIKOMFIBMBN, ::ICEBNIECGBK))((::PBYTE)hIl2Cpp + LKPHLOELDOO_JJBAHDLLPBE_OFFSET))(this, KHKCMBLJOKH, KCAAHHAOKLC, IFIMPCADIHE);
	}

	::System::Void OPDDCGLDBKG(::System::Int32 POOJDDDCAHJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKPHLOELDOO_OPDDCGLDBKG_OFFSET))(this, POOJDDDCAHJ);
	}

	::System::Boolean OHBECBKJKLM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_OHBECBKJKLM_OFFSET))(this);
	}

	::System::Void JKABEBEDACF(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + LKPHLOELDOO_JKABEBEDACF_OFFSET))(this, KECKGDFIALJ, FBILHHBPEHD);
	}

	::System::Void ENGJNLBENIJ(::Foundation::ViewObject::ViewObjectHandle JEJJLALJJKH, ::System::Boolean MBJDMKCGOCK)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + LKPHLOELDOO_ENGJNLBENIJ_OFFSET))(this, JEJJLALJJKH, MBJDMKCGOCK);
	}

	::System::Void BCNGPFEOBMM(::System::Int32 POOJDDDCAHJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKPHLOELDOO_BCNGPFEOBMM_OFFSET))(this, POOJDDDCAHJ);
	}

	::System::Void IPOOKHMDNKF(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* HNOPAJLDCFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_IPOOKHMDNKF_OFFSET))(this, KECKGDFIALJ, HNOPAJLDCFB);
	}

	::System::Void FAOGLDJANGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_FAOGLDJANGP_OFFSET))(this);
	}

	::System::Void OGKANFFCGPE(::Foundation::ViewObject::GroupMemberIdentifier ONHMMBFCFGG, ::System::Collections::Generic::List_1<::System::Int32>* KOIBHLHLMFC, ::System::Int32 POOJDDDCAHJ)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::GroupMemberIdentifier, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + LKPHLOELDOO_OGKANFFCGPE_OFFSET))(this, ONHMMBFCFGG, KOIBHLHLMFC, POOJDDDCAHJ);
	}

	::MBHOGLGMFEM* JNFKEHBFDLH(::System::Int32 POOJDDDCAHJ)
	{
		return ((::MBHOGLGMFEM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKPHLOELDOO_JNFKEHBFDLH_OFFSET))(this, POOJDDDCAHJ);
	}

	static ::JOBFHMHOPFN DHCBJMJDFBO()
	{
		return ((::JOBFHMHOPFN(*)())((::PBYTE)hIl2Cpp + LKPHLOELDOO_DHCBJMJDFBO_OFFSET))();
	}

	::System::Void LFCMCOHNOKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_LFCMCOHNOKF_OFFSET))(this);
	}

	::System::Void GBCFNOGGCHO(::System::Boolean OHPMGCFGKPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LKPHLOELDOO_GBCFNOGGCHO_OFFSET))(this, OHPMGCFGKPI);
	}

	::MBHOGLGMFEM* ACLGLINGKNP(::System::Int32 POOJDDDCAHJ)
	{
		return ((::MBHOGLGMFEM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKPHLOELDOO_ACLGLINGKNP_OFFSET))(this, POOJDDDCAHJ);
	}

	static ::System::Boolean FEKJGMHOHEN(::System::Int32 POOJDDDCAHJ)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + LKPHLOELDOO_FEKJGMHOHEN_OFFSET))(POOJDDDCAHJ);
	}

	::System::Void IDAMMOJAILA(::System::Int32 POOJDDDCAHJ, ::System::Collections::Generic::List_1<::System::String*>* AACPAIHCKCF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_IDAMMOJAILA_OFFSET))(this, POOJDDDCAHJ, AACPAIHCKCF);
	}

	::System::Void ABIFPCJJMDL(::MIKOMFIBMBN JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::MIKOMFIBMBN))((::PBYTE)hIl2Cpp + LKPHLOELDOO_ABIFPCJJMDL_OFFSET))(this, JOLDOMEIKEF);
	}

	::System::Void HAJAEHNDHEE(::GNKNFBABFLE* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::GNKNFBABFLE*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_HAJAEHNDHEE_OFFSET))(this, DFMKILICPFB);
	}

	::System::Int32 BGJLAIGMEGJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_BGJLAIGMEGJ_OFFSET))(this);
	}

	::System::Void GJDPMHNKPPE(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_GJDPMHNKPPE_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void LGEKCGLMFLK(::MBHOGLGMFEM* BMKJMCEMHKF)
	{
		return ((::System::Void(*)(::PVOID, ::MBHOGLGMFEM*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_LGEKCGLMFLK_OFFSET))(this, BMKJMCEMHKF);
	}

	::MBHOGLGMFEM* OPAPBEDGCJG(::MIKOMFIBMBN KCAAHHAOKLC)
	{
		return ((::MBHOGLGMFEM*(*)(::PVOID, ::MIKOMFIBMBN))((::PBYTE)hIl2Cpp + LKPHLOELDOO_OPAPBEDGCJG_OFFSET))(this, KCAAHHAOKLC);
	}

	::System::Void LNPPJNCLNOF(::GIFOBKBCCMA KPDGMCDBJHC)
	{
		return ((::System::Void(*)(::PVOID, ::GIFOBKBCCMA))((::PBYTE)hIl2Cpp + LKPHLOELDOO_LNPPJNCLNOF_OFFSET))(this, KPDGMCDBJHC);
	}

	::System::Void BANOEDLEGDN(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_BANOEDLEGDN_OFFSET))(this, MNDIBLLFAJI);
	}

	::MBHOGLGMFEM* PKJNGBAOIKA(::System::Int32 GLFJFNMJGBJ)
	{
		return ((::MBHOGLGMFEM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKPHLOELDOO_PKJNGBAOIKA_OFFSET))(this, GLFJFNMJGBJ);
	}

	::System::Void NDIDJCCJIAM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_NDIDJCCJIAM_OFFSET))(this);
	}

	::System::Void PPNGNAEJKHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_PPNGNAEJKHK_OFFSET))(this);
	}

	::System::Void NHCEACCBLBK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_NHCEACCBLBK_OFFSET))(this);
	}

	::System::Void HKOLAMAEPCI(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_HKOLAMAEPCI_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void HAJAEHNDHEE_1(::System::Int32 POOJDDDCAHJ, ::System::Int32 BBOLKIABJHA, ::System::Int32 MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LKPHLOELDOO_HAJAEHNDHEE_1_OFFSET))(this, POOJDDDCAHJ, BBOLKIABJHA, MNDIBLLFAJI);
	}

	::System::Void PLOCLODIDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_PLOCLODIDDF_OFFSET))(this);
	}

	::System::Void CPJFCHKCAPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_CPJFCHKCAPP_OFFSET))(this);
	}

	::System::Void IGHDKOHFPCF(::GNHPLJOAFDK* BFLDNFADCOD)
	{
		return ((::System::Void(*)(::PVOID, ::GNHPLJOAFDK*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_IGHDKOHFPCF_OFFSET))(this, BFLDNFADCOD);
	}

	::System::Void PFIMIOKENEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_PFIMIOKENEC_OFFSET))(this);
	}

	::System::Int32 NJCOPAPBBFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_NJCOPAPBBFC_OFFSET))(this);
	}

	::System::Void HOAONIODDKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_HOAONIODDKP_OFFSET))(this);
	}

	::MBHOGLGMFEM* IFGDICLLIED(::System::Int32 NBBIHHAFEAB)
	{
		return ((::MBHOGLGMFEM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKPHLOELDOO_IFGDICLLIED_OFFSET))(this, NBBIHHAFEAB);
	}

	::System::Void EILBHOCJNGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_EILBHOCJNGG_OFFSET))(this);
	}

	::System::Void EKELPFIDNGI(::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LKPHLOELDOO_EKELPFIDNGI_OFFSET))(this, OHOGDOMNHNK);
	}

	static ::System::Void KPKIONFEIEB(::System::Int32 POOJDDDCAHJ)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + LKPHLOELDOO_KPKIONFEIEB_OFFSET))(POOJDDDCAHJ);
	}

	::System::Void MBEFOENJLKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_MBEFOENJLKJ_OFFSET))(this);
	}

	::System::Void OHGNAFOFLMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_OHGNAFOFLMB_OFFSET))(this);
	}

	::System::Void PDKNCFFBOIH(::System::Int32 POOJDDDCAHJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LKPHLOELDOO_PDKNCFFBOIH_OFFSET))(this, POOJDDDCAHJ);
	}

	::System::Void MHMJPBIMKOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_MHMJPBIMKOJ_OFFSET))(this);
	}

	::System::Void JGHKGPBAODK(::System::Int32 AELLPLBJELA, ::System::Boolean NNJLDLIHINN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + LKPHLOELDOO_JGHKGPBAODK_OFFSET))(this, AELLPLBJELA, NNJLDLIHINN);
	}

	::System::Void IAKBBPGOKAO(::MBHOGLGMFEM* BMKJMCEMHKF)
	{
		return ((::System::Void(*)(::PVOID, ::MBHOGLGMFEM*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_IAKBBPGOKAO_OFFSET))(this, BMKJMCEMHKF);
	}

	::System::Void BIHKJAEDPAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_BIHKJAEDPAN_OFFSET))(this);
	}

	::System::Void KDALJJCAOHF(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GCJHCEKEAGE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_KDALJJCAOHF_OFFSET))(this, GCJHCEKEAGE);
	}

	::System::Void LIIAPLCDDNI(::MBHOGLGMFEM* BMKJMCEMHKF)
	{
		return ((::System::Void(*)(::PVOID, ::MBHOGLGMFEM*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_LIIAPLCDDNI_OFFSET))(this, BMKJMCEMHKF);
	}

	::System::Void KOCGCJEIEOK(::NPCCrowd::Lod::NPCCrowdPositionAgent* GBMLHHANFFN)
	{
		return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::NPCCrowdPositionAgent*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_KOCGCJEIEOK_OFFSET))(this, GBMLHHANFFN);
	}

	::System::Void AMEGFHBJGFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_AMEGFHBJGFF_OFFSET))(this);
	}

	::System::Void BOEDOKNELEF(::System::Int32 PELNGLAEKEO, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Tuple_2<::System::Int32, ::System::String*>>* IPDIAPMABFD, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Tuple_2<::System::Int32, ::System::String*>>* MMNEODNDJBM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Tuple_2<::System::Int32, ::System::String*>>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::Tuple_2<::System::Int32, ::System::String*>>*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_BOEDOKNELEF_OFFSET))(this, PELNGLAEKEO, IPDIAPMABFD, MMNEODNDJBM);
	}

	::System::Void BFPKOGACFGN(::MBHOGLGMFEM* BMKJMCEMHKF)
	{
		return ((::System::Void(*)(::PVOID, ::MBHOGLGMFEM*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_BFPKOGACFGN_OFFSET))(this, BMKJMCEMHKF);
	}

	static ::System::Void NCAPDNJMEHM(::System::Int32 POOJDDDCAHJ)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + LKPHLOELDOO_NCAPDNJMEHM_OFFSET))(POOJDDDCAHJ);
	}

	::System::Void LPAINJGIDPG(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LKPHLOELDOO_LPAINJGIDPG_OFFSET))(this, MNDIBLLFAJI);
	}

	::MBHOGLGMFEM* IBHKKJFHOBJ()
	{
		return ((::MBHOGLGMFEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPHLOELDOO_IBHKKJFHOBJ_OFFSET))(this);
	}
};
