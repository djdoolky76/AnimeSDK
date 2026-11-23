#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AB642D1382756991;

#define ADDB992B945EF445_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x23E73D0)
#define ADDB992B945EF445__CTOR_OFFSET UNITYSDK_OFFSET(0x1778980)

inline static constexpr unsigned int ADDB992B945EF445_TypeDefinitionIndex = 3906;

class ADDB992B945EF445 : public ::System::Object
{
public:
	::AB642D1382756991* AE5A52FF1AC7B3BE; // 0x10

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDB992B945EF445_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void _ctor(::AB642D1382756991* EEF688477002B28B)
	{
		return ((::System::Void(*)(::PVOID, ::AB642D1382756991*))((::PBYTE)hIl2Cpp + ADDB992B945EF445__CTOR_OFFSET))(this, EEF688477002B28B);
	}
};
