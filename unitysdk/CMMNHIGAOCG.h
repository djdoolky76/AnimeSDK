#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCIPADHDIIN.h"

class HKPBIEFCAHP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMMNHIGAOCG_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1687DCA0)
#define CMMNHIGAOCG_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1687DC10)
#define CMMNHIGAOCG_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1687DA90)
#define CMMNHIGAOCG__CTOR_OFFSET UNITYSDK_OFFSET(0x1687DB90)

inline static constexpr unsigned int CMMNHIGAOCG_TypeDefinitionIndex = 80696;

class CMMNHIGAOCG : public ::KCIPADHDIIN
{
public:
	::System::Collections::Generic::List_1<::HKPBIEFCAHP*>* DENMLIGCEJP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMNHIGAOCG__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMNHIGAOCG_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::CMMNHIGAOCG* BBPCBEEHALC()
	{
		return ((::CMMNHIGAOCG*(*)())((::PBYTE)hIl2Cpp + CMMNHIGAOCG_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMMNHIGAOCG_ANEOCOIFDDJ_OFFSET))(this);
	}
};
