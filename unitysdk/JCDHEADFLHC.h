#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHKDLFDIJDA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JCDHEADFLHC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B62FAF0)
#define JCDHEADFLHC_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x1B62F9A0)
#define JCDHEADFLHC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B62FAE0)
#define JCDHEADFLHC_JFCNOLHFLHO_OFFSET UNITYSDK_OFFSET(0x1B62F580)
#define JCDHEADFLHC_KJJLOLGMBAD_OFFSET UNITYSDK_OFFSET(0x1B62F6D0)
#define JCDHEADFLHC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B62F6C0)
#define JCDHEADFLHC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B62F570)

inline static constexpr unsigned int JCDHEADFLHC_TypeDefinitionIndex = 14567;

class JCDHEADFLHC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* GPBJPNCPDIL; // 0x10
	::HHKDLFDIJDA HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 JMCDNAHGIGC; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 NAFDHMFICCJ; // 0x38

	::System::Void _ctor(::HHKDLFDIJDA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HHKDLFDIJDA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JCDHEADFLHC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 JFCNOLHFLHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDHEADFLHC_JFCNOLHFLHO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDHEADFLHC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* KJJLOLGMBAD()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDHEADFLHC_KJJLOLGMBAD_OFFSET))(this);
	}

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDHEADFLHC_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCDHEADFLHC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDHEADFLHC_COFGIJJOFLP_OFFSET))(this);
	}
};
