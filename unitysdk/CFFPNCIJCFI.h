#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBBBDKEFKCB.h"
#include "unitysdk/FEAPCJOEPNC.h"

class FAHABEOMOEP;
class KGBFLHNJHHN;

#define CFFPNCIJCFI_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E2E3620)
#define CFFPNCIJCFI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E3610)

inline static constexpr unsigned int CFFPNCIJCFI_TypeDefinitionIndex = 94111;

class CFFPNCIJCFI : public ::CBBBDKEFKCB
{
public:
	::System::Void _ctor(::FEAPCJOEPNC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FEAPCJOEPNC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CFFPNCIJCFI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::FAHABEOMOEP* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::FAHABEOMOEP*))((::PBYTE)hIl2Cpp + CFFPNCIJCFI_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
