#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDHJIIJFNBB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define DJJPGGCECFH_BIKODCEMKLH_OFFSET UNITYSDK_OFFSET(0x19C07AC0)
#define DJJPGGCECFH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19C07C20)
#define DJJPGGCECFH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19C07AB0)
#define DJJPGGCECFH_LAAOGDACKJA_OFFSET UNITYSDK_OFFSET(0x19C07950)
#define DJJPGGCECFH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19C07D10)
#define DJJPGGCECFH__CTOR_OFFSET UNITYSDK_OFFSET(0x19C07940)

inline static constexpr unsigned int DJJPGGCECFH_TypeDefinitionIndex = 9886;

class DJJPGGCECFH : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::BDHJIIJFNBB HBDPAIKANDB; // 0x18
	::System::Single BJDCMMADEAL; // 0x28
	::System::Single GNCCIGHJDJJ; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::BDHJIIJFNBB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BDHJIIJFNBB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DJJPGGCECFH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Single LAAOGDACKJA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJPGGCECFH_LAAOGDACKJA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DJJPGGCECFH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single BIKODCEMKLH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJPGGCECFH_BIKODCEMKLH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJPGGCECFH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJPGGCECFH_LJANCIBECFG_OFFSET))(this);
	}
};
