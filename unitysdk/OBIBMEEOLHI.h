#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OBIBMEEOLHI_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0xFD61120)
#define OBIBMEEOLHI_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0xFD61110)
#define OBIBMEEOLHI_ONENABLE_OFFSET UNITYSDK_OFFSET(0xFD60B60)
#define OBIBMEEOLHI_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xFD60F50)
#define OBIBMEEOLHI__CTOR_OFFSET UNITYSDK_OFFSET(0xFD60FF0)

inline static constexpr unsigned int OBIBMEEOLHI_TypeDefinitionIndex = 88280;

class OBIBMEEOLHI
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* LKCDLDMJLPH; // 0x38
	::System::Int32 JBMMGBOMDCO; // 0x40
	::System::Int32 NFACFCMFNEC; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIBMEEOLHI__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIBMEEOLHI_ONENABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIBMEEOLHI_ONRECYCLE_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIBMEEOLHI_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBIBMEEOLHI_ANEOCOIFDDJ_OFFSET))(this);
	}
};
