#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDJFCBKNLND.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define NMMJMBHIMFO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195BCCE0)
#define NMMJMBHIMFO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x195BCDD0)
#define NMMJMBHIMFO_GGEDJCPANPO_OFFSET UNITYSDK_OFFSET(0x195BCBA0)
#define NMMJMBHIMFO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x195BCB90)
#define NMMJMBHIMFO__CTOR_OFFSET UNITYSDK_OFFSET(0x195BCB80)

inline static constexpr unsigned int NMMJMBHIMFO_TypeDefinitionIndex = 11191;

class NMMJMBHIMFO : public ::System::Object
{
public:
	::DDJFCBKNLND HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 HBCNAKHPKNO; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2E

	::System::Void _ctor(::DDJFCBKNLND LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DDJFCBKNLND, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NMMJMBHIMFO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMJMBHIMFO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 GGEDJCPANPO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMJMBHIMFO_GGEDJCPANPO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMJMBHIMFO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMMJMBHIMFO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
