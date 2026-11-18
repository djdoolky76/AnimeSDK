#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICBHCFJLNF.h"

#define GDAHGLEOBFI_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1570A130)
#define GDAHGLEOBFI_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1570A1C0)
#define GDAHGLEOBFI_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1570A050)
#define GDAHGLEOBFI__CTOR_OFFSET UNITYSDK_OFFSET(0x1570A120)

inline static constexpr unsigned int GDAHGLEOBFI_TypeDefinitionIndex = 85069;

class GDAHGLEOBFI : public ::LICBHCFJLNF
{
public:
	::System::UInt32 DPGCKBEJLJD; // 0x10
	::System::UInt32 MNAIIBHLHMA; // 0x14
	::System::UInt32 IFPCGBJDKCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAHGLEOBFI__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAHGLEOBFI_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAHGLEOBFI_ANEOCOIFDDJ_OFFSET))(this);
	}

	static ::GDAHGLEOBFI* BBPCBEEHALC()
	{
		return ((::GDAHGLEOBFI*(*)())((::PBYTE)hIl2Cpp + GDAHGLEOBFI_BBPCBEEHALC_OFFSET))();
	}
};
