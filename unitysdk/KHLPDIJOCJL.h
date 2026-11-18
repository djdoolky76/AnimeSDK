#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class ANHOLIOLKHH;
class KCFGFLAIJOM;
class NMPEJJFALLA;
namespace System { class String; }

#define KHLPDIJOCJL_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x18629E60)
#define KHLPDIJOCJL_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x7CE320)
#define KHLPDIJOCJL_OOKAIFMKEBD_OFFSET UNITYSDK_OFFSET(0x7CE310)

inline static constexpr unsigned int KHLPDIJOCJL_TypeDefinitionIndex = 51443;

struct alignas(8) KHLPDIJOCJL
{
	// static const ::System::Single LINFMOEAJOJ; // 0x0
	// static const ::System::Single BNHLPLFCICH; // 0x0
	::ANHOLIOLKHH* AMBBJKIHCLB; // 0x10
	::System::String* KIPPGJJKLMM; // 0x18
	::System::Int32 KFKHHNPJCMB; // 0x20

	::KCFGFLAIJOM* OOKAIFMKEBD()
	{
		return ((::KCFGFLAIJOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHLPDIJOCJL_OOKAIFMKEBD_OFFSET))(this);
	}

	::System::Void KDLADFIENBL(::NMPEJJFALLA* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::NMPEJJFALLA*))((::PBYTE)hIl2Cpp + KHLPDIJOCJL_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}

	/*
	static ::KHLPDIJOCJL COKNIICCODC(::ANHOLIOLKHH* AMBBJKIHCLB)
	{
		return ((::KHLPDIJOCJL(*)(::ANHOLIOLKHH*))((::PBYTE)hIl2Cpp + KHLPDIJOCJL_COKNIICCODC_OFFSET))(AMBBJKIHCLB);
	}
	*/
};
