#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/LICBHCFJLNF.h"

#define DDGLILEIAGL_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1832CB40)
#define DDGLILEIAGL_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1832CBD0)
#define DDGLILEIAGL_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1832CA60)
#define DDGLILEIAGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1832CB30)

inline static constexpr unsigned int DDGLILEIAGL_TypeDefinitionIndex = 73312;

class DDGLILEIAGL : public ::LICBHCFJLNF
{
public:
	::System::UInt32 MNAIIBHLHMA; // 0x10
	::JGLIFHIAIEH ILOJFPNKJII; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGLILEIAGL__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGLILEIAGL_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGLILEIAGL_ANEOCOIFDDJ_OFFSET))(this);
	}

	static ::DDGLILEIAGL* BBPCBEEHALC()
	{
		return ((::DDGLILEIAGL*(*)())((::PBYTE)hIl2Cpp + DDGLILEIAGL_BBPCBEEHALC_OFFSET))();
	}
};
