#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFCGIEEECIB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MAOCIBIKLPI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1733F1D0)
#define MAOCIBIKLPI_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1733F670)
#define MAOCIBIKLPI_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x1733F3F0)
#define MAOCIBIKLPI_DPCDIABPPEE_OFFSET UNITYSDK_OFFSET(0x1733F530)
#define MAOCIBIKLPI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1733F2C0)
#define MAOCIBIKLPI_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x1733F2E0)
#define MAOCIBIKLPI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1733F2D0)
#define MAOCIBIKLPI_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1733F090)
#define MAOCIBIKLPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1733F080)

inline static constexpr unsigned int MAOCIBIKLPI_TypeDefinitionIndex = 10545;

class MAOCIBIKLPI : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* IENCBDEPMFJ; // 0x18
	::System::String* EOALHEEBMKM; // 0x20
	::IFCGIEEECIB HBDPAIKANDB; // 0x28
	::System::Int32 JMCDNAHGIGC; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Byte ACIOBDEBDNK; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x40
	::System::Int32 COHJGPCKEIH; // 0x44

	::System::Void _ctor(::IFCGIEEECIB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IFCGIEEECIB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MAOCIBIKLPI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOCIBIKLPI_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOCIBIKLPI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MAOCIBIKLPI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOCIBIKLPI_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOCIBIKLPI_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOCIBIKLPI_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Int32 DPCDIABPPEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOCIBIKLPI_DPCDIABPPEE_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOCIBIKLPI_DECMGICKDLH_OFFSET))(this);
	}
};
