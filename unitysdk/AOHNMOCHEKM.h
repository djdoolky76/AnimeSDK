#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMIOHKKBDKD.h"
#include "unitysdk/System/Object.h"

#define AOHNMOCHEKM__CTOR_OFFSET UNITYSDK_OFFSET(0x185426B0)

inline static constexpr unsigned int AOHNMOCHEKM_TypeDefinitionIndex = 53901;

class AOHNMOCHEKM : public ::System::Object
{
public:
	::System::Int32 MOBNMDEDJIP; // 0x10
	::System::Boolean HNOKPKFHDEG; // 0x14
	::LMIOHKKBDKD IHDKKHACIFJ; // 0x15
	::LMIOHKKBDKD PJOJMNPJOKM; // 0x16
	::System::Boolean MIKFCDLNELI; // 0x17

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHNMOCHEKM__CTOR_OFFSET))(this);
	}
};
