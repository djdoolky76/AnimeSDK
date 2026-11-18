#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIOCKFABPMK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define HGPLKLCBEJF_CNGFHHECIEL_OFFSET UNITYSDK_OFFSET(0x17C00870)
#define HGPLKLCBEJF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17C009B0)
#define HGPLKLCBEJF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17C00AB0)
#define HGPLKLCBEJF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17C00AA0)
#define HGPLKLCBEJF__CTOR_OFFSET UNITYSDK_OFFSET(0x17C00860)

inline static constexpr unsigned int HGPLKLCBEJF_TypeDefinitionIndex = 10532;

class HGPLKLCBEJF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::MIOCKFABPMK HBDPAIKANDB; // 0x18
	::System::Int32 CEEBHOAKLFN; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E

	::System::Void _ctor(::MIOCKFABPMK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MIOCKFABPMK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HGPLKLCBEJF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 CNGFHHECIEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPLKLCBEJF_CNGFHHECIEL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPLKLCBEJF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGPLKLCBEJF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HGPLKLCBEJF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
