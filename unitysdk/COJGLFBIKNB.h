#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICBHCFJLNF.h"

#define COJGLFBIKNB_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x18313C20)
#define COJGLFBIKNB_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x18313B90)
#define COJGLFBIKNB_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x18313AB0)
#define COJGLFBIKNB__CTOR_OFFSET UNITYSDK_OFFSET(0x18313B80)

inline static constexpr unsigned int COJGLFBIKNB_TypeDefinitionIndex = 73032;

class COJGLFBIKNB : public ::LICBHCFJLNF
{
public:
	::System::Single JEAFAAKONAI; // 0x10
	::System::Boolean PEDANHBGIGE; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COJGLFBIKNB__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COJGLFBIKNB_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::COJGLFBIKNB* BBPCBEEHALC()
	{
		return ((::COJGLFBIKNB*(*)())((::PBYTE)hIl2Cpp + COJGLFBIKNB_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COJGLFBIKNB_ANEOCOIFDDJ_OFFSET))(this);
	}
};
