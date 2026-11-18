#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIDEBHOGLDE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GCFLBGMBHBG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A5B9500)
#define GCFLBGMBHBG_DAKNLGBLNJM_OFFSET UNITYSDK_OFFSET(0x1A5B95F0)
#define GCFLBGMBHBG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5B9700)
#define GCFLBGMBHBG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A5B9710)
#define GCFLBGMBHBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B94F0)

inline static constexpr unsigned int GCFLBGMBHBG_TypeDefinitionIndex = 11011;

class GCFLBGMBHBG : public ::System::Object
{
public:
	::System::String* PPMGGJAODGL; // 0x10
	::CIDEBHOGLDE HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::CIDEBHOGLDE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CIDEBHOGLDE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GCFLBGMBHBG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFLBGMBHBG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* DAKNLGBLNJM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFLBGMBHBG_DAKNLGBLNJM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GCFLBGMBHBG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFLBGMBHBG_LJANCIBECFG_OFFSET))(this);
	}
};
