#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBGKOOAFEBJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EDAGJOHKKAA_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x17F27320)
#define EDAGJOHKKAA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17F275F0)
#define EDAGJOHKKAA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17F276E0)
#define EDAGJOHKKAA_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x17F271D0)
#define EDAGJOHKKAA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17F27310)
#define EDAGJOHKKAA__CTOR_OFFSET UNITYSDK_OFFSET(0x17F271C0)

inline static constexpr unsigned int EDAGJOHKKAA_TypeDefinitionIndex = 10685;

class EDAGJOHKKAA : public ::System::Object
{
public:
	::JBGKOOAFEBJ HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* CDPMOEENODL; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* OIBEAJNLJAB; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 POKJNGILNLB; // 0x3C
	::System::Int32 PCMOJLNOPPM; // 0x40

	::System::Void _ctor(::JBGKOOAFEBJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JBGKOOAFEBJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EDAGJOHKKAA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAGJOHKKAA_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAGJOHKKAA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BHMMKDGCLGB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAGJOHKKAA_BHMMKDGCLGB_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDAGJOHKKAA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EDAGJOHKKAA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
