#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HENOIOILMGG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define OGJGICNPHKF_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x1BAB5020)
#define OGJGICNPHKF_CJAKLAHOILC_OFFSET UNITYSDK_OFFSET(0x1BAB4DF0)
#define OGJGICNPHKF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BAB4F30)
#define OGJGICNPHKF_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x1BAB4B60)
#define OGJGICNPHKF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BAB5160)
#define OGJGICNPHKF_JMOOPMLOIGP_OFFSET UNITYSDK_OFFSET(0x1BAB4CA0)
#define OGJGICNPHKF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BAB4DE0)
#define OGJGICNPHKF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB4B50)

inline static constexpr unsigned int OGJGICNPHKF_TypeDefinitionIndex = 9271;

class OGJGICNPHKF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::HENOIOILMGG HBDPAIKANDB; // 0x18
	::System::Int32 JMCDNAHGIGC; // 0x28
	::System::Int32 BPMHKHIBGEJ; // 0x2C
	::System::Int32 NOMPNMNEALE; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 IEPDLDJHJJN; // 0x38

	::System::Void _ctor(::HENOIOILMGG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HENOIOILMGG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OGJGICNPHKF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJGICNPHKF_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Int32 JMOOPMLOIGP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJGICNPHKF_JMOOPMLOIGP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJGICNPHKF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 CJAKLAHOILC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJGICNPHKF_CJAKLAHOILC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJGICNPHKF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJGICNPHKF_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OGJGICNPHKF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
