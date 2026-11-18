#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFJELANDEDO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DMIGIJMHABK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17A9D760)
#define DMIGIJMHABK_CPBNNNFPKEM_OFFSET UNITYSDK_OFFSET(0x17A9D850)
#define DMIGIJMHABK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17A9D990)
#define DMIGIJMHABK_HKAAIJAKCAD_OFFSET UNITYSDK_OFFSET(0x17A9DAF0)
#define DMIGIJMHABK_KEDBBKFOLOM_OFFSET UNITYSDK_OFFSET(0x17A9D9B0)
#define DMIGIJMHABK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17A9D9A0)
#define DMIGIJMHABK__CTOR_OFFSET UNITYSDK_OFFSET(0x17A9D750)

inline static constexpr unsigned int DMIGIJMHABK_TypeDefinitionIndex = 9974;

class DMIGIJMHABK : public ::System::Object
{
public:
	::System::String* EPDKJEJMJLF; // 0x10
	::NFJELANDEDO HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* IMAFCDDJOME; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 CMEOFFAGEBD; // 0x3C
	::System::Int32 NMGJHKCJGID; // 0x40

	::System::Void _ctor(::NFJELANDEDO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NFJELANDEDO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DMIGIJMHABK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMIGIJMHABK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 CPBNNNFPKEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMIGIJMHABK_CPBNNNFPKEM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DMIGIJMHABK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMIGIJMHABK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 KEDBBKFOLOM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMIGIJMHABK_KEDBBKFOLOM_OFFSET))(this);
	}

	::System::String* HKAAIJAKCAD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMIGIJMHABK_HKAAIJAKCAD_OFFSET))(this);
	}
};
