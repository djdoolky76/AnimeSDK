#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIMNAFIDHOL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OCJPAOLCHFG_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x17363450)
#define OCJPAOLCHFG_CHMPILPGOON_OFFSET UNITYSDK_OFFSET(0x173637E0)
#define OCJPAOLCHFG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x173635A0)
#define OCJPAOLCHFG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17363590)
#define OCJPAOLCHFG_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x17363310)
#define OCJPAOLCHFG_JENCFBLNJBL_OFFSET UNITYSDK_OFFSET(0x17363200)
#define OCJPAOLCHFG_KBIIPJALCNE_OFFSET UNITYSDK_OFFSET(0x17363690)
#define OCJPAOLCHFG_KMJOKBIIEDB_OFFSET UNITYSDK_OFFSET(0x173630C0)
#define OCJPAOLCHFG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x173637D0)
#define OCJPAOLCHFG_MAHJELIDOOE_OFFSET UNITYSDK_OFFSET(0x173638F0)
#define OCJPAOLCHFG__CTOR_OFFSET UNITYSDK_OFFSET(0x173630B0)

inline static constexpr unsigned int OCJPAOLCHFG_TypeDefinitionIndex = 12255;

class OCJPAOLCHFG : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* AGIOKAICIHE; // 0x18
	::DIMNAFIDHOL HBDPAIKANDB; // 0x20
	::System::String* GPNJCCHKLIP; // 0x30
	::System::String* CLJPKAOGOLE; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 CCJCDLIJNKA; // 0x44
	::System::Int32 OCFJMFHDEBP; // 0x48
	::System::Int32 OKBBGPGIODD; // 0x4C
	::System::Int32 OGAGKPKBBCG; // 0x50
	::System::Int32 NLCDENLKOPM; // 0x54

	::System::Void _ctor(::DIMNAFIDHOL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DIMNAFIDHOL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OCJPAOLCHFG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 KMJOKBIIEDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPAOLCHFG_KMJOKBIIEDB_OFFSET))(this);
	}

	::System::String* JENCFBLNJBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPAOLCHFG_JENCFBLNJBL_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPAOLCHFG_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPAOLCHFG_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OCJPAOLCHFG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPAOLCHFG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 KBIIPJALCNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPAOLCHFG_KBIIPJALCNE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPAOLCHFG_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* CHMPILPGOON()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPAOLCHFG_CHMPILPGOON_OFFSET))(this);
	}

	::System::Int32 MAHJELIDOOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPAOLCHFG_MAHJELIDOOE_OFFSET))(this);
	}
};
