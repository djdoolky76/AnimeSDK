#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FBMFHPMONGC_OJKKNJFOHPI_AJPBIGBIAII_OFFSET UNITYSDK_OFFSET(0x169C2EF0)
#define FBMFHPMONGC_OJKKNJFOHPI_DODNFIDNCNM_OFFSET UNITYSDK_OFFSET(0x169C2EE0)
#define FBMFHPMONGC_OJKKNJFOHPI_IGBPKODGPOG_OFFSET UNITYSDK_OFFSET(0x169C2EC0)
#define FBMFHPMONGC_OJKKNJFOHPI_ODBBCKNCIBK_OFFSET UNITYSDK_OFFSET(0x169C2ED0)
#define FBMFHPMONGC_OJKKNJFOHPI__CTOR_OFFSET UNITYSDK_OFFSET(0x169C2EB0)

inline static constexpr unsigned int FBMFHPMONGC_OJKKNJFOHPI_TypeDefinitionIndex = 50482;

class FBMFHPMONGC_OJKKNJFOHPI : public ::System::Object
{
public:
	::System::Boolean DNGEPOAHIOJ; // 0x10
	::System::Boolean JIOAEJFDLBD; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_OJKKNJFOHPI__CTOR_OFFSET))(this);
	}

	::System::Void IGBPKODGPOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_OJKKNJFOHPI_IGBPKODGPOG_OFFSET))(this);
	}

	::System::Boolean ODBBCKNCIBK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_OJKKNJFOHPI_ODBBCKNCIBK_OFFSET))(this);
	}

	::System::Void DODNFIDNCNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_OJKKNJFOHPI_DODNFIDNCNM_OFFSET))(this);
	}

	::System::Boolean AJPBIGBIAII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_OJKKNJFOHPI_AJPBIGBIAII_OFFSET))(this);
	}
};
