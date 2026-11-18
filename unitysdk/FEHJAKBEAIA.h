#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNMOAPDBLAP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define FEHJAKBEAIA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18B98350)
#define FEHJAKBEAIA_FDBCDLHJAKL_OFFSET UNITYSDK_OFFSET(0x18B987B0)
#define FEHJAKBEAIA_FGLBBOGKCPG_OFFSET UNITYSDK_OFFSET(0x18B98240)
#define FEHJAKBEAIA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18B98230)
#define FEHJAKBEAIA_HMDGCICMGJI_OFFSET UNITYSDK_OFFSET(0x18B98440)
#define FEHJAKBEAIA_LAGGHDGDCCN_OFFSET UNITYSDK_OFFSET(0x18B98690)
#define FEHJAKBEAIA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18B987A0)
#define FEHJAKBEAIA_NDCPGHGEPAA_OFFSET UNITYSDK_OFFSET(0x18B988C0)
#define FEHJAKBEAIA_OGHLKPAPHKA_OFFSET UNITYSDK_OFFSET(0x18B98580)
#define FEHJAKBEAIA__CTOR_OFFSET UNITYSDK_OFFSET(0x18B98220)

inline static constexpr unsigned int FEHJAKBEAIA_TypeDefinitionIndex = 10674;

class FEHJAKBEAIA : public ::System::Object
{
public:
	::System::String* HBEPEMGIABI; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* HLBDNKNBBMD; // 0x20
	::System::String* ICMEDBFPHLP; // 0x28
	::JNMOAPDBLAP HBDPAIKANDB; // 0x30
	::System::String* NDBMEIMJMKM; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x49
	::System::Byte CNIAANMNOCF; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 OENHKBGMOCH; // 0x4C
	::System::Int32 IMIDMHPHFDG; // 0x50
	::System::Int32 IOLIHDJKFDO; // 0x54

	::System::Void _ctor(::JNMOAPDBLAP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JNMOAPDBLAP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FEHJAKBEAIA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FEHJAKBEAIA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* FGLBBOGKCPG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHJAKBEAIA_FGLBBOGKCPG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHJAKBEAIA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 HMDGCICMGJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHJAKBEAIA_HMDGCICMGJI_OFFSET))(this);
	}

	::System::String* OGHLKPAPHKA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHJAKBEAIA_OGHLKPAPHKA_OFFSET))(this);
	}

	::System::String* LAGGHDGDCCN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHJAKBEAIA_LAGGHDGDCCN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHJAKBEAIA_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* FDBCDLHJAKL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHJAKBEAIA_FDBCDLHJAKL_OFFSET))(this);
	}

	::System::Int32 NDCPGHGEPAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHJAKBEAIA_NDCPGHGEPAA_OFFSET))(this);
	}
};
