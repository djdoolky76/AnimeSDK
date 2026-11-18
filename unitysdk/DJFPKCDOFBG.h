#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKLADNCBIPB.h"
#include "unitysdk/OMENMNEOEMM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DJFPKCDOFBG_BDMLCHNPMJN_OFFSET UNITYSDK_OFFSET(0x1950D210)
#define DJFPKCDOFBG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1950D510)
#define DJFPKCDOFBG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1950D750)
#define DJFPKCDOFBG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1950D600)
#define DJFPKCDOFBG_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1950D610)
#define DJFPKCDOFBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1950D200)

inline static constexpr unsigned int DJFPKCDOFBG_TypeDefinitionIndex = 9944;

class DJFPKCDOFBG : public ::System::Object
{
public:
	::HKLADNCBIPB HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::OMENMNEOEMM>* GDOMGNBOACI; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34

	::System::Void _ctor(::HKLADNCBIPB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HKLADNCBIPB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DJFPKCDOFBG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::OMENMNEOEMM>* BDMLCHNPMJN()
	{
		return ((::System::Collections::Generic::List_1<::OMENMNEOEMM>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFPKCDOFBG_BDMLCHNPMJN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFPKCDOFBG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFPKCDOFBG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFPKCDOFBG_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DJFPKCDOFBG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
