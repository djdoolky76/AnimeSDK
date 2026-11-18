#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCEPKELGACD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define ALGJEJEPPKF_AOJHOKPCCPI_OFFSET UNITYSDK_OFFSET(0x17EE8440)
#define ALGJEJEPPKF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17EE86C0)
#define ALGJEJEPPKF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17EE88F0)
#define ALGJEJEPPKF_GILJKIIHBIG_OFFSET UNITYSDK_OFFSET(0x17EE8580)
#define ALGJEJEPPKF_HLKEDDIIHOH_OFFSET UNITYSDK_OFFSET(0x17EE82F0)
#define ALGJEJEPPKF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17EE8430)
#define ALGJEJEPPKF_OJKLHGCOIHP_OFFSET UNITYSDK_OFFSET(0x17EE87B0)
#define ALGJEJEPPKF__CTOR_OFFSET UNITYSDK_OFFSET(0x17EE82E0)

inline static constexpr unsigned int ALGJEJEPPKF_TypeDefinitionIndex = 10336;

class ALGJEJEPPKF : public ::System::Object
{
public:
	::JCEPKELGACD HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 LHLMKKDECJF; // 0x28
	::System::Int32 PKDAPLLFOAI; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 NIBGFIDMFGP; // 0x34
	::System::Int32 MIOFKMCGPNL; // 0x38

	::System::Void _ctor(::JCEPKELGACD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JCEPKELGACD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ALGJEJEPPKF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HLKEDDIIHOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGJEJEPPKF_HLKEDDIIHOH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGJEJEPPKF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 AOJHOKPCCPI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGJEJEPPKF_AOJHOKPCCPI_OFFSET))(this);
	}

	::System::Int32 GILJKIIHBIG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGJEJEPPKF_GILJKIIHBIG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGJEJEPPKF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 OJKLHGCOIHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALGJEJEPPKF_OJKLHGCOIHP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ALGJEJEPPKF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
