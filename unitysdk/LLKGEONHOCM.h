#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJKMIJNCMDE.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LLKGEONHOCM_AILJCNIMCOL_OFFSET UNITYSDK_OFFSET(0x1B653450)
#define LLKGEONHOCM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B653360)
#define LLKGEONHOCM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B653730)
#define LLKGEONHOCM_IMNLKLGBBCD_OFFSET UNITYSDK_OFFSET(0x1B653740)
#define LLKGEONHOCM_IOBBADOEFLE_OFFSET UNITYSDK_OFFSET(0x1B653880)
#define LLKGEONHOCM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B653720)
#define LLKGEONHOCM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B653350)

inline static constexpr unsigned int LLKGEONHOCM_TypeDefinitionIndex = 17718;

class LLKGEONHOCM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* FCBBLKGBOHK; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* GKIBEHCCJFN; // 0x20
	::System::Collections::Generic::List_1<::HNFADNMADCK>* KEBIPIJLIDG; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* LDDDBNLDLFL; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* BMJINPKAEEK; // 0x38
	::EJKMIJNCMDE HBDPAIKANDB; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* AOLMMJBBKMA; // 0x50
	::System::Collections::Generic::List_1<::System::Int32>* ADDFAFMNDIN; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* OHFIEPDADHJ; // 0x60
	::System::Int32 NFIFGLAACGD; // 0x68
	::System::Int32 HACKKJCOMJL; // 0x6C
	::System::Int32 BAEOLNJDMID; // 0x70
	::System::Int32 FNNJMPFBDIO; // 0x74
	::System::Byte CNIAANMNOCF; // 0x78
	::System::Byte GCHCDJCFCEG; // 0x79
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x7A
	::System::Byte ACIOBDEBDNK; // 0x7B

	::System::Void _ctor(::EJKMIJNCMDE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EJKMIJNCMDE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LLKGEONHOCM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKGEONHOCM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* AILJCNIMCOL()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKGEONHOCM_AILJCNIMCOL_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKGEONHOCM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LLKGEONHOCM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 IMNLKLGBBCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKGEONHOCM_IMNLKLGBBCD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* IOBBADOEFLE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKGEONHOCM_IOBBADOEFLE_OFFSET))(this);
	}
};
