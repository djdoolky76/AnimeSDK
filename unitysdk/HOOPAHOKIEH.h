#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOOPAHOKIEH_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x16F51CA0)
#define HOOPAHOKIEH_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x16F51E20)
#define HOOPAHOKIEH__CTOR_OFFSET UNITYSDK_OFFSET(0x16F51D60)

inline static constexpr unsigned int HOOPAHOKIEH_TypeDefinitionIndex = 85713;

class HOOPAHOKIEH : public ::PKMJPMFCNBK
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* ANKBLKBMDOK; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOOPAHOKIEH__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOOPAHOKIEH_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOOPAHOKIEH_KHJELIBOECB_OFFSET))(this);
	}
};
