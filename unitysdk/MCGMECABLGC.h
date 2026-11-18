#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NNOLNJIDLEJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MCGMECABLGC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BF5A7C0)
#define MCGMECABLGC_DFBPMCGIJOJ_OFFSET UNITYSDK_OFFSET(0x1BF5AEB0)
#define MCGMECABLGC_FBMIEJIGIED_OFFSET UNITYSDK_OFFSET(0x1BF5AD90)
#define MCGMECABLGC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BF5AC70)
#define MCGMECABLGC_JFEAMBKMOMP_OFFSET UNITYSDK_OFFSET(0x1BF5A9F0)
#define MCGMECABLGC_KPFOGHCFEIG_OFFSET UNITYSDK_OFFSET(0x1BF5AB30)
#define MCGMECABLGC_LFDMNOLPANH_OFFSET UNITYSDK_OFFSET(0x1BF5AC80)
#define MCGMECABLGC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BF5AEA0)
#define MCGMECABLGC_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1BF5A8B0)
#define MCGMECABLGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF5A7B0)

inline static constexpr unsigned int MCGMECABLGC_TypeDefinitionIndex = 11468;

class MCGMECABLGC : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::NNOLNJIDLEJ HBDPAIKANDB; // 0x18
	::System::String* HEEALDGGHMN; // 0x28
	::System::String* DDGJJGPDFFD; // 0x30
	::System::Int32 NBGCJMNBAED; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 LHAFDCLAIIB; // 0x40
	::System::Int32 ICBPIFOLGJI; // 0x44
	::System::Int32 PCMOJLNOPPM; // 0x48

	::System::Void _ctor(::NNOLNJIDLEJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NNOLNJIDLEJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MCGMECABLGC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGMECABLGC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGMECABLGC_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 JFEAMBKMOMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGMECABLGC_JFEAMBKMOMP_OFFSET))(this);
	}

	::System::Int32 KPFOGHCFEIG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGMECABLGC_KPFOGHCFEIG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MCGMECABLGC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* LFDMNOLPANH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGMECABLGC_LFDMNOLPANH_OFFSET))(this);
	}

	::System::String* FBMIEJIGIED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGMECABLGC_FBMIEJIGIED_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGMECABLGC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 DFBPMCGIJOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCGMECABLGC_DFBPMCGIJOJ_OFFSET))(this);
	}
};
