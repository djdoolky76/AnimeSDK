#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKDLDIIOBDI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HELADGKNBCI_AIFICEKPKBI_OFFSET UNITYSDK_OFFSET(0x1BAD84E0)
#define HELADGKNBCI_CKFLOKCKPBO_OFFSET UNITYSDK_OFFSET(0x1BAD8120)
#define HELADGKNBCI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BAD83F0)
#define HELADGKNBCI_FJNDPALNMOG_OFFSET UNITYSDK_OFFSET(0x1BAD7FC0)
#define HELADGKNBCI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BAD8110)
#define HELADGKNBCI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BAD8100)
#define HELADGKNBCI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD7FB0)

inline static constexpr unsigned int HELADGKNBCI_TypeDefinitionIndex = 14282;

class HELADGKNBCI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* PFNAKDLCOOC; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::AKDLDIIOBDI HBDPAIKANDB; // 0x20
	::System::Int32 NOCNLGAMDCD; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte GCHCDJCFCEG; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 AFBGBPDHLPO; // 0x38

	::System::Void _ctor(::AKDLDIIOBDI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AKDLDIIOBDI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HELADGKNBCI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 FJNDPALNMOG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HELADGKNBCI_FJNDPALNMOG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HELADGKNBCI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HELADGKNBCI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* CKFLOKCKPBO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HELADGKNBCI_CKFLOKCKPBO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELADGKNBCI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 AIFICEKPKBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HELADGKNBCI_AIFICEKPKBI_OFFSET))(this);
	}
};
