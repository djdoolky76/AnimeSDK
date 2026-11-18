#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNOPJGNOPJO.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/GLMGLOOOADJ.h"
#include "unitysdk/JCJPPFPFIGE.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/NHEGGNKFAMN.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/ECLDJGAJPJM.h"
#include "unitysdk/GKJJHDHELAH.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class AJLNDFNLGMI;
class DBGABPDPBEM;
class DIEOKCPNKEO;
class DNAELLALHIM;
class FFIPCCICOOH;
class FOLOGHLENFB;
class HFOPDHLEBHJ;
class IFAMBENCHMD;
class KPNIFGIKELE;
class NDDPBFJFEMN;
class OMPCHGNPNGC;
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFLPANDDGHG_ABEMHBBGMPN_OFFSET UNITYSDK_OFFSET(0x114FC2D0)
#define BFLPANDDGHG_ADBFFPEENFN_OFFSET UNITYSDK_OFFSET(0x114FB820)
#define BFLPANDDGHG_AKGLLHOGKDP_OFFSET UNITYSDK_OFFSET(0x114FC8C0)
#define BFLPANDDGHG_AMJMAPFPEBL_OFFSET UNITYSDK_OFFSET(0x114F7FF0)
#define BFLPANDDGHG_ANJPMFIOBEG_OFFSET UNITYSDK_OFFSET(0x114FB8D0)
#define BFLPANDDGHG_APHFCNLAGGC_OFFSET UNITYSDK_OFFSET(0x114FD0B0)
#define BFLPANDDGHG_BCNIOOIPGMC_OFFSET UNITYSDK_OFFSET(0x114FFE10)
#define BFLPANDDGHG_BEOGEGAMCJG_OFFSET UNITYSDK_OFFSET(0x114FDAE0)
#define BFLPANDDGHG_BFMKLGCOLHD_OFFSET UNITYSDK_OFFSET(0x114FAB70)
#define BFLPANDDGHG_BGBKHHLBGJE_OFFSET UNITYSDK_OFFSET(0x114FDAC0)
#define BFLPANDDGHG_BGHPMNFCFPO_OFFSET UNITYSDK_OFFSET(0x114FAA60)
#define BFLPANDDGHG_BHBLMFKGPCD_OFFSET UNITYSDK_OFFSET(0x114FFEC0)
#define BFLPANDDGHG_CAMOECDHJKD_OFFSET UNITYSDK_OFFSET(0x114F9D40)
#define BFLPANDDGHG_CCKHHKENPDC_OFFSET UNITYSDK_OFFSET(0x114FDAD0)
#define BFLPANDDGHG_CCOHCGCMGLD_OFFSET UNITYSDK_OFFSET(0x11500490)
#define BFLPANDDGHG_CGNDCIHMBGE_OFFSET UNITYSDK_OFFSET(0x114FA950)
#define BFLPANDDGHG_CJGNFELIJJB_OFFSET UNITYSDK_OFFSET(0x114F9F80)
#define BFLPANDDGHG_CLNJBMLPLDN_OFFSET UNITYSDK_OFFSET(0x114FCC40)
#define BFLPANDDGHG_CPGPMFDLCMP_OFFSET UNITYSDK_OFFSET(0x114F8DF0)
#define BFLPANDDGHG_DEAKHOBLHKI_OFFSET UNITYSDK_OFFSET(0x114F83C0)
#define BFLPANDDGHG_DGKAPIHJEJI_OFFSET UNITYSDK_OFFSET(0x114FD0C0)
#define BFLPANDDGHG_DGOLOMLEKNF_OFFSET UNITYSDK_OFFSET(0x114F8D40)
#define BFLPANDDGHG_DHJJOAPOPEC_OFFSET UNITYSDK_OFFSET(0x114FC150)
#define BFLPANDDGHG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1702E040)
#define BFLPANDDGHG_DMFMIDOCJNB_OFFSET UNITYSDK_OFFSET(0x114F7A30)
#define BFLPANDDGHG_DNCEAKNCPHP_OFFSET UNITYSDK_OFFSET(0x114FC600)
#define BFLPANDDGHG_DOFKOCAHACG_OFFSET UNITYSDK_OFFSET(0x114FC030)
#define BFLPANDDGHG_DOKANPBFIHF_OFFSET UNITYSDK_OFFSET(0x114F92A0)
#define BFLPANDDGHG_EAFCNCLABFA_OFFSET UNITYSDK_OFFSET(0x11502230)
#define BFLPANDDGHG_EANBBCJCOFC_OFFSET UNITYSDK_OFFSET(0x115003C0)
#define BFLPANDDGHG_ECEMKMEIKNC_OFFSET UNITYSDK_OFFSET(0x114F7700)
#define BFLPANDDGHG_ECIMHOFNPOP_OFFSET UNITYSDK_OFFSET(0x114FAB80)
#define BFLPANDDGHG_ECIOFCHNMEL_OFFSET UNITYSDK_OFFSET(0x114F7FE0)
#define BFLPANDDGHG_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x115027E0)
#define BFLPANDDGHG_EFKKOLPAFHB_OFFSET UNITYSDK_OFFSET(0x11502110)
#define BFLPANDDGHG_EGHDKABJHFE_OFFSET UNITYSDK_OFFSET(0x114FFD80)
#define BFLPANDDGHG_EHFGMJBIJFJ_OFFSET UNITYSDK_OFFSET(0x114FCCD0)
#define BFLPANDDGHG_EKAPKIIADOM_OFFSET UNITYSDK_OFFSET(0x114FDB70)
#define BFLPANDDGHG_FBLOGNAIAGK_OFFSET UNITYSDK_OFFSET(0x114FA1B0)
#define BFLPANDDGHG_FCDBNMDCNOB_OFFSET UNITYSDK_OFFSET(0x114F8330)
#define BFLPANDDGHG_FDCPNFNEION_OFFSET UNITYSDK_OFFSET(0x114F79B0)
#define BFLPANDDGHG_FDMNKDCDIOI_OFFSET UNITYSDK_OFFSET(0x115027D0)
#define BFLPANDDGHG_FEMCIKAPJLO_OFFSET UNITYSDK_OFFSET(0x11502660)
#define BFLPANDDGHG_FJIEFEEKCDJ_OFFSET UNITYSDK_OFFSET(0x114FDB60)
#define BFLPANDDGHG_FNCKEEDJDEO_OFFSET UNITYSDK_OFFSET(0x114F7D80)
#define BFLPANDDGHG_FNMINPNOPDK_OFFSET UNITYSDK_OFFSET(0x114F76A0)
#define BFLPANDDGHG_FNPKIDHDLPN_OFFSET UNITYSDK_OFFSET(0x11502B90)
#define BFLPANDDGHG_FOFBHFIBEOA_OFFSET UNITYSDK_OFFSET(0x114F7AD0)
#define BFLPANDDGHG_GDPPFLLCKDA_OFFSET UNITYSDK_OFFSET(0x114FA770)
#define BFLPANDDGHG_GFBDKABBBJB_OFFSET UNITYSDK_OFFSET(0x114F92B0)
#define BFLPANDDGHG_GFJFGPBPFLG_OFFSET UNITYSDK_OFFSET(0x1702E090)
#define BFLPANDDGHG_GHEBMIHGFFB_OFFSET UNITYSDK_OFFSET(0x11500330)
#define BFLPANDDGHG_HAPBFJEBIEM_OFFSET UNITYSDK_OFFSET(0x114F7D90)
#define BFLPANDDGHG_HIHFBJANAOO_OFFSET UNITYSDK_OFFSET(0x114FAB90)
#define BFLPANDDGHG_HNDMCIEPFFI_OFFSET UNITYSDK_OFFSET(0x114FF630)
#define BFLPANDDGHG_HNGDJDLEIDJ_OFFSET UNITYSDK_OFFSET(0x114F75C0)
#define BFLPANDDGHG_HNMFBLIKOJF_OFFSET UNITYSDK_OFFSET(0x114FAC20)
#define BFLPANDDGHG_IENCFJJPLBM_OFFSET UNITYSDK_OFFSET(0x115001E0)
#define BFLPANDDGHG_IFKFKMHAAJG_OFFSET UNITYSDK_OFFSET(0x11502C20)
#define BFLPANDDGHG_IHBFFLOOJMP_OFFSET UNITYSDK_OFFSET(0x11500A80)
#define BFLPANDDGHG_IHIMDDHHPEB_OFFSET UNITYSDK_OFFSET(0x114F82E0)
#define BFLPANDDGHG_IHKLKNDCBNP_OFFSET UNITYSDK_OFFSET(0x114FB8E0)
#define BFLPANDDGHG_IKDOFJCGECP_OFFSET UNITYSDK_OFFSET(0x114F90D0)
#define BFLPANDDGHG_ILHEGMNJLLP_OFFSET UNITYSDK_OFFSET(0x114FA1C0)
#define BFLPANDDGHG_IMFLDNNHKFM_OFFSET UNITYSDK_OFFSET(0x1702DCC0)
#define BFLPANDDGHG_INOKFEPEEDJ_OFFSET UNITYSDK_OFFSET(0x1702E000)
#define BFLPANDDGHG_JADEPCJGEMI_OFFSET UNITYSDK_OFFSET(0x114FC570)
#define BFLPANDDGHG_JCBKGCCCLFG_OFFSET UNITYSDK_OFFSET(0x11500400)
#define BFLPANDDGHG_JDDENMMINFJ_OFFSET UNITYSDK_OFFSET(0x11502700)
#define BFLPANDDGHG_JEAJEOECNLO_OFFSET UNITYSDK_OFFSET(0x115026F0)
#define BFLPANDDGHG_JELMHMECKHL_OFFSET UNITYSDK_OFFSET(0x114FCE10)
#define BFLPANDDGHG_JILKHFHILFF_OFFSET UNITYSDK_OFFSET(0x114FCE00)
#define BFLPANDDGHG_JKHCAACNCMF_OFFSET UNITYSDK_OFFSET(0x11501E50)
#define BFLPANDDGHG_JPHNOIGJBHD_OFFSET UNITYSDK_OFFSET(0x114FC160)
#define BFLPANDDGHG_KACIOAEFGNI_OFFSET UNITYSDK_OFFSET(0x114F7B50)
#define BFLPANDDGHG_KCGJNFLKKOK_OFFSET UNITYSDK_OFFSET(0x114FCD60)
#define BFLPANDDGHG_KFGNHIFOALM_OFFSET UNITYSDK_OFFSET(0x114F8DE0)
#define BFLPANDDGHG_KJOBIOEPEEB_OFFSET UNITYSDK_OFFSET(0x114F7650)
#define BFLPANDDGHG_KLAIMPKICBB_OFFSET UNITYSDK_OFFSET(0x114FA1D0)
#define BFLPANDDGHG_KOEFKHOFPBP_OFFSET UNITYSDK_OFFSET(0x115009C0)
#define BFLPANDDGHG_KPAJHAHBEOI_OFFSET UNITYSDK_OFFSET(0x114F9B30)
#define BFLPANDDGHG_LACNMNHPMEN_OFFSET UNITYSDK_OFFSET(0x115002A0)
#define BFLPANDDGHG_LAIAJKOHKMB_OFFSET UNITYSDK_OFFSET(0x114F8DD0)
#define BFLPANDDGHG_LCFDPMPDEPH_OFFSET UNITYSDK_OFFSET(0x114FC810)
#define BFLPANDDGHG_LDBJPONJFMB_OFFSET UNITYSDK_OFFSET(0x114FC040)
#define BFLPANDDGHG_LECFLICOIKP_OFFSET UNITYSDK_OFFSET(0x114F7910)
#define BFLPANDDGHG_LEMMGGJGPCL_OFFSET UNITYSDK_OFFSET(0x11500700)
#define BFLPANDDGHG_LKKJMCOMIKN_OFFSET UNITYSDK_OFFSET(0x114FFD90)
#define BFLPANDDGHG_LMDMOKJGDCA_OFFSET UNITYSDK_OFFSET(0x114FA4A0)
#define BFLPANDDGHG_LMHDGJHBEAB_OFFSET UNITYSDK_OFFSET(0x114F9560)
#define BFLPANDDGHG_LOKAJDFHBIJ_OFFSET UNITYSDK_OFFSET(0x11501E70)
#define BFLPANDDGHG_LPJJNLKMDKG_OFFSET UNITYSDK_OFFSET(0x114F9D50)
#define BFLPANDDGHG_MBDLKNAMOCL_OFFSET UNITYSDK_OFFSET(0x115003F0)
#define BFLPANDDGHG_MCJGGBMPMKC_OFFSET UNITYSDK_OFFSET(0x114FCD70)
#define BFLPANDDGHG_MCPBCDLPEBB_OFFSET UNITYSDK_OFFSET(0x114FA1E0)
#define BFLPANDDGHG_MFJJLECHNOL_OFFSET UNITYSDK_OFFSET(0x11500910)
#define BFLPANDDGHG_MFLNBEMGJKL_OFFSET UNITYSDK_OFFSET(0x114FB560)
#define BFLPANDDGHG_MLJCMFGLCLL_OFFSET UNITYSDK_OFFSET(0x114FB2A0)
#define BFLPANDDGHG_MOEMEHMHFKL_OFFSET UNITYSDK_OFFSET(0x114F9210)
#define BFLPANDDGHG_NCHDDCBFAKA_OFFSET UNITYSDK_OFFSET(0x114F92C0)
#define BFLPANDDGHG_NEFJKMIFCDP_OFFSET UNITYSDK_OFFSET(0x114FD8A0)
#define BFLPANDDGHG_NENDDKGPMLO_OFFSET UNITYSDK_OFFSET(0x114F9180)
#define BFLPANDDGHG_NIKODDKINDN_OFFSET UNITYSDK_OFFSET(0x11502720)
#define BFLPANDDGHG_NJPBHPBDDEB_OFFSET UNITYSDK_OFFSET(0x11500670)
#define BFLPANDDGHG_NNDLNJAELJC_OFFSET UNITYSDK_OFFSET(0x114F7D70)
#define BFLPANDDGHG_NPDCHPMNKOK_OFFSET UNITYSDK_OFFSET(0x114F7FC0)
#define BFLPANDDGHG_OCENDEBBCAF_OFFSET UNITYSDK_OFFSET(0x115024D0)
#define BFLPANDDGHG_ODBICJKHHEP_OFFSET UNITYSDK_OFFSET(0x114F8C30)
#define BFLPANDDGHG_OEMBMKMIEGD_OFFSET UNITYSDK_OFFSET(0x114F9510)
#define BFLPANDDGHG_OHOLINNELJA_OFFSET UNITYSDK_OFFSET(0x114FA4B0)
#define BFLPANDDGHG_OLJEGLHNGAB_OFFSET UNITYSDK_OFFSET(0x115003E0)
#define BFLPANDDGHG_ONGAELALIHB_OFFSET UNITYSDK_OFFSET(0x114FC560)
#define BFLPANDDGHG_OPEFNDENEGD_OFFSET UNITYSDK_OFFSET(0x115021A0)
#define BFLPANDDGHG_PBJDJBFHALC_OFFSET UNITYSDK_OFFSET(0x11501D20)
#define BFLPANDDGHG_PGACGDABIBI_OFFSET UNITYSDK_OFFSET(0x114FA790)
#define BFLPANDDGHG_PGFCLLGLOCG_OFFSET UNITYSDK_OFFSET(0x11501E60)
#define BFLPANDDGHG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17009130)
#define BFLPANDDGHG_PHPAINKBDAO_OFFSET UNITYSDK_OFFSET(0x114FD810)
#define BFLPANDDGHG_PIOBCHNNHBI_OFFSET UNITYSDK_OFFSET(0x114FB1F0)
#define BFLPANDDGHG_PJELGOJINFH_OFFSET UNITYSDK_OFFSET(0x11501DE0)
#define BFLPANDDGHG_POPEAGLKGEC_OFFSET UNITYSDK_OFFSET(0x114FA840)
#define BFLPANDDGHG_PPJPICFNJAE_OFFSET UNITYSDK_OFFSET(0x114FCAF0)
#define BFLPANDDGHG__CTOR_OFFSET UNITYSDK_OFFSET(0x114F7B90)

inline static constexpr unsigned int BFLPANDDGHG_TypeDefinitionIndex = 72245;

class BFLPANDDGHG : public ::System::Object
{
public:
	::IFAMBENCHMD* _BPKEIINJAPJ_k__BackingField; // 0x10
	::HFOPDHLEBHJ* _GOFBHGNOGHO_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::DBGABPDPBEM*>* FONAKDIBAOO; // 0x20
	::DNAELLALHIM* _DMNEEINJIEM_k__BackingField; // 0x28
	::NDDPBFJFEMN* IOPPKJDIAOI; // 0x30
	::MoleMole::SkillCharacterScriptConfig* _JEMJEAEIDII_k__BackingField; // 0x38
	::System::String* _ILAHGKNKHKH_k__BackingField; // 0x40
	::System::Nullable_1<::Foundation::AssetPath> BDHBONLMIPP; // 0x48
	::System::Byte _padding0[0x10];
	::System::Collections::Generic::HashSet_1<::AJLNDFNLGMI*>* PDFOGCFNNOM; // 0x60
	::System::Collections::Generic::List_1<::System::Int32>* JEHINDLIHNH; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* GNHHGGCNOLC; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _BEFOBKNBDPL_k__BackingField; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::Single, ::System::Single>*>* PGJAGDJNJGE; // 0x80
	::System::Collections::Generic::List_1<::FFIPCCICOOH*>* IALPPFNHDOE; // 0x88
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Double>* POPICFPMEFL; // 0x90
	::System::Collections::Generic::List_1<::DIEOKCPNKEO*>* IEGNIDKNONB; // 0x98
	::OMPCHGNPNGC* _HCADNPHOHFD_k__BackingField; // 0xA0
	::JCJPPFPFIGE _LPBMEMAIEGC_k__BackingField; // 0xA8
	::System::Boolean _EOIEJCIEEED_k__BackingField; // 0xB4
	::System::Boolean _EGOGIFNHFBL_k__BackingField; // 0xB5
	::System::Boolean _HOBKOKPLPBN_k__BackingField; // 0xB6
	::System::Byte _padding1[0x1];
	::DNOPJGNOPJO _FILGCMFFHKL_k__BackingField; // 0xB8
	::System::Int32 _CBIMCJPFLBD_k__BackingField; // 0xBC
	::UnityEngine::Vector3 _LHBPKJDKCNO_k__BackingField; // 0xC0
	::System::UInt32 _LLMKFMHBBDH_k__BackingField; // 0xCC
	::GLMGLOOOADJ _ODHBAKAFNIF_k__BackingField; // 0xD0
	::NHEGGNKFAMN MOBNMDEDJIP; // 0xD4
	::MoleMole::Config::CampType _NEGGIJAOICD_k__BackingField; // 0xE0
	::System::Single _AGMKHPCFDFC_k__BackingField; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG__CTOR_OFFSET))(this);
	}

	::System::Void IMFLDNNHKFM(::MoleMole::Config::BaseProperty ECAJMFPANNE, ::System::String* FBLGONAJGHM, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + BFLPANDDGHG_IMFLDNNHKFM_OFFSET))(this, ECAJMFPANNE, FBLGONAJGHM, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void INOKFEPEEDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_INOKFEPEEDJ_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_DISPOSE_OFFSET))(this);
	}

	::System::Void GFJFGPBPFLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_GFJFGPBPFLG_OFFSET))(this);
	}

	::System::Void HNGDJDLEIDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_HNGDJDLEIDJ_OFFSET))(this);
	}

	::System::Void KJOBIOEPEEB(::System::String* PMLJMGEFIND, ::System::Int32 NOKMIJNFMBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BFLPANDDGHG_KJOBIOEPEEB_OFFSET))(this, PMLJMGEFIND, NOKMIJNFMBH);
	}

	::System::Void FNMINPNOPDK(::System::String* PMLJMGEFIND, ::System::Int32 NOKMIJNFMBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BFLPANDDGHG_FNMINPNOPDK_OFFSET))(this, PMLJMGEFIND, NOKMIJNFMBH);
	}

	::System::Void LECFLICOIKP(::System::Int32 FMKEGILFOIM, ::System::Int32 FOIKIGDJLKN, ::System::Int32 JHFKDGBCOBA, ::System::Int32 NOKMIJNFMBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BFLPANDDGHG_LECFLICOIKP_OFFSET))(this, FMKEGILFOIM, FOIKIGDJLKN, JHFKDGBCOBA, NOKMIJNFMBH);
	}

	::System::Void DMFMIDOCJNB(::System::Int32 FMKEGILFOIM, ::System::Int32 FOIKIGDJLKN, ::System::Int32 JHFKDGBCOBA, ::System::Int32 NOKMIJNFMBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BFLPANDDGHG_DMFMIDOCJNB_OFFSET))(this, FMKEGILFOIM, FOIKIGDJLKN, JHFKDGBCOBA, NOKMIJNFMBH);
	}

	::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::FOLOGHLENFB*, ::System::Int32>>* KACIOAEFGNI()
	{
		return ((::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::FOLOGHLENFB*, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_KACIOAEFGNI_OFFSET))(this);
	}

	::System::Void NNDLNJAELJC(::MoleMole::SkillCharacterScriptConfig* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SkillCharacterScriptConfig*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_NNDLNJAELJC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* FNCKEEDJDEO()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_FNCKEEDJDEO_OFFSET))(this);
	}

	::System::Void HAPBFJEBIEM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_HAPBFJEBIEM_OFFSET))(this);
	}

	::UnityEngine::Vector3 NPDCHPMNKOK()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_NPDCHPMNKOK_OFFSET))(this);
	}

	::DNOPJGNOPJO ECIOFCHNMEL()
	{
		return ((::DNOPJGNOPJO(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_ECIOFCHNMEL_OFFSET))(this);
	}

	::System::Void AMJMAPFPEBL(::BFLPANDDGHG* MNODFFHEGCA, ::GKJJHDHELAH& CKPHFFLFAIF)
	{
		return ((::System::Void(*)(::PVOID, ::BFLPANDDGHG*, ::GKJJHDHELAH&))((::PBYTE)hIl2Cpp + BFLPANDDGHG_AMJMAPFPEBL_OFFSET))(this, MNODFFHEGCA, CKPHFFLFAIF);
	}

	::System::Void IHIMDDHHPEB(::System::Int32 OEHEJLMJDHP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BFLPANDDGHG_IHIMDDHHPEB_OFFSET))(this, OEHEJLMJDHP);
	}

	::System::Single FCDBNMDCNOB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_FCDBNMDCNOB_OFFSET))(this);
	}

	::System::Void DEAKHOBLHKI(::KPNIFGIKELE* CMAOBDOAKEI)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_DEAKHOBLHKI_OFFSET))(this, CMAOBDOAKEI);
	}

	::System::Void ODBICJKHHEP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_ODBICJKHHEP_OFFSET))(this);
	}

	::System::Single DGOLOMLEKNF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_DGOLOMLEKNF_OFFSET))(this);
	}

	::System::Void LAIAJKOHKMB(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFLPANDDGHG_LAIAJKOHKMB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean KFGNHIFOALM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_KFGNHIFOALM_OFFSET))(this);
	}

	::System::Void CPGPMFDLCMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_CPGPMFDLCMP_OFFSET))(this);
	}

	::System::Single IKDOFJCGECP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_IKDOFJCGECP_OFFSET))(this);
	}

	::System::Single DOKANPBFIHF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_DOKANPBFIHF_OFFSET))(this);
	}

	::System::Void GFBDKABBBJB(::DNAELLALHIM* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DNAELLALHIM*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_GFBDKABBBJB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Double NCHDDCBFAKA(::MoleMole::Config::BaseProperty EHAKJBAKGDL, ::System::String* LFNMPOCHPLP, ::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC, ::System::Double CDACCBIFHDO, ::System::Double HJEACOLOHJP)
	{
		return ((::System::Double(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + BFLPANDDGHG_NCHDDCBFAKA_OFFSET))(this, EHAKJBAKGDL, LFNMPOCHPLP, EMPOKNJEJPC, CDACCBIFHDO, HJEACOLOHJP);
	}

	::MoleMole::Config::CampType CAMOECDHJKD()
	{
		return ((::MoleMole::Config::CampType(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_CAMOECDHJKD_OFFSET))(this);
	}

	::System::Double LPJJNLKMDKG(::MoleMole::Config::BaseProperty EHAKJBAKGDL, ::System::String* LFNMPOCHPLP, ::MoleMole::Config::PropertyModifyFunction EMPOKNJEJPC, ::System::Double CDACCBIFHDO)
	{
		return ((::System::Double(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::MoleMole::Config::PropertyModifyFunction, ::System::Double))((::PBYTE)hIl2Cpp + BFLPANDDGHG_LPJJNLKMDKG_OFFSET))(this, EHAKJBAKGDL, LFNMPOCHPLP, EMPOKNJEJPC, CDACCBIFHDO);
	}

	::System::Void CJGNFELIJJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_CJGNFELIJJB_OFFSET))(this);
	}

	::IFAMBENCHMD* FBLOGNAIAGK()
	{
		return ((::IFAMBENCHMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_FBLOGNAIAGK_OFFSET))(this);
	}

	::System::Void ILHEGMNJLLP(::MoleMole::Config::CampType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + BFLPANDDGHG_ILHEGMNJLLP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KLAIMPKICBB(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BFLPANDDGHG_KLAIMPKICBB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MCPBCDLPEBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_MCPBCDLPEBB_OFFSET))(this);
	}

	::GLMGLOOOADJ LMDMOKJGDCA()
	{
		return ((::GLMGLOOOADJ(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_LMDMOKJGDCA_OFFSET))(this);
	}

	::System::Double OHOLINNELJA(::MoleMole::Config::BaseProperty EHAKJBAKGDL, ::System::String* LFNMPOCHPLP, ::System::Double CDACCBIFHDO, ::System::Double& BCNEJADLEIJ)
	{
		return ((::System::Double(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double&))((::PBYTE)hIl2Cpp + BFLPANDDGHG_OHOLINNELJA_OFFSET))(this, EHAKJBAKGDL, LFNMPOCHPLP, CDACCBIFHDO, BCNEJADLEIJ);
	}

	::JCJPPFPFIGE GDPPFLLCKDA()
	{
		return ((::JCJPPFPFIGE(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_GDPPFLLCKDA_OFFSET))(this);
	}

	::System::Single PGACGDABIBI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_PGACGDABIBI_OFFSET))(this);
	}

	::System::Single NENDDKGPMLO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_NENDDKGPMLO_OFFSET))(this);
	}

	::System::Void BFMKLGCOLHD(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_BFMKLGCOLHD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ECIMHOFNPOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_ECIMHOFNPOP_OFFSET))(this);
	}

	::System::Void HIHFBJANAOO(::DBGABPDPBEM* OGEEBLEMONH)
	{
		return ((::System::Void(*)(::PVOID, ::DBGABPDPBEM*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_HIHFBJANAOO_OFFSET))(this, OGEEBLEMONH);
	}

	::System::Void FDCPNFNEION(::System::Int32 FMKEGILFOIM, ::System::Int32 FOIKIGDJLKN, ::System::Int32 JHFKDGBCOBA, ::System::Int32 NOKMIJNFMBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BFLPANDDGHG_FDCPNFNEION_OFFSET))(this, FMKEGILFOIM, FOIKIGDJLKN, JHFKDGBCOBA, NOKMIJNFMBH);
	}

	::System::Void PIOBCHNNHBI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_PIOBCHNNHBI_OFFSET))(this);
	}

	::System::Void FOFBHFIBEOA(::System::Int32 FMKEGILFOIM, ::System::Int32 FOIKIGDJLKN, ::System::Int32 JHFKDGBCOBA, ::System::Int32 NOKMIJNFMBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BFLPANDDGHG_FOFBHFIBEOA_OFFSET))(this, FMKEGILFOIM, FOIKIGDJLKN, JHFKDGBCOBA, NOKMIJNFMBH);
	}

	::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::FOLOGHLENFB*, ::System::Int32>>* ADBFFPEENFN(::System::String* PMLJMGEFIND)
	{
		return ((::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::FOLOGHLENFB*, ::System::Int32>>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_ADBFFPEENFN_OFFSET))(this, PMLJMGEFIND);
	}

	::HFOPDHLEBHJ* ANJPMFIOBEG()
	{
		return ((::HFOPDHLEBHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_ANJPMFIOBEG_OFFSET))(this);
	}

	::System::Void IHKLKNDCBNP(::KPNIFGIKELE* CMAOBDOAKEI)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_IHKLKNDCBNP_OFFSET))(this, CMAOBDOAKEI);
	}

	::System::Boolean OEMBMKMIEGD(::MoleMole::Config::PropertyModifyFunction EMJPCAFEJAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + BFLPANDDGHG_OEMBMKMIEGD_OFFSET))(this, EMJPCAFEJAK);
	}

	::System::Void DOFKOCAHACG(::DNOPJGNOPJO EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DNOPJGNOPJO))((::PBYTE)hIl2Cpp + BFLPANDDGHG_DOFKOCAHACG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LDBJPONJFMB(::System::String* AELLPLBJELA, ::System::String*& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + BFLPANDDGHG_LDBJPONJFMB_OFFSET))(this, AELLPLBJELA, EGEGIMGMJHN);
	}

	::System::Void DHJJOAPOPEC(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_DHJJOAPOPEC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single JPHNOIGJBHD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_JPHNOIGJBHD_OFFSET))(this);
	}

	::System::Void ABEMHBBGMPN(::GKJJHDHELAH& CKPHFFLFAIF)
	{
		return ((::System::Void(*)(::PVOID, ::GKJJHDHELAH&))((::PBYTE)hIl2Cpp + BFLPANDDGHG_ABEMHBBGMPN_OFFSET))(this, CKPHFFLFAIF);
	}

	::System::String* ONGAELALIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_ONGAELALIHB_OFFSET))(this);
	}

	::System::Single JADEPCJGEMI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_JADEPCJGEMI_OFFSET))(this);
	}

	::System::Void DNCEAKNCPHP(::System::String* PMLJMGEFIND, ::System::Int32 NOKMIJNFMBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BFLPANDDGHG_DNCEAKNCPHP_OFFSET))(this, PMLJMGEFIND, NOKMIJNFMBH);
	}

	::System::Void LCFDPMPDEPH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_LCFDPMPDEPH_OFFSET))(this);
	}

	::System::Single BGHPMNFCFPO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_BGHPMNFCFPO_OFFSET))(this);
	}

	::System::Void PPJPICFNJAE(::System::String* AELLPLBJELA, ::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_PPJPICFNJAE_OFFSET))(this, AELLPLBJELA, EGEGIMGMJHN);
	}

	::System::Single CLNJBMLPLDN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_CLNJBMLPLDN_OFFSET))(this);
	}

	::System::Void EHFGMJBIJFJ(::DIEOKCPNKEO* IDJOMIMIOGM)
	{
		return ((::System::Void(*)(::PVOID, ::DIEOKCPNKEO*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_EHFGMJBIJFJ_OFFSET))(this, IDJOMIMIOGM);
	}

	::OMPCHGNPNGC* KCGJNFLKKOK()
	{
		return ((::OMPCHGNPNGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_KCGJNFLKKOK_OFFSET))(this);
	}

	::System::Void MCJGGBMPMKC(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_MCJGGBMPMKC_OFFSET))(this, AELLPLBJELA);
	}

	::System::Boolean JILKHFHILFF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_JILKHFHILFF_OFFSET))(this);
	}

	::System::Void JELMHMECKHL(::KPNIFGIKELE* CMAOBDOAKEI)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_JELMHMECKHL_OFFSET))(this, CMAOBDOAKEI);
	}

	::System::Void APHFCNLAGGC(::GLMGLOOOADJ EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GLMGLOOOADJ))((::PBYTE)hIl2Cpp + BFLPANDDGHG_APHFCNLAGGC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DGKAPIHJEJI(::KPNIFGIKELE* CMAOBDOAKEI)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_DGKAPIHJEJI_OFFSET))(this, CMAOBDOAKEI);
	}

	::System::Double PHPAINKBDAO()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_PHPAINKBDAO_OFFSET))(this);
	}

	static ::System::String* NEFJKMIFCDP(::BFLPANDDGHG* JIGPBPBPPDC)
	{
		return ((::System::String*(*)(::BFLPANDDGHG*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_NEFJKMIFCDP_OFFSET))(JIGPBPBPPDC);
	}

	::System::Void AKGLLHOGKDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_AKGLLHOGKDP_OFFSET))(this);
	}

	::System::Single MOEMEHMHFKL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_MOEMEHMHFKL_OFFSET))(this);
	}

	::System::Void BGBKHHLBGJE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFLPANDDGHG_BGBKHHLBGJE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CCKHHKENPDC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFLPANDDGHG_CCKHHKENPDC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BEOGEGAMCJG(::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single DCEOBAPNGIK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + BFLPANDDGHG_BEOGEGAMCJG_OFFSET))(this, CKPGOKHECCH, DCEOBAPNGIK);
	}

	::System::Void FJIEFEEKCDJ(::OMPCHGNPNGC* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::OMPCHGNPNGC*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_FJIEFEEKCDJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EKAPKIIADOM(::BFLPANDDGHG* MNODFFHEGCA, ::KPNIFGIKELE* FOIFFHKLFIA)
	{
		return ((::System::Void(*)(::PVOID, ::BFLPANDDGHG*, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_EKAPKIIADOM_OFFSET))(this, MNODFFHEGCA, FOIFFHKLFIA);
	}

	::System::Void HNMFBLIKOJF(::System::Int32 FMKEGILFOIM, ::System::Int32 FOIKIGDJLKN, ::System::Int32 JHFKDGBCOBA, ::System::Int32 NOKMIJNFMBH, ::System::Boolean NGNLEEBKBAD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BFLPANDDGHG_HNMFBLIKOJF_OFFSET))(this, FMKEGILFOIM, FOIKIGDJLKN, JHFKDGBCOBA, NOKMIJNFMBH, NGNLEEBKBAD);
	}

	::System::Single POPEAGLKGEC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_POPEAGLKGEC_OFFSET))(this);
	}

	::System::Void HNDMCIEPFFI(::KPNIFGIKELE* CMAOBDOAKEI)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_HNDMCIEPFFI_OFFSET))(this, CMAOBDOAKEI);
	}

	::System::Single CGNDCIHMBGE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_CGNDCIHMBGE_OFFSET))(this);
	}

	::System::UInt32 EGHDKABJHFE()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_EGHDKABJHFE_OFFSET))(this);
	}

	::System::Double LKKJMCOMIKN()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_LKKJMCOMIKN_OFFSET))(this);
	}

	::System::Void BCNIOOIPGMC(::AJLNDFNLGMI* IDJOMIMIOGM)
	{
		return ((::System::Void(*)(::PVOID, ::AJLNDFNLGMI*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_BCNIOOIPGMC_OFFSET))(this, IDJOMIMIOGM);
	}

	::System::Void BHBLMFKGPCD(::MoleMole::Config::BaseProperty OBNIAHNMHPF, ::System::String* ABIEPJBODMH, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + BFLPANDDGHG_BHBLMFKGPCD_OFFSET))(this, OBNIAHNMHPF, ABIEPJBODMH, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	::System::Void IENCFJJPLBM(::KPNIFGIKELE* CMAOBDOAKEI)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_IENCFJJPLBM_OFFSET))(this, CMAOBDOAKEI);
	}

	::System::Single LACNMNHPMEN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_LACNMNHPMEN_OFFSET))(this);
	}

	::NDDPBFJFEMN* GHEBMIHGFFB()
	{
		return ((::NDDPBFJFEMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_GHEBMIHGFFB_OFFSET))(this);
	}

	::System::Void EANBBCJCOFC(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BFLPANDDGHG_EANBBCJCOFC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OLJEGLHNGAB(::IFAMBENCHMD* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::IFAMBENCHMD*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_OLJEGLHNGAB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MBDLKNAMOCL(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFLPANDDGHG_MBDLKNAMOCL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JCBKGCCCLFG(::AJLNDFNLGMI* IDJOMIMIOGM)
	{
		return ((::System::Void(*)(::PVOID, ::AJLNDFNLGMI*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_JCBKGCCCLFG_OFFSET))(this, IDJOMIMIOGM);
	}

	::System::Double LMHDGJHBEAB(::MoleMole::Config::BaseProperty EHAKJBAKGDL, ::System::String* LFNMPOCHPLP, ::System::Double CDACCBIFHDO, ::System::Double HJEACOLOHJP)
	{
		return ((::System::Double(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + BFLPANDDGHG_LMHDGJHBEAB_OFFSET))(this, EHAKJBAKGDL, LFNMPOCHPLP, CDACCBIFHDO, HJEACOLOHJP);
	}

	::System::Void NJPBHPBDDEB(::DIEOKCPNKEO* IDJOMIMIOGM)
	{
		return ((::System::Void(*)(::PVOID, ::DIEOKCPNKEO*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_NJPBHPBDDEB_OFFSET))(this, IDJOMIMIOGM);
	}

	::System::Boolean LEMMGGJGPCL(::MoleMole::Config::BaseProperty JHFKODOOENA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + BFLPANDDGHG_LEMMGGJGPCL_OFFSET))(this, JHFKODOOENA);
	}

	static ::System::Boolean KOEFKHOFPBP(::BFLPANDDGHG* JIGPBPBPPDC)
	{
		return ((::System::Boolean(*)(::BFLPANDDGHG*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_KOEFKHOFPBP_OFFSET))(JIGPBPBPPDC);
	}

	::System::Void IHBFFLOOJMP(::KPNIFGIKELE* CMAOBDOAKEI)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_IHBFFLOOJMP_OFFSET))(this, CMAOBDOAKEI);
	}

	::System::Void KPAJHAHBEOI(::MoleMole::Config::BaseProperty EHAKJBAKGDL, ::System::String* LFNMPOCHPLP, ::System::Double IBCJNLNDGGL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + BFLPANDDGHG_KPAJHAHBEOI_OFFSET))(this, EHAKJBAKGDL, LFNMPOCHPLP, IBCJNLNDGGL);
	}

	::System::Void PJELGOJINFH(::Foundation::AssetPath ABOMFKBGCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + BFLPANDDGHG_PJELGOJINFH_OFFSET))(this, ABOMFKBGCAJ);
	}

	::System::Boolean JKHCAACNCMF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_JKHCAACNCMF_OFFSET))(this);
	}

	::DNAELLALHIM* PGFCLLGLOCG()
	{
		return ((::DNAELLALHIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_PGFCLLGLOCG_OFFSET))(this);
	}

	::System::Boolean MFJJLECHNOL(::MoleMole::Config::BaseProperty OBNIAHNMHPF, ::ECLDJGAJPJM& LHPFMGBDFPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::ECLDJGAJPJM&))((::PBYTE)hIl2Cpp + BFLPANDDGHG_MFJJLECHNOL_OFFSET))(this, OBNIAHNMHPF, LHPFMGBDFPN);
	}

	::System::Void LOKAJDFHBIJ(::KPNIFGIKELE* CMAOBDOAKEI)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_LOKAJDFHBIJ_OFFSET))(this, CMAOBDOAKEI);
	}

	::System::Void EFKKOLPAFHB(::DBGABPDPBEM* OGEEBLEMONH)
	{
		return ((::System::Void(*)(::PVOID, ::DBGABPDPBEM*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_EFKKOLPAFHB_OFFSET))(this, OGEEBLEMONH);
	}

	::System::Void OPEFNDENEGD(::FFIPCCICOOH* IDJOMIMIOGM)
	{
		return ((::System::Void(*)(::PVOID, ::FFIPCCICOOH*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_OPEFNDENEGD_OFFSET))(this, IDJOMIMIOGM);
	}

	::System::Void PBJDJBFHALC(::KPNIFGIKELE* CMAOBDOAKEI)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_PBJDJBFHALC_OFFSET))(this, CMAOBDOAKEI);
	}

	::Foundation::AssetPath OCENDEBBCAF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_OCENDEBBCAF_OFFSET))(this);
	}

	::System::Void CCOHCGCMGLD(::MoleMole::Config::BaseProperty OBNIAHNMHPF, ::System::String* ABIEPJBODMH, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + BFLPANDDGHG_CCOHCGCMGLD_OFFSET))(this, OBNIAHNMHPF, ABIEPJBODMH, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	::System::Double FEMCIKAPJLO()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_FEMCIKAPJLO_OFFSET))(this);
	}

	::System::Void MFLNBEMGJKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_MFLNBEMGJKL_OFFSET))(this);
	}

	::System::Void JEAJEOECNLO(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFLPANDDGHG_JEAJEOECNLO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JDDENMMINFJ(::JCJPPFPFIGE EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::JCJPPFPFIGE))((::PBYTE)hIl2Cpp + BFLPANDDGHG_JDDENMMINFJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EAFCNCLABFA(::KPNIFGIKELE* CMAOBDOAKEI)
	{
		return ((::System::Void(*)(::PVOID, ::KPNIFGIKELE*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_EAFCNCLABFA_OFFSET))(this, CMAOBDOAKEI);
	}

	::System::Single NIKODDKINDN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_NIKODDKINDN_OFFSET))(this);
	}

	::System::Void ECEMKMEIKNC(::System::String* PMLJMGEFIND, ::System::Int32 NOKMIJNFMBH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BFLPANDDGHG_ECEMKMEIKNC_OFFSET))(this, PMLJMGEFIND, NOKMIJNFMBH);
	}

	::MoleMole::SkillCharacterScriptConfig* FDMNKDCDIOI()
	{
		return ((::MoleMole::SkillCharacterScriptConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_FDMNKDCDIOI_OFFSET))(this);
	}

	::System::Void MLJCMFGLCLL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLPANDDGHG_MLJCMFGLCLL_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK(::System::UInt32 POBLGIHBMOG, ::IFAMBENCHMD* DNOHELNGGLJ, ::System::UInt32 AKFFEAICPGC, ::System::Int32 CDGDEEIGGOG, ::DNOPJGNOPJO EGDLIGBDIHA, ::MoleMole::Config::CampType CGLJBLMHDED, ::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single HBOHIAPEIMH, ::System::Int32 JFJBIHENPLK, ::System::Boolean BFOODCLEBLG, ::System::Collections::Generic::List_1<::System::Int32>* JEHINDLIHNH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::IFAMBENCHMD*, ::System::UInt32, ::System::Int32, ::DNOPJGNOPJO, ::MoleMole::Config::CampType, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_EDEFLFIKNFK_OFFSET))(this, POBLGIHBMOG, DNOHELNGGLJ, AKFFEAICPGC, CDGDEEIGGOG, EGDLIGBDIHA, CGLJBLMHDED, CKPGOKHECCH, HBOHIAPEIMH, JFJBIHENPLK, BFOODCLEBLG, JEHINDLIHNH);
	}

	::System::Void FNPKIDHDLPN(::FFIPCCICOOH* IDJOMIMIOGM)
	{
		return ((::System::Void(*)(::PVOID, ::FFIPCCICOOH*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_FNPKIDHDLPN_OFFSET))(this, IDJOMIMIOGM);
	}

	::System::Void IFKFKMHAAJG(::HFOPDHLEBHJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::HFOPDHLEBHJ*))((::PBYTE)hIl2Cpp + BFLPANDDGHG_IFKFKMHAAJG_OFFSET))(this, EGEGIMGMJHN);
	}
};
