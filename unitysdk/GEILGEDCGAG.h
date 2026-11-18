#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOGAKHBIFFM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GEILGEDCGAG_BAONPNPENDF_OFFSET UNITYSDK_OFFSET(0x1A5BCB00)
#define GEILGEDCGAG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A5BC8B0)
#define GEILGEDCGAG_DKEDCMFJKGK_OFFSET UNITYSDK_OFFSET(0x1A5BC9A0)
#define GEILGEDCGAG_EPPGCAKGEDE_OFFSET UNITYSDK_OFFSET(0x1A5BC630)
#define GEILGEDCGAG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5BCC10)
#define GEILGEDCGAG_IHOKLLDHGKB_OFFSET UNITYSDK_OFFSET(0x1A5BCC30)
#define GEILGEDCGAG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A5BCC20)
#define GEILGEDCGAG_MDPBPBNMKJA_OFFSET UNITYSDK_OFFSET(0x1A5BC770)
#define GEILGEDCGAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5BC620)

inline static constexpr unsigned int GEILGEDCGAG_TypeDefinitionIndex = 12767;

class GEILGEDCGAG : public ::System::Object
{
public:
	::JOGAKHBIFFM HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* DAPKBAJJAKB; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean CFHPHFLHMBG; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x33
	::System::Int32 BOIDCCNECJG; // 0x34
	::System::Int32 LNDOJKEIPFI; // 0x38
	::System::Int32 OCFOJKDIACA; // 0x3C

	::System::Void _ctor(::JOGAKHBIFFM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JOGAKHBIFFM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GEILGEDCGAG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 EPPGCAKGEDE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEILGEDCGAG_EPPGCAKGEDE_OFFSET))(this);
	}

	::System::Int32 MDPBPBNMKJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEILGEDCGAG_MDPBPBNMKJA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEILGEDCGAG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean DKEDCMFJKGK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEILGEDCGAG_DKEDCMFJKGK_OFFSET))(this);
	}

	::System::String* BAONPNPENDF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEILGEDCGAG_BAONPNPENDF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GEILGEDCGAG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEILGEDCGAG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 IHOKLLDHGKB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEILGEDCGAG_IHOKLLDHGKB_OFFSET))(this);
	}
};
