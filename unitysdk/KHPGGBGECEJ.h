#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNLPLIFCPPM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KHPGGBGECEJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1957D3D0)
#define KHPGGBGECEJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1957D3C0)
#define KHPGGBGECEJ_GLFHNPBKIPM_OFFSET UNITYSDK_OFFSET(0x1957D280)
#define KHPGGBGECEJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1957D270)
#define KHPGGBGECEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1957D260)

inline static constexpr unsigned int KHPGGBGECEJ_TypeDefinitionIndex = 11784;

class KHPGGBGECEJ : public ::System::Object
{
public:
	::LNLPLIFCPPM HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 PIDJFOCFNDB; // 0x2C

	::System::Void _ctor(::LNLPLIFCPPM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LNLPLIFCPPM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KHPGGBGECEJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPGGBGECEJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 GLFHNPBKIPM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPGGBGECEJ_GLFHNPBKIPM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHPGGBGECEJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPGGBGECEJ_COFGIJJOFLP_OFFSET))(this);
	}
};
