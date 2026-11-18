#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIHOCMHDHPB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KPLDEGOMDCE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BA7E7B0)
#define KPLDEGOMDCE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BA7EA10)
#define KPLDEGOMDCE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BA7EA00)
#define KPLDEGOMDCE_MPMHFOIKJNN_OFFSET UNITYSDK_OFFSET(0x1BA7E8A0)
#define KPLDEGOMDCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA7E7A0)

inline static constexpr unsigned int KPLDEGOMDCE_TypeDefinitionIndex = 15118;

class KPLDEGOMDCE : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::MIHOCMHDHPB HBDPAIKANDB; // 0x18
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x28
	::System::Byte CNIAANMNOCF; // 0x29
	::System::Byte GCHCDJCFCEG; // 0x2A
	::System::Boolean IBLFFFCKGMP; // 0x2B

	::System::Void _ctor(::MIHOCMHDHPB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MIHOCMHDHPB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KPLDEGOMDCE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLDEGOMDCE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean MPMHFOIKJNN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLDEGOMDCE_MPMHFOIKJNN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLDEGOMDCE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPLDEGOMDCE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
