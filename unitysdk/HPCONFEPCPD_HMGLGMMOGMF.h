#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HPCONFEPCPD_HMGLGMMOGMF_DJONBDHEELO_OFFSET UNITYSDK_OFFSET(0x15E8F490)
#define HPCONFEPCPD_HMGLGMMOGMF_OHPKFFKGFJA_OFFSET UNITYSDK_OFFSET(0x15E8F480)
#define HPCONFEPCPD_HMGLGMMOGMF__CTOR_OFFSET UNITYSDK_OFFSET(0x15E8E430)

inline static constexpr unsigned int HPCONFEPCPD_HMGLGMMOGMF_TypeDefinitionIndex = 90925;

class HPCONFEPCPD_HMGLGMMOGMF : public ::System::Object
{
public:
	::System::Single AAFNBJCJCMD; // 0x10
	::System::Single MMLFNNMFEOB; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_HMGLGMMOGMF__CTOR_OFFSET))(this);
	}

	::System::Single OHPKFFKGFJA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_HMGLGMMOGMF_OHPKFFKGFJA_OFFSET))(this);
	}

	::System::Single DJONBDHEELO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_HMGLGMMOGMF_DJONBDHEELO_OFFSET))(this);
	}
};
