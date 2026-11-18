#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBPFLNAKMIG.h"
#include "unitysdk/System/Object.h"

class ABCONMBPJHP;
class FOBPIEGBNKH;
class NOGPJFFJOMO;
class NOMLHBALCHB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLBAPBMDLHJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14ADDC70)
#define FLBAPBMDLHJ_BCKGCGOKOAC_OFFSET UNITYSDK_OFFSET(0x14ADD620)
#define FLBAPBMDLHJ_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x14ADC8A0)
#define FLBAPBMDLHJ_BINLNENNHCF_OFFSET UNITYSDK_OFFSET(0x14ADE300)
#define FLBAPBMDLHJ_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x14ADC8F0)
#define FLBAPBMDLHJ_BNIMLLMIBNM_OFFSET UNITYSDK_OFFSET(0x14ADDF40)
#define FLBAPBMDLHJ_DEADJIOEONL_OFFSET UNITYSDK_OFFSET(0x14ADCF60)
#define FLBAPBMDLHJ_DGONCNOAKFG_OFFSET UNITYSDK_OFFSET(0x14ADDC20)
#define FLBAPBMDLHJ_DIOOIKGOHNL_OFFSET UNITYSDK_OFFSET(0x14ADD190)
#define FLBAPBMDLHJ_DKIJPONPEFL_OFFSET UNITYSDK_OFFSET(0x14ADE840)
#define FLBAPBMDLHJ_EBDOIBMBOIG_OFFSET UNITYSDK_OFFSET(0x14ADD1A0)
#define FLBAPBMDLHJ_EIEMLBIJKND_OFFSET UNITYSDK_OFFSET(0x14ADE7B0)
#define FLBAPBMDLHJ_FIJBBPCLBJN_OFFSET UNITYSDK_OFFSET(0x14ADE720)
#define FLBAPBMDLHJ_HJEFCNNHHEO_OFFSET UNITYSDK_OFFSET(0x14ADE7C0)
#define FLBAPBMDLHJ_HLKMMHLBENG_OFFSET UNITYSDK_OFFSET(0x14ADD410)
#define FLBAPBMDLHJ_IAOLHOBJJPK_OFFSET UNITYSDK_OFFSET(0x14ADE8B0)
#define FLBAPBMDLHJ_IMNBLBOEGHE_OFFSET UNITYSDK_OFFSET(0x14ADE710)
#define FLBAPBMDLHJ_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x14ADE7D0)
#define FLBAPBMDLHJ_JLNGEAKFGLE_OFFSET UNITYSDK_OFFSET(0x14ADD210)
#define FLBAPBMDLHJ_KBBMOCCJCBF_OFFSET UNITYSDK_OFFSET(0x14ADE7F0)
#define FLBAPBMDLHJ_KGNEBIHBKFF_OFFSET UNITYSDK_OFFSET(0x14ADD630)
#define FLBAPBMDLHJ_LHFDGJJHHAF_OFFSET UNITYSDK_OFFSET(0x14ADE850)
#define FLBAPBMDLHJ_LHLJOIHKDAL_OFFSET UNITYSDK_OFFSET(0x14ADE830)
#define FLBAPBMDLHJ_LNAOGMCNGHJ_OFFSET UNITYSDK_OFFSET(0x14ADE900)
#define FLBAPBMDLHJ_MFEAFLAOGGN_OFFSET UNITYSDK_OFFSET(0x14ADD9C0)
#define FLBAPBMDLHJ_MKMHPEEPOLO_OFFSET UNITYSDK_OFFSET(0x14ADE860)
#define FLBAPBMDLHJ_MLJAFNGOPEK_OFFSET UNITYSDK_OFFSET(0x14ADDBE0)
#define FLBAPBMDLHJ_MOJDFDDOIHC_OFFSET UNITYSDK_OFFSET(0x14ADD610)
#define FLBAPBMDLHJ_NCJGIMOKCBP_OFFSET UNITYSDK_OFFSET(0x14ADCF70)
#define FLBAPBMDLHJ_NHJLBLAFHCI_OFFSET UNITYSDK_OFFSET(0x14ADE910)
#define FLBAPBMDLHJ_OAAMDNDHGJM_OFFSET UNITYSDK_OFFSET(0x14ADE7A0)
#define FLBAPBMDLHJ_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x14ADD670)
#define FLBAPBMDLHJ_PGCDHPLDNBF_OFFSET UNITYSDK_OFFSET(0x14ADE730)
#define FLBAPBMDLHJ_POEIOKIDPHC_OFFSET UNITYSDK_OFFSET(0x14ADE7E0)
#define FLBAPBMDLHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14ADCE30)

inline static constexpr unsigned int FLBAPBMDLHJ_TypeDefinitionIndex = 53972;

class FLBAPBMDLHJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FOBPIEGBNKH*>* BPKEFMINJHJ; // 0x10
	::System::Collections::Generic::List_1<::FOBPIEGBNKH*>* NOIMMNHHKAJ; // 0x18
	::System::Collections::Generic::List_1<::NOMLHBALCHB*>* GOHNHBKJPLH; // 0x20
	::System::Boolean _MLMGDKLCIGA_k__BackingField; // 0x28
	::System::Boolean _CADHHOFBEJH_k__BackingField; // 0x29
	::System::Boolean _MECHDBEHDIN_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::UInt32 _IGHCJKPIHOJ_k__BackingField; // 0x2C
	::CBPFLNAKMIG _EIJHAODIKPF_k__BackingField; // 0x30
	::System::Int32 _LNMCNMFELLH_k__BackingField; // 0x34
	::System::UInt32 _IHPHJGGFABP_k__BackingField; // 0x38
	::CBPFLNAKMIG _KDIKLNANFBJ_k__BackingField; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Void DEADJIOEONL(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_DEADJIOEONL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean NCJGIMOKCBP(::System::Int32 JJGNKFNINLM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_NCJGIMOKCBP_OFFSET))(this, JJGNKFNINLM);
	}

	::System::Void DIOOIKGOHNL(::CBPFLNAKMIG EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CBPFLNAKMIG))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_DIOOIKGOHNL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean EBDOIBMBOIG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_EBDOIBMBOIG_OFFSET))(this);
	}

	::System::Int32 MOJDFDDOIHC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_MOJDFDDOIHC_OFFSET))(this);
	}

	::System::Void BCKGCGOKOAC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_BCKGCGOKOAC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KGNEBIHBKFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_KGNEBIHBKFF_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Boolean MFEAFLAOGGN(::System::Int32 JJGNKFNINLM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_MFEAFLAOGGN_OFFSET))(this, JJGNKFNINLM);
	}

	::System::Boolean MLJAFNGOPEK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_MLJAFNGOPEK_OFFSET))(this);
	}

	::System::Void DGONCNOAKFG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_DGONCNOAKFG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BBOMJDBNHIC(::ABCONMBPJHP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::ABCONMBPJHP*))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_BBOMJDBNHIC_OFFSET))(this, AAOCANGHBDG);
	}

	::System::UInt32 IMNBLBOEGHE()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_IMNBLBOEGHE_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Boolean JLNGEAKFGLE(::System::Collections::Generic::List_1<::FOBPIEGBNKH*>* HFPFDAAGGDB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::FOBPIEGBNKH*>*))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_JLNGEAKFGLE_OFFSET))(this, HFPFDAAGGDB);
	}

	::CBPFLNAKMIG FIJBBPCLBJN()
	{
		return ((::CBPFLNAKMIG(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_FIJBBPCLBJN_OFFSET))(this);
	}

	::System::Boolean PGCDHPLDNBF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_PGCDHPLDNBF_OFFSET))(this);
	}

	::System::Void OAAMDNDHGJM(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_OAAMDNDHGJM_OFFSET))(this, EGEGIMGMJHN);
	}

	::CBPFLNAKMIG EIEMLBIJKND()
	{
		return ((::CBPFLNAKMIG(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_EIEMLBIJKND_OFFSET))(this);
	}

	::System::UInt32 HJEFCNNHHEO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_HJEFCNNHHEO_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Void POEIOKIDPHC(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_POEIOKIDPHC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KBBMOCCJCBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_KBBMOCCJCBF_OFFSET))(this);
	}

	::System::Boolean LHLJOIHKDAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_LHLJOIHKDAL_OFFSET))(this);
	}

	::System::Void BINLNENNHCF(::System::Collections::Generic::List_1<::NOGPJFFJOMO*>* HFPFDAAGGDB, ::CBPFLNAKMIG OBNIAHNMHPF, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KMGDHJCCABG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NOGPJFFJOMO*>*, ::CBPFLNAKMIG, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_BINLNENNHCF_OFFSET))(this, HFPFDAAGGDB, OBNIAHNMHPF, KMGDHJCCABG);
	}

	::System::Void DKIJPONPEFL(::CBPFLNAKMIG EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CBPFLNAKMIG))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_DKIJPONPEFL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LHFDGJJHHAF(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_LHFDGJJHHAF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MKMHPEEPOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_MKMHPEEPOLO_OFFSET))(this);
	}

	::System::Void IAOLHOBJJPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_IAOLHOBJJPK_OFFSET))(this);
	}

	::System::Void LNAOGMCNGHJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_LNAOGMCNGHJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean NHJLBLAFHCI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_NHJLBLAFHCI_OFFSET))(this);
	}

	::System::Boolean HLKMMHLBENG(::System::Collections::Generic::List_1<::FOBPIEGBNKH*>* HFPFDAAGGDB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::FOBPIEGBNKH*>*))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_HLKMMHLBENG_OFFSET))(this, HFPFDAAGGDB);
	}

	::System::Void BNIMLLMIBNM(::System::Collections::Generic::List_1<::NOGPJFFJOMO*>* HFPFDAAGGDB, ::CBPFLNAKMIG OBNIAHNMHPF, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KMGDHJCCABG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NOGPJFFJOMO*>*, ::CBPFLNAKMIG, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + FLBAPBMDLHJ_BNIMLLMIBNM_OFFSET))(this, HFPFDAAGGDB, OBNIAHNMHPF, KMGDHJCCABG);
	}
};
