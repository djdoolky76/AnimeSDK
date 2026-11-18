#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJJBGPCBJOP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KCEOEKMFJPJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19365C60)
#define KCEOEKMFJPJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19365D50)
#define KCEOEKMFJPJ_HNDIKOJAMPP_OFFSET UNITYSDK_OFFSET(0x19365B10)
#define KCEOEKMFJPJ_KABKAAADOAG_OFFSET UNITYSDK_OFFSET(0x193659D0)
#define KCEOEKMFJPJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19365C50)
#define KCEOEKMFJPJ_MKPACJPFIIO_OFFSET UNITYSDK_OFFSET(0x19365D60)
#define KCEOEKMFJPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19322B20)

inline static constexpr unsigned int KCEOEKMFJPJ_TypeDefinitionIndex = 11907;

class KCEOEKMFJPJ : public ::System::Object
{
public:
	::JJJBGPCBJOP HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 KOOMECIMPIE; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 FGEMGHDJEGC; // 0x30
	::System::Int32 JOHGPFHBFMP; // 0x34

	::System::Void _ctor(::JJJBGPCBJOP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JJJBGPCBJOP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KCEOEKMFJPJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 KABKAAADOAG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOEKMFJPJ_KABKAAADOAG_OFFSET))(this);
	}

	::System::Int32 HNDIKOJAMPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOEKMFJPJ_HNDIKOJAMPP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOEKMFJPJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOEKMFJPJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCEOEKMFJPJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MKPACJPFIIO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEOEKMFJPJ_MKPACJPFIIO_OFFSET))(this);
	}
};
