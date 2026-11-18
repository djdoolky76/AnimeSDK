#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BECPPCLMMCD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HFPICEMNMJD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17BFDE60)
#define HFPICEMNMJD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17BFE470)
#define HFPICEMNMJD_GNENEJHEBCF_OFFSET UNITYSDK_OFFSET(0x17BFE220)
#define HFPICEMNMJD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17BFDD40)
#define HFPICEMNMJD_MDLLGIMAGCP_OFFSET UNITYSDK_OFFSET(0x17BFE330)
#define HFPICEMNMJD_OKPHEOMPFHB_OFFSET UNITYSDK_OFFSET(0x17BFDF50)
#define HFPICEMNMJD_PHHIBCKONMD_OFFSET UNITYSDK_OFFSET(0x17BFDD50)
#define HFPICEMNMJD__CTOR_OFFSET UNITYSDK_OFFSET(0x17BFDD30)

inline static constexpr unsigned int HFPICEMNMJD_TypeDefinitionIndex = 15220;

class HFPICEMNMJD : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* DEJEMEMDOGC; // 0x18
	::System::String* FKEJFEMAHMO; // 0x20
	::BECPPCLMMCD HBDPAIKANDB; // 0x28
	::System::String* DOINBIAIOHN; // 0x38
	::System::Int32 JIKOLBKCHNP; // 0x40
	::System::Byte CNIAANMNOCF; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x45
	::System::Byte ACIOBDEBDNK; // 0x46

	::System::Void _ctor(::BECPPCLMMCD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BECPPCLMMCD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HFPICEMNMJD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPICEMNMJD_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* PHHIBCKONMD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPICEMNMJD_PHHIBCKONMD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPICEMNMJD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* OKPHEOMPFHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPICEMNMJD_OKPHEOMPFHB_OFFSET))(this);
	}

	::System::String* GNENEJHEBCF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPICEMNMJD_GNENEJHEBCF_OFFSET))(this);
	}

	::System::Int32 MDLLGIMAGCP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPICEMNMJD_MDLLGIMAGCP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFPICEMNMJD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
