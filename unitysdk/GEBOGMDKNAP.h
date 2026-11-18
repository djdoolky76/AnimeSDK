#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEMNFIFIAAK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define GEBOGMDKNAP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A5AF840)
#define GEBOGMDKNAP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5AF830)
#define GEBOGMDKNAP_KCFBOPKOLKI_OFFSET UNITYSDK_OFFSET(0x1A5AF6F0)
#define GEBOGMDKNAP_KIIAOAMIEGN_OFFSET UNITYSDK_OFFSET(0x1A5AF930)
#define GEBOGMDKNAP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A5AF6E0)
#define GEBOGMDKNAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5AF6D0)

inline static constexpr unsigned int GEBOGMDKNAP_TypeDefinitionIndex = 17131;

class GEBOGMDKNAP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::OEMNFIFIAAK HBDPAIKANDB; // 0x18
	::System::Int32 OGAGKPKBBCG; // 0x28
	::System::Int32 NEAHGNAOLDN; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 MFAAMEMILEM; // 0x34

	::System::Void _ctor(::OEMNFIFIAAK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OEMNFIFIAAK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GEBOGMDKNAP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBOGMDKNAP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 KCFBOPKOLKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBOGMDKNAP_KCFBOPKOLKI_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GEBOGMDKNAP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBOGMDKNAP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 KIIAOAMIEGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBOGMDKNAP_KIIAOAMIEGN_OFFSET))(this);
	}
};
