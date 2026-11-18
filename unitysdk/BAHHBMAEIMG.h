#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDGKELCAADO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define BAHHBMAEIMG_BHBDIHLBAAG_OFFSET UNITYSDK_OFFSET(0x1ADAD2E0)
#define BAHHBMAEIMG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADAD1F0)
#define BAHHBMAEIMG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADAD430)
#define BAHHBMAEIMG_JHHPOALCJJP_OFFSET UNITYSDK_OFFSET(0x1ADAD0B0)
#define BAHHBMAEIMG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADAD420)
#define BAHHBMAEIMG_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1ADACF70)
#define BAHHBMAEIMG__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADACF60)

inline static constexpr unsigned int BAHHBMAEIMG_TypeDefinitionIndex = 9942;

class BAHHBMAEIMG : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::HDGKELCAADO HBDPAIKANDB; // 0x18
	::System::Int32 IPAPIMLONFA; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Int32 NFKGMLNIHED; // 0x34

	::System::Void _ctor(::HDGKELCAADO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HDGKELCAADO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BAHHBMAEIMG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHHBMAEIMG_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 JHHPOALCJJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHHBMAEIMG_JHHPOALCJJP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHHBMAEIMG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 BHBDIHLBAAG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHHBMAEIMG_BHBDIHLBAAG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHHBMAEIMG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BAHHBMAEIMG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
