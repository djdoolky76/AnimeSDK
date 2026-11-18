#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EPJAODADCEA;

#define KBCFMMJKOBO_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x176EA500)
#define KBCFMMJKOBO_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x176EA570)
#define KBCFMMJKOBO_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x176EA550)
#define KBCFMMJKOBO_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0x176EA560)
#define KBCFMMJKOBO_ONDETACH_OFFSET UNITYSDK_OFFSET(0x176EA350)
#define KBCFMMJKOBO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x176EA1B0)
#define KBCFMMJKOBO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1948BAD0)
#define KBCFMMJKOBO__CTOR_OFFSET UNITYSDK_OFFSET(0x176EA4C0)

inline static constexpr unsigned int KBCFMMJKOBO_TypeDefinitionIndex = 41942;

class KBCFMMJKOBO
{
public:
	::EPJAODADCEA* LKGJLAMHLFH; // 0x28
	::MoleMole::EntityHandle KODNAKCLNPI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCFMMJKOBO__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCFMMJKOBO_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCFMMJKOBO_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCFMMJKOBO_ONDETACH_OFFSET))(this);
	}

	::System::Void AMEGHCHMIOD(::EPJAODADCEA* GMENOLPFNDF)
	{
		return ((::System::Void(*)(::PVOID, ::EPJAODADCEA*))((::PBYTE)hIl2Cpp + KBCFMMJKOBO_AMEGHCHMIOD_OFFSET))(this, GMENOLPFNDF);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCFMMJKOBO_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCFMMJKOBO_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCFMMJKOBO_ILHIIDBCNEC_OFFSET))(this);
	}
};
