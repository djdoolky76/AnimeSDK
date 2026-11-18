#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define HFMMBDLLHFN_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x15B48280)
#define HFMMBDLLHFN_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x15B48400)
#define HFMMBDLLHFN__CTOR_OFFSET UNITYSDK_OFFSET(0x15B48340)

inline static constexpr unsigned int HFMMBDLLHFN_TypeDefinitionIndex = 45313;

class HFMMBDLLHFN : public ::PKMJPMFCNBK
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* ANKBLKBMDOK; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMMBDLLHFN__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMMBDLLHFN_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMMBDLLHFN_KHJELIBOECB_OFFSET))(this);
	}
};
