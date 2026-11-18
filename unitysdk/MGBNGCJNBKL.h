#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGBNLCNGFON.h"
#include "unitysdk/MGBNGCJNBKL_FCCLOHDANLG.h"
#include "unitysdk/MoleMole/InLevelAvatarDataItem_InLevelAvatarDataType.h"
#include "unitysdk/OCDGNIGOFFE.h"
#include "unitysdk/UnityEngine/RigidbodyConstraints.h"
#include "unitysdk/UnityEngine/RigidbodyInterpolation.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/BINGPDLFKIK_FEMLHFGOKKC.h"

class AIOGGGIHCAE;
class AKFCOMPHBLJ_IAGPNNHDDPN;
class GOPHICLGFAA;
class LIIPHPJCKCP;
class MGBNGCJNBKL_NHCGGABNENI;
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class TeamGroupDataItem; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class StageEntry; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MGBNGCJNBKL_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x1A64C0D0)
#define MGBNGCJNBKL_ALPFGIFGJOD_OFFSET UNITYSDK_OFFSET(0x1A646490)
#define MGBNGCJNBKL_AOCDOAOOCMN_OFFSET UNITYSDK_OFFSET(0x1A6464E0)
#define MGBNGCJNBKL_BANCNJGEFGA_OFFSET UNITYSDK_OFFSET(0x1A6425D0)
#define MGBNGCJNBKL_BCEPBAJLLFM_OFFSET UNITYSDK_OFFSET(0x1A648AD0)
#define MGBNGCJNBKL_BDAAGJHDLOF_OFFSET UNITYSDK_OFFSET(0x1A64B6B0)
#define MGBNGCJNBKL_BGGOBIJIEDA_OFFSET UNITYSDK_OFFSET(0x1A649190)
#define MGBNGCJNBKL_BKIEBGACMEK_OFFSET UNITYSDK_OFFSET(0x1A64B620)
#define MGBNGCJNBKL_CFJLPDNLJIB_OFFSET UNITYSDK_OFFSET(0x1A6466D0)
#define MGBNGCJNBKL_CGJDPFACGHI_OFFSET UNITYSDK_OFFSET(0x1A644C10)
#define MGBNGCJNBKL_CHAEJEDPACB_OFFSET UNITYSDK_OFFSET(0x1A64BF20)
#define MGBNGCJNBKL_CIACBAMKNKN_OFFSET UNITYSDK_OFFSET(0x1A6450F0)
#define MGBNGCJNBKL_CKECACFNGDD_1_OFFSET UNITYSDK_OFFSET(0x1A6476C0)
#define MGBNGCJNBKL_CKECACFNGDD_OFFSET UNITYSDK_OFFSET(0x1A644D50)
#define MGBNGCJNBKL_CKGDMBKDJJF_OFFSET UNITYSDK_OFFSET(0x1A649180)
#define MGBNGCJNBKL_DAHMLANPFNI_OFFSET UNITYSDK_OFFSET(0x1A6451A0)
#define MGBNGCJNBKL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A642010)
#define MGBNGCJNBKL_DKOIKPKMCNJ_OFFSET UNITYSDK_OFFSET(0x1A647C10)
#define MGBNGCJNBKL_DMFBKAOKGOO_OFFSET UNITYSDK_OFFSET(0x1A644660)
#define MGBNGCJNBKL_DOCKLPFMPDK_OFFSET UNITYSDK_OFFSET(0x1A64B920)
#define MGBNGCJNBKL_EBKDFOHCDNC_OFFSET UNITYSDK_OFFSET(0x1A64C380)
#define MGBNGCJNBKL_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1A64AD90)
#define MGBNGCJNBKL_EEJALMABAMF_1_OFFSET UNITYSDK_OFFSET(0x1A64BF90)
#define MGBNGCJNBKL_EEJALMABAMF_OFFSET UNITYSDK_OFFSET(0x1A649040)
#define MGBNGCJNBKL_EFEPGCHCHIM_1_OFFSET UNITYSDK_OFFSET(0x1A642C70)
#define MGBNGCJNBKL_EFEPGCHCHIM_OFFSET UNITYSDK_OFFSET(0x1A6423E0)
#define MGBNGCJNBKL_EOGLMGIGOIG_OFFSET UNITYSDK_OFFSET(0x1A6454E0)
#define MGBNGCJNBKL_EPKAINILBGF_OFFSET UNITYSDK_OFFSET(0x1A646ED0)
#define MGBNGCJNBKL_FCGIFGDLPPL_OFFSET UNITYSDK_OFFSET(0x1A645A40)
#define MGBNGCJNBKL_FFMOLGJOJBL_OFFSET UNITYSDK_OFFSET(0x1A64C110)
#define MGBNGCJNBKL_FGDCNKJCNLD_OFFSET UNITYSDK_OFFSET(0x1A646E70)
#define MGBNGCJNBKL_FGNEFHBBIFE_OFFSET UNITYSDK_OFFSET(0x1A64C460)
#define MGBNGCJNBKL_FJMGMNDAFAK_OFFSET UNITYSDK_OFFSET(0x1A647C70)
#define MGBNGCJNBKL_FJMHPPBJKLL_OFFSET UNITYSDK_OFFSET(0x1A648D60)
#define MGBNGCJNBKL_FLJCOIEIFIK_OFFSET UNITYSDK_OFFSET(0x1A64A0A0)
#define MGBNGCJNBKL_FOANEEEJLPD_OFFSET UNITYSDK_OFFSET(0x1A645C70)
#define MGBNGCJNBKL_GFDMCEFOLMG_OFFSET UNITYSDK_OFFSET(0x1A646AE0)
#define MGBNGCJNBKL_GLOFPHEJKCO_OFFSET UNITYSDK_OFFSET(0x1A645E30)
#define MGBNGCJNBKL_GPLEFKKIKFO_OFFSET UNITYSDK_OFFSET(0x1A64B6A0)
#define MGBNGCJNBKL_HGHAKJBAFBM_OFFSET UNITYSDK_OFFSET(0x1A64B630)
#define MGBNGCJNBKL_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x1A648DC0)
#define MGBNGCJNBKL_IAOGADJEAJB_OFFSET UNITYSDK_OFFSET(0x1A648AE0)
#define MGBNGCJNBKL_IKAKPKKIGLB_OFFSET UNITYSDK_OFFSET(0x1A645620)
#define MGBNGCJNBKL_IOAGPBBFINC_OFFSET UNITYSDK_OFFSET(0x1A647BA0)
#define MGBNGCJNBKL_IOFACCFIELK_OFFSET UNITYSDK_OFFSET(0x1A64B4C0)
#define MGBNGCJNBKL_JJDBOPIJADF_OFFSET UNITYSDK_OFFSET(0x1A64B6C0)
#define MGBNGCJNBKL_JLEPLIEEAKN_OFFSET UNITYSDK_OFFSET(0x1A64BF70)
#define MGBNGCJNBKL_JOJFGLEHHHK_OFFSET UNITYSDK_OFFSET(0x1A64B3A0)
#define MGBNGCJNBKL_KBOJLADGBBP_OFFSET UNITYSDK_OFFSET(0x1A64B9C0)
#define MGBNGCJNBKL_KCOKAPJJOKL_OFFSET UNITYSDK_OFFSET(0x1A63C090)
#define MGBNGCJNBKL_KGHDOIANGMF_OFFSET UNITYSDK_OFFSET(0x1A64A6D0)
#define MGBNGCJNBKL_KICDHCMLIHN_OFFSET UNITYSDK_OFFSET(0x1A649BB0)
#define MGBNGCJNBKL_LIJKHAMEGJP_OFFSET UNITYSDK_OFFSET(0x1A645790)
#define MGBNGCJNBKL_LJENCNHKDBF_OFFSET UNITYSDK_OFFSET(0x1A648C00)
#define MGBNGCJNBKL_LKEMDGLMFPB_1_OFFSET UNITYSDK_OFFSET(0x1A64AB10)
#define MGBNGCJNBKL_LKEMDGLMFPB_OFFSET UNITYSDK_OFFSET(0x1A643E20)
#define MGBNGCJNBKL_LKEMIGNNLNC_OFFSET UNITYSDK_OFFSET(0x1A64BF80)
#define MGBNGCJNBKL_MFALHAANIKH_OFFSET UNITYSDK_OFFSET(0x1A643E10)
#define MGBNGCJNBKL_MGGGEDPEFPK_OFFSET UNITYSDK_OFFSET(0x1A64B640)
#define MGBNGCJNBKL_NEFOBOGHAML_OFFSET UNITYSDK_OFFSET(0x1A64AE10)
#define MGBNGCJNBKL_NHAFIMBJIIM_OFFSET UNITYSDK_OFFSET(0x1A6450D0)
#define MGBNGCJNBKL_NHEOCCHFJMO_OFFSET UNITYSDK_OFFSET(0x1A649B30)
#define MGBNGCJNBKL_ODCLBKFPHFH_OFFSET UNITYSDK_OFFSET(0x1A641EB0)
#define MGBNGCJNBKL_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1A641970)
#define MGBNGCJNBKL_OPMALMDIIOJ_OFFSET UNITYSDK_OFFSET(0x1A648AF0)
#define MGBNGCJNBKL_OPOKPODLLAO_OFFSET UNITYSDK_OFFSET(0x1A647780)
#define MGBNGCJNBKL_PAJCPOOBJEH_OFFSET UNITYSDK_OFFSET(0x1A647B80)
#define MGBNGCJNBKL_PGCHPDIIBIG_OFFSET UNITYSDK_OFFSET(0x1A649D50)
#define MGBNGCJNBKL_PHECHNIMMKB_OFFSET UNITYSDK_OFFSET(0x1A64C470)
#define MGBNGCJNBKL_PLCJNBHECGC_OFFSET UNITYSDK_OFFSET(0x1A641E50)
#define MGBNGCJNBKL_PMKHHNDOHLP_1_OFFSET UNITYSDK_OFFSET(0x1A644E10)
#define MGBNGCJNBKL_PMKHHNDOHLP_OFFSET UNITYSDK_OFFSET(0x1A646BA0)
#define MGBNGCJNBKL_PPNKEJLEIHI_OFFSET UNITYSDK_OFFSET(0x1A641A90)
#define MGBNGCJNBKL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A641BD0)
#define MGBNGCJNBKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6417E0)

inline static constexpr unsigned int MGBNGCJNBKL_TypeDefinitionIndex = 50429;

class MGBNGCJNBKL
{
public:
	static ::System::Action** StaticGet__FFIPCOJJCIB_k__BackingField()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MGBNGCJNBKL_TypeDefinitionIndex)->GetStaticField(0x3A090);
	}
	static ::System::Action_1<::MoleMole::Battle::Entity*>** StaticGet__KNGAJKBHPJL_k__BackingField()
	{
		return (::System::Action_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(MGBNGCJNBKL_TypeDefinitionIndex)->GetStaticField(0x3A098);
	}
	static ::System::Int64* StaticGet_LAAPKHIBHNE()
	{
		return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(MGBNGCJNBKL_TypeDefinitionIndex)->GetStaticField(0xD460);
	}
	// static const ::System::String* PHICPJBOJDJ; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* HJFLFNGBPJB; // 0x10
	::System::Action* JKAOJIBFEAL; // 0x18
	::UnityEngine::GameObject* GILNCBABNFF; // 0x20
	::System::Action* DBNEMONGFAO; // 0x28
	::MoleMole::Battle::Entity* _BJMPGGPNPOO_k__BackingField; // 0x30
	::LIIPHPJCKCP* CBLIJGOEDOE; // 0x38
	::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>* IOPIOCJAKJH; // 0x40
	::System::Action* FLBDHNMBPNH; // 0x48
	::System::Collections::Generic::List_1<::LIIPHPJCKCP*>* PPLCJDPDABD; // 0x50
	::MGBNGCJNBKL_NHCGGABNENI* PHOOLMMGFON; // 0x58
	::MoleMole::Battle::Entity* HLFNICMOFIN; // 0x60
	::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>* OKLIOEAPKLB; // 0x68
	::System::String* KJIEBGFDIOI; // 0x70
	::System::Action* JDICPCMGGBI; // 0x78
	::System::Collections::Generic::Dictionary_2<::OCDGNIGOFFE, ::LIIPHPJCKCP*>* NLNOLCJGFED; // 0x80
	::AIOGGGIHCAE* FKGGDAFHPFG; // 0x88
	::System::UInt32 JAJKMHADIKL; // 0x90
	::UnityEngine::RigidbodyInterpolation EJBNEDABDBB; // 0x94
	::MGBNGCJNBKL_FCCLOHDANLG KHPDFIJEIED; // 0x98
	::System::Single _MOKDOMAGNOI_k__BackingField; // 0x9C
	::System::UInt32 FJOOHFCFMDA; // 0xA0
	::System::Boolean EBPALLFEIMG; // 0xA4
	::System::Boolean _NODGBCOGGMF_k__BackingField; // 0xA5
	::System::Boolean OEIEJKDOGEG; // 0xA6
	::System::Byte _padding0[0x1];
	::IGBNLCNGFON IIIAODGOJKD; // 0xA8
	::UnityEngine::Vector3 _ADJNMAPGFEA_k__BackingField; // 0xAC
	::System::Int32 PAEEEHKILOC; // 0xB8
	::System::Int32 JNKHIJIOCOF; // 0xBC
	::UnityEngine::RigidbodyConstraints COJGEEFABOK; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_ONCREATE_OFFSET))(this);
	}

	::System::Void Update(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_UPDATE_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void PLCJNBHECGC(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_PLCJNBHECGC_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_DISPOSE_OFFSET))(this);
	}

	::System::Boolean EFEPGCHCHIM(::MoleMole::TeamGroupDataItem* HANMPDLLIJL, ::System::String* ELKCAPBODAL, ::System::Boolean HLDOHNEDHIP, ::System::Boolean OECHNBLPKLB, ::System::UInt32 CLAKMNBEAMA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TeamGroupDataItem*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_EFEPGCHCHIM_OFFSET))(this, HANMPDLLIJL, ELKCAPBODAL, HLDOHNEDHIP, OECHNBLPKLB, CLAKMNBEAMA);
	}

	::System::Void MFALHAANIKH(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_MFALHAANIKH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LKEMDGLMFPB(::MoleMole::InLevelAvatarDataItem* NHEPEEIPENO, ::System::Boolean JDIOMFAEFIG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_LKEMDGLMFPB_OFFSET))(this, NHEPEEIPENO, JDIOMFAEFIG);
	}

	::System::Void CGJDPFACGHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_CGJDPFACGHI_OFFSET))(this);
	}

	::System::Void CKECACFNGDD(::MoleMole::InLevelAvatarDataItem* NHEPEEIPENO, ::UnityEngine::Vector3 FMDLIFKLFKI, ::System::Single KPBFANHLELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_CKECACFNGDD_OFFSET))(this, NHEPEEIPENO, FMDLIFKLFKI, KPBFANHLELI);
	}

	::UnityEngine::Vector3 NHAFIMBJIIM()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_NHAFIMBJIIM_OFFSET))(this);
	}

	::System::Void CIACBAMKNKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_CIACBAMKNKN_OFFSET))(this);
	}

	::System::Void DAHMLANPFNI(::System::Boolean FOFIDPHMGBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_DAHMLANPFNI_OFFSET))(this, FOFIDPHMGBE);
	}

	::System::Void IKAKPKKIGLB(::System::Boolean FOFIDPHMGBE, ::System::Boolean OALKHGCBGKO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_IKAKPKKIGLB_OFFSET))(this, FOFIDPHMGBE, OALKHGCBGKO);
	}

	::System::Boolean ALPFGIFGJOD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_ALPFGIFGJOD_OFFSET))(this);
	}

	::System::Void AOCDOAOOCMN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_AOCDOAOOCMN_OFFSET))(this);
	}

	::System::Void CFJLPDNLJIB(::System::Boolean FOFIDPHMGBE, ::System::String* AELLPLBJELA, ::System::Boolean OLIHOHBFHHI, ::System::Boolean OALKHGCBGKO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_CFJLPDNLJIB_OFFSET))(this, FOFIDPHMGBE, AELLPLBJELA, OLIHOHBFHHI, OALKHGCBGKO);
	}

	::System::Void FOANEEEJLPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_FOANEEEJLPD_OFFSET))(this);
	}

	::System::Boolean PMKHHNDOHLP(::System::String* MIPENCPJPEA, ::UnityEngine::Vector3& FMDLIFKLFKI, ::System::Single& KPBFANHLELI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_PMKHHNDOHLP_OFFSET))(this, MIPENCPJPEA, FMDLIFKLFKI, KPBFANHLELI);
	}

	::System::Void FGDCNKJCNLD(::System::String* KPIAFDELPJL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_FGDCNKJCNLD_OFFSET))(this, KPIAFDELPJL);
	}

	::System::Void EPKAINILBGF(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* GNLHDJJEPDJ, ::System::Int32 GNHEHOMMHPB, ::AKFCOMPHBLJ_IAGPNNHDDPN* LOHDEOFAANB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Int32, ::AKFCOMPHBLJ_IAGPNNHDDPN*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_EPKAINILBGF_OFFSET))(this, KECKGDFIALJ, GNLHDJJEPDJ, GNHEHOMMHPB, LOHDEOFAANB);
	}

	::System::Boolean KCOKAPJJOKL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_KCOKAPJJOKL_OFFSET))(this);
	}

	::System::Void PPNKEJLEIHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_PPNKEJLEIHI_OFFSET))(this);
	}

	::System::Void CKECACFNGDD_1(::MoleMole::InLevelAvatarDataItem* NHEPEEIPENO, ::System::String* MIPENCPJPEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::System::String*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_CKECACFNGDD_1_OFFSET))(this, NHEPEEIPENO, MIPENCPJPEA);
	}

	::System::Void OPOKPODLLAO(::System::Int64 MLHKAPEEMAA, ::System::Boolean FOFIDPHMGBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_OPOKPODLLAO_OFFSET))(this, MLHKAPEEMAA, FOFIDPHMGBE);
	}

	::System::Void DMFBKAOKGOO(::MoleMole::InLevelAvatarDataItem* NHEPEEIPENO, ::UnityEngine::Vector3 FMDLIFKLFKI, ::System::Single KPBFANHLELI, ::System::Int32 AEHJEICCKLO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_DMFBKAOKGOO_OFFSET))(this, NHEPEEIPENO, FMDLIFKLFKI, KPBFANHLELI, AEHJEICCKLO);
	}

	::System::Void PAJCPOOBJEH(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_PAJCPOOBJEH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean IOAGPBBFINC(::LIIPHPJCKCP* AGPKAFFHHGH, ::LIIPHPJCKCP* ENDFJMBNMJH)
	{
		return ((::System::Boolean(*)(::PVOID, ::LIIPHPJCKCP*, ::LIIPHPJCKCP*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_IOAGPBBFINC_OFFSET))(this, AGPKAFFHHGH, ENDFJMBNMJH);
	}

	::System::Boolean DKOIKPKMCNJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_DKOIKPKMCNJ_OFFSET))(this);
	}

	static ::System::Boolean FJMGMNDAFAK(::UnityEngine::Vector3 FKAMEPNDONK, ::System::Single HAHNOMJLKND, ::System::Single JJEGFDAOOGN, ::System::Single NBJJIIPDBEF, ::System::Int32 IKEMGLJOMAA, ::UnityEngine::Vector3& OKODMKMIAKI, ::System::Boolean HHGCCBCLICN, ::System::Boolean KKJLIFJBBKF, ::System::Single MGNGCKEEHKB)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_FJMGMNDAFAK_OFFSET))(FKAMEPNDONK, HAHNOMJLKND, JJEGFDAOOGN, NBJJIIPDBEF, IKEMGLJOMAA, OKODMKMIAKI, HHGCCBCLICN, KKJLIFJBBKF, MGNGCKEEHKB);
	}

	::System::Boolean EOGLMGIGOIG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_EOGLMGIGOIG_OFFSET))(this);
	}

	::System::Void BCEPBAJLLFM(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_BCEPBAJLLFM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single IAOGADJEAJB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_IAOGADJEAJB_OFFSET))(this);
	}

	::System::Void OPMALMDIIOJ(::LIIPHPJCKCP* GAHPFKBABLI)
	{
		return ((::System::Void(*)(::PVOID, ::LIIPHPJCKCP*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_OPMALMDIIOJ_OFFSET))(this, GAHPFKBABLI);
	}

	::System::Void FCGIFGDLPPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_FCGIFGDLPPL_OFFSET))(this);
	}

	::System::Void LIJKHAMEGJP(::System::Boolean FOFIDPHMGBE, ::System::Boolean OALKHGCBGKO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_LIJKHAMEGJP_OFFSET))(this, FOFIDPHMGBE, OALKHGCBGKO);
	}

	::System::Void HMLGKBFFNHI(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_HMLGKBFFNHI_OFFSET))(this, KECKGDFIALJ);
	}

	::MoleMole::Battle::Entity* EEJALMABAMF(::System::Boolean EIPELKONNME, ::MoleMole::Config::StageEntry* HNMINGJFFPA, ::System::Boolean BFOODCLEBLG)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::StageEntry*, ::System::Boolean))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_EEJALMABAMF_OFFSET))(this, EIPELKONNME, HNMINGJFFPA, BFOODCLEBLG);
	}

	::MoleMole::Battle::Entity* CKGDMBKDJJF()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_CKGDMBKDJJF_OFFSET))(this);
	}

	::System::Boolean EFEPGCHCHIM_1(::MoleMole::TeamGroupDataItem* HANMPDLLIJL, ::UnityEngine::Vector3 ELKCAPBODAL, ::System::Single BBOHGKJFIGM, ::System::Boolean HLDOHNEDHIP, ::System::Boolean OECHNBLPKLB, ::System::UInt32 CLAKMNBEAMA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::TeamGroupDataItem*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_EFEPGCHCHIM_1_OFFSET))(this, HANMPDLLIJL, ELKCAPBODAL, BBOHGKJFIGM, HLDOHNEDHIP, OECHNBLPKLB, CLAKMNBEAMA);
	}

	::System::Void KICDHCMLIHN(::System::Boolean FOFIDPHMGBE, ::System::Int64 OAKIADBHPBP, ::OCDGNIGOFFE FKMHMOELCIO, ::System::Boolean OLIHOHBFHHI, ::System::Boolean OALKHGCBGKO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int64, ::OCDGNIGOFFE, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_KICDHCMLIHN_OFFSET))(this, FOFIDPHMGBE, OAKIADBHPBP, FKMHMOELCIO, OLIHOHBFHHI, OALKHGCBGKO);
	}

	::System::Void FLJCOIEIFIK(::System::Boolean CPHDDAGKHLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_FLJCOIEIFIK_OFFSET))(this, CPHDDAGKHLB);
	}

	::System::Void KGHDOIANGMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_KGHDOIANGMF_OFFSET))(this);
	}

	::System::Void BANCNJGEFGA(::System::String* ELKCAPBODAL, ::UnityEngine::Vector3& FMDLIFKLFKI, ::System::Single& KPBFANHLELI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_BANCNJGEFGA_OFFSET))(this, ELKCAPBODAL, FMDLIFKLFKI, KPBFANHLELI);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void JOJFGLEHHHK(::System::Boolean FOFIDPHMGBE, ::System::Int64 OAKIADBHPBP, ::OCDGNIGOFFE FKMHMOELCIO, ::System::Boolean OLIHOHBFHHI, ::System::Boolean OALKHGCBGKO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int64, ::OCDGNIGOFFE, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_JOJFGLEHHHK_OFFSET))(this, FOFIDPHMGBE, OAKIADBHPBP, FKMHMOELCIO, OLIHOHBFHHI, OALKHGCBGKO);
	}

	::System::Void IOFACCFIELK(::System::String* GHEGLKHPEDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_IOFACCFIELK_OFFSET))(this, GHEGLKHPEDG);
	}

	::System::Void PGCHPDIIBIG(::LIIPHPJCKCP* FOLKBKOFLDD)
	{
		return ((::System::Void(*)(::PVOID, ::LIIPHPJCKCP*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_PGCHPDIIBIG_OFFSET))(this, FOLKBKOFLDD);
	}

	static ::System::Void BKIEBGACMEK(::System::Action* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_BKIEBGACMEK_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void HGHAKJBAFBM(::System::Action_1<::MoleMole::Battle::Entity*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_HGHAKJBAFBM_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void MGGGEDPEFPK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGBNGCJNBKL_MGGGEDPEFPK_OFFSET))();
	}

	static ::System::Void GFDMCEFOLMG(::System::Boolean FOFIDPHMGBE, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_GFDMCEFOLMG_OFFSET))(FOFIDPHMGBE, KECKGDFIALJ);
	}

	::System::Void GPLEFKKIKFO(::MoleMole::Battle::Entity* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_GPLEFKKIKFO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean BDAAGJHDLOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_BDAAGJHDLOF_OFFSET))(this);
	}

	::System::Void JJDBOPIJADF(::GOPHICLGFAA* KKFMOHAKINJ)
	{
		return ((::System::Void(*)(::PVOID, ::GOPHICLGFAA*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_JJDBOPIJADF_OFFSET))(this, KKFMOHAKINJ);
	}

	::System::Void DOCKLPFMPDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_DOCKLPFMPDK_OFFSET))(this);
	}

	static ::System::Boolean KBOJLADGBBP(::UnityEngine::Vector3 FKAMEPNDONK, ::System::Single HAHNOMJLKND, ::System::Single JJEGFDAOOGN, ::System::Single NBJJIIPDBEF, ::System::Int32 IKEMGLJOMAA, ::UnityEngine::Vector3& OKODMKMIAKI, ::System::Boolean HHGCCBCLICN, ::System::Boolean KKJLIFJBBKF, ::System::Single MGNGCKEEHKB)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_KBOJLADGBBP_OFFSET))(FKAMEPNDONK, HAHNOMJLKND, JJEGFDAOOGN, NBJJIIPDBEF, IKEMGLJOMAA, OKODMKMIAKI, HHGCCBCLICN, KKJLIFJBBKF, MGNGCKEEHKB);
	}

	::System::Void CHAEJEDPACB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_CHAEJEDPACB_OFFSET))(this);
	}

	::System::Boolean PMKHHNDOHLP_1(::UnityEngine::Vector3 FMDLIFKLFKI, ::System::Single KPBFANHLELI)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_PMKHHNDOHLP_1_OFFSET))(this, FMDLIFKLFKI, KPBFANHLELI);
	}

	static ::System::Action_1<::MoleMole::Battle::Entity*>* JLEPLIEEAKN()
	{
		return ((::System::Action_1<::MoleMole::Battle::Entity*>*(*)())((::PBYTE)hIl2Cpp + MGBNGCJNBKL_JLEPLIEEAKN_OFFSET))();
	}

	::MoleMole::Battle::Entity* LKEMIGNNLNC()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_LKEMIGNNLNC_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* EEJALMABAMF_1(::System::Boolean EIPELKONNME, ::System::String* GNLHDJJEPDJ, ::System::Boolean BFOODCLEBLG)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_EEJALMABAMF_1_OFFSET))(this, EIPELKONNME, GNLHDJJEPDJ, BFOODCLEBLG);
	}

	::System::Void ODCLBKFPHFH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_ODCLBKFPHFH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void LJENCNHKDBF(::System::Boolean FOFIDPHMGBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_LJENCNHKDBF_OFFSET))(this, FOFIDPHMGBE);
	}

	::System::Void NEFOBOGHAML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_NEFOBOGHAML_OFFSET))(this);
	}

	::System::Void LKEMDGLMFPB_1(::System::Int32 DLNELHOIKIB, ::System::Boolean HIIMPIKFGHB, ::System::Int32 CAMJIFMENMC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_LKEMDGLMFPB_1_OFFSET))(this, DLNELHOIKIB, HIIMPIKFGHB, CAMJIFMENMC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void GLOFPHEJKCO(::System::Boolean NOLBECKFLEK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_GLOFPHEJKCO_OFFSET))(this, NOLBECKFLEK);
	}

	::System::Void NHEOCCHFJMO(::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single DAAEHEHLLLD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_NHEOCCHFJMO_OFFSET))(this, CKPGOKHECCH, DAAEHEHLLLD);
	}

	::System::Void BGGOBIJIEDA(::MoleMole::InLevelAvatarDataItem_InLevelAvatarDataType DCMBKOEGDDH, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* POGPBDGLJFJ, ::UnityEngine::Vector3 GALFMPGELLK, ::System::Single EEJCALOPNDD, ::System::Boolean OECHNBLPKLB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem_InLevelAvatarDataType, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_BGGOBIJIEDA_OFFSET))(this, DCMBKOEGDDH, POGPBDGLJFJ, GALFMPGELLK, EEJCALOPNDD, OECHNBLPKLB);
	}

	::System::Void FFMOLGJOJBL(::System::Boolean FOFIDPHMGBE, ::OCDGNIGOFFE FKMHMOELCIO, ::System::Boolean OLIHOHBFHHI, ::System::Boolean OALKHGCBGKO, ::System::String* AMJIHFDPIFH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::OCDGNIGOFFE, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_FFMOLGJOJBL_OFFSET))(this, FOFIDPHMGBE, FKMHMOELCIO, OLIHOHBFHHI, OALKHGCBGKO, AMJIHFDPIFH);
	}

	::System::Void FJMHPPBJKLL(::MGBNGCJNBKL_FCCLOHDANLG LEENPKGCGOC, ::MGBNGCJNBKL_FCCLOHDANLG NCIJDEGFCAM)
	{
		return ((::System::Void(*)(::PVOID, ::MGBNGCJNBKL_FCCLOHDANLG, ::MGBNGCJNBKL_FCCLOHDANLG))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_FJMHPPBJKLL_OFFSET))(this, LEENPKGCGOC, NCIJDEGFCAM);
	}

	::BINGPDLFKIK_FEMLHFGOKKC EBKDFOHCDNC(::System::Int32 PAEEEHKILOC, ::System::String* LCNGDNOPGBJ)
	{
		return ((::BINGPDLFKIK_FEMLHFGOKKC(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_EBKDFOHCDNC_OFFSET))(this, PAEEEHKILOC, LCNGDNOPGBJ);
	}

	static ::System::Action* FGNEFHBBIFE()
	{
		return ((::System::Action*(*)())((::PBYTE)hIl2Cpp + MGBNGCJNBKL_FGNEFHBBIFE_OFFSET))();
	}

	::System::Boolean PHECHNIMMKB(::System::String* JGIKDDCPKCA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MGBNGCJNBKL_PHECHNIMMKB_OFFSET))(this, JGIKDDCPKCA);
	}
};
