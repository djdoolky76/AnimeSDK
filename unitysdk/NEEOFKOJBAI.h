#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGGEMHLEJIF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define NEEOFKOJBAI_AFIKPGHMNCI_OFFSET UNITYSDK_OFFSET(0x17FD1740)
#define NEEOFKOJBAI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17FD1510)
#define NEEOFKOJBAI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17FD1500)
#define NEEOFKOJBAI_IJIHHDDBLGF_OFFSET UNITYSDK_OFFSET(0x17FD19C0)
#define NEEOFKOJBAI_KBIIPJALCNE_OFFSET UNITYSDK_OFFSET(0x17FD1600)
#define NEEOFKOJBAI_LEFJCIGJOED_OFFSET UNITYSDK_OFFSET(0x17FD1880)
#define NEEOFKOJBAI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17FD14F0)
#define NEEOFKOJBAI__CTOR_OFFSET UNITYSDK_OFFSET(0x17FD14E0)

inline static constexpr unsigned int NEEOFKOJBAI_TypeDefinitionIndex = 13099;

class NEEOFKOJBAI : public ::System::Object
{
public:
	::EGGEMHLEJIF HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 OGAGKPKBBCG; // 0x28
	::System::Int32 PFIHONMOOMN; // 0x2C
	::System::Int32 JKEAJLNIHNP; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Int32 LLDCIKAGBIG; // 0x3C

	::System::Void _ctor(::EGGEMHLEJIF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EGGEMHLEJIF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NEEOFKOJBAI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEOFKOJBAI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEEOFKOJBAI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEOFKOJBAI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 KBIIPJALCNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEOFKOJBAI_KBIIPJALCNE_OFFSET))(this);
	}

	::System::Int32 AFIKPGHMNCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEOFKOJBAI_AFIKPGHMNCI_OFFSET))(this);
	}

	::System::Int32 LEFJCIGJOED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEOFKOJBAI_LEFJCIGJOED_OFFSET))(this);
	}

	::System::Int32 IJIHHDDBLGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEOFKOJBAI_IJIHHDDBLGF_OFFSET))(this);
	}
};
