#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPFAHNLPFJP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define ONANMNBOFPC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1D0D6CD0)
#define ONANMNBOFPC_DMMNHBNKBEE_OFFSET UNITYSDK_OFFSET(0x1D0D6B90)
#define ONANMNBOFPC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1D0D6DC0)
#define ONANMNBOFPC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1D0D6DD0)
#define ONANMNBOFPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D6B80)

inline static constexpr unsigned int ONANMNBOFPC_TypeDefinitionIndex = 14151;

class ONANMNBOFPC : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::IPFAHNLPFJP HBDPAIKANDB; // 0x18
	::System::Int32 JMCDNAHGIGC; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2E

	::System::Void _ctor(::IPFAHNLPFJP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IPFAHNLPFJP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ONANMNBOFPC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DMMNHBNKBEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONANMNBOFPC_DMMNHBNKBEE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONANMNBOFPC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ONANMNBOFPC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONANMNBOFPC_LJANCIBECFG_OFFSET))(this);
	}
};
