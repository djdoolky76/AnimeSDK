#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLHOICNAFHD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HPLBPJHJFEC_AAEAAMPJGLB_OFFSET UNITYSDK_OFFSET(0x18BB4930)
#define HPLBPJHJFEC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BB4BB0)
#define HPLBPJHJFEC_DJAABICPPHC_OFFSET UNITYSDK_OFFSET(0x18BB4660)
#define HPLBPJHJFEC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BB4CA0)
#define HPLBPJHJFEC_IFLIILNMBHK_OFFSET UNITYSDK_OFFSET(0x18BB4A70)
#define HPLBPJHJFEC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BB4650)
#define HPLBPJHJFEC__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB4640)

inline static constexpr unsigned int HPLBPJHJFEC_TypeDefinitionIndex = 17659;

class HPLBPJHJFEC : public ::System::Object
{
public:
	::GLHOICNAFHD HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* ODCBIBBIMLC; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 DCONCBNHHEO; // 0x30
	::System::Int32 HAAGIJALFGG; // 0x34
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A

	::System::Void _ctor(::GLHOICNAFHD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GLHOICNAFHD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HPLBPJHJFEC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLBPJHJFEC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* DJAABICPPHC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLBPJHJFEC_DJAABICPPHC_OFFSET))(this);
	}

	::System::Int32 AAEAAMPJGLB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLBPJHJFEC_AAEAAMPJGLB_OFFSET))(this);
	}

	::System::Int32 IFLIILNMBHK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLBPJHJFEC_IFLIILNMBHK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLBPJHJFEC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HPLBPJHJFEC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
