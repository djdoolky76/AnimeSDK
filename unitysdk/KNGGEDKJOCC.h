#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPBNHBFINLA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KNGGEDKJOCC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BB07990)
#define KNGGEDKJOCC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BB07970)
#define KNGGEDKJOCC_HDDENLNIPMA_OFFSET UNITYSDK_OFFSET(0x1BB07A80)
#define KNGGEDKJOCC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BB07980)
#define KNGGEDKJOCC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB07960)

inline static constexpr unsigned int KNGGEDKJOCC_TypeDefinitionIndex = 17617;

class KNGGEDKJOCC : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::LPBNHBFINLA HBDPAIKANDB; // 0x18
	::System::Int32 AEPNMCGBJKJ; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E

	::System::Void _ctor(::LPBNHBFINLA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LPBNHBFINLA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KNGGEDKJOCC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KNGGEDKJOCC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGGEDKJOCC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGGEDKJOCC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 HDDENLNIPMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGGEDKJOCC_HDDENLNIPMA_OFFSET))(this);
	}
};
