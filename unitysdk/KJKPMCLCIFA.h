#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCIPADHDIIN.h"

#define KJKPMCLCIFA_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x17910990)
#define KJKPMCLCIFA_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x17910A20)
#define KJKPMCLCIFA_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x179108A0)
#define KJKPMCLCIFA__CTOR_OFFSET UNITYSDK_OFFSET(0x17910980)

inline static constexpr unsigned int KJKPMCLCIFA_TypeDefinitionIndex = 75865;

class KJKPMCLCIFA : public ::KCIPADHDIIN
{
public:
	::System::UInt32 EIPCGGPOHDD; // 0x10
	::System::UInt32 DFBFJOEAIMP; // 0x14
	::System::UInt64 MPNCFAKNOOD; // 0x18
	::System::UInt32 APONONFAAIA; // 0x20
	::System::Byte _padding0[0x4];
	::System::UInt64 NGEFMHCFAPK; // 0x28
	::System::UInt64 DOPFMGOEFFG; // 0x30
	::System::UInt64 JEFGDCHDAJN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKPMCLCIFA__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKPMCLCIFA_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJKPMCLCIFA_ANEOCOIFDDJ_OFFSET))(this);
	}

	static ::KJKPMCLCIFA* BBPCBEEHALC()
	{
		return ((::KJKPMCLCIFA*(*)())((::PBYTE)hIl2Cpp + KJKPMCLCIFA_BBPCBEEHALC_OFFSET))();
	}
};
