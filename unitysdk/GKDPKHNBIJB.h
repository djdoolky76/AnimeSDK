#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLEFLDCEAEN.h"
#include "unitysdk/PKMJPMFCNBK.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define GKDPKHNBIJB_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x10EFDDD0)
#define GKDPKHNBIJB_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x10EFDF50)
#define GKDPKHNBIJB__CTOR_OFFSET UNITYSDK_OFFSET(0x10EFDE90)

inline static constexpr unsigned int GKDPKHNBIJB_TypeDefinitionIndex = 57554;

class GKDPKHNBIJB : public ::PKMJPMFCNBK
{
public:
	::System::Collections::Generic::List_1<::BLEFLDCEAEN>* JJDHBNGGIPA; // 0x80
	::System::Single GKLMJJFOCFA; // 0x88
	::System::Single PPGCKFAFLBF; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDPKHNBIJB__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDPKHNBIJB_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDPKHNBIJB_KHJELIBOECB_OFFSET))(this);
	}
};
