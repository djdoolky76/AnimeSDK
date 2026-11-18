#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDGGENODOBC.h"
#include "unitysdk/PAFJCMDGOGA.h"

class AEFDIGIHEMC;
class KGBFLHNJHHN;

#define ECAMIKBHACE_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D9AE000)
#define ECAMIKBHACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9ADFF0)

inline static constexpr unsigned int ECAMIKBHACE_TypeDefinitionIndex = 93470;

class ECAMIKBHACE : public ::MDGGENODOBC
{
public:
	::System::Void _ctor(::PAFJCMDGOGA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PAFJCMDGOGA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ECAMIKBHACE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::AEFDIGIHEMC* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::AEFDIGIHEMC*))((::PBYTE)hIl2Cpp + ECAMIKBHACE_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
