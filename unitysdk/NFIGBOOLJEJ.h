#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOKEMPJGCBE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFIGBOOLJEJ_CHFINMJKACA_OFFSET UNITYSDK_OFFSET(0x1C18D680)
#define NFIGBOOLJEJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C18DB90)
#define NFIGBOOLJEJ_CPJIMGDOBJE_OFFSET UNITYSDK_OFFSET(0x1C18D960)
#define NFIGBOOLJEJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C18D950)
#define NFIGBOOLJEJ_HPCALNPPNCI_OFFSET UNITYSDK_OFFSET(0x1C18DD90)
#define NFIGBOOLJEJ_JLLABAOHKCH_OFFSET UNITYSDK_OFFSET(0x1C18DC80)
#define NFIGBOOLJEJ_LFPICDMHAOC_OFFSET UNITYSDK_OFFSET(0x1C18DA80)
#define NFIGBOOLJEJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C18DA70)
#define NFIGBOOLJEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C18D670)

inline static constexpr unsigned int NFIGBOOLJEJ_TypeDefinitionIndex = 10580;

class NFIGBOOLJEJ : public ::System::Object
{
public:
	::MOKEMPJGCBE HBDPAIKANDB; // 0x10
	::System::String* PHJHGPHNLKP; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* HLJLGNDNDLB; // 0x28
	::System::String* AJCCNEHMBNC; // 0x30
	::System::String* PDKLCIKAIEH; // 0x38
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x40
	::System::Byte GCHCDJCFCEG; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A
	::System::Byte CNIAANMNOCF; // 0x4B
	::System::Int32 ALJBLKHIIIH; // 0x4C

	::System::Void _ctor(::MOKEMPJGCBE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MOKEMPJGCBE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NFIGBOOLJEJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* CHFINMJKACA()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIGBOOLJEJ_CHFINMJKACA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NFIGBOOLJEJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* CPJIMGDOBJE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIGBOOLJEJ_CPJIMGDOBJE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIGBOOLJEJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* LFPICDMHAOC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIGBOOLJEJ_LFPICDMHAOC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIGBOOLJEJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* JLLABAOHKCH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIGBOOLJEJ_JLLABAOHKCH_OFFSET))(this);
	}

	::System::Int32 HPCALNPPNCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIGBOOLJEJ_HPCALNPPNCI_OFFSET))(this);
	}
};
