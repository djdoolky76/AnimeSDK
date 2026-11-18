#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCIPADHDIIN.h"

#define KPCHAJJNDPA_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1864DF50)
#define KPCHAJJNDPA_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1864DFE0)
#define KPCHAJJNDPA_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1864DE70)
#define KPCHAJJNDPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1864DF40)

inline static constexpr unsigned int KPCHAJJNDPA_TypeDefinitionIndex = 88174;

class KPCHAJJNDPA : public ::KCIPADHDIIN
{
public:
	::System::Boolean BJHHNNGACFN; // 0x10
	::System::Byte _padding0[0x3];
	::System::UInt32 MNAIIBHLHMA; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCHAJJNDPA__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCHAJJNDPA_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCHAJJNDPA_ANEOCOIFDDJ_OFFSET))(this);
	}

	static ::KPCHAJJNDPA* BBPCBEEHALC()
	{
		return ((::KPCHAJJNDPA*(*)())((::PBYTE)hIl2Cpp + KPCHAJJNDPA_BBPCBEEHALC_OFFSET))();
	}
};
