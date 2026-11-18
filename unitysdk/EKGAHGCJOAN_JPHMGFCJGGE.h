#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN_GDLMDEELHDM;

#define EKGAHGCJOAN_JPHMGFCJGGE_AEHHEODBLGO_OFFSET UNITYSDK_OFFSET(0x16158C40)
#define EKGAHGCJOAN_JPHMGFCJGGE__CTOR_OFFSET UNITYSDK_OFFSET(0x16158C30)

inline static constexpr unsigned int EKGAHGCJOAN_JPHMGFCJGGE_TypeDefinitionIndex = 51218;

class EKGAHGCJOAN_JPHMGFCJGGE : public ::System::Object
{
public:
	::EKGAHGCJOAN_GDLMDEELHDM* FGBNBFHOKAA; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_JPHMGFCJGGE__CTOR_OFFSET))(this);
	}

	::System::Void AEHHEODBLGO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_JPHMGFCJGGE_AEHHEODBLGO_OFFSET))(this);
	}
};
