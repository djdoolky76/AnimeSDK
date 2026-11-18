#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/StimulusEventItem.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELHAPOMCMON_AFBHCNCIKEK_OFFSET UNITYSDK_OFFSET(0xF9DE730)
#define ELHAPOMCMON_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0xF9DE6F0)
#define ELHAPOMCMON_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0xF9DE710)
#define ELHAPOMCMON_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0xF9DE700)
#define ELHAPOMCMON_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0xF9DE720)
#define ELHAPOMCMON_ONATTACH_OFFSET UNITYSDK_OFFSET(0xF9DE570)
#define ELHAPOMCMON_ONDETACH_OFFSET UNITYSDK_OFFSET(0xF9DE5B0)
#define ELHAPOMCMON_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xF9DE630)
#define ELHAPOMCMON_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF9DE5F0)
#define ELHAPOMCMON_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xF9DE670)
#define ELHAPOMCMON__CTOR_OFFSET UNITYSDK_OFFSET(0xF9DE6B0)

inline static constexpr unsigned int ELHAPOMCMON_TypeDefinitionIndex = 60011;

class ELHAPOMCMON
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::StimulusEventItem>* BKCAAAOMHCP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHAPOMCMON__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHAPOMCMON_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHAPOMCMON_ONDETACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHAPOMCMON_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHAPOMCMON_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHAPOMCMON_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHAPOMCMON_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHAPOMCMON_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHAPOMCMON_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHAPOMCMON_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Void AFBHCNCIKEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHAPOMCMON_AFBHCNCIKEK_OFFSET))(this);
	}
};
