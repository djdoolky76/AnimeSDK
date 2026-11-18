#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPMBONEBMHB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPLEFHOINGE_AFIKPGHMNCI_OFFSET UNITYSDK_OFFSET(0x1A54BDE0)
#define CPLEFHOINGE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A54C0B0)
#define CPLEFHOINGE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A54BDD0)
#define CPLEFHOINGE_IBDEICOCBCC_OFFSET UNITYSDK_OFFSET(0x1A54BB00)
#define CPLEFHOINGE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A54C1A0)
#define CPLEFHOINGE_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A54B9C0)
#define CPLEFHOINGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A54B9B0)

inline static constexpr unsigned int CPLEFHOINGE_TypeDefinitionIndex = 12683;

class CPLEFHOINGE : public ::System::Object
{
public:
	::KPMBONEBMHB HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* JKEAJLNIHNP; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* DAJFMJJJHCK; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E

	::System::Void _ctor(::KPMBONEBMHB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KPMBONEBMHB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CPLEFHOINGE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLEFHOINGE_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* IBDEICOCBCC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLEFHOINGE_IBDEICOCBCC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CPLEFHOINGE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* AFIKPGHMNCI()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLEFHOINGE_AFIKPGHMNCI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLEFHOINGE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLEFHOINGE_LJANCIBECFG_OFFSET))(this);
	}
};
