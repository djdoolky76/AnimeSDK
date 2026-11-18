#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KIBNKPDNCLC_PDHBPELFMBB_PNAIKHCJNBL_OFFSET UNITYSDK_OFFSET(0x16809300)
#define KIBNKPDNCLC_PDHBPELFMBB__CTOR_OFFSET UNITYSDK_OFFSET(0x168092F0)

inline static constexpr unsigned int KIBNKPDNCLC_PDHBPELFMBB_TypeDefinitionIndex = 86601;

class KIBNKPDNCLC_PDHBPELFMBB : public ::System::Object
{
public:
	::System::Single MDPPNMIPDMP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBNKPDNCLC_PDHBPELFMBB__CTOR_OFFSET))(this);
	}

	::System::Void PNAIKHCJNBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBNKPDNCLC_PDHBPELFMBB_PNAIKHCJNBL_OFFSET))(this);
	}
};
