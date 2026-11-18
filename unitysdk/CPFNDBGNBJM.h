#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKEKDOOPDFI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPFNDBGNBJM_CBMOIIBINCE_OFFSET UNITYSDK_OFFSET(0x19BFDB10)
#define CPFNDBGNBJM_CNPFMDOLIBM_OFFSET UNITYSDK_OFFSET(0x19BFD5F0)
#define CPFNDBGNBJM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19BFDA10)
#define CPFNDBGNBJM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19BFDA00)
#define CPFNDBGNBJM_JGAMDMFAHFK_OFFSET UNITYSDK_OFFSET(0x19BFD730)
#define CPFNDBGNBJM_KNEAPFBANOH_OFFSET UNITYSDK_OFFSET(0x19BFDC50)
#define CPFNDBGNBJM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19BFDB00)
#define CPFNDBGNBJM__CTOR_OFFSET UNITYSDK_OFFSET(0x19BFD5E0)

inline static constexpr unsigned int CPFNDBGNBJM_TypeDefinitionIndex = 10408;

class CPFNDBGNBJM : public ::System::Object
{
public:
	::System::String* AHNCCFNPNEC; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* EGGAAMMGINE; // 0x18
	::System::String* DFGKLFAOPLE; // 0x20
	::AKEKDOOPDFI HBDPAIKANDB; // 0x28
	::System::String* DIEACFCFGID; // 0x38
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x40
	::System::Int32 CMLHHHGKBEB; // 0x48
	::System::Int32 EEPFPFLMJGO; // 0x4C
	::System::Byte CNIAANMNOCF; // 0x50
	::System::Boolean LAGOPKIAGOM; // 0x51
	::System::Byte ACIOBDEBDNK; // 0x52
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x53
	::System::Int32 FJFPEBOGNNE; // 0x54

	::System::Void _ctor(::AKEKDOOPDFI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AKEKDOOPDFI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CPFNDBGNBJM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 CNPFMDOLIBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFNDBGNBJM_CNPFMDOLIBM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JGAMDMFAHFK()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFNDBGNBJM_JGAMDMFAHFK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CPFNDBGNBJM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFNDBGNBJM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFNDBGNBJM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 CBMOIIBINCE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFNDBGNBJM_CBMOIIBINCE_OFFSET))(this);
	}

	::System::Int32 KNEAPFBANOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFNDBGNBJM_KNEAPFBANOH_OFFSET))(this);
	}
};
