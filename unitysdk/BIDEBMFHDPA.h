#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COPBNLIEIMA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define BIDEBMFHDPA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1572A920)
#define BIDEBMFHDPA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1572A910)
#define BIDEBMFHDPA_KBBELPFNABP_OFFSET UNITYSDK_OFFSET(0x1572AA10)
#define BIDEBMFHDPA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1572AB50)
#define BIDEBMFHDPA_MLKBGICANHA_OFFSET UNITYSDK_OFFSET(0x1572A7D0)
#define BIDEBMFHDPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1572A7C0)

inline static constexpr unsigned int BIDEBMFHDPA_TypeDefinitionIndex = 10237;

class BIDEBMFHDPA : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::COPBNLIEIMA HBDPAIKANDB; // 0x18
	::System::Byte CNIAANMNOCF; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x29
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 NGFEONMOBEF; // 0x2C
	::System::Int32 KBMNKGJCLOC; // 0x30

	::System::Void _ctor(::COPBNLIEIMA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::COPBNLIEIMA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BIDEBMFHDPA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 MLKBGICANHA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDEBMFHDPA_MLKBGICANHA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BIDEBMFHDPA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDEBMFHDPA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 KBBELPFNABP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDEBMFHDPA_KBBELPFNABP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDEBMFHDPA_LJANCIBECFG_OFFSET))(this);
	}
};
