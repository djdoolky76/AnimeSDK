#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBGHBDNAMFP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define HAIGKFNOFBL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B11CDD0)
#define HAIGKFNOFBL_FIGNOOEDDNC_OFFSET UNITYSDK_OFFSET(0x1B11CEC0)
#define HAIGKFNOFBL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B11D290)
#define HAIGKFNOFBL_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x1B11D150)
#define HAIGKFNOFBL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B11D000)
#define HAIGKFNOFBL_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B11D010)
#define HAIGKFNOFBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B11CDC0)

inline static constexpr unsigned int HAIGKFNOFBL_TypeDefinitionIndex = 9902;

class HAIGKFNOFBL : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::MBGHBDNAMFP HBDPAIKANDB; // 0x18
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 OKBBGPGIODD; // 0x30
	::System::Int32 PCCPGAMLEMB; // 0x34

	::System::Void _ctor(::MBGHBDNAMFP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MBGHBDNAMFP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HAIGKFNOFBL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIGKFNOFBL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 FIGNOOEDDNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIGKFNOFBL_FIGNOOEDDNC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIGKFNOFBL_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIGKFNOFBL_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIGKFNOFBL_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HAIGKFNOFBL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
