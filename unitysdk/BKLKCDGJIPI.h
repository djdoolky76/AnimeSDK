#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKLKCDGJIPI_AFBHCNCIKEK_OFFSET UNITYSDK_OFFSET(0xF7A1B60)
#define BKLKCDGJIPI_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0xF7A1B50)
#define BKLKCDGJIPI_JAPLDGIIKHF_OFFSET UNITYSDK_OFFSET(0xF7A1B40)
#define BKLKCDGJIPI_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0xF7A1B30)
#define BKLKCDGJIPI_ONATTACH_OFFSET UNITYSDK_OFFSET(0xF7A1670)
#define BKLKCDGJIPI_ONDETACH_OFFSET UNITYSDK_OFFSET(0xF7A19D0)
#define BKLKCDGJIPI_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xF7A1AA0)
#define BKLKCDGJIPI__CTOR_OFFSET UNITYSDK_OFFSET(0xF7A1AF0)

inline static constexpr unsigned int BKLKCDGJIPI_TypeDefinitionIndex = 43298;

class BKLKCDGJIPI
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* MPHAJMDNLHM; // 0x28
	::System::Boolean JIABOGPBIBB; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 ANCDHGFIFHO; // 0x34
	::System::Int32 EMIMKGOEAJB; // 0x38
	::System::Int32 DOLDFEPLNMM; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLKCDGJIPI__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLKCDGJIPI_ONATTACH_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLKCDGJIPI_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLKCDGJIPI_ONRECYCLE_OFFSET))(this);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLKCDGJIPI_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Int32 JAPLDGIIKHF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLKCDGJIPI_JAPLDGIIKHF_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLKCDGJIPI_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void AFBHCNCIKEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLKCDGJIPI_AFBHCNCIKEK_OFFSET))(this);
	}
};
