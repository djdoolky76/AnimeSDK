#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHLAPBEMGKB.h"

namespace System { class Object; }

#define BLNOCLMIFBH_BLCJNKLJPKJ_OFFSET UNITYSDK_OFFSET(0x1692C580)
#define BLNOCLMIFBH_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x1692C670)
#define BLNOCLMIFBH_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1692C570)
#define BLNOCLMIFBH_RESET_OFFSET UNITYSDK_OFFSET(0x1692C5F0)
#define BLNOCLMIFBH__CTOR_OFFSET UNITYSDK_OFFSET(0x1692C560)

inline static constexpr unsigned int BLNOCLMIFBH_TypeDefinitionIndex = 78739;

class BLNOCLMIFBH : public ::AHLAPBEMGKB
{
public:
	::System::Single NAIDADGNEDI; // 0x20
	::System::Single LMIODDEBANM; // 0x24

	::System::Void _ctor(::System::Single FNIOPKPHDEH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLNOCLMIFBH__CTOR_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Object* get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNOCLMIFBH_GET_CURRENT_OFFSET))(this);
	}

	::System::Boolean BLCJNKLJPKJ(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLNOCLMIFBH_BLCJNKLJPKJ_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNOCLMIFBH_RESET_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNOCLMIFBH_GEFNCCFJNIM_OFFSET))(this);
	}
};
