#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLAHAIKBKFJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define OILDIPNNPEF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AB33180)
#define OILDIPNNPEF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AB333B0)
#define OILDIPNNPEF_KCFBOPKOLKI_OFFSET UNITYSDK_OFFSET(0x1AB32F00)
#define OILDIPNNPEF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AB333C0)
#define OILDIPNNPEF_OAGNMOOJCCJ_OFFSET UNITYSDK_OFFSET(0x1AB33270)
#define OILDIPNNPEF_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1AB33040)
#define OILDIPNNPEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB32EF0)

inline static constexpr unsigned int OILDIPNNPEF_TypeDefinitionIndex = 15289;

class OILDIPNNPEF : public ::System::Object
{
public:
	::LLAHAIKBKFJ HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Int32 MFAAMEMILEM; // 0x2C
	::System::Int32 NAGLFKHCCJI; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36

	::System::Void _ctor(::LLAHAIKBKFJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LLAHAIKBKFJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OILDIPNNPEF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 KCFBOPKOLKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OILDIPNNPEF_KCFBOPKOLKI_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OILDIPNNPEF_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OILDIPNNPEF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 OAGNMOOJCCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OILDIPNNPEF_OAGNMOOJCCJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OILDIPNNPEF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OILDIPNNPEF_LJANCIBECFG_OFFSET))(this);
	}
};
