#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGAGBPOCKMC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KPIPHFIFGCK_APCMKAMJJLC_OFFSET UNITYSDK_OFFSET(0x19D9DB80)
#define KPIPHFIFGCK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19D9DCD0)
#define KPIPHFIFGCK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19D9DCC0)
#define KPIPHFIFGCK_KLHGKGDFFNF_OFFSET UNITYSDK_OFFSET(0x19D9D930)
#define KPIPHFIFGCK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19D9D920)
#define KPIPHFIFGCK_OLGPFIDHMOI_OFFSET UNITYSDK_OFFSET(0x19D9DA70)
#define KPIPHFIFGCK__CTOR_OFFSET UNITYSDK_OFFSET(0x19D9D910)

inline static constexpr unsigned int KPIPHFIFGCK_TypeDefinitionIndex = 16281;

class KPIPHFIFGCK : public ::System::Object
{
public:
	::GGAGBPOCKMC HBDPAIKANDB; // 0x10
	::System::String* DDIHKENPGAH; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 BKJPKBELCLP; // 0x30
	::System::Int32 CIOGCBODICJ; // 0x34
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte GCHCDJCFCEG; // 0x3A

	::System::Void _ctor(::GGAGBPOCKMC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GGAGBPOCKMC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KPIPHFIFGCK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIPHFIFGCK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 KLHGKGDFFNF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIPHFIFGCK_KLHGKGDFFNF_OFFSET))(this);
	}

	::System::String* OLGPFIDHMOI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIPHFIFGCK_OLGPFIDHMOI_OFFSET))(this);
	}

	::System::Int32 APCMKAMJJLC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIPHFIFGCK_APCMKAMJJLC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPIPHFIFGCK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPIPHFIFGCK_COFGIJJOFLP_OFFSET))(this);
	}
};
