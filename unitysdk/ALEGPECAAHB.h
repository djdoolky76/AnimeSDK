#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define ALEGPECAAHB_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x11BAF040)
#define ALEGPECAAHB_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x11BAF030)
#define ALEGPECAAHB_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x11BAF050)
#define ALEGPECAAHB_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11BAEE10)
#define ALEGPECAAHB_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11BAEC80)
#define ALEGPECAAHB_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x11BAEFA0)
#define ALEGPECAAHB__CTOR_OFFSET UNITYSDK_OFFSET(0x11BAEFF0)

inline static constexpr unsigned int ALEGPECAAHB_TypeDefinitionIndex = 88399;

class ALEGPECAAHB
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* FFKCDMHACPD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEGPECAAHB__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEGPECAAHB_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEGPECAAHB_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEGPECAAHB_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEGPECAAHB_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEGPECAAHB_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEGPECAAHB_KDOIBCBFBAG_OFFSET))(this);
	}
};
