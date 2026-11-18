#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHBMJDECOGK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BCPJFEEGEDH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x194F7140)
#define BCPJFEEGEDH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x194F74B0)
#define BCPJFEEGEDH_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x194F7770)
#define BCPJFEEGEDH_KPHODAIAEKB_OFFSET UNITYSDK_OFFSET(0x194F74C0)
#define BCPJFEEGEDH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x194F7760)
#define BCPJFEEGEDH_PMFAENDEDOB_OFFSET UNITYSDK_OFFSET(0x194F7370)
#define BCPJFEEGEDH_PNMKDCACAFL_OFFSET UNITYSDK_OFFSET(0x194F7230)
#define BCPJFEEGEDH_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x194F7620)
#define BCPJFEEGEDH__CTOR_OFFSET UNITYSDK_OFFSET(0x194F7130)

inline static constexpr unsigned int BCPJFEEGEDH_TypeDefinitionIndex = 10413;

class BCPJFEEGEDH : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* EOALHEEBMKM; // 0x18
	::FHBMJDECOGK HBDPAIKANDB; // 0x20
	::System::Boolean JEBGJGJKDOA; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte CNIAANMNOCF; // 0x33
	::System::Int32 MMOENNLOGDO; // 0x34
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Int32 OMNNHKKAIHN; // 0x3C

	::System::Void _ctor(::FHBMJDECOGK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FHBMJDECOGK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BCPJFEEGEDH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPJFEEGEDH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PNMKDCACAFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPJFEEGEDH_PNMKDCACAFL_OFFSET))(this);
	}

	::System::Int32 PMFAENDEDOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPJFEEGEDH_PMFAENDEDOB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BCPJFEEGEDH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean KPHODAIAEKB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPJFEEGEDH_KPHODAIAEKB_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPJFEEGEDH_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPJFEEGEDH_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPJFEEGEDH_IFDIOIOCGDP_OFFSET))(this);
	}
};
