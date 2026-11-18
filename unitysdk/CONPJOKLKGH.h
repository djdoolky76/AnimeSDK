#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGJLLNLGJOD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CONPJOKLKGH_ADNIDMMBDHB_OFFSET UNITYSDK_OFFSET(0x1ADBFF80)
#define CONPJOKLKGH_BNMGJEIOJFK_OFFSET UNITYSDK_OFFSET(0x1ADBFB70)
#define CONPJOKLKGH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADBFA70)
#define CONPJOKLKGH_EAGEOGAENAM_OFFSET UNITYSDK_OFFSET(0x1ADBFE40)
#define CONPJOKLKGH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADC0200)
#define CONPJOKLKGH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADBFB60)
#define CONPJOKLKGH_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1ADC00C0)
#define CONPJOKLKGH__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADBFA60)

inline static constexpr unsigned int CONPJOKLKGH_TypeDefinitionIndex = 11627;

class CONPJOKLKGH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* MEHPGDMMFLI; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::KGJLLNLGJOD HBDPAIKANDB; // 0x20
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34
	::System::Int32 HJPHLNBBNFK; // 0x38
	::System::Int32 DIMHBNNAHOE; // 0x3C

	::System::Void _ctor(::KGJLLNLGJOD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KGJLLNLGJOD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CONPJOKLKGH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONPJOKLKGH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONPJOKLKGH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BNMGJEIOJFK()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONPJOKLKGH_BNMGJEIOJFK_OFFSET))(this);
	}

	::System::Int32 EAGEOGAENAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONPJOKLKGH_EAGEOGAENAM_OFFSET))(this);
	}

	::System::Int32 ADNIDMMBDHB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONPJOKLKGH_ADNIDMMBDHB_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONPJOKLKGH_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CONPJOKLKGH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
