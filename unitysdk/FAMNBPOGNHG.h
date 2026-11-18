#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJGAAHNJJHA.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define FAMNBPOGNHG_BMIONKJFOAF_OFFSET UNITYSDK_OFFSET(0x1B85CEF0)
#define FAMNBPOGNHG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B85C990)
#define FAMNBPOGNHG_FNFECLMIHMK_OFFSET UNITYSDK_OFFSET(0x1B85C6D0)
#define FAMNBPOGNHG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B85C980)
#define FAMNBPOGNHG_HJEFCNNHHEO_OFFSET UNITYSDK_OFFSET(0x1B85CDB0)
#define FAMNBPOGNHG_JHJBHPBECHN_OFFSET UNITYSDK_OFFSET(0x1B85CA80)
#define FAMNBPOGNHG_LDPBJGMJMEB_OFFSET UNITYSDK_OFFSET(0x1B85C830)
#define FAMNBPOGNHG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B85D000)
#define FAMNBPOGNHG_MJHFJFGJJGN_OFFSET UNITYSDK_OFFSET(0x1B85CCA0)
#define FAMNBPOGNHG_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x1B85CB90)
#define FAMNBPOGNHG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B85C6C0)

inline static constexpr unsigned int FAMNBPOGNHG_TypeDefinitionIndex = 12998;

class FAMNBPOGNHG : public ::System::Object
{
public:
	::FJGAAHNJJHA HBDPAIKANDB; // 0x10
	::System::String* OIKCPMJLMGI; // 0x20
	::System::String* FKLBFPKHCOI; // 0x28
	::Foundation::AssetPath DCFAMPONKFB; // 0x30
	::System::String* JNOPLEMFHCH; // 0x40
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x48
	::System::String* OGPLJEMFEAH; // 0x50
	::System::UInt64 NFKOKAIADMI; // 0x58
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x60
	::System::Byte CNIAANMNOCF; // 0x61
	::System::Byte ACIOBDEBDNK; // 0x62
	::System::Byte GCHCDJCFCEG; // 0x63
	::System::Int32 ONPMJGJBNOA; // 0x64

	::System::Void _ctor(::FJGAAHNJJHA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FJGAAHNJJHA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FAMNBPOGNHG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::Foundation::AssetPath FNFECLMIHMK()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMNBPOGNHG_FNFECLMIHMK_OFFSET))(this);
	}

	::System::UInt64 LDPBJGMJMEB()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMNBPOGNHG_LDPBJGMJMEB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FAMNBPOGNHG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMNBPOGNHG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* JHJBHPBECHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMNBPOGNHG_JHJBHPBECHN_OFFSET))(this);
	}

	::System::String* PIPBPLEIPFK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMNBPOGNHG_PIPBPLEIPFK_OFFSET))(this);
	}

	::System::String* MJHFJFGJJGN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMNBPOGNHG_MJHFJFGJJGN_OFFSET))(this);
	}

	::System::Int32 HJEFCNNHHEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMNBPOGNHG_HJEFCNNHHEO_OFFSET))(this);
	}

	::System::String* BMIONKJFOAF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMNBPOGNHG_BMIONKJFOAF_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMNBPOGNHG_LJANCIBECFG_OFFSET))(this);
	}
};
