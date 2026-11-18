#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DANOLKBOMEP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GGKDFJPKBBP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1932FE70)
#define GGKDFJPKBBP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1932FE60)
#define GGKDFJPKBBP_JPJOLFBIKNL_OFFSET UNITYSDK_OFFSET(0x1932FF60)
#define GGKDFJPKBBP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1932FE50)
#define GGKDFJPKBBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1932FE40)

inline static constexpr unsigned int GGKDFJPKBBP_TypeDefinitionIndex = 11691;

class GGKDFJPKBBP : public ::System::Object
{
public:
	::DANOLKBOMEP HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* HDNKDKNEPBL; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::DANOLKBOMEP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DANOLKBOMEP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GGKDFJPKBBP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKDFJPKBBP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGKDFJPKBBP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKDFJPKBBP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* JPJOLFBIKNL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKDFJPKBBP_JPJOLFBIKNL_OFFSET))(this);
	}
};
