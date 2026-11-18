#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJOPPEEOCPP.h"
#include "unitysdk/DEDIGMHHFGN.h"
#include "unitysdk/DNNOGGDCKCP.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/GDIACAHPLBB_MNPPEMJJLGL.h"
#include "unitysdk/GJNKEFBHHDD.h"
#include "unitysdk/HJFHBHFHHPN.h"
#include "unitysdk/KCKBKDMEANI.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/PHKLOLMIEGJ.h"
#include "unitysdk/PIJMOAJLFGE.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FLBLIMHMJBE;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class PerceptionSenseConfig; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnrealTypes { template <typename T> class ManagedListJobWrapper_1; }

#define GGABFOMDEPE_ABPFMEKJDKG_OFFSET UNITYSDK_OFFSET(0x1813CEF0)
#define GGABFOMDEPE_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x18138B70)
#define GGABFOMDEPE_AKFJGFLDCJD_OFFSET UNITYSDK_OFFSET(0x1813C860)
#define GGABFOMDEPE_APEFLALFBLN_OFFSET UNITYSDK_OFFSET(0x1813D690)
#define GGABFOMDEPE_BFENMHLKEPI_OFFSET UNITYSDK_OFFSET(0x1813B040)
#define GGABFOMDEPE_BHOJJKEGNPE_OFFSET UNITYSDK_OFFSET(0x1813EAC0)
#define GGABFOMDEPE_CMAHGLPMMHN_OFFSET UNITYSDK_OFFSET(0x1813C390)
#define GGABFOMDEPE_DCAJOPAGCKK_OFFSET UNITYSDK_OFFSET(0x1813F710)
#define GGABFOMDEPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18138CE0)
#define GGABFOMDEPE_EADHAPNHMCP_OFFSET UNITYSDK_OFFSET(0x1813C6C0)
#define GGABFOMDEPE_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x18138BB0)
#define GGABFOMDEPE_ENNIANHDJHG_OFFSET UNITYSDK_OFFSET(0x1813DAD0)
#define GGABFOMDEPE_FKNPEDNEEGO_OFFSET UNITYSDK_OFFSET(0x1813EC00)
#define GGABFOMDEPE_GLILOANCOFJ_OFFSET UNITYSDK_OFFSET(0x1813E480)
#define GGABFOMDEPE_GOPOAPKDAFO_OFFSET UNITYSDK_OFFSET(0x18139B60)
#define GGABFOMDEPE_HEMMGHBLOID_OFFSET UNITYSDK_OFFSET(0x1813BE40)
#define GGABFOMDEPE_HFFMACFOOAL_OFFSET UNITYSDK_OFFSET(0x1813D8E0)
#define GGABFOMDEPE_HKIHDIKBBBD_OFFSET UNITYSDK_OFFSET(0x1813FD40)
#define GGABFOMDEPE_HLJNJOPLFNA_OFFSET UNITYSDK_OFFSET(0x1813E150)
#define GGABFOMDEPE_ICALNIHKEAC_OFFSET UNITYSDK_OFFSET(0x1813E960)
#define GGABFOMDEPE_IDPGABIHILO_OFFSET UNITYSDK_OFFSET(0x1813D9D0)
#define GGABFOMDEPE_JDHCOEHDFNG_OFFSET UNITYSDK_OFFSET(0x1813B3C0)
#define GGABFOMDEPE_JGGMJAGMENC_OFFSET UNITYSDK_OFFSET(0x1813C0C0)
#define GGABFOMDEPE_KAGNGPIODBM_OFFSET UNITYSDK_OFFSET(0x18139120)
#define GGABFOMDEPE_KFBPFMGBAOM_OFFSET UNITYSDK_OFFSET(0x1813F5C0)
#define GGABFOMDEPE_KIEOCILADIK_OFFSET UNITYSDK_OFFSET(0x1813F620)
#define GGABFOMDEPE_LDOAGOFALCJ_OFFSET UNITYSDK_OFFSET(0x1813D780)
#define GGABFOMDEPE_LHKNPKCANEA_OFFSET UNITYSDK_OFFSET(0x18138F20)
#define GGABFOMDEPE_LJGFOLOGOJE_OFFSET UNITYSDK_OFFSET(0x1813FB50)
#define GGABFOMDEPE_MGBCHGPNIKA_OFFSET UNITYSDK_OFFSET(0x1813AA10)
#define GGABFOMDEPE_MOEOPMEOPAN_OFFSET UNITYSDK_OFFSET(0x1813F930)
#define GGABFOMDEPE_NGLAHMMHGOD_OFFSET UNITYSDK_OFFSET(0x18139CB0)
#define GGABFOMDEPE_OCJHCBKCNMJ_OFFSET UNITYSDK_OFFSET(0x1813AC70)
#define GGABFOMDEPE_OFGABCNKHAG_OFFSET UNITYSDK_OFFSET(0x1813D1A0)
#define GGABFOMDEPE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x18138A60)
#define GGABFOMDEPE_OOGDOCBLMKA_OFFSET UNITYSDK_OFFSET(0x18139B00)
#define GGABFOMDEPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18139A60)
#define GGABFOMDEPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18139320)

inline static constexpr unsigned int GGABFOMDEPE_TypeDefinitionIndex = 57526;

class GGABFOMDEPE
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>** StaticGet_EILBICLEFEI()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::GameplayTag>**)Il2CppClass::FromTypeDefinitionIndex(GGABFOMDEPE_TypeDefinitionIndex)->GetStaticField(0x3AEA0);
	}
	static ::System::Int32* StaticGet_BNDJCOLFDAJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GGABFOMDEPE_TypeDefinitionIndex)->GetStaticField(0xD8F0);
	}
	static ::System::Single* StaticGet_PBDNGLGFKLG()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(GGABFOMDEPE_TypeDefinitionIndex)->GetStaticField(0xD8F4);
	}
	// static const ::System::Int32 FHBGPFKDENL = 0x300; // 0x0
	// static const ::System::Int32 DGMCMCOCBLL = 0x10; // 0x0
	// static const ::System::Int32 IOLNKJNJKBB = 0x8; // 0x0
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* CMFCEOIMMLE; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* FDMFHOJLEGH; // 0x18
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::PHKLOLMIEGJ>*>* JALNPBOPOMI; // 0x20
	::System::Collections::Generic::List_1<::System::Object*>* AGNKINKCNCE; // 0x28
	::FLBLIMHMJBE* IILFJONEJID; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::PIJMOAJLFGE>*>* ALLHLAPHEOO; // 0x38
	::UnrealTypes::ManagedListJobWrapper_1<::HJFHBHFHHPN>* GFJNFLGHPFI; // 0x40
	::UnrealTypes::ManagedListJobWrapper_1<::DEDIGMHHFGN>* GGIDLEFAPBA; // 0x48
	::UnrealTypes::ManagedListJobWrapper_1<::KCKBKDMEANI>* OHEKMPONGJF; // 0x50
	::System::Collections::Generic::Dictionary_2<::PIJMOAJLFGE, ::System::Object*>* NOIAAEAHPDH; // 0x58
	::UnrealTypes::ManagedListJobWrapper_1<::DNNOGGDCKCP>* CPOJMGEFHEH; // 0x60
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::CJOPPEEOCPP>*>* BCJDNEAKBPJ; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* COHMKMDEBDO; // 0x70
	::System::Collections::Generic::HashSet_1<::System::UInt32>* LJICFEIEDPI; // 0x78
	::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>* HBFHKEOHBIC; // 0x80
	::System::Collections::Generic::Dictionary_2<::PIJMOAJLFGE, ::System::Collections::Generic::List_1<::PHKLOLMIEGJ>*>* JNJCJAHIFBJ; // 0x88
	::System::Collections::Generic::List_1<::GJNKEFBHHDD>* MBKECJIOPAC; // 0x90
	::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> KBDNCJCBFBF; // 0x98
	::System::Byte _padding0[0x48];
	::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> KDCHJDFPBEP; // 0xE8
	::System::Byte _padding1[0x18];
	::System::Boolean MCAKGHOMNJD; // 0x108
	::System::Byte _padding2[0x3];
	::System::Int32 CIHJDBNIBDA; // 0x10C
	::Unity::Jobs::JobHandle EOCHHIBJHCG; // 0x110

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGABFOMDEPE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGABFOMDEPE__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGABFOMDEPE_ONCREATE_OFFSET))(this);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGABFOMDEPE_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGABFOMDEPE_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGABFOMDEPE_DISPOSE_OFFSET))(this);
	}

	::System::Void OOGDOCBLMKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGABFOMDEPE_OOGDOCBLMKA_OFFSET))(this);
	}

	::System::Void MGBCHGPNIKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGABFOMDEPE_MGBCHGPNIKA_OFFSET))(this);
	}

	::System::Void JDHCOEHDFNG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGABFOMDEPE_JDHCOEHDFNG_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* HEMMGHBLOID(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GGABFOMDEPE_HEMMGHBLOID_OFFSET))(KECKGDFIALJ);
	}

	::System::Void OCJHCBKCNMJ(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + GGABFOMDEPE_OCJHCBKCNMJ_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void JGGMJAGMENC(::System::Int32 GIAEPMKCBIB, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GGABFOMDEPE_JGGMJAGMENC_OFFSET))(this, GIAEPMKCBIB, JHFKDGBCOBA);
	}

	::System::Int32 CMAHGLPMMHN(::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GGABFOMDEPE_CMAHGLPMMHN_OFFSET))(this, JHFKDGBCOBA);
	}

	::System::Boolean EADHAPNHMCP(::PIJMOAJLFGE PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::PIJMOAJLFGE))((::PBYTE)hIl2Cpp + GGABFOMDEPE_EADHAPNHMCP_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void AKFJGFLDCJD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGABFOMDEPE_AKFJGFLDCJD_OFFSET))(this);
	}

	::System::Boolean ABPFMEKJDKG(::PIJMOAJLFGE PHHDHIBOCKA, ::System::Int32 ABHBKFJKINO, ::PHKLOLMIEGJ& LPNEHMHBLFE)
	{
		return ((::System::Boolean(*)(::PVOID, ::PIJMOAJLFGE, ::System::Int32, ::PHKLOLMIEGJ&))((::PBYTE)hIl2Cpp + GGABFOMDEPE_ABPFMEKJDKG_OFFSET))(this, PHHDHIBOCKA, ABHBKFJKINO, LPNEHMHBLFE);
	}

	::System::Int32 APEFLALFBLN(::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GGABFOMDEPE_APEFLALFBLN_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Void LDOAGOFALCJ(::PIJMOAJLFGE PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::PIJMOAJLFGE))((::PBYTE)hIl2Cpp + GGABFOMDEPE_LDOAGOFALCJ_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void HFFMACFOOAL(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + GGABFOMDEPE_HFFMACFOOAL_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void IDPGABIHILO(::MoleMole::EntityHandle KECKGDFIALJ, ::GDIACAHPLBB_MNPPEMJJLGL OBNIAHNMHPF, ::MoleMole::GameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::GDIACAHPLBB_MNPPEMJJLGL, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + GGABFOMDEPE_IDPGABIHILO_OFFSET))(this, KECKGDFIALJ, OBNIAHNMHPF, AELLPLBJELA);
	}

	::System::Void ENNIANHDJHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGABFOMDEPE_ENNIANHDJHG_OFFSET))(this);
	}

	::System::Void LHKNPKCANEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGABFOMDEPE_LHKNPKCANEA_OFFSET))(this);
	}

	::System::Void GLILOANCOFJ(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GGABFOMDEPE_GLILOANCOFJ_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void ICALNIHKEAC(::PIJMOAJLFGE PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::PIJMOAJLFGE))((::PBYTE)hIl2Cpp + GGABFOMDEPE_ICALNIHKEAC_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void BHOJJKEGNPE(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GGABFOMDEPE_BHOJJKEGNPE_OFFSET))(this, PMNLNNGEIFM);
	}

	::PIJMOAJLFGE FKNPEDNEEGO(::MoleMole::Config::PerceptionSenseConfig* DFMKILICPFB, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 CFJFMMGPGKE, ::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::PIJMOAJLFGE(*)(::PVOID, ::MoleMole::Config::PerceptionSenseConfig*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + GGABFOMDEPE_FKNPEDNEEGO_OFFSET))(this, DFMKILICPFB, OHOGDOMNHNK, CFJFMMGPGKE, HPADNAEINPK);
	}

	::System::Void KAGNGPIODBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGABFOMDEPE_KAGNGPIODBM_OFFSET))(this);
	}

	::System::Void KIEOCILADIK(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + GGABFOMDEPE_KIEOCILADIK_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void DCAJOPAGCKK(::PIJMOAJLFGE PHHDHIBOCKA, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::PIJMOAJLFGE, ::System::Int32))((::PBYTE)hIl2Cpp + GGABFOMDEPE_DCAJOPAGCKK_OFFSET))(this, PHHDHIBOCKA, ABHBKFJKINO);
	}

	::System::Void NGLAHMMHGOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGABFOMDEPE_NGLAHMMHGOD_OFFSET))(this);
	}

	::System::Void GOPOAPKDAFO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGABFOMDEPE_GOPOAPKDAFO_OFFSET))(this);
	}

	::System::Void KFBPFMGBAOM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGABFOMDEPE_KFBPFMGBAOM_OFFSET))(this);
	}

	::System::Void BFENMHLKEPI(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + GGABFOMDEPE_BFENMHLKEPI_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void HLJNJOPLFNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGABFOMDEPE_HLJNJOPLFNA_OFFSET))(this);
	}

	::System::Void MOEOPMEOPAN(::PIJMOAJLFGE PHHDHIBOCKA, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::PIJMOAJLFGE, ::System::Int32))((::PBYTE)hIl2Cpp + GGABFOMDEPE_MOEOPMEOPAN_OFFSET))(this, PHHDHIBOCKA, ABHBKFJKINO);
	}

	::PHKLOLMIEGJ OFGABCNKHAG(::DNNOGGDCKCP& IGAAKDOIPNN, ::System::Int32 ABHBKFJKINO, ::MoleMole::Config::PerceptionSenseConfig* DFMKILICPFB)
	{
		return ((::PHKLOLMIEGJ(*)(::PVOID, ::DNNOGGDCKCP&, ::System::Int32, ::MoleMole::Config::PerceptionSenseConfig*))((::PBYTE)hIl2Cpp + GGABFOMDEPE_OFGABCNKHAG_OFFSET))(this, IGAAKDOIPNN, ABHBKFJKINO, DFMKILICPFB);
	}

	::System::Void LJGFOLOGOJE(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GGABFOMDEPE_LJGFOLOGOJE_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void HKIHDIKBBBD(::PIJMOAJLFGE PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::PIJMOAJLFGE))((::PBYTE)hIl2Cpp + GGABFOMDEPE_HKIHDIKBBBD_OFFSET))(this, PHHDHIBOCKA);
	}
};
