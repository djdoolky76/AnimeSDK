#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECLNKDKGHDK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define PDOCIHDGFBA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17FE7110)
#define PDOCIHDGFBA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17FE7200)
#define PDOCIHDGFBA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17FE6FC0)
#define PDOCIHDGFBA_MHBFGFOCIBN_OFFSET UNITYSDK_OFFSET(0x17FE6FD0)
#define PDOCIHDGFBA__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE6FB0)

inline static constexpr unsigned int PDOCIHDGFBA_TypeDefinitionIndex = 13344;

class PDOCIHDGFBA : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::ECLNKDKGHDK HBDPAIKANDB; // 0x18
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 HFHPLCCNMID; // 0x2C

	::System::Void _ctor(::ECLNKDKGHDK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ECLNKDKGHDK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PDOCIHDGFBA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOCIHDGFBA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 MHBFGFOCIBN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOCIHDGFBA_MHBFGFOCIBN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOCIHDGFBA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PDOCIHDGFBA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
