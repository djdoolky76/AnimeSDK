#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHHBAGAJAJH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NPNDFLJLNPE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1735CD00)
#define NPNDFLJLNPE_FFKHDOBKMDB_OFFSET UNITYSDK_OFFSET(0x1735CBF0)
#define NPNDFLJLNPE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1735CF50)
#define NPNDFLJLNPE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1735CBE0)
#define NPNDFLJLNPE_PEOEBEBFIJO_OFFSET UNITYSDK_OFFSET(0x1735CDF0)
#define NPNDFLJLNPE_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1735CAA0)
#define NPNDFLJLNPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1735CA90)

inline static constexpr unsigned int NPNDFLJLNPE_TypeDefinitionIndex = 9514;

class NPNDFLJLNPE : public ::System::Object
{
public:
	::FHHBAGAJAJH HBDPAIKANDB; // 0x10
	::System::String* BFNNKJDOPKP; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Single AEMJJEABKGP; // 0x38

	::System::Void _ctor(::FHHBAGAJAJH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FHHBAGAJAJH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NPNDFLJLNPE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNDFLJLNPE_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNDFLJLNPE_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* FFKHDOBKMDB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNDFLJLNPE_FFKHDOBKMDB_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNDFLJLNPE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Single PEOEBEBFIJO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNDFLJLNPE_PEOEBEBFIJO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPNDFLJLNPE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
