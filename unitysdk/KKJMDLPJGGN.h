#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGCKIBBBHLH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define KKJMDLPJGGN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BA7B270)
#define KKJMDLPJGGN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BA7B110)
#define KKJMDLPJGGN_IMDEKKJIOHI_OFFSET UNITYSDK_OFFSET(0x1BA7B130)
#define KKJMDLPJGGN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BA7B120)
#define KKJMDLPJGGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA7B100)

inline static constexpr unsigned int KKJMDLPJGGN_TypeDefinitionIndex = 9971;

class KKJMDLPJGGN : public ::System::Object
{
public:
	::DGCKIBBBHLH HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 AKAAKALMNAJ; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte CNIAANMNOCF; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E

	::System::Void _ctor(::DGCKIBBBHLH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DGCKIBBBHLH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KKJMDLPJGGN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KKJMDLPJGGN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJMDLPJGGN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 IMDEKKJIOHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJMDLPJGGN_IMDEKKJIOHI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJMDLPJGGN_COFGIJJOFLP_OFFSET))(this);
	}
};
