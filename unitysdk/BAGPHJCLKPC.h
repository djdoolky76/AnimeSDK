#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMJCGDJBANF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define BAGPHJCLKPC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17EEAB60)
#define BAGPHJCLKPC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17EEAC60)
#define BAGPHJCLKPC_GFBALOFNCNN_OFFSET UNITYSDK_OFFSET(0x17EEAC70)
#define BAGPHJCLKPC_LFGIDEIHCID_OFFSET UNITYSDK_OFFSET(0x17EEAEF0)
#define BAGPHJCLKPC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17EEAC50)
#define BAGPHJCLKPC_MHKKOFEKPHI_OFFSET UNITYSDK_OFFSET(0x17EEADB0)
#define BAGPHJCLKPC__CTOR_OFFSET UNITYSDK_OFFSET(0x17EEAB50)

inline static constexpr unsigned int BAGPHJCLKPC_TypeDefinitionIndex = 9383;

class BAGPHJCLKPC : public ::System::Object
{
public:
	::IMJCGDJBANF HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 EDGGHMCNHKN; // 0x28
	::System::Int32 CFMLELJAKFK; // 0x2C
	::System::Int32 CKALBMAMAKP; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36

	::System::Void _ctor(::IMJCGDJBANF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IMJCGDJBANF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BAGPHJCLKPC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGPHJCLKPC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGPHJCLKPC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BAGPHJCLKPC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 GFBALOFNCNN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGPHJCLKPC_GFBALOFNCNN_OFFSET))(this);
	}

	::System::Int32 MHKKOFEKPHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGPHJCLKPC_MHKKOFEKPHI_OFFSET))(this);
	}

	::System::Int32 LFGIDEIHCID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGPHJCLKPC_LFGIDEIHCID_OFFSET))(this);
	}
};
