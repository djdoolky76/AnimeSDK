#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NHCBIIMKLBK;

#define CADMJOPHMJL_BBDOGDLGDMK_APOBMKAKFAK_OFFSET UNITYSDK_OFFSET(0x16939010)
#define CADMJOPHMJL_BBDOGDLGDMK__CTOR_OFFSET UNITYSDK_OFFSET(0x16939000)

inline static constexpr unsigned int CADMJOPHMJL_BBDOGDLGDMK_TypeDefinitionIndex = 41226;

class CADMJOPHMJL_BBDOGDLGDMK : public ::System::Object
{
public:
	::System::UInt32 FHEIMLOCHJJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMJOPHMJL_BBDOGDLGDMK__CTOR_OFFSET))(this);
	}

	::System::Boolean APOBMKAKFAK(::NHCBIIMKLBK* LILKIGNNLAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::NHCBIIMKLBK*))((::PBYTE)hIl2Cpp + CADMJOPHMJL_BBDOGDLGDMK_APOBMKAKFAK_OFFSET))(this, LILKIGNNLAJ);
	}
};
