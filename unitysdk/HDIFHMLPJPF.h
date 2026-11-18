#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJOJABEMJGG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define HDIFHMLPJPF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1746FC30)
#define HDIFHMLPJPF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1746F9A0)
#define HDIFHMLPJPF_GKNNCMOBOPK_OFFSET UNITYSDK_OFFSET(0x1746FAF0)
#define HDIFHMLPJPF_IKCOBCPNEAD_OFFSET UNITYSDK_OFFSET(0x1746F9B0)
#define HDIFHMLPJPF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1746F990)
#define HDIFHMLPJPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1746F980)

inline static constexpr unsigned int HDIFHMLPJPF_TypeDefinitionIndex = 14702;

class HDIFHMLPJPF : public ::System::Object
{
public:
	::PJOJABEMJGG HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 EKJMKFNJGMA; // 0x28
	::System::Int32 JPHGFLGIGEK; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::PJOJABEMJGG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PJOJABEMJGG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HDIFHMLPJPF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIFHMLPJPF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HDIFHMLPJPF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 IKCOBCPNEAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIFHMLPJPF_IKCOBCPNEAD_OFFSET))(this);
	}

	::System::Int32 GKNNCMOBOPK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIFHMLPJPF_GKNNCMOBOPK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDIFHMLPJPF_COFGIJJOFLP_OFFSET))(this);
	}
};
