#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGAPOLPMLJP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MJHIKHDLLKJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BA9B0C0)
#define MJHIKHDLLKJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BA9AE90)
#define MJHIKHDLLKJ_GAEHNCNAJGL_OFFSET UNITYSDK_OFFSET(0x1BA9AFB0)
#define MJHIKHDLLKJ_IPIAEGPFOCF_OFFSET UNITYSDK_OFFSET(0x1BA9AEA0)
#define MJHIKHDLLKJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BA9AE80)
#define MJHIKHDLLKJ_PLPOOBABKIC_OFFSET UNITYSDK_OFFSET(0x1BA9B1B0)
#define MJHIKHDLLKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9AE70)

inline static constexpr unsigned int MJHIKHDLLKJ_TypeDefinitionIndex = 15351;

class MJHIKHDLLKJ : public ::System::Object
{
public:
	::NGAPOLPMLJP HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* CDGFEMCLLJC; // 0x28
	::System::String* IFCJJDKJNDC; // 0x30
	::System::Int32 JKOGCDGGPFB; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E

	::System::Void _ctor(::NGAPOLPMLJP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NGAPOLPMLJP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MJHIKHDLLKJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHIKHDLLKJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MJHIKHDLLKJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* IPIAEGPFOCF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHIKHDLLKJ_IPIAEGPFOCF_OFFSET))(this);
	}

	::System::String* GAEHNCNAJGL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHIKHDLLKJ_GAEHNCNAJGL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHIKHDLLKJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PLPOOBABKIC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHIKHDLLKJ_PLPOOBABKIC_OFFSET))(this);
	}
};
