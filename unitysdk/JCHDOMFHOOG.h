#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHLKHFANIHN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JCHDOMFHOOG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A500780)
#define JCHDOMFHOOG_DCEPPPHBCLD_OFFSET UNITYSDK_OFFSET(0x1A501060)
#define JCHDOMFHOOG_DNODFLBOPNM_OFFSET UNITYSDK_OFFSET(0x1A500B10)
#define JCHDOMFHOOG_FIECAGGDBBN_OFFSET UNITYSDK_OFFSET(0x1A500DE0)
#define JCHDOMFHOOG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5009B0)
#define JCHDOMFHOOG_GPJONNLPAFK_OFFSET UNITYSDK_OFFSET(0x1A500F20)
#define JCHDOMFHOOG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A500B00)
#define JCHDOMFHOOG_NIOGMJFDLBP_OFFSET UNITYSDK_OFFSET(0x1A500620)
#define JCHDOMFHOOG_PAJKJKDELMF_OFFSET UNITYSDK_OFFSET(0x1A5009C0)
#define JCHDOMFHOOG_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A500870)
#define JCHDOMFHOOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A500610)

inline static constexpr unsigned int JCHDOMFHOOG_TypeDefinitionIndex = 10223;

class JCHDOMFHOOG : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* NAOOIBIJHCF; // 0x18
	::System::Collections::Generic::List_1<::System::Single>* AKGFMMCGABB; // 0x20
	::EHLKHFANIHN HBDPAIKANDB; // 0x28
	::System::Single KLLHECLJALE; // 0x38
	::System::Int32 PNKKLCEAHGC; // 0x3C
	::System::Int32 JPKIECGNKKF; // 0x40
	::System::Byte CNIAANMNOCF; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x45
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x48
	::System::Int32 FJDELDDIINL; // 0x4C

	::System::Void _ctor(::EHLKHFANIHN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EHLKHFANIHN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JCHDOMFHOOG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Single NIOGMJFDLBP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHDOMFHOOG_NIOGMJFDLBP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHDOMFHOOG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHDOMFHOOG_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCHDOMFHOOG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PAJKJKDELMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHDOMFHOOG_PAJKJKDELMF_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHDOMFHOOG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Single>* DNODFLBOPNM()
	{
		return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHDOMFHOOG_DNODFLBOPNM_OFFSET))(this);
	}

	::System::Int32 FIECAGGDBBN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHDOMFHOOG_FIECAGGDBBN_OFFSET))(this);
	}

	::System::Int32 GPJONNLPAFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHDOMFHOOG_GPJONNLPAFK_OFFSET))(this);
	}

	::System::String* DCEPPPHBCLD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHDOMFHOOG_DCEPPPHBCLD_OFFSET))(this);
	}
};
