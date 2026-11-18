#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GFMHGJFJDKP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIBCHDODMFF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1D0DC870)
#define PIBCHDODMFF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1D0DC750)
#define PIBCHDODMFF_GNENEJHEBCF_OFFSET UNITYSDK_OFFSET(0x1D0DC220)
#define PIBCHDODMFF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1D0DC740)
#define PIBCHDODMFF_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x1D0DC600)
#define PIBCHDODMFF_OKPHEOMPFHB_OFFSET UNITYSDK_OFFSET(0x1D0DC330)
#define PIBCHDODMFF_PHHIBCKONMD_OFFSET UNITYSDK_OFFSET(0x1D0DC760)
#define PIBCHDODMFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0DC210)

inline static constexpr unsigned int PIBCHDODMFF_TypeDefinitionIndex = 17378;

class PIBCHDODMFF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* DEJEMEMDOGC; // 0x10
	::System::String* FKEJFEMAHMO; // 0x18
	::GFMHGJFJDKP HBDPAIKANDB; // 0x20
	::System::String* DOINBIAIOHN; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 JIKOLBKCHNP; // 0x44

	::System::Void _ctor(::GFMHGJFJDKP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GFMHGJFJDKP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PIBCHDODMFF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* GNENEJHEBCF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBCHDODMFF_GNENEJHEBCF_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* OKPHEOMPFHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBCHDODMFF_OKPHEOMPFHB_OFFSET))(this);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBCHDODMFF_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBCHDODMFF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PIBCHDODMFF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* PHHIBCKONMD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBCHDODMFF_PHHIBCKONMD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBCHDODMFF_COFGIJJOFLP_OFFSET))(this);
	}
};
