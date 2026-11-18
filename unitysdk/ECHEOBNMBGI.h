#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PEEKDGJHKOE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define ECHEOBNMBGI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADCF460)
#define ECHEOBNMBGI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADCF690)
#define ECHEOBNMBGI_KKPICIGKGME_OFFSET UNITYSDK_OFFSET(0x1ADCF310)
#define ECHEOBNMBGI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADCF450)
#define ECHEOBNMBGI_PLHGJKEGMIM_OFFSET UNITYSDK_OFFSET(0x1ADCF550)
#define ECHEOBNMBGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADCF300)

inline static constexpr unsigned int ECHEOBNMBGI_TypeDefinitionIndex = 14600;

class ECHEOBNMBGI : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::PEEKDGJHKOE HBDPAIKANDB; // 0x18
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 PBIGNAOJHIA; // 0x2C
	::System::Int32 OPJOFKJFKBD; // 0x30

	::System::Void _ctor(::PEEKDGJHKOE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PEEKDGJHKOE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ECHEOBNMBGI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 KKPICIGKGME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHEOBNMBGI_KKPICIGKGME_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHEOBNMBGI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHEOBNMBGI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PLHGJKEGMIM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHEOBNMBGI_PLHGJKEGMIM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECHEOBNMBGI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
