#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODFDANDAOKH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FBLLKMDMHBP_BADIFLFDNCO_OFFSET UNITYSDK_OFFSET(0x17456520)
#define FBLLKMDMHBP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17456430)
#define FBLLKMDMHBP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17456410)
#define FBLLKMDMHBP_GDFKEAIPILD_OFFSET UNITYSDK_OFFSET(0x17456660)
#define FBLLKMDMHBP_GMKJHMEHJOJ_OFFSET UNITYSDK_OFFSET(0x174562D0)
#define FBLLKMDMHBP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17456420)
#define FBLLKMDMHBP__CTOR_OFFSET UNITYSDK_OFFSET(0x174562C0)

inline static constexpr unsigned int FBLLKMDMHBP_TypeDefinitionIndex = 10822;

class FBLLKMDMHBP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* FEFLHGFOPBA; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::ODFDANDAOKH HBDPAIKANDB; // 0x20
	::System::Int32 CKEONIEFDCD; // 0x30
	::System::Byte CNIAANMNOCF; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 BKPFLGBNKEM; // 0x38

	::System::Void _ctor(::ODFDANDAOKH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ODFDANDAOKH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FBLLKMDMHBP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 GMKJHMEHJOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLLKMDMHBP_GMKJHMEHJOJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FBLLKMDMHBP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLLKMDMHBP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLLKMDMHBP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 BADIFLFDNCO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLLKMDMHBP_BADIFLFDNCO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GDFKEAIPILD()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBLLKMDMHBP_GDFKEAIPILD_OFFSET))(this);
	}
};
