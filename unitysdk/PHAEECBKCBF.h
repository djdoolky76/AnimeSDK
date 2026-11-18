#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PHAEECBKCBF_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1949FD60)
#define PHAEECBKCBF_IIBFEOIPDHM_OFFSET UNITYSDK_OFFSET(0x1949FD50)
#define PHAEECBKCBF_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x1949FD70)
#define PHAEECBKCBF_ONDETACH_OFFSET UNITYSDK_OFFSET(0x1949FB70)
#define PHAEECBKCBF_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1949FB00)
#define PHAEECBKCBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1949FCC0)

inline static constexpr unsigned int PHAEECBKCBF_TypeDefinitionIndex = 73827;

class PHAEECBKCBF
{
public:
	::System::Collections::Generic::List_1<::System::IDisposable*>* BAKMOAKCFOJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAEECBKCBF__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAEECBKCBF_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAEECBKCBF_ONDETACH_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::IDisposable*>* IIBFEOIPDHM()
	{
		return ((::System::Collections::Generic::List_1<::System::IDisposable*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAEECBKCBF_IIBFEOIPDHM_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAEECBKCBF_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAEECBKCBF_LIBFEFEJOCF_OFFSET))(this);
	}
};
