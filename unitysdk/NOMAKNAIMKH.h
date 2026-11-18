#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KINJKACFGDO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOMAKNAIMKH_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x1D0CDA40)
#define NOMAKNAIMKH_BLMLGKCAIEP_OFFSET UNITYSDK_OFFSET(0x1D0CD770)
#define NOMAKNAIMKH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1D0CDCE0)
#define NOMAKNAIMKH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1D0CDB80)
#define NOMAKNAIMKH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1D0CDB90)
#define NOMAKNAIMKH_PKDCACEOJIN_OFFSET UNITYSDK_OFFSET(0x1D0CDBA0)
#define NOMAKNAIMKH_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1D0CD630)
#define NOMAKNAIMKH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0CD620)

inline static constexpr unsigned int NOMAKNAIMKH_TypeDefinitionIndex = 12813;

class NOMAKNAIMKH : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* JPNOHBLNEMO; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* LMGADEINBBC; // 0x20
	::KINJKACFGDO HBDPAIKANDB; // 0x28
	::System::String* IENCBDEPMFJ; // 0x38
	::System::Int32 BPFICJMHOLL; // 0x40
	::System::Int32 BPMHKHIBGEJ; // 0x44
	::System::Byte CNIAANMNOCF; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x4C

	::System::Void _ctor(::KINJKACFGDO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KINJKACFGDO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NOMAKNAIMKH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMAKNAIMKH_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BLMLGKCAIEP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMAKNAIMKH_BLMLGKCAIEP_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMAKNAIMKH_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOMAKNAIMKH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMAKNAIMKH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PKDCACEOJIN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMAKNAIMKH_PKDCACEOJIN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMAKNAIMKH_COFGIJJOFLP_OFFSET))(this);
	}
};
