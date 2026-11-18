#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMAAAAPOCIG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define MLCFHPHLJLF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195A6860)
#define MLCFHPHLJLF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x195A6850)
#define MLCFHPHLJLF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x195A6840)
#define MLCFHPHLJLF_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x195A6700)
#define MLCFHPHLJLF__CTOR_OFFSET UNITYSDK_OFFSET(0x195A66F0)

inline static constexpr unsigned int MLCFHPHLJLF_TypeDefinitionIndex = 11061;

class MLCFHPHLJLF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::IMAAAAPOCIG HBDPAIKANDB; // 0x18
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E

	::System::Void _ctor(::IMAAAAPOCIG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IMAAAAPOCIG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MLCFHPHLJLF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCFHPHLJLF_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCFHPHLJLF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MLCFHPHLJLF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCFHPHLJLF_COFGIJJOFLP_OFFSET))(this);
	}
};
