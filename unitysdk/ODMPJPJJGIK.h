#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICBHCFJLNF.h"

#define ODMPJPJJGIK_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x114E92C0)
#define ODMPJPJJGIK_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x114E9230)
#define ODMPJPJJGIK_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x114E9150)
#define ODMPJPJJGIK__CTOR_OFFSET UNITYSDK_OFFSET(0x114E9220)

inline static constexpr unsigned int ODMPJPJJGIK_TypeDefinitionIndex = 90148;

class ODMPJPJJGIK : public ::LICBHCFJLNF
{
public:
	::System::Int32 BCGPPIDKAMF; // 0x10
	::System::UInt32 KBIGPEAHGII; // 0x14
	::System::UInt32 MNAIIBHLHMA; // 0x18
	::System::UInt32 OFMAJEDLGOJ; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMPJPJJGIK__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMPJPJJGIK_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::ODMPJPJJGIK* BBPCBEEHALC()
	{
		return ((::ODMPJPJJGIK*(*)())((::PBYTE)hIl2Cpp + ODMPJPJJGIK_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMPJPJJGIK_ANEOCOIFDDJ_OFFSET))(this);
	}
};
