#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOKPFGKNCAL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define DLPOGLIGLOO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A557B00)
#define DLPOGLIGLOO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A557BF0)
#define DLPOGLIGLOO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A557C00)
#define DLPOGLIGLOO_OKJHIPIBJBM_OFFSET UNITYSDK_OFFSET(0x1A557C10)
#define DLPOGLIGLOO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A557AF0)

inline static constexpr unsigned int DLPOGLIGLOO_TypeDefinitionIndex = 12243;

class DLPOGLIGLOO : public ::System::Object
{
public:
	::MOKPFGKNCAL HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte ACIOBDEBDNK; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 NLGEOCKMCDC; // 0x2C

	::System::Void _ctor(::MOKPFGKNCAL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MOKPFGKNCAL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DLPOGLIGLOO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPOGLIGLOO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLPOGLIGLOO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPOGLIGLOO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 OKJHIPIBJBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPOGLIGLOO_OKJHIPIBJBM_OFFSET))(this);
	}
};
