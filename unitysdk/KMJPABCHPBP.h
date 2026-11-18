#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICBHCFJLNF.h"

#define KMJPABCHPBP_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x17727570)
#define KMJPABCHPBP_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x177274E0)
#define KMJPABCHPBP_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x17727400)
#define KMJPABCHPBP__CTOR_OFFSET UNITYSDK_OFFSET(0x177274D0)

inline static constexpr unsigned int KMJPABCHPBP_TypeDefinitionIndex = 51149;

class KMJPABCHPBP : public ::LICBHCFJLNF
{
public:
	::System::UInt32 IFPCGBJDKCH; // 0x10
	::System::UInt32 MNAIIBHLHMA; // 0x14
	::System::Int32 GCMONMDHPNP; // 0x18
	::System::Int32 KEGGOPELHDB; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJPABCHPBP__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJPABCHPBP_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::KMJPABCHPBP* BBPCBEEHALC()
	{
		return ((::KMJPABCHPBP*(*)())((::PBYTE)hIl2Cpp + KMJPABCHPBP_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJPABCHPBP_ANEOCOIFDDJ_OFFSET))(this);
	}
};
