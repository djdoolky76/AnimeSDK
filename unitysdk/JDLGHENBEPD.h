#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCIPADHDIIN.h"

#define JDLGHENBEPD_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1659DD40)
#define JDLGHENBEPD_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1659DDD0)
#define JDLGHENBEPD_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1659DC70)
#define JDLGHENBEPD__CTOR_OFFSET UNITYSDK_OFFSET(0x1659DD30)

inline static constexpr unsigned int JDLGHENBEPD_TypeDefinitionIndex = 63739;

class JDLGHENBEPD : public ::KCIPADHDIIN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGHENBEPD__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGHENBEPD_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGHENBEPD_ANEOCOIFDDJ_OFFSET))(this);
	}

	static ::JDLGHENBEPD* BBPCBEEHALC()
	{
		return ((::JDLGHENBEPD*(*)())((::PBYTE)hIl2Cpp + JDLGHENBEPD_BBPCBEEHALC_OFFSET))();
	}
};
