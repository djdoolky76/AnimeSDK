#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFIJGPIILFF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DKHBIMDHOCD_APEONCBIGPN_OFFSET UNITYSDK_OFFSET(0x1879BE20)
#define DKHBIMDHOCD_CKNPOJGOILK_OFFSET UNITYSDK_OFFSET(0x1879BBF0)
#define DKHBIMDHOCD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1879BF60)
#define DKHBIMDHOCD_DJMMOACFEIE_OFFSET UNITYSDK_OFFSET(0x1879C1A0)
#define DKHBIMDHOCD_FJOBONCEHJN_OFFSET UNITYSDK_OFFSET(0x1879BD10)
#define DKHBIMDHOCD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1879C190)
#define DKHBIMDHOCD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1879BD00)
#define DKHBIMDHOCD_NPKPAEDNJNM_OFFSET UNITYSDK_OFFSET(0x1879C050)
#define DKHBIMDHOCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1879BBE0)

inline static constexpr unsigned int DKHBIMDHOCD_TypeDefinitionIndex = 14440;

class DKHBIMDHOCD : public ::System::Object
{
public:
	::AFIJGPIILFF HBDPAIKANDB; // 0x10
	::System::String* DKIHDOOODBJ; // 0x20
	::System::String* GHHGDBEKNEF; // 0x28
	::System::String* IPNLLIAPAPC; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Int32 COCHLNCCKGP; // 0x40
	::System::Int32 JAMKNFHEOBM; // 0x44
	::System::Byte CNIAANMNOCF; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x49
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4A

	::System::Void _ctor(::AFIJGPIILFF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AFIJGPIILFF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DKHBIMDHOCD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* CKNPOJGOILK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHBIMDHOCD_CKNPOJGOILK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHBIMDHOCD_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* FJOBONCEHJN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHBIMDHOCD_FJOBONCEHJN_OFFSET))(this);
	}

	::System::Int32 APEONCBIGPN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHBIMDHOCD_APEONCBIGPN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHBIMDHOCD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 NPKPAEDNJNM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHBIMDHOCD_NPKPAEDNJNM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKHBIMDHOCD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* DJMMOACFEIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKHBIMDHOCD_DJMMOACFEIE_OFFSET))(this);
	}
};
