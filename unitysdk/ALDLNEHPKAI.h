#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFCNEDACPDM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define ALDLNEHPKAI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15774510)
#define ALDLNEHPKAI_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x15774610)
#define ALDLNEHPKAI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x157743C0)
#define ALDLNEHPKAI_JMDAHDPEMOB_OFFSET UNITYSDK_OFFSET(0x15774750)
#define ALDLNEHPKAI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15774600)
#define ALDLNEHPKAI_PCEMKDPPCEG_OFFSET UNITYSDK_OFFSET(0x157743D0)
#define ALDLNEHPKAI__CTOR_OFFSET UNITYSDK_OFFSET(0x157743B0)

inline static constexpr unsigned int ALDLNEHPKAI_TypeDefinitionIndex = 14838;

class ALDLNEHPKAI : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::CFCNEDACPDM HBDPAIKANDB; // 0x18
	::System::Int32 JMCDNAHGIGC; // 0x28
	::System::Int32 JFMJBEPMHBP; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 EBEMOEEGAEB; // 0x34

	::System::Void _ctor(::CFCNEDACPDM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CFCNEDACPDM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ALDLNEHPKAI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ALDLNEHPKAI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PCEMKDPPCEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDLNEHPKAI_PCEMKDPPCEG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDLNEHPKAI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDLNEHPKAI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDLNEHPKAI_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Int32 JMDAHDPEMOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDLNEHPKAI_JMDAHDPEMOB_OFFSET))(this);
	}
};
