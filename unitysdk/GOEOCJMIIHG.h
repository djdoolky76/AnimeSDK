#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDMNAKEKIJH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define GOEOCJMIIHG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B11C540)
#define GOEOCJMIIHG_FJPGCNGHHCC_OFFSET UNITYSDK_OFFSET(0x1B11C3F0)
#define GOEOCJMIIHG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B11C530)
#define GOEOCJMIIHG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B11C3E0)
#define GOEOCJMIIHG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B11C3D0)

inline static constexpr unsigned int GOEOCJMIIHG_TypeDefinitionIndex = 15776;

class GOEOCJMIIHG : public ::System::Object
{
public:
	::MDMNAKEKIJH HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 MHHJEKFHGCN; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E

	::System::Void _ctor(::MDMNAKEKIJH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MDMNAKEKIJH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GOEOCJMIIHG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEOCJMIIHG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 FJPGCNGHHCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEOCJMIIHG_FJPGCNGHHCC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOEOCJMIIHG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEOCJMIIHG_COFGIJJOFLP_OFFSET))(this);
	}
};
