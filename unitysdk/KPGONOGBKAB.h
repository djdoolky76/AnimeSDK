#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONOGDANEGBB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KPGONOGBKAB_AGDOENHIIBI_OFFSET UNITYSDK_OFFSET(0x1BB08080)
#define KPGONOGBKAB_BNKPNGANFDN_OFFSET UNITYSDK_OFFSET(0x1BB083F0)
#define KPGONOGBKAB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BB081C0)
#define KPGONOGBKAB_FFMBGCLLCIF_OFFSET UNITYSDK_OFFSET(0x1BB082B0)
#define KPGONOGBKAB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BB08070)
#define KPGONOGBKAB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BB08060)
#define KPGONOGBKAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD1080)

inline static constexpr unsigned int KPGONOGBKAB_TypeDefinitionIndex = 16577;

class KPGONOGBKAB : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::ONOGDANEGBB HBDPAIKANDB; // 0x18
	::System::Int32 KGDNNBIIPIN; // 0x28
	::System::Int32 AICFILHLIPF; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PHKNKNDAJFA; // 0x34

	::System::Void _ctor(::ONOGDANEGBB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ONOGDANEGBB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KPGONOGBKAB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGONOGBKAB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPGONOGBKAB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 AGDOENHIIBI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGONOGBKAB_AGDOENHIIBI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGONOGBKAB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 FFMBGCLLCIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGONOGBKAB_FFMBGCLLCIF_OFFSET))(this);
	}

	::System::Int32 BNKPNGANFDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPGONOGBKAB_BNKPNGANFDN_OFFSET))(this);
	}
};
