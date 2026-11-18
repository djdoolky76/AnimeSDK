#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JAICEHGFKDI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JEBDOJMPFCI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x152F4C60)
#define JEBDOJMPFCI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x152F4C50)
#define JEBDOJMPFCI_JJKKIJDFBBF_OFFSET UNITYSDK_OFFSET(0x152F4980)
#define JEBDOJMPFCI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x152F4D50)
#define JEBDOJMPFCI_NAFCPNDBHOG_OFFSET UNITYSDK_OFFSET(0x152F4840)
#define JEBDOJMPFCI__CTOR_OFFSET UNITYSDK_OFFSET(0x152F4830)

inline static constexpr unsigned int JEBDOJMPFCI_TypeDefinitionIndex = 16336;

class JEBDOJMPFCI : public ::System::Object
{
public:
	::JAICEHGFKDI HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* IKKNCLLBOIG; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 EFOJAAKENAP; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36

	::System::Void _ctor(::JAICEHGFKDI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JAICEHGFKDI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JEBDOJMPFCI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 NAFCPNDBHOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBDOJMPFCI_NAFCPNDBHOG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JJKKIJDFBBF()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBDOJMPFCI_JJKKIJDFBBF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JEBDOJMPFCI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBDOJMPFCI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBDOJMPFCI_LJANCIBECFG_OFFSET))(this);
	}
};
