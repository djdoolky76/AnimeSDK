#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELHDPPPLPJO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MDNAJKNCEDF_AAEAAMPJGLB_OFFSET UNITYSDK_OFFSET(0x1959FE20)
#define MDNAJKNCEDF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1959FD30)
#define MDNAJKNCEDF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x195A0230)
#define MDNAJKNCEDF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1959FD20)
#define MDNAJKNCEDF_MDPBPBNMKJA_OFFSET UNITYSDK_OFFSET(0x1959FBE0)
#define MDNAJKNCEDF_MMNECFOLDJI_OFFSET UNITYSDK_OFFSET(0x1959FF60)
#define MDNAJKNCEDF_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x195A0240)
#define MDNAJKNCEDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1959FBD0)

inline static constexpr unsigned int MDNAJKNCEDF_TypeDefinitionIndex = 10166;

class MDNAJKNCEDF : public ::System::Object
{
public:
	::ELHDPPPLPJO HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* FPLOCDBPANG; // 0x28
	::System::Int32 LNDOJKEIPFI; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 DCONCBNHHEO; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x3C

	::System::Void _ctor(::ELHDPPPLPJO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ELHDPPPLPJO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MDNAJKNCEDF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 MDPBPBNMKJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNAJKNCEDF_MDPBPBNMKJA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNAJKNCEDF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNAJKNCEDF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 AAEAAMPJGLB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNAJKNCEDF_AAEAAMPJGLB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MMNECFOLDJI()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNAJKNCEDF_MMNECFOLDJI_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDNAJKNCEDF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNAJKNCEDF_PPIFNHNGCGO_OFFSET))(this);
	}
};
