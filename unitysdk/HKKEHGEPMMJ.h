#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJKKDIOEBOH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define HKKEHGEPMMJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17477B50)
#define HKKEHGEPMMJ_DLOPLJFNAHO_OFFSET UNITYSDK_OFFSET(0x17477C40)
#define HKKEHGEPMMJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17477D80)
#define HKKEHGEPMMJ_JFLGCOEHGNO_OFFSET UNITYSDK_OFFSET(0x174778F0)
#define HKKEHGEPMMJ_LFHGEGFGHLM_OFFSET UNITYSDK_OFFSET(0x17477A30)
#define HKKEHGEPMMJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17477B40)
#define HKKEHGEPMMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x174778E0)

inline static constexpr unsigned int HKKEHGEPMMJ_TypeDefinitionIndex = 12110;

class HKKEHGEPMMJ : public ::System::Object
{
public:
	::KJKKDIOEBOH HBDPAIKANDB; // 0x10
	::System::String* IDDFDGKCGHO; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 FLJKHHBKDKB; // 0x30
	::System::Int32 BGLDPJHDBFB; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::KJKKDIOEBOH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KJKKDIOEBOH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HKKEHGEPMMJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 JFLGCOEHGNO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKEHGEPMMJ_JFLGCOEHGNO_OFFSET))(this);
	}

	::System::String* LFHGEGFGHLM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKEHGEPMMJ_LFHGEGFGHLM_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKEHGEPMMJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKEHGEPMMJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 DLOPLJFNAHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKEHGEPMMJ_DLOPLJFNAHO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HKKEHGEPMMJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
