#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHLCELEEEFA.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define IDNIBACDCBH_LNEBKDAEOGC_OFFSET UNITYSDK_OFFSET(0xF839300)
#define IDNIBACDCBH__CTOR_OFFSET UNITYSDK_OFFSET(0xF8390E0)

inline static constexpr unsigned int IDNIBACDCBH_TypeDefinitionIndex = 44116;

class IDNIBACDCBH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::BHLCELEEEFA>* AIDBGLAHGHM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNIBACDCBH__CTOR_OFFSET))(this);
	}

	::System::Void LNEBKDAEOGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDNIBACDCBH_LNEBKDAEOGC_OFFSET))(this);
	}
};
