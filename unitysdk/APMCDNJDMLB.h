#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KOGPHILJNLI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define APMCDNJDMLB_CKMBEEFEOMB_OFFSET UNITYSDK_OFFSET(0x19BDE370)
#define APMCDNJDMLB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19BDE7A0)
#define APMCDNJDMLB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19BDE4B0)
#define APMCDNJDMLB_HFHFFLMNOPD_OFFSET UNITYSDK_OFFSET(0x19BDE890)
#define APMCDNJDMLB_ICDFFFGALAD_OFFSET UNITYSDK_OFFSET(0x19BDE4D0)
#define APMCDNJDMLB_JKHHBONPLFE_OFFSET UNITYSDK_OFFSET(0x19BDE9D0)
#define APMCDNJDMLB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19BDE4C0)
#define APMCDNJDMLB__CTOR_OFFSET UNITYSDK_OFFSET(0x19BDE360)

inline static constexpr unsigned int APMCDNJDMLB_TypeDefinitionIndex = 14050;

class APMCDNJDMLB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* PHAKMEPJFNM; // 0x10
	::KOGPHILJNLI HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* KJDCNHKJMLC; // 0x30
	::System::Int32 KAIEJGICHKB; // 0x38
	::System::Int32 HBMDPIEKLGG; // 0x3C
	::System::Int32 FOMNOLMFPEN; // 0x40
	::System::Int32 CKALBMAMAKP; // 0x44
	::System::Int32 MBIACMGINNB; // 0x48
	::System::Byte CNIAANMNOCF; // 0x4C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4D
	::System::Byte ACIOBDEBDNK; // 0x4E

	::System::Void _ctor(::KOGPHILJNLI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KOGPHILJNLI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + APMCDNJDMLB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 CKMBEEFEOMB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APMCDNJDMLB_CKMBEEFEOMB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APMCDNJDMLB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APMCDNJDMLB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* ICDFFFGALAD()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APMCDNJDMLB_ICDFFFGALAD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMCDNJDMLB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 HFHFFLMNOPD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APMCDNJDMLB_HFHFFLMNOPD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JKHHBONPLFE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APMCDNJDMLB_JKHHBONPLFE_OFFSET))(this);
	}
};
