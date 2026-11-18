#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INGJIKJPBLM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define JLPIGMJAPFA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1954DD90)
#define JLPIGMJAPFA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1954DC40)
#define JLPIGMJAPFA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1954DE80)
#define JLPIGMJAPFA_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1954DC50)
#define JLPIGMJAPFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1954DC30)

inline static constexpr unsigned int JLPIGMJAPFA_TypeDefinitionIndex = 11949;

class JLPIGMJAPFA : public ::System::Object
{
public:
	::INGJIKJPBLM HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte CNIAANMNOCF; // 0x2E

	::System::Void _ctor(::INGJIKJPBLM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::INGJIKJPBLM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JLPIGMJAPFA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JLPIGMJAPFA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPIGMJAPFA_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPIGMJAPFA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPIGMJAPFA_LJANCIBECFG_OFFSET))(this);
	}
};
