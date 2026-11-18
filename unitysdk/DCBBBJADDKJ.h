#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEAPBNOFGJN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define DCBBBJADDKJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADC21D0)
#define DCBBBJADDKJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADC1F30)
#define DCBBBJADDKJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADC1F40)
#define DCBBBJADDKJ_MFACJFBMBMP_OFFSET UNITYSDK_OFFSET(0x1ADC1F50)
#define DCBBBJADDKJ_PACFJGKLEJB_OFFSET UNITYSDK_OFFSET(0x1ADC2090)
#define DCBBBJADDKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC1F20)

inline static constexpr unsigned int DCBBBJADDKJ_TypeDefinitionIndex = 11316;

class DCBBBJADDKJ : public ::System::Object
{
public:
	::FEAPBNOFGJN HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 DCKLAKJFGMO; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 MECMHFKMPIL; // 0x30

	::System::Void _ctor(::FEAPBNOFGJN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FEAPBNOFGJN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DCBBBJADDKJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCBBBJADDKJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBBBJADDKJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 MFACJFBMBMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBBBJADDKJ_MFACJFBMBMP_OFFSET))(this);
	}

	::System::Int32 PACFJGKLEJB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBBBJADDKJ_PACFJGKLEJB_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBBBJADDKJ_COFGIJJOFLP_OFFSET))(this);
	}
};
