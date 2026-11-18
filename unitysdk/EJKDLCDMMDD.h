#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCIPADHDIIN.h"

#define EJKDLCDMMDD_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x14AA0BC0)
#define EJKDLCDMMDD_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x14AA0B30)
#define EJKDLCDMMDD_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x14AA0A60)
#define EJKDLCDMMDD__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA0B20)

inline static constexpr unsigned int EJKDLCDMMDD_TypeDefinitionIndex = 48596;

class EJKDLCDMMDD : public ::KCIPADHDIIN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKDLCDMMDD__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKDLCDMMDD_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::EJKDLCDMMDD* BBPCBEEHALC()
	{
		return ((::EJKDLCDMMDD*(*)())((::PBYTE)hIl2Cpp + EJKDLCDMMDD_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKDLCDMMDD_ANEOCOIFDDJ_OFFSET))(this);
	}
};
