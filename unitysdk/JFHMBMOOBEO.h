#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class ANHOLIOLKHH;
class KCFGFLAIJOM;
class NMPEJJFALLA;

#define JFHMBMOOBEO_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x718F20)
#define JFHMBMOOBEO_OOKAIFMKEBD_OFFSET UNITYSDK_OFFSET(0x718F10)

inline static constexpr unsigned int JFHMBMOOBEO_TypeDefinitionIndex = 49973;

struct alignas(8) JFHMBMOOBEO
{
	::ANHOLIOLKHH* AMBBJKIHCLB; // 0x10

	::KCFGFLAIJOM* OOKAIFMKEBD()
	{
		return ((::KCFGFLAIJOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHMBMOOBEO_OOKAIFMKEBD_OFFSET))(this);
	}

	::System::Void KDLADFIENBL(::NMPEJJFALLA* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::NMPEJJFALLA*))((::PBYTE)hIl2Cpp + JFHMBMOOBEO_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
	}
};
