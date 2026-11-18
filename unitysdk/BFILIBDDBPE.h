#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICBHCFJLNF.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFILIBDDBPE_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x18230AB0)
#define BFILIBDDBPE_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x18230A20)
#define BFILIBDDBPE_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x182308C0)
#define BFILIBDDBPE__CTOR_OFFSET UNITYSDK_OFFSET(0x182309C0)

inline static constexpr unsigned int BFILIBDDBPE_TypeDefinitionIndex = 79990;

class BFILIBDDBPE : public ::LICBHCFJLNF
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* GMIKICBOJCM; // 0x10
	::System::UInt32 IFPCGBJDKCH; // 0x18
	::System::UInt32 MNAIIBHLHMA; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFILIBDDBPE__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFILIBDDBPE_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::BFILIBDDBPE* BBPCBEEHALC()
	{
		return ((::BFILIBDDBPE*(*)())((::PBYTE)hIl2Cpp + BFILIBDDBPE_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFILIBDDBPE_ANEOCOIFDDJ_OFFSET))(this);
	}
};
