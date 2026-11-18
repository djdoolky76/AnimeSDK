#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;

#define MIMEPFGAGJA_AKLIJOHBLCG_OFFSET UNITYSDK_OFFSET(0x16C8CE30)
#define MIMEPFGAGJA_NKKIHMMBMEN_OFFSET UNITYSDK_OFFSET(0x16C8CDF0)
#define MIMEPFGAGJA_NOINBBNDBAH_OFFSET UNITYSDK_OFFSET(0x16C8CDB0)
#define MIMEPFGAGJA__CTOR_OFFSET UNITYSDK_OFFSET(0x16C8CE70)

inline static constexpr unsigned int MIMEPFGAGJA_TypeDefinitionIndex = 39264;

class MIMEPFGAGJA : public ::System::Object
{
public:
	::CJIEIHEDMME* IHACKHOBPKG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMEPFGAGJA__CTOR_OFFSET))(this);
	}

	::System::Void NOINBBNDBAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMEPFGAGJA_NOINBBNDBAH_OFFSET))(this);
	}

	::System::Void NKKIHMMBMEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMEPFGAGJA_NKKIHMMBMEN_OFFSET))(this);
	}

	::System::Void AKLIJOHBLCG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMEPFGAGJA_AKLIJOHBLCG_OFFSET))(this);
	}
};
