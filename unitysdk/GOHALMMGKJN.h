#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define GOHALMMGKJN_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x149F0860)
#define GOHALMMGKJN_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x149F0A50)
#define GOHALMMGKJN__CTOR_OFFSET UNITYSDK_OFFSET(0x149F0960)

inline static constexpr unsigned int GOHALMMGKJN_TypeDefinitionIndex = 42772;

class GOHALMMGKJN : public ::PKMJPMFCNBK
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* GIHMFJNLEDP; // 0x80
	::System::Collections::Generic::List_1<::System::Int32>* ANKBLKBMDOK; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHALMMGKJN__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHALMMGKJN_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHALMMGKJN_KHJELIBOECB_OFFSET))(this);
	}
};
