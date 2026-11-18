#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFDOHPEFCBL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define DAFDGMIOGNJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15798920)
#define DAFDGMIOGNJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15798910)
#define DAFDGMIOGNJ_HKNNHCHGFON_OFFSET UNITYSDK_OFFSET(0x157987D0)
#define DAFDGMIOGNJ_KEHHFMDFOON_OFFSET UNITYSDK_OFFSET(0x15798680)
#define DAFDGMIOGNJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x157987C0)
#define DAFDGMIOGNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15798670)

inline static constexpr unsigned int DAFDGMIOGNJ_TypeDefinitionIndex = 16751;

class DAFDGMIOGNJ : public ::System::Object
{
public:
	::KFDOHPEFCBL HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 CHABDCGJLCA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 CDDGPEJELPH; // 0x30

	::System::Void _ctor(::KFDOHPEFCBL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KFDOHPEFCBL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DAFDGMIOGNJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 KEHHFMDFOON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFDGMIOGNJ_KEHHFMDFOON_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFDGMIOGNJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 HKNNHCHGFON()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFDGMIOGNJ_HKNNHCHGFON_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAFDGMIOGNJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAFDGMIOGNJ_COFGIJJOFLP_OFFSET))(this);
	}
};
